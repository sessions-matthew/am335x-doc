## 20.4.2 Integration

The integration of the WD Timer is shown in Figure 20-96.

## Figure 20-96. WDTimer Integration

<!-- image -->

## 20.4.2.1 Public WD Timer Connectivity Attributes

The general connectivity for the WD Timer module in this device is shown in Table 20-99.

Table 20-99. Public WD Timer Module Connectivity Attributes

| Attributes          | Type                                                |
|---------------------|-----------------------------------------------------|
| Power Domain        | Wakeup Domain                                       |
| Clock Domain        | PD_WKUP_L4_WKUP_GCLK (OCP) PD_WKUP_WDT1_GCLK (Func) |
| Reset Signals       | WKUP_DOM_RST_N                                      |
| Idle/Wakeup Signals | Smart Idle / Slave Wakeup                           |
| Interrupt Requests  | 1 Interrupt to MPU Subsystem (WDT1INT) and WakeM3   |
| DMA Requests        | None                                                |
| Physical Address    | L4 Wakeup slave port                                |

## 20.4.2.2 Public WD Timer Clock and Reset Management

The Watchdog Timer functional clock (pi\_sys\_clk input) is sourced from either the on-chip ~32768 Hz oscillator (CLK\_RC32K) or the PER PLL generated 32.768 KHz clock (CLK\_32KHZ) as selected using CLKSEL\_WDT1\_CLK[CLKSEL] in the PRCM.

<!-- image -->

<!-- image -->

## Table 20-100. Public WD Timer Clock Signals

| Clock Signal                | Max Freq   | Reference / Source                               | Comments                       |
|-----------------------------|------------|--------------------------------------------------|--------------------------------|
| PI_OCP_CLK Interface clock  | 100 MHz    | CORE_CLKOUTM4 / 2                                | pd_wkup_l4_wkup_gclk from PRCM |
| PI_SYS_CLK Functional clock | 32768 Hz   | CLK_RC32K or CLK_32KHZ (PER_CLKOUTM2 / 5859.375) | pd_wkup_wdt1_gclk from PRCM    |