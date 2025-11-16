<!-- image -->

www.ti.com

## 3.1 ARM Cortex-A8 MPU Subsystem

The Microprocessor Unit (MPU) subsystem of the device handles transactions between the ARM core (ARM® Cortex™-A8 Processor), the L3 interconnect, and the interrupt controller (INTC). The MPU subsystem is a hard macro that integrates the ARM® Cortex™-A8 Processor with additional logic for protocol conversion, emulation, interrupt handling, and debug enhancements.

Cortex™-A8 is an ARMv7 compatible, dual-issue, in-order execution engine with integrated L1 and L2 caches with NEON™ SIMD Media Processing Unit.

An Interrupt Controller is included in the MPU subsystem to handle host interrupt requests in the system.

The MPU subsystem includes CoreSight compliant logic to allow the Debug Sub-system access to the CortexA8 debug and emulation resources, including the Embedded Trace Macrocell.

The MPU subsystem has three functional clock domains, including a high-frequency clock domain used by the Cortex™-A8. The high-frequency domain is isolated from the rest of the system by asynchronous bridges.

Figure 3-1 shows the high-level block diagram of the MPU subsystem.

Figure 3-1. Microprocessor Unit (MPU) Subsystem

<!-- image -->