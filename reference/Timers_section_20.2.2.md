## 20.2.2 Integration

Figure 20-27. DMTimer 1 ms Integration

<!-- image -->

## 20.2.2.1 Timer Connectivity Attributes

Table 20-28. Timer1 Connectivity Attributes

| Attributes          | Type                                                  |
|---------------------|-------------------------------------------------------|
| Power Domain        | Wakeup Domain                                         |
| Clock Domain        | PD_WKUP_L4_WKUP_GCLK (OCP) PD_WKUP_TIMER1_GCLK (Func) |
| Reset Signals       | WKUP_DOM_RST_N                                        |
| Idle/Wakeup Signals | Smart Idle / Slave Wakeup                             |
| Interrupt Requests  | 1 to MPU Subsystem (TINT1_1MS) and WakeM3             |
| DMA Requests        | None                                                  |
| Physical Address    | L4 Wakeup slave port                                  |

## 20.2.2.2 Timer Clock and Reset Manangement

The DMTimer1 1ms timer functional clock can be selected from one of five sources using the CLKSEL\_TIMER1MS\_CLK register in the PRCM:

- The system clock (CLK\_M\_OSC)
- The PER PLL generated 32.768 KHz clock (CLK\_32KHZ)
- The TCLKIN external timer input clock
- The on-chip ~32.768 KHz oscillator (CLK\_RC32K)
- The external 32.768 KHz oscillator/clock (CLK\_32K\_RTC)

<!-- image -->

<!-- image -->

www.ti.com

## 20.2.2.3 Timer Clock Signals

## Table 20-29. Timer Clock Signals

| Clock Signal                | Max Freq   | Reference / Source                                                         | Comments                       |
|-----------------------------|------------|----------------------------------------------------------------------------|--------------------------------|
| Timer1 (1ms) Clock Signals  |            |                                                                            |                                |
| PICLKOCP Interface clock    | 100 MHz    | CORE_CLKOUTM4 / 2                                                          | pd_wkup_l4_wkup_gclk from PRCM |
| PICLKTIMER Functional clock | 26 MHz (1) | CLK_M_OSC CLK_32KHZ (PER_CLKOUTM2 / 5859.375) TCLKIN CLK_RC32K CLK_32K_RTC | pd_wkup_timer1_gclk from PRCM  |

(1) PICLKTIMER must be less than or equal to PICLKOCP/4.