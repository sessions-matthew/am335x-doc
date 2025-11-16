<!-- image -->

www.ti.com

## 12.3 Functional Description

Before enabling the TSC\_ADC\_SS module, the user must first program the Step Configuration registers in order to configure a channel input to be sampled. There are 16 programmable Step Configuration registers which are used by the sequencer to control which switches to turn on or off (inputs to the AFE), which channel to sample, and which mode to use (hardware-triggered or software-enabled, one-shot or continuous, averaging, where to save the FIFO data, and more).

## 12.3.1 Hardware-Synchronized or Software-Enabled

The user can control the start behavior of each step by deciding if a channel should be sampled immediately (software-enabled) after it is enabled, or if the channel should wait for a hardware (HW) event to occur first (a HW event must either be mapped to the touch screen PEN event or mapped to the HW event input signal, but not both). Each step can be configured independently using the STEPCONFIGx register.

## 12.3.2 Open Delay and Sample Delay

The user can program the delay between driving the inputs to the AFE and the time to send the start of conversion signal. This delay can be used to allow the voltages to stabilize on the touch screen panel before sampling. This delay is called 'open delay' and can also be programmed to zero. The user also has control of the sampling time (width of the start of conversion signal) to the AFE which is called the 'sample delay'. The open delay and sample delay for each step can be independently configured using the STEPDELAYx register.

## 12.3.3 Averaging of Samples (1, 2, 4, 8, and 16)

Each step has the capability to average the sampled data. The valid averaging options are 1 (no average), 2, 4, 8, and 16. If averaging is turned on, then the channel is immediately sampled again (up to 16 times) and final averaged sample data is stored in the FIFO. Each step can be independently configured using the STEPCONFIGx registers.

## 12.3.4 One-Shot (Single) or Continuous Mode

When the sequencer finishes cycling through all the enabled steps, the user can decide if the sequencer should stop (one-shot), or loop back and schedule the step again (continuous).

If one-shot mode is selected, the sequencer will take care of disabling the step enable bit after the conversion. If continuous mode is selected, it is the software's responsibility to turn off the step enable bit.

## 12.3.5 Interrupts

The following interrupts are supported through enable bits and are maskable.

The HW Pen event interrupt, also known as the Pen-down interrupt, is generated when the user presses the touchscreen. This can only occur if the AFE is configured properly (that is, one of the Pen Ctrl bits must be enabled, and also the correct setting for a path to ground in the STEPCONFIGx registers). Although the HW Pen interrupt can be disabled by the software (SW), the event will still trigger the sequencer to start if the step is configured as a HW-synchronized event. The Pen-down interrupt is an asynchronous event and can be used even if the TSC\_ADC\_SS clocks are disabled. The Pen-down interrupt can be used as a wakeup source.

An END\_OF\_SEQUENCE interrupt is generated after the sequencer finishes servicing the last enabled step.

A Pen-up event interrupt, also known as the Pen-up interrupt, can only be generated when using HW steps with the charge steps enabled. If a Pen-down event caused the HW steps to be scheduled and no Pen-down is present after the sequencer finished servicing the charge step, then a Pen-up interrupt is generated. To detect Pen-up interrupts, the charge step must share the same configuration as the idle step.

Touchscreen Controller