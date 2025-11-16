<!-- image -->

www.ti.com

## 6.1.2 Register Protection

If the MPU\_INTC.INTC\_PROTECTION[0] PROTECTION bit is set, access to the INTC registers is restricted to privileged mode. Access to the MPU\_INTC.INTC\_PROTECTION register is always restricted to privileged mode. For more information, see Section 6.6.1.7, INTC\_PROTECTION Register (offset = 4Ch) [reset = 0h] .

## 6.1.3 Module Power Saving

The INTC provides an auto-idle function in its three clock domains:

- Interface clock
- Functional clock
- Synchronizer clock

The interface clock auto-idle power-saving mode is enabled if the MPU\_INTC.INTC\_SYSCONFIG[0] AUTOIDLE bit is set to 1. When this mode is enabled and there is no activity on the bus interface, the interface clock is disabled internally to the module, thus reducing power consumption. When there is new activity on the bus interface, the interface clock restarts without any latency penalty. After reset, this mode is disabled, by default. The functional clock auto-idle power-saving mode is enabled if the MPU\_INTC.INTC\_IDLE[0] FUNCIDLE bit is set to 0. When this mode is enabled and there is no active interrupt (IRQ or FIQ interrupt being processed or generated) or no pending incoming interrupt, the functional clock is disabled internally to the module, thus reducing power consumption.

When a new unmasked incoming interrupt is detected, the functional clock restarts and the INTC processes the interrupt. If this mode is disabled, the interrupt latency is reduced by one cycle. After reset, this mode is enabled, by default. The synchronizer clock allows external asynchronous interrupts to be resynchronized before they are masked. The synchronizer input clock has an auto-idle power-saving mode enabled if the MPU\_INTC.INTC\_IDLE[1] TURBO bit is set to 1. If the auto-idle mode is enabled, the standby power is reduced, but the IRQ or FIQ interrupt latency increases from four to six functional clock cycles. This feature can be enabled dynamically according to the requirements of the device. After reset, this mode is disabled, by default.

## 6.1.4 Error Handling

The following accesses will cause an error:

- Privilege violation (attempt to access PROTECTION register in user mode or any register in user mode if Protection bit is set)
- Unsupported commands

The following accesses will not cause any error response:

- Access to a non-decoded address
- Write to a read-only register

## 6.1.5 Interrupt Handling

The IRQ/FIQ interrupt generation takes four INTC functional clock cycles (plus or minus one cycle) if the MPU\_INTC.INTC\_IDLE[1] TURBO bit is set to 0. If the TURBO bit is set to 1, the interrupt generation takes six cycles, but power consumption is reduced while waiting for an interrupt. These latencies can be reduced by one cycle by disabling functional clock auto-idle (MPU\_INTC.INTC\_IDLE[0] FUNCIDLE bit set to 1), but power consumption is increased, so the benefit is minimal.

To minimize interrupt latency when an unmasked interrupt occurs, the IRQ or FIQ interrupt is generated before priority sorting completion. The priority sorting takes 10 functional clock cycles, which is less than the minimum number of cycles required for the MPU to switch to the interrupt context after reception of the IRQ or FIQ event.

Any read of the MPU\_INTC.INTC\_SIR\_IRQ or MPU\_INTC.INTC\_SIR\_FIQ register during the priority sorting process stalls until priority sorting is complete and the relevant register is updated. However, the delay between the interrupt request being generated and the interrupt service routine being executed is such that priority sorting always completes before the MPU\_INTC.INTC\_SIR\_IRQ or MPU\_INTC.INTC\_SIR\_FIQ register is read.