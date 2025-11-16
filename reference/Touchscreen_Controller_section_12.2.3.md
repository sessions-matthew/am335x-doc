## 12.2.2 TSC\_ADC Clock and Reset Management

The TSC\_ADC has two clock domains. The ADC uses the adc\_clk. The bus interfaces, FIFOs, sequencer, and all other lofic use the ocp\_clk.

Table 12-2. TSC\_ADC Clock Signals

| Clock Signal                   | Max Freq   | Reference / Source   | Comments                        |
|--------------------------------|------------|----------------------|---------------------------------|
| ocp_clk OCP / Functional clock | 100 MHz    | CORE_CLKOUTM4 / 2    | pd_pwkup_l4_wkup_gclk From PRCM |
| adc_clk ADC clock              | 24 MHz (1) | CLK_M_OSC            | pd_wkup_adc_fclk From PRCM      |

(1) When using master input clock frequencies (CLK\_M\_OSC) above 24 MHz (that is, 25 or 26 MHz), the ADC clock must be divided down using the ADC\_CLKDIV register, which will reduce the maximum potential sample rate. The maximum sample rate can only be achieved using a 24-MHz master input clock.

## 12.2.3 TSC\_ADC Pin List

The TSC\_ADC external interface signals are shown in Table 12-3.

Table 12-3. TSC\_ADC Pin List

| Pin     | Type   | Description                              |
|---------|--------|------------------------------------------|
| AN[7:0] | I      | Analog Input                             |
| VREFN   | Power  | Analog Reference Input Negative Terminal |
| VREFP   | Power  | Analog Reference Input Positive Terminal |

<!-- image -->