## 6.1.1 Interrupt Processing

## 6.1.1.1 Input Selection

The INTC supports only level-sensitive incoming interrupt detection. A peripheral asserting an interrupt maintains it until software has handled the interrupt and instructed the peripheral to deassert the interrupt. A software interrupt is generated if the corresponding bit in the MPU\_INTC.INTC\_ISR\_SETn register is set (register bank number: n = [0,1,2,3] for the MPU subsystem INTC, 128 incoming interrupt lines are supported). The software interrupt clears when the corresponding bit in the MPU\_INTC.INTC\_ISR\_CLEARn register is written. Typical use of this feature is software debugging.

## 6.1.1.2 Masking

## 6.1.1.2.1 Individual Masking

Detection of interrupts on each incoming interrupt line can be enabled or disabled independently by the MPU\_INTC.INTC\_MIRn interrupt mask register. In response to an unmasked incoming interrupt, the INTC can generate one of two types of interrupt requests to the processor:

- IRQ: low-priority interrupt request
- FIQ: fast interrupt request (Not available on General Purpose (GP) devices)

The type of interrupt request is determined by the MPU\_INTC.INTC\_ILRm[0] FIQNIRQ bit (m= [0,127]). The current incoming interrupt status before masking is readable from the MPU\_INTC.INTC\_ITRn register. After masking and IRQ/FIQ selection, and before priority sorting is done, the interrupt status is readable from the MPU\_INTC.INTC\_PENDING\_IRQn and MPU\_INTC.INTC\_PENDING\_FIQn registers.

## 6.1.1.2.2 Priority Masking

To enable faster processing of high-priority interrupts, a programmable priority masking threshold is provided (the MPU\_INTC.INTC\_THRESHOLD[7:0] PRIORITYTHRESHOLD field). This priority threshold allows preemption by higher priority interrupts; all interrupts of lower or equal priority than the threshold are masked. However, priority 0 can never be masked by this threshold; a priority threshold of 0 is treated the same way as priority 1. PRIORITY and PRIORITYTHRESHOLD fields values can be set between 0x0 and 0x7F; 0x0 is the highest priority and 0x7F is the lowest priority. When priority masking is not necessary, a priority threshold value of 0xFF disables the priority threshold mechanism. This value is also the reset default for backward compatibility with previous versions of the INTC.

## 6.1.1.3 Priority Sorting

A priority level (0 being the highest) is assigned to each incoming interrupt line. Both the priority level and the interrupt request type are configured by the MPU\_INTC.INTC\_ILRm register. If more than one incoming interrupt with the same priority level and interrupt request type occur simultaneously, the highestnumbered interrupt is serviced first. When one or more unmasked incoming interrupts are detected, the INTC separates between IRQ and FIQ using the corresponding MPU\_INTC.INTC\_ILRm[0] FIQNIRQ bit.

The result is placed in INTC\_PENDING\_IRQn or INTC\_PENDING\_FIQn If no other interrupts are currently being processed, INTC asserts IRQ/FIQ and starts the priority computation. Priority sorting for IRQ and FIQ can execute in parallel. Each IRQ/FIQ priority sorter determines the highest priority interrupt number and that number is placed in the corresponding MPU\_INTC.INTC\_SIR\_IRQ[6:0] ACTIVEIRQ field or MPU\_INTC.INTC\_SIR\_FIQ[6:0] ACTIVEFIQ field. The value is preserved until the corresponding MPU\_INTC.INTC\_CONTROL NEWIRQAGR or NEWFIQAGR bit is set. Once the interrupting peripheral device has been serviced and the incoming interrupt deasserted, the user must write to the appropriate NEWIRQAGR or NEWFIQAGR bit to indicate to the INTC the interrupt has been handled. If there are any pending unmasked incoming interrupts for this interrupt request type, the INTC restarts the appropriate priority sorter; otherwise, the IRQ or FIQ interrupt line is deasserted.

<!-- image -->