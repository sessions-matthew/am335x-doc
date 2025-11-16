## 20.1.2 Integration

The integration of Timer0 and Timer2-7 is shown in Figure 20-2 and Figure 20-3.

Figure 20-2. Timer0 Integration

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

Figure 20-3. Timer2-7 Integration

<!-- image -->

## 20.1.2.1 Timer Connectivity Attributes

Table 20-2. Timer[0] Connectivity Attributes

| Attributes          | Type                                                            |
|---------------------|-----------------------------------------------------------------|
| Power domain        | Wakeup domain                                                   |
| Clock Domain        | PD_WKUP_L4_WKUP_GCLK (Interface/OCP) PD_WKUP_TIMER0_GCLK (Func) |
| Reset Signals       | WKUP_DOM_RST_N                                                  |
| Idle/Wakeup Signals | Idle Slave Wakeup                                               |
| Interrupt Requests  | 1 to MPU Subsystem (TINT0), 1 to WakeM3                         |
| DMA Requests        | None                                                            |
| Physical Address    | L4 Wakeup slave port                                            |

Table 20-3. Timer[2-7] Connectivity Attributes

| Attributes          | Type                                                                                                                                                                                                                    |
|---------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Power Domain        | Peripheral Domain                                                                                                                                                                                                       |
| Clock Domain        | PD_PER_L4LS_GCLK (OCP) Functional Clocks: PD_PER_TIMER2_GCLK (Timer 2) PD_PER_TIMER3_GCLK (Timer 3) PD_PER_TIMER4_GCLK (Timer 4) PD_PER_TIMER5_GCLK (Timer 5) PD_PER_TIMER6_GCLK (Timer 6) PD_PER_TIMER7_GCLK (Timer 7) |
| Reset Signals       | PER_DOM_RST_N                                                                                                                                                                                                           |
| Idle/Wakeup Signals | Smart Idle (No wakeup capabilities)                                                                                                                                                                                     |
| Interrupt Requests  | 1 per timer module to MPU Subsystem (TINT2 - TINT7) Also to TSC_ADC event capture mux for Timer 4-Timer7                                                                                                                |
| DMA Requests        | Interrupt requests are redirected as DMA requests: 1 per instance (TINTx)                                                                                                                                               |
| Physical Address    | L4 Peripheral slave port                                                                                                                                                                                                |

## 20.1.2.2 Timer Clock and Reset Management

Each DMTimer[2-7] functional clock is selected within the PRCM using the associated CLKSEL\_TIMERx\_CLK register from three possible sources:

- The system clock (CLK\_M\_OSC)
- The PER PLL generated 32.768 KHz clock (CLK\_32KHZ)
- The TCLKIN external timer input clock.

The DMTimer 0 functional clock is fixed to use the internal 32KHz RC Clock (CLK\_RC32K).

<!-- image -->

<!-- image -->

www.ti.com

## 20.1.2.3 Timer Clock Signals

Table 20-4. Timer Clock Signals

| Clock Signal                | Max Freq                 | Reference / Source                                   | Comments                                                                                                                    |
|-----------------------------|--------------------------|------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------|
| Timer[0] Clock Signals      | Timer[0] Clock Signals   | Timer[0] Clock Signals                               | Timer[0] Clock Signals                                                                                                      |
| PICLKOCP Interface clock    | 100 MHz                  | CORE_CLKOUTM4 / 2                                    | pd_wkup_l4_wkup_gclk from PRCM                                                                                              |
| PICLKTIMER Functional clock | 26 MHz (1)               | CLK_RC32K CLK_M_OSC                                  | pd_wkup_timer0_gclk from PRCM                                                                                               |
| Timer[2-7] Clock Signals    | Timer[2-7] Clock Signals | Timer[2-7] Clock Signals                             | Timer[2-7] Clock Signals                                                                                                    |
| PICLKOCP Interface clock    | 100 MHz                  | CORE_CLKOUTM4 / 2                                    | pd_per_l4ls_gclk from PRCM                                                                                                  |
| PICLKTIMER Functional clock | 26 MHz (1)               | CLK_M_OSC CLK_32KHZ (PER_CLKOUTM2 / 5859.375) TCLKIN | pd_per_timer2_gclk pd_per_timer3_gclk pd_per_timer4_gclk pd_per_timer5_gclk pd_per_timer6_gclk pd_per_timer7_gclk from PRCM |

(1) PICLKTIMER must be less than or equal to PICLKOCP/4.

## 20.1.2.4 Timer Pin List

The timer PIEVENTCAPT input and PORTIMERPWM output signals are muxed onto a single TIMER I/O pad. The pad direction (and hence the pin function) are controlled from within the DMTimer module using the PORGPOCFG signal as an output enable.

Table 20-5. Timer Pin List

| Pin    | Type   | Description                         |
|--------|--------|-------------------------------------|
| TCLKIN | I      | External timer clock source         |
| TIMER4 | I/O    | Timer 4 trigger input or PWM output |
| TIMER5 | I/O    | Timer 5 trigger input or PWM output |
| TIMER6 | I/O    | Timer 6 trigger input or PWM output |
| TIMER7 | I/O    | Timer 7 trigger input or PWM output |