<!-- image -->

www.ti.com

## 22.1 Introduction

## 22.1.1 Purpose of the Peripheral

The multichannel audio serial port (McASP) functions as a general-purpose audio serial port optimized for the needs of multichannel audio applications. The McASP is useful for time-division multiplexed (TDM) stream, Inter-Integrated Sound (I2S) protocols, and intercomponent digital audio interface transmission (DIT). The McASP consists of transmit and receive sections that may operate synchronized, or completely independently with separate master clocks, bit clocks, and frame syncs, and using different transmit modes with different bit-stream formats. The McASP module also includes serializers that can be individually enabled to either transmit or receive.

## 22.1.2 Features

Features of the McASP include:

- Two independent clock generator modules for transmit and receive.
- -Clocking flexibility allows the McASP to receive and transmit at different rates. For example, the McASP can receive data at 48 kHz but output up-sampled data at 96 kHz or 192 kHz.
- Independent transmit and receive modules, each includes:
- -Programmable clock and frame sync generator.
- -TDM streams from 2 to 32, and 384 time slots.
- -Support for time slot sizes of 8, 12, 16, 20, 24, 28, and 32 bits.
- -Data formatter for bit manipulation.
- Individually assignable serial data pins (up to 6 pins).
- Glueless connection to audio analog-to-digital converters (ADC), digital-to-analog converters (DAC), codec, digital audio interface receiver (DIR), and S/PDIF transmit physical layer components.
- Wide variety of I2S and similar bit-stream format.
- Integrated digital audio interface transmitter (DIT) supports (up to 10 transmit pins):
- -S/PDIF, IEC60958-1, AES-3 formats.
- -Enhanced channel status/user data RAM.
- 384-slot TDM with external digital audio interface receiver (DIR) device.
- -For DIR reception, an external DIR receiver integrated circuit should be used with I2S output format and connected to the McASP receive section.
- Extensive error checking and recovery.
- -Transmit underruns and receiver overruns due to the system not meeting real-time requirements.
- -Early or late frame sync in TDM mode.
- -Out-of-range high-frequency master clock for both transmit and receive.
- -External error signal coming into the AMUTEIN input.
- -DMA error due to incorrect programming.