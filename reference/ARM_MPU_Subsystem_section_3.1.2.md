## 3.1.1 Features

This section outlines the key features of the MPU subsystem:

- ARM Microprocessor
- -Cortex-A8
- -ARM Architecture version 7 ISA.
- -2-issue, in-order execution pipeline.
- -L1 Instruction and Data Cache of 32KB, 4-way, 16-word line with 128-bit interface.
- -Integrated L2 cache of 256 KB, 8-way, 16 word line, 128 bit interface to L1 along with ECC/Parity supported.
- -Includes the Neon Media coprocessor (NEON™) which implements the Advanced SIMD media processing architecture.
- -Includes the VFP coprocessor which implements the VFPv3 architecture and is fully compliant with IEEE 754 standard.
- -The external interface uses the AXI protocol configured to 128-bit data width.
- -Includes the Embedded Trace Macrocell (ETM) support for non-invasive debugging.
- -Implements the ARMv7 debug with watch-point and breakpoint registers and 32-bit Advanced Peripheral Bus (APB) slave interface to CoreSight debug systems.
- AXI2OCP Bridge
- -Support OCP 2.2.
- -Single Request Multiple Data Protocol on two ports.
- -Multiple targets, including three OCP ports (128-bit, 64-bit and 32-bit).
- Interrupt Controller
- -Support up to 128 interrupt requests
- Emulation/Debug
- -Compatible with CoreSight Architecture.
- Clock Generation
- -Through PRCM

## 3.1.2 MPU Subsystem Integration

The MPU subsystem integrates the following group of submodules:

ARM® Cortex®-A8 Processor: Provides a high processing capability, including the NEON technology for mobile multimedia acceleration. The ARM communicates through an AXI bus with the AXI2OCP bridge and receives interrupts from the MPU subsystem interrupt controller (MPU INTC).

Interrupt controller: Handles the module interrupts (for details, see Chapter 6, Interrupts ).

AXI2OCP bridge: Allows communication between the ARM (AXI), the INTC (OCP), and the modules (OCP L3).

I2Async bridge: This is an asynchronous bridge interface providing an asynchronous OCP to OCP interface. This interface is between the AXI2OCP bridge within the MPU subsystem and the T2Async bridge external to the MPU subsystem.

Clock Generator: Provides the required divided clocks to the internal modules of the MPU subsystem and has a clock input from MPU\_CLK which is fed by the power, reset, and clock management (PRCM) module of the device.

In-Circuit Emulator: It is fully Compatible with CoreSight Architecture and enables debugging capabilities.

<!-- image -->