## 20.2 DMTimer 1ms

## 20.2.1 Introduction

This peripheral is a 32-bit timer offering:

- Counter timer with compare and capture modes
- Auto-reload mode
- Start-stop mode
- Generate 1 ms tick with 32768-Hz functional clock
- Programmable divider clock source
- 16-32 bit addressing
- On-the-fly read/write registers
- Interrupts generated on overflow, compare and capture
- Interrupt enable
- Wake-up enable
- Write posted mode
- Dedicated input trigger for capture mode and dedicated output trigger/PWM signal
- Dedicated output signal for general purpose use PORGPOCFG
- OCP interface compatible

The timer module contains a free running upward counter with auto reload capability on overflow. The timer counter can be read and written on the fly (while counting). The timer module includes compare logic to allow interrupt event on programmable counter matching value.

A dedicated output signal can be pulsed or toggled on overflow and match event. This output offers timing stamp trigger signal or PWM (pulse width modulation) signal sources. A dedicated output signal can be used for general purpose PORGPOCFG (directly driven by the bit 14 of the TCLR register). A dedicated input signal is used to trigger automatic timer counter capture and interrupt event, on programmable input signal transition type. A programmable clock divider (prescaler) allows reduction of the timer input clock frequency. All internal timer interrupt sources are merged in one module interrupt line and one wake-up line. Each internal interrupt source can be independently enabled/disabled with a dedicated bit of TIER register for the interrupt features and a dedicated bit of TWER for the wake-up.

This module is controllable through the OCP peripheral bus.

As two clocks domains are managed inside this module, resynchronization is done by special logic between OCP clock domain and Timer clock domain. At reset, synchronization logic allows utilization of all ratios between OCP clock and Timer clock. Drawback of this mode is that full-resynchronization path is used with access latency performance impact in terms of OCP clock cycles. In order to improve module access latency, and under restricted conditions on clocks ratios (cf. 7.1 Write posted), write-posted mode can be used by setting POSTED bit of System Control register (TSICR). Under this mode, write posted mode is enabled, meaning that OCP write command is granted before the write process completes in the timer clock domain. This mode allows software (SW) to do concurrent writes on Dual Mode timer registers and to observe write process completion (synchronization) at SW level by reading independent write posted status bits in the Write Posted Status Register (TWPS).

<!-- image -->

<!-- image -->

www.ti.com

Figure 20-26. Block Diagram

<!-- image -->