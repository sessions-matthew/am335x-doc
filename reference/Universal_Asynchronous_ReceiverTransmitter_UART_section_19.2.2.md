Table 19-2. UART0 Connectivity Attributes (continued)

| Attributes          | Type                                                                |
|---------------------|---------------------------------------------------------------------|
| Reset Signals       | WKUP_DOM_RST_N                                                      |
| Idle/Wakeup Signals | Smart Idle / Wakeup                                                 |
| Interrupt Requests  | 1 interrupt to MPU Subsystem (UART0INT), PRU-ICSS (nirq) and WakeM3 |
| DMA Requests        | 2 DMA requests to EDMA (TX - UTXEVT0, RX - URXEVT0)                 |
| Physical Address    | L4 Wakeup slave port                                                |

Table 19-3. UART1-5 Connectivity Attributes

| Attributes          | Type                                                                                                                                                                             |
|---------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Power Domain        | Peripheral Domain                                                                                                                                                                |
| Clock Domain        | PD_PER_L4LS_GCLK (OCP) PD_PER_UART_GFCLK (Func)                                                                                                                                  |
| Reset Signals       | PER_DOM_RST_N                                                                                                                                                                    |
| Idle/Wakeup Signals | Smart Idle                                                                                                                                                                       |
| Interrupt Requests  | UART1-2 1 interrupt per instance to MPU Subsystem (UART1INT, UART2INT) and PRU-ICSS (nirq) UART3-5 1 interrupt per instance to only MPU Subsystem (UART3INT, UART4INT, UART5INT) |
| DMA Requests        | 2 DMA requests per instance to EDMA (TX - UTXEVTx, RX - URXEVTx)                                                                                                                 |
| Physical Address    | L4 Peripheral slave port                                                                                                                                                         |

## 19.2.2 UART Clock and Reset Management

The UART modules use separate functional and bus interface clocks.

## Table 19-4. UART0 Clock Signals

| Clock Signal                    | Max Freq   | Reference / Source   | Comments             |
|---------------------------------|------------|----------------------|----------------------|
| CLK Interface clock From PRCM   | 100 MHz    | CORE_CLKOUTM4 / 2    | pd_wkup_l4_wkup_gclk |
| FCLK Functional clock From PRCM | 48 MHz     | PER_CLKOUTM2 / 4     | pd_wkup_uart0_gfclk  |

## Table 19-5. UART1-5 Clock Signals

| Clock Signal          | Max Freq   | Reference / Source   | Comments                    |
|-----------------------|------------|----------------------|-----------------------------|
| CLK Interface clock   | 100 MHz    | CORE_CLKOUTM4 / 2    | pd_per_l4ls_gclk From PRCM  |
| FCLK Functional clock | 48 MHz     | PER_CLKOUTM2 / 4     | pd_per_uart_gfclk From PRCM |

For UART operation, the functional clock is used to produce a baud rate up to 3.6M bits/s. Table 19-6 lists the supported baud rates, the requested divider, and the corresponding error versus the standard baud rate.

<!-- image -->

<!-- image -->

Table 19-6. UART Mode Baud and Error Rates

|   Baud rate |   Over sampling |   Divisor |   Error (%) |
|-------------|-----------------|-----------|-------------|
|         300 |              16 |     10000 |        0    |
|         600 |              16 |      5000 |        0    |
|        1200 |              16 |      2500 |        0    |
|        2400 |              16 |      1250 |        0    |
|        4800 |              16 |       625 |        0    |
|        9600 |              16 |       313 |        0.16 |
|       14400 |              16 |       208 |        0.16 |
|       19200 |              16 |       156 |        0.16 |
|       28800 |              16 |       104 |        0.16 |
|       38400 |              16 |        78 |        0.16 |
|       57600 |              16 |        52 |        0.16 |
|      115200 |              16 |        26 |        0.16 |
|      230400 |              16 |        13 |        0.16 |
|      460800 |              13 |         8 |        0.16 |
|      921600 |              13 |         4 |        0.16 |
|     1843200 |              13 |         2 |        0.16 |
|     3000000 |              16 |         1 |        0    |
|     3686400 |              13 |         1 |        0.16 |

For IrDA operation, the internal functional clock divisor allows generation of SIR, MIR, or FIR baud rates as shown in Table 19-7.

Table 19-7. IrDA Mode Baud and Error Rates

|   Baud rate | IR mode   | Encoding   |   Divisor |   Error (%) |
|-------------|-----------|------------|-----------|-------------|
|        2400 | SIR       | 3/16       |      1250 |        0    |
|        9600 | SIR       | 3/16       |       312 |        0.16 |
|       19200 | SIR       | 3/16       |       156 |        0.16 |
|       38400 | SIR       | 3/16       |        78 |        0.16 |
|       57600 | SIR       | 3/16       |        52 |        0.16 |
|      115200 | SIR       | 3/16       |        26 |        0.16 |
|      576000 | MIR       | 1/4        |         2 |        0    |
|     1152000 | MIR       | 1/4        |         1 |        0    |
|     4000000 | FIR       | 4PPM       |         1 |        0    |