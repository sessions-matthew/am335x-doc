## 6.2.3 INTC Preemptive Processing Sequence

Preemptive interrupts, also called nested interrupts, can reduce the latencies for higher priority interrupts. A preemptive ISR can be suspended by a higher priority interrupt. Thus, the higher priority interrupt can be served immediately. Nested interrupts must be used carefully to avoid using corrupted data. Programmers must save corruptible registers and enable IRQ or FIQ at ARM side. IRQ and FIQ processing sequences are quite similar, the differences for the FIQ sequence are shown after a '/' character in the code below.

To enable IRQ/FIQ preemption by higher priority IRQs/FIQs, programers can follow this procedure to write the ISR.

At the beginning of an IRQ/FIQ ISR:

1. Save the ARM critical context registers.
2. Save the INTC\_THRESHOLD PRIORITYTHRESHOLD field before modifying it.
3. Read the active interrupt priority in the INTC\_IRQ\_PRIORITY IRQPRIORITY/INTC\_FIQ\_PRIORITY FIQPRIORITY field and write it to the PRIORITYTHRESHOLD(1) field.
4. Read the active interrupt number in the INTC\_SIR\_IRQ[6:0] ACTIVEIRQ/INTC\_SIR\_FIQ[6:0] ACTIVEFIQ field to identify the interrupt source.
5. Write 1 to the appropriate INTC\_CONTROL NEWIRQAGR and (2) NEWFIQAGR bit while an interrupt is still processing to allow only higher priority interrupts to preempt.
6. Because the writes are posted on an Interconnect bus, to be sure that the preceding writes are done before enabling IRQs/FIQs, a Data Synchronization Barrier is used. This operation ensure that the IRQ line is de-asserted before IRQ/FIQ enabling.
7. Enable IRQ/FIQ at ARM side.
8. Jump to the relevant subroutine handler.

<!-- image -->

<!-- image -->

www.ti.com

The following sample code shows the previous steps:

## CAUTION

The following code is an assembly code compatible with ARM architecture V6 and V7. This code is developed for the Texas Instruments Code Composer Studio tool set. It is a draft version, only tested on an emulated environment.

```
; bit field mask to get only the bit field ACTIVEPRIO_MASK .equ 0x7F _IRQ_ISR: ; Step 1 : Save the critical context STMFD SP!, {R0-R12, LR} ; Save working registers MRS R11, SPSR ; Save the SPSR into R11 ; Step 2 : Save the INTC_THRESHOLD register into R12 LDR R0, INTC_THRESHOLD_ADDR LDR R12, [R0] (1) The prioritythreshold mechanism is enabled automatically when writing a priority in the range of 0x00 to 0x3F. Writing a value of 0xFF (reset default) disables the prioritythreshold mechanism. Values between 0x3F and 0xFF must not be used. When the hardwarepriority threshold is in use, the priorities of interrupts selected as FIQ or IRQ become linked otherwise, they are independent. When they are linked, all FIQ priorities must be set higher than all IRQ priorities to maintain the relative priority of FIQ over IRQ. (2) When handling FIQs using the prioritythreshold mechanism, both NEWFIQAGR and NEWIRQAGR bits must be written at the same time to ensure that the new priority threshold is applied while an IRQ sort is in progress. This IRQ will not have been seen by the ARM, as it will have been masked on entry to the FIQ ISR. However, the source of the IRQ remains active and it is finally processed when the priority threshold falls to a priority sufficiently low to allow it to be processed. The precaution of writing to New FIQ Agreement is not required during an IRQ ISR, as FIQ sorting is not affected (provided all FIQ priorities are higher than all IRQ priorities). ; Step 3 : Get the priority of the highest priority active IRQ LDR R1, INTC_IRQ_PRIORITY_ADDR/INTC_FIQ_PRIORITY_ADDR LDR R1, [R1] ; Get the INTC_IRQ_PRIORITY/INTC_FIQ_PRIORITY register AND R1, R1, #ACTIVEPRIO_MASK ; Apply the mask to get the priority of the IRQ STR R1, [R0] ; Write it to the INTC_THRESHOLD register ; Step 4 : Get the number of the highest priority active IRQ LDR R10, INTC_SIR_IRQ_ADDR/INTC_SIR_FIQ_ADDR LDR R10, [R10] ; Get the INTC_SIR_IRQ/INTC_SIR_FIQ register AND R10, R10, #ACTIVEIRQ_MASK ; Apply the mask to get the active IRQ number ; Step 5 : Allow new IRQs and FIQs at INTC side MOV R0, #0x1/0x3 ; Get the NEWIRQAGR and NEWFIQAGR bit position LDR R1, INTC_CONTROL_ADDR STR R0, [R1] ; Write the NEWIRQAGR and NEWFIQAGR bit ; Step 6 : Data Synchronization Barrier MOV R0, #0 MCR P15, #0, R0, C7, C10, #4 ; Step 7 : Read-modify-write the CPSR to enable IRQs/FIQs at ARM side MRS R0, CPSR ; Read the status register BIC R0, R0, #0x80/0x40 ; Clear the I/F bit MSR CPSR, R0 ; Write it back to enable IRQs ; Step 8 : Jump to relevant subroutine handler LDR PC, [PC, R10, lsl #2] ; PC base address points this instruction + 8 NOP ; To index the table by the PC ; Table of handler start addresses .word IRQ0handler ;IRQ0 BANK0 .word IRQ1handler .word IRQ2handler
```

After the return of the relevant IRQ/FIQ subroutine handle:

1. Disable IRQs/FIQs at ARM side.
2. Restore the INTC\_THRESHOLD PRIORITYTHRESHOLD field.
3. Restore the ARM critical context registers.

The following sample code shows the three previous steps:

## CAUTION

The following code is an assembly code compatible with ARM architecture V6 and V7. This code is developed for the Texas Instruments Code Composer Studio tool set. It is a draft version, only tested on an emulated environment.

```
IRQ_ISR_end: ; Step 1 : Read-modify-write the CPSR to disable IRQs/FIQs at ARM side MRS R0, CPSR ; Read the CPSR ORR R0, R0, #0x80/0x40 ; Set the I/F bit MSR CPSR, R0 ; Write it back to disable IRQs ; Step 2 : Restore the INTC_THRESHOLD register from R12 LDR R0, INTC_THRESHOLD_ADDR STR R12, [R0] ; Step 3 : Restore critical context MSR SPSR, R11 ; Restore the SPSR from R11 LDMFD SP!, {R0-R12, LR} ; Restore working registers and Link register ; Return after handling the interrupt SUBS PC, LR, #4
```

Figure 6-3 shows the nested IRQ/FIQ processing sequence from the originating device peripheral module to the main program interruption.

<!-- image -->

<!-- image -->

www.ti.com

<!-- image -->