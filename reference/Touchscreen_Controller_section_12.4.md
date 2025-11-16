## 12.4 Operational Modes

The sequencer is completely controlled by software and behaves accordingly to how the Step Registers are programmed. A step is the general term for sampling a channel input. It is defined by the programmer who decides which input values to send to the AFE as well as how and when to sample a channel input.

The choices for each step can all be programmed using the STEPCONFIGx registers.

A step requires using these registers:

- STEPENABLE: Enables or disables the step
- STEPCONFIGx: Controls the input values to the ADC (the reference voltages, the pull up/down transistor biasing, which input channel to sample, differential control, HW synchronized or SW enabled, averaging, and which FIFO group to save the data)
- STEPDELAYx: Controls the OpenDelay (the time between driving the AFE inputs until sending the SOC signal to the AFE), and also controls the SampleDelay (the time for the ADC to sample the input signal)

The sequencer supports a total of 16 programmable steps, a touchscreen charge step, and an idle step. Each step requires using the registers listed above. However, the idle step does not have an enable bit, so it will always be enabled, or a delay register. In addition, the ADC does not actually sample a channel during the idle and touchscreen charge steps.

Assuming all the steps are configured as general-purpose mode (no touchscreen), then the steps would be configured as SW enabled. When the TSC\_ADC\_SS is first enabled, the sequencer will always start in the Idle step and then wait for a STEPENABLE[n] bit to turn on. After a step is enabled, the sequencer will start with the lowest step (1) and continue until step (16). If a step is not enabled, then sequencer will skip to the next step. If all steps are disabled, then the sequencer will remain in the IDLE state and continue to apply the settings in the IDLECONFIG register.

Assuming a touchscreen-only mode (no general-purpose channels) the steps could be configured as HW synchronized triggered (mapped to the Pen event). The sequencer would wait in the IDLE state until a Pen-down event occurred and then begin the HW step conversions. The charge step, which occurs after the last HW-synchronized step is finished, is designed to charge the capacitance in a touch panel when the appropriate bias transistor is enabled. The purpose of the charge step is to prepare the TSC for the next Pen-down event.

Assuming a mixed mode application (touchscreen and general-purpose channels), the user can configure the steps as either HW-triggered (mapped to a Pen event) or SW-enabled. If the sequencer is in the idle state and a Pen-down event occurs, the HW-synchronized steps are always scheduled first, followed by the charge step, and cannot be preempted by SW steps. If there is no HW event, then the SW-enabled steps are scheduled instead.

If a Pen-down event occurs while the sequencer is in the middle of scheduling the SW steps, the user can program the scheduler to allow preemption. If the HW preemption control bit is enabled in the CTRL register, the sequencer will stop the scheduled SW sequence and schedule the HW steps. After the last HW step and charge step are completed, the sequencer will continue from the next SW step (before the preemption occurred). If the HW preemption is disabled, then the touch event will be ignored until the last software step is completed; if the touch event is removed before the last software step is finished, then the touch event will be missed.

Even if a touchscreen is not present, the user can still configure the steps to be HW-synchronized by mapping to the ext\_hw\_event signal shown in Figure 12-1. This HW event input signal can be driven at the SOC from a number of external inputs chosen by the ADC\_EVT\_CAPT register in the Control Module.

When mapping is set for the ext\_hw\_event signal, then the TSC\_ADC\_SS will wait for a rising edge transition (from low to high) before starting. The ext\_hw\_event signal is captured on the internal L4 OCP clock domain. The ext\_hw\_event signal should be held for at least two TSC\_ADC\_SS OCP clocks (L4 frequency).

An END\_OF\_SEQUENCE interrupt is generated after the last active step is completed before going back to the IDLE state. The END\_OF\_SEQUENCE interrupt does not mean data is in the FIFO (should use the FIFO interrupts and FIFOxCOUNT register).

<!-- image -->