<!-- image -->

## 20.3.2 Integration

This device includes a Real-Time Clock Subsystem (RTCSS) module to allow easy tracking of time and date and the generation of real time alarms.

The integration of the RTC is shown in Figure 20-55.

Figure 20-55. RTC Integration

<!-- image -->

## 20.3.2.1 RTC Connectivity Attributes

The general connectivity for the RTC module in the device is shown in Table 20-56.

Table 20-56. RTC Module Connectivity Attributes

| Attributes          | Type                                                                                                                                                                      |
|---------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Power Domain        | RTC                                                                                                                                                                       |
| Clock Domain        | PD_RTC_L4_RTC_GCLK (Interface/OCP) PD_RTC_RTC32KCLK (Func) CLK_32K_RTC (Func)                                                                                             |
| Reset Signals       | RTC_DOM_RST_N                                                                                                                                                             |
| Idle/Wakeup Signals | Smart Idle/Wakeup                                                                                                                                                         |
| Interrupt Requests  | 4 Interrupts Alarm interrupt to MPU Subsystem (RTCINT) and WakeM3 Timer interrupt to MPU Subsystem (RTCALARMINT) and WakeM3 Alarm wakeup to WakeM3 Timer wakeup to WakeM3 |
| DMA Requests        | None                                                                                                                                                                      |
| Physical Address    | L4 Wakeup slave port                                                                                                                                                      |

## 20.3.2.2 RTC Clock and Reset Management

The RTC functional clock (c32khz\_clk input) is sourced by default from the CLK32\_KHZ clock derived from the Peripheral PLL. It can also be sourced from the 32-KHz oscillator through a clock mux within and controlled by the RTC\_SS.

## Table 20-57. RTC Clock Signals

| Clock Signal                                            | Max Freq   | Reference / Source       | Comments                     |
|---------------------------------------------------------|------------|--------------------------|------------------------------|
| ocp_clk (Interface clock)                               | 100 MHz    | CORE_CLKOUTM4 / 2        | pd_rtc_l4_rtc_gclk From PRCM |
| rtc_32K_clk_rtc_32k_clk (Oscillator functional clock)   | 32.768 KHz | OSC1_IN                  | CLK_32K_RTC From OSC1_IN     |
| rtc_32k_clk_rtc_32k_aux_clk (Internal functional clock) | 32.768 KHz | PER_CLKOUTM2 / 5859.3752 | pd_rtc_rtc_32kclk From PRCM  |

## 20.3.2.3 RTC Pin List

The RTC module does not include any external interface pins.

## Table 20-58. RTC Pin List

| Pin            | Type   | Description                                                                                          |
|----------------|--------|------------------------------------------------------------------------------------------------------|
| RTC_PORz       | I      | RTC Power On Reset                                                                                   |
| EXT_WAKEUP     | I      | External wakeup                                                                                      |
| PMIC_POWER_EN  | O      | Power enable control for external power management IC                                                |
| Analog Signals |        |                                                                                                      |
| ENZ_KALDO_1P8V | I      | Enable 1.8V LDO                                                                                      |
| VDDS_RTC       | P      | 1.8V Voltage Supply                                                                                  |
| CAP_VDD_RTC    | A      | Decoupling Cap when internal 1.8 V LDO is enabled, 1.1 V supply when internal 1.8 V LDO is disabled. |

<!-- image -->