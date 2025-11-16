<!-- image -->

www.ti.com

## 15.1 Pulse-Width Modulation Subsystem (PWMSS)

## 15.1.1 Introduction

## 15.1.1.1 Features

The general features of the PWMSS are:

## eHRPWM

- Dedicated 16 bit time-base with Period / Frequency control
- Can support 2 independent PWM outputs with Single edge operation
- Can support 2 independent PWM outputs with Dual edge symmetric operation
- Can support 1 independent PWM output with Dual edge asymmetric operation
- Supports Dead-band generation with independent Rising and Falling edge delay control
- Provides asynchronous over-ride control of PWM signals during fault conditions
- Supports 'trip zone' allocation of both latched and un-latched fault conditions
- Allows events to trigger both CPU interrupts and start of ADC conversions
- Support PWM chopping by high frequency carrier signal, used for pulse transformer gate drives.
- High-resolution module with programmable delay line.
- -Programmable on a per PWM period basis.
- -Can be inserted either on the rising edge or falling edge of the PWM pulse or both or not at all.

## eCAP

- Dedicated input Capture pin
- 32 bit Time Base (counter)
- 4 x 32 bit Time-stamp Capture registers (CAP1-CAP4)
- 4 stage sequencer (Mod4 counter) which is synchronized to external events (ECAPx pin edges)
- Independent Edge polarity (Rising / Falling edge) selection for all 4 events
- Input Capture signal pre-scaling (from 1 to 16)
- One-shot compare register (2 bits) to freeze captures after 1 to 4 Time-stamp events
- Control for continuous Time-stamp captures using a 4 deep circular buffer (CAP1-CAP4) scheme
- Interrupt capabilities on any of the 4 capture events

## eQEP

- Input Synchronization
- Quadrature Decoder Unit
- Position Counter and Control unit for position measurement
- Quadrature Edge Capture unit for low speed measurement
- Unit Time base for speed/frequency measurement
- Watchdog Timer for detecting stalls

## 15.1.1.2 Unsupported Features

The PWMSS module features not supported are shown in Table 15-1.

Table 15-1. Unsupported Features

| Feature                  | Reason                           |
|--------------------------|----------------------------------|
| ePWM inputs              | Not pinned out                   |
| ePWM tripzone 1-5 inputs | Only Tripzone0 is pinned out     |
| ePWM digital comparators | Inputs not connected             |
| eQEP quadrature outputs  | Only input signals are connected |
| eCAP3-5                  | Module not used                  |
| eQEP3-5                  | Module not used                  |

<!-- image -->