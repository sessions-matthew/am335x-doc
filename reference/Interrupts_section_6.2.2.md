## 6.2 Basic Programming Model

## 6.2.1 Initialization Sequence

1. Program the MPU\_INTC.INTC\_SYSCONFIG register: If necessary, enable the interface clock autogating by setting the AUTOIDLE bit.
2. Program the MPU\_INTC.INTC\_IDLE register: If necessary, disable functional clock autogating or enable synchronizer autogating by setting the FUNCIDLE bit or TURBO bit accordingly.
3. Program the MPU\_INTC.INTC\_ILRm register for each interrupt line: Assign a priority level and set the FIQNIRQ bit for an FIQ interrupt (by default, interrupts are mapped to IRQ and priority is 0x0 [highest]).
4. Program the MPU\_INTC.INTC\_MIRn register: Enable interrupts (by default, all interrupt lines are masked). NOTE: To program the MPU\_INTC.INTC\_MIRn register, the MPU\_INTC.INTC\_MIR\_SETn and MPU\_INTC.INTC\_MIR\_CLEARn registers are provided to facilitate the masking, even if it is possible for backward-compatibility to write directly to the MPU\_INTC.INTC\_MIRn register.

## 6.2.2 INTC Processing Sequence

After the INTC\_MIRn and INTC\_ILRm registers are configured to enable and assign priorities to incoming interrupts, the interrupt is processed as explained in the following subsections. IRQ and FIQ processing sequences are quite similar, the differences for the FIQ sequence are shown after a '/' character in the code below.

1. One or more unmasked incoming interrupts (M\_IRQ\_n signals) are received and IRQ or FIQ outputs (IRQ/FIQ) are not currently asserted.
2. If the INTC\_ILRm[0] FIQNIRQ bit is cleared to 0, the MPU\_INTC\_IRQ output signal is generated. If the FIQNIRQ bit is set to 1, the MPU\_INTC\_FIQ output signal is generated.
3. The INTC performs the priority sorting and updates the INTC\_SIR\_IRQ[6:0] ACTIVEIRQ /INTC\_SIR\_FIQ[6:0] ACTIVEFIQ field with the current interrupt number.
4. During priority sorting, if the IRQ/FIQ is enabled at the host processor side, the host processor automatically saves the current context and executes the ISR as follows.

The ARM host processor automatically performs the following actions in pseudo code:

```
LR = PC + 4 /* return link */ SPSR = CPSR /* Save CPSR before execution */ CPSR[5] = 0 /* Execute in ARM state */ CPSR[7] = 1 /* Disable IRQ */ CPSR[8] = 1 /* Disable Imprecise Data Aborts */ CPSR[9] = CP15_reg1_EEbit /* Endianness on exception entry */ if interrupt == IRQ then CPSR[4:0] = 0b10010 /* Enter IRQ mode */ if high vectors configured then PC = 0xFFFF0018 else PC = 0x00000018 /* execute interrupt vector */ else if interrupt == FIQ then CPSR[4:0] = 0b10001 /* Enter FIQ mode */ CPSR[6] = 1 /* Disable FIQ */ if high vectors configured then PC = 0xFFFF001C else PC = 0x0000001C /* execute interrupt vector */ endif
```

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

5. The ISR saves the remaining context, identifies the interrupt source by reading the ACTIVEIRQ/ACTIVEFIQ field, and jumps to the relevant subroutine handler as follows:

## CAUTION

The code in steps 5 and 7 is an assembly code compatible with ARM architecture V6 and V7. This code is developed for the Texas Instruments Code Composer Studio tool set. It is a draft version, only tested on an emulated environment.

