## 12.1 Introduction

The touchscreen controller and analog-to-digital converter subsystem (TSC\_ADC\_SS) is an 8-channel general-purpose analog-to-digital converter (ADC) with optional support for interleaving touchscreen (TS) conversions for a 4-wire, 5-wire, or 8-wire resistive panel. The TSC\_ADC\_SS can be configured for use in one of the following applications:

- 8 general-purpose ADC channels
- 4-wire TSC with 4 general-purpose ADC channels
- 5-wire TSC with 3 general-purpose ADC channels
- 8-wire TSC

## 12.1.1 TSC\_ADC Features

The main features of the TSC\_ADC\_SS include:

- Support for 4-wire, 5-wire, and 8-wire resistive TS panels
- Support for interleaving TS capture and general-purpose ADC modes
- Programmable FSM sequencer that supports 16 steps:
- -Software register bit for start of conversion
- -Optional start of conversion HW synchronized to Pen touch or external HW event (but not both)
- -Single conversion (one-shot)
- -Continuous conversions
- -Sequence through all input channels based on a mask
- -Programmable OpenDelay before sampling each channel
- -Programmable sampling delay for each channel
- -Programmable averaging of input samples - 16/8/4/2/1
- -Differential or singled ended mode setting for each channel
- -Store data in either of two FIFO groups
- -Option to encode channel number with data
- -Support for servicing FIFOs via DMA or CPU
- -Programmable DMA Request event (for each FIFO)
- -Dynamically enable or disable channel inputs during operation
- -Stop bit to end conversion
- Support for the following interrupts and status, with masking:
- -Interrupt for HW pen (touch) event
- -Interrupt for HW Pen Up event
- -Interrupt after a sequence of conversions (all non-masked channels)
- -Interrupt for FIFO threshold levels
- -Interrupt if sampled data is out of a programmable range
- -Interrupt for FIFO overflow and underflow conditions
- -Status bit to indicate if ADC is busy converting

## 12.1.2 Unsupported TSC\_ADC\_SS Features

This device supports all TSC\_ADC\_SS features.

<!-- image -->