## 20.1 DMTimer

## 20.1.1 Introduction

## 20.1.1.1 Overview

The timer module contains a free running upward counter with auto reload capability on overflow. The timer counter can be read and written in real-time (while counting). The timer module includes compare logic to allow an interrupt event on a programmable counter matching value.

A dedicated output signal can be pulsed or toggled on overflow and match event. This output offers a timing stamp trigger signal or PWM (pulse-width modulation) signal sources. A dedicated output signal can be used for general purpose PORGPOCFG (directly driven by bit 14 of the TCLR register). A dedicated input signal is used to trigger automatic timer counter capture and interrupt event, on programmable input signal transition type. A programmable clock divider (prescaler) allows reduction of the timer input clock frequency. All internal timer interrupt sources are merged in one module interrupt line and one wake-up line. Each internal interrupt source can be independently enabled/disabled.

This module is controllable through the OCP peripheral bus.

As two clock domains are managed inside this module, resynchronization is done by special logic between the OCP clock domain and the Timer clock domain. At reset, synchronization logic allows utilization of all ratios between the OCP clock and the Timer clock. A drawback of this mode is that fullresynchronization path is used with access latency performance impact in terms of OCP clock cycles. In order to improve module access latency, and under restricted conditions on clocks ratios, write-posted mode can be used by setting the POSTED bit of the System Control Register (TSCR). Under this mode, write posted mode is enabled, meaning that OCP write command is granted before the write process completes in the timer clock domain. This mode allows software to do concurrent writes on Dual Mode timer registers and to observe write process completion (synchronization) at the software level by reading independent write posted status bits in the Write Posted Status Register (TWPS).

## 20.1.1.2 Features

The timer consists of the following features:

- Counter timer with compare and capture modes
- Auto-reload mode
- Start-stop mode
- Programmable divider clock source
- 16-32 bit addressing
- 'On the fly' read/write registers
- Interrupts generated on overflow, compare and capture
- Interrupt enable
- Wake-up enable (only for Timer0)
- Write posted mode
- Dedicated input trigger for capture mode and dedicated output trigger/PWM signal
- Dedicated output signal for general purpose use PORGPOCFG
- OCP interface compatible

The Timer resolution and interrupt period are dependent on the selected input clock and clock prescaler value. Example resolutions for common clock values are shown in Table 20-1.

<!-- image -->

<!-- image -->

www.ti.com

Table 20-1. Timer Resolution and Maximum Range

| Clock      | Prescaler   | Resolution   | Interrupt Period Range   |
|------------|-------------|--------------|--------------------------|
| 32.768 KHz | 1 (min)     | 31.25 us     | 31.25 us to ~36h 35m     |
|            | 256 (max)   | 8 ms         | 8 ms to ~391d 22h 48m    |
| 25 MHz     | 1 (min)     | 40 ns        | 40 ns to ~171.8s         |
|            | 256 (max)   | 10.24 us     | ~20.5 us to ~24h 32m     |

## 20.1.1.3 Functional Block Diagram

Figure 20-1 shows a block diagram of the timer.

Figure 20-1. Timer Block Diagram

<!-- image -->