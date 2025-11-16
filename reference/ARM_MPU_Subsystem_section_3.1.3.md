<!-- image -->

Figure 3-2. Microprocessor Unit (MPU) Subsystem Signal Interface

<!-- image -->

## 3.1.3 MPU Subsystem Clock and Reset Distribution

## 3.1.3.1 Clock Distribution

The MPU subsystem includes an embedded DPLL which sources the clock for the ARM Cortex-A8 processor. A clock divider within the subsystem is used for deriving the clocks for other internal modules.

<!-- image -->

All major modules inside the MPU subsystem are clocked at half the frequency of the ARM core. The divider of the output clock can be programmed with the CM\_DIV\_M2\_DPLL\_MPU.DPLL\_CLKOUT\_DIV register field, the frequency is relative to the ARM core. For details see Chapter 8, Power, Reset, and Clock Management (PRCM) .

The clock generator generates the following functional clocks:

ARM (ARM\_FCLK): This is the core clock. It is the base fast clock that is routed internally to the ARM logic and internal RAMs, including NEON, L2 cache, the ETM core (emulation), and the ARM core.

AXI2OCP Clock (AXI\_FCLK): This clock is half the frequency of the ARM clock (ARM\_FCLK). The OCP interface thus performs at one half the frequency of ARM.

Interrupt Controller Functional Clock (MPU\_INTC\_FCLK): This clock, which is part of the INTC module, is half the frequency of the ARM clock (ARM\_FCLK).

ICE-Crusher Functional Clock (ICECRUSHER\_FCLK): ICE-Crusher clocking operates on the APB interface, using the ARM core clocking. This clock is half the frequency of the ARM clock (ARM\_FCLK).

I2Async Clock (I2ASYNC\_FCLK): This clock is half the frequency of the ARM clock (ARM\_FCLK). It matches the OCP interface of the AXI2OCP bridge.

NOTE:

The second half of the asynchronous bridge (T2ASYNC) is clocked directly by the PRCM with the core clock. T2ASYNC is not part of the MPU subsystem.

Emulation Clocking: Emulation clocks are distributed by the PRCM module and are asynchronous to the ARM core clock (ARM\_FCLK) and can run at a maximum of 1/3 the ARM core clock.

Table 3-1 summarizes the clocks generated in the MPU subsystem by the MPU clock generator.

Figure 3-3. MPU Subsystem Clocking Scheme

<!-- image -->

Table 3-1. MPU Subsystem Clock Frequencies

| Clock signal                    | Frequency   |
|---------------------------------|-------------|
| Cortex A8 Core Functional Clock | MPU_CLK     |
| AXI2OCP Bridge Functional Clock | MPU_CLK / 2 |
| Device Clock                    | MPU_CLK / 2 |
| I2Async Bridge Functional Clock | MPU_CLK / 2 |

<!-- image -->

www.ti.com

## 3.1.3.2 Reset Distribution

Resets to the MPU subsystem are provided by the PRCM and controlled by the clock generator module.

Figure 3-4. Reset Scheme of the MPU Subsystem

<!-- image -->

Table 3-2. Reset Scheme of the MPU Subsystem

| Signal Name   | I/O   | Interface   |
|---------------|-------|-------------|
| MPU_RST       | I     | PRCM        |
| NEON_RST      | I     | PRCM        |
| CORE_RST      | I     | PRCM        |
| MPU_RSTPWRON  | I     | PRCM        |
| EMU_RST       | I     | PRCM        |
| EMU_RSTPWRON  | I     | PRCM        |

For details about clocks, resets, and power domains, see Chapter 8, Power, Reset, and Clock Management (PRCM) .