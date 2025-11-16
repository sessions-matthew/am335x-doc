<!-- image -->

www.ti.com

NOTE:

The system software should only write to the STEPENABLE register when the ADC is disabled or the FSM sequencer is in the Idle step. Therefore, it may be necessary to disable the ADC before updating the STEPENABLE register if the FSM sequencer is executing back-to-back steps where it never enters the Idle step.

## 12.4.1 PenCtrl and PenIRQ

The Pen IRQ can only occur if the correct AFE\_Pen\_Ctrl bits are high in the CTRL register and if the correct ground transistor biasing is set in the STEPCONFIGx and IDLECONFIG registers.

Setting the AFE\_Pen\_Ctrl bits in the CTRL register will enable a weak internal pull-up resistor on AIN0 for 4-wire configurations and AIN4 for 5-wire.

If a step is configured as HW-synchronized, the sequencer will override the AFE\_Pen\_Ctrl bits set by the software (bits 6:5) once it transitions from the Idle step. The sequencer will automatically mask the AFE\_Pen\_Ctrl bits (override them and turn them off) so that the ADC can get an accurate measurement from the x and y-axes. After the last HW-synchronized step, the sequence will go to the Charge step and the pen override mask is removed and the values set by the software (bits 6:5) will have control. The Pendown events will be temporarily ignored during the Charge step (HW will mask any potential glitches that may occur)

If the sequencer is not using the HW synchronized approach, (all the steps are configured as software enabled), then it is the software programmer's responsibility to correctly turn on and off the AFE\_Pen\_Ctrl bits to receive the correct measurements from the touchscreen. The software must enable the Charge step and ignore any potential glitches.

It is also possible to detect the Pen-down event even if all the STEPENABLE[n] bits are off. By setting the appropriate AFE\_Pen\_Ctrl bit to 1, and configuring the IDLECONFIG register to bias the correct transistor to ground, the Pen-down event will generate. The flowchart for the sequencer is shown in Figure 12-3 and an example timing diagram in Figure 12-4.

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

Figure 12-3 does not actually represent clock cycles but instead illustrates how the scheduler will work. However, each shaded box above does represent a FSM state and will use a clock cycle. Using the minimum delay values, the ADC can sample at 15 ADC clocks per sample. Below is an example timing diagram illustrating the states of the sequencer and also the showing when the STEPCONFIGx and the STEPDELAYx registers values are applied. The below example assumes the steps are software controlled, and averaging is turned off.

Figure 12-4. Example Timing Diagram for Sequencer

<!-- image -->

The idle step is always enabled and applied when the FSM is in the IDLE state (that is, either waiting for a HW event or waiting for a step to be enabled). The idle step cannot be disabled.

Once the TSC\_ADC\_SS is enabled and assuming at least one step is active, the FSM will transition from the idle state and apply the first active STEPCONFIGx and STEPDELAYx register settings. It is possible for the Open Delay value to be 0, and the FSM will immediately skip to the Sample Delay state, which is a minimum of one clock cycle. The ADC will begin the sampling on the falling edge of the SOC signal. After the ADC is finished converting the channel data (13 cycles later), the EOC signal is sent and the FSM will then apply the next active step.

This process is repeated and continued (from step 1 to step 16) until the last active step is completed.