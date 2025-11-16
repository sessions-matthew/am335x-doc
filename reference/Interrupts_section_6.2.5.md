## 6.2.4 Interrupt Preemption

If wanting to enable pre-emption by higher priority interrupts, the ISR should read the active interrupt priority and write it to the priority threshold register. Writing a '1' to the appropriate NEW\_IRQ\_AGR or NEW\_FIQ\_AGR bits of the CONTROL register while still processing the interrupt will now allow only higher priority interrupts to pre-empt.

For each level of pre-emption, the programmer must save the threshold value before modifying it and restore it at the end of that ISR level.

The priority threshold mechanism is enabled automatically when writing a priority in the range of 0 to 7Fh as will be read from the IRQ\_PRIORITY and FIQ\_PRIORITY registers. Writing a value of FFh (reset default) disables the priority threshold mechanism.

When the hardware priority threshold is in use the priorities of interrupts selected as FIQ or IRQ become linked, otherwise they are independent. When linked, it is required that all FIQ priorities be set higher than all IRQ priorities to maintain the relative priority of FIQ over IRQ.

When handling FIQs using the priority threshold mechanism, it is required to write both New FIQ Agreement and New IRQ Agreement bits at the same time to cover the case that the new priority threshold is applied while an IRQ sorting is in progress. This IRQ will not have been seen by the ARM as it will have been masked on entry to the FIQ ISR. However, the source of the IRQ will remain active and it will be finally processed when the priority threshold falls to a low enough priority. The precaution of writing to New FIQ Agreement (as well as New IRQ Agreement) is not required during an IRQ ISR as FIQ sorting will not be affected (provided all FIQ priorities are higher than all IRQ priorities).

## 6.2.5 ARM A8 INTC Spurious Interrupt Handling

The spurious flag indicates whether the result of the sorting (a window of 10 INTC functional clock cycles after the interrupt assertion) is invalid. The sorting is invalid if:

- The interrupt that triggered the sorting is no longer active during the sorting.
- A change in the mask has affected the result during the sorting time.

As a result, the values in the INTC\_MIRn, INTC\_ILRm, or INTC\_MIR\_SETn registers must not be changed while the corresponding interrupt is asserted. Only the active interrupt input that triggered the sort can be masked before it turn on the sort. If these registers are changed within the 10-cycle window after the interrupt assertion. The resulting values of the following registers become invalid:

- INTC\_SIR\_IRQ
- INTC\_SIR\_FIQ
- INTC\_IRQ\_PRIORITY
- INTC\_FIQ\_PRIORITY

This condition is detected for both IRQ and FIQ, and the invalid status is flagged across the SPURIOUSIRQFLAG (see NOTE 1) and SPURIOUSFIQFLAG (see NOTE 2) bit fields in the SIR and PRIORITY registers. A 0 indicates valid and a 1 indicates invalid interrupt number and priority. The invalid indication can be tested in software as a false register value.

## NOTE:

1. The INTC\_SIR\_IRQ[31:7] SPURIOUSIRQFLAG bit field is a copy of the INTC\_IRQ\_PRIORITY[31:7] SPURIOUSIRQFLAG bit field.
2. The INTC\_SIR\_FIQ[31:7] SPURIOUSFIQFLAG bit field is a copy of the INTC\_FIQ\_PRIORITY[31:7] SPURIOUSFIQFLAG bit field.

<!-- image -->