```
;INTC_SIR_IRQ/INTC_SIR_FIQ register address INTC_SIR_IRQ_ADDR/INTC_SIR_FIQ_ADDR .word 0x48200040/0x48200044 ; ACTIVEIRQ bit field mask to get only the bit field ACTIVEIRQ_MASK .equ 0x7F _IRQ_ISR/_FIQ_ISR: ; Save the critical context STMFD SP!, {R0-R12, LR} ; Save working registers and the Link register MRS R11, SPSR ; Save the SPSR into R11 ; Get the number of the highest priority active IRQ/FIQ LDR R10, INTC_SIR_IRQ_ADDR/INTC_SIR_FIQ_ADDR LDR R10, [R10] ; Get the INTC_SIR_IRQ/INTC_SIR_FIQ register AND R10, R10, #ACTIVEIRQ_MASK ; Apply the mask to get the active IRQ number ; Jump to relevant subroutine handler LDR PC, [PC, R10, lsl #2] ; PC base address points this instruction + 8 NOP ; To index the table by the PC ; Table of handler start addresses .word IRQ0handler ;For IRQ0 of BANK0 .word IRQ1handler .word IRQ2handler
```

6. The subroutine handler executes code specific to the peripheral generating the interrupt by handling the event and deasserting the interrupt condition at the peripheral side.

```
; IRQ0 subroutine IRQ0handler: ; Save working registers STMFD SP!, {R0-R1} ; Now read-modify-write the peripheral module status register ; to de-assert the M_IRQ_0 interrupt signal ; De-Assert the peripheral interrupt MOV R0, #0x7 ; Mask for 3 flags LDR R1, MODULE0_STATUS_REG_ADDR ; Get the address of the module Status Register STR R0, [R1] ; Clear the 3 flags ; Restore working registers LDMFD SP!, {R0-R1} ; Jump to the end part of the ISR B IRQ_ISR_end/FIQ_ISR_end
```

<!-- image -->

7. After the return of the subroutine, the ISR sets the NEWIRQAGR/NEWFIQAGR bit to enable the processing of subsequent pending IRQs/FIQs and to restore ARM context in the following code. Because the writes are posted on an Interconnect bus, to be sure that the preceding writes are done before enabling IRQs/FIQs, a Data Synchronization Barrier is used. This operation ensure that the IRQ/FIQ line is de-asserted before IRQ/FIQ enabling. After that, the INTC processes any other pending interrupts or deasserts the IRQ/FIQ signal if there is no interrupt.
8. After the ISR return, the ARM automatically restores its context as follows:

```
; INTC_CONTROL register address INTC_CONTROL_ADDR .word 0x48200048; NEWIRQAGR/NEWFIQAGR bit mask to set only the NEWIRQAGR/NEWFIQAGR bit NEWIRQAGR_MASK/NEWFIQAGR_MASK .equ 0x01/0x02 IRQ_ISR_end/FIQ_ISR_end: ; Allow new IRQs/FIQs at INTC side ; The INTC_CONTROL register is a write only register so no need to write back others bits MOV R0, #NEWIRQAGR_MASK/NEWFIQAGR_MASK ; Get the NEWIRQAGR/NEWFIQAGR bit position LDR R1, INTC_CONTROL_ADDR STR R0, [R1] ; Write the NEWIRQAGR/NEWFIQAGR bit to allow new IRQs/FIQ ; Data Synchronization Barrier MOV R0, #0 MCR P15, #0, R0, C7, C10, #4 ; restore critical context MSR SPSR, R11 ; Restore the SPSR from R11 LDMFD SP!, {R0-R12, LR} ; Restore working registers and Link register ; Return after handling the interrupt SUBS PC, LR, #4
```

```
CPSR = SPSR PC = LR
```

Figure 6-2 shows the IRQ/FIQ processing sequence from the originating device peripheral module to the main program interruption.

The priority sorting mechanism is frozen during an interrupt processing sequence. If an interrupt condition occurs during this time, the interrupt is not lost. It is sorted when the NEWIRQAGR/NEWFIQAGR bit is set (priority sorting is reactivated).

<!-- image -->

www.ti.com

<!-- image -->