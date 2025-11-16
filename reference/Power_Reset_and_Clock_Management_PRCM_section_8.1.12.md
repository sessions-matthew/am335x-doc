<!-- image -->

www.ti.com

## 8.1.12 Clock Module Registers

## 8.1.12.1 CM\_PER Registers

Table 8-30 lists the memory-mapped registers for the CM\_PER. All register offset addresses not listed in Table 8-30 should be considered as reserved locations and the register contents should not be modified.

## Table 8-30. CM\_PER REGISTERS

| Offset   | Acronym                 | Section             |
|----------|-------------------------|---------------------|
| 0h       | CM_PER_L4LS_CLKSTCTRL   | Section 8.1.12.1.1  |
| 4h       | CM_PER_L3S_CLKSTCTRL    | Section 8.1.12.1.2  |
| Ch       | CM_PER_L3_CLKSTCTRL     | Section 8.1.12.1.3  |
| 14h      | CM_PER_CPGMAC0_CLKCTRL  | Section 8.1.12.1.4  |
| 18h      | CM_PER_LCDC_CLKCTRL     | Section 8.1.12.1.5  |
| 1Ch      | CM_PER_USB0_CLKCTRL     | Section 8.1.12.1.6  |
| 24h      | CM_PER_TPTC0_CLKCTRL    | Section 8.1.12.1.7  |
| 28h      | CM_PER_EMIF_CLKCTRL     | Section 8.1.12.1.8  |
| 2Ch      | CM_PER_OCMCRAM_CLKCTRL  | Section 8.1.12.1.9  |
| 30h      | CM_PER_GPMC_CLKCTRL     | Section 8.1.12.1.10 |
| 34h      | CM_PER_MCASP0_CLKCTRL   | Section 8.1.12.1.11 |
| 38h      | CM_PER_UART5_CLKCTRL    | Section 8.1.12.1.12 |
| 3Ch      | CM_PER_MMC0_CLKCTRL     | Section 8.1.12.1.13 |
| 40h      | CM_PER_ELM_CLKCTRL      | Section 8.1.12.1.14 |
| 44h      | CM_PER_I2C2_CLKCTRL     | Section 8.1.12.1.15 |
| 48h      | CM_PER_I2C1_CLKCTRL     | Section 8.1.12.1.16 |
| 4Ch      | CM_PER_SPI0_CLKCTRL     | Section 8.1.12.1.17 |
| 50h      | CM_PER_SPI1_CLKCTRL     | Section 8.1.12.1.18 |
| 60h      | CM_PER_L4LS_CLKCTRL     | Section 8.1.12.1.19 |
| 68h      | CM_PER_MCASP1_CLKCTRL   | Section 8.1.12.1.20 |
| 6Ch      | CM_PER_UART1_CLKCTRL    | Section 8.1.12.1.21 |
| 70h      | CM_PER_UART2_CLKCTRL    | Section 8.1.12.1.22 |
| 74h      | CM_PER_UART3_CLKCTRL    | Section 8.1.12.1.23 |
| 78h      | CM_PER_UART4_CLKCTRL    | Section 8.1.12.1.24 |
| 7Ch      | CM_PER_TIMER7_CLKCTRL   | Section 8.1.12.1.25 |
| 80h      | CM_PER_TIMER2_CLKCTRL   | Section 8.1.12.1.26 |
| 84h      | CM_PER_TIMER3_CLKCTRL   | Section 8.1.12.1.27 |
| 88h      | CM_PER_TIMER4_CLKCTRL   | Section 8.1.12.1.28 |
| ACh      | CM_PER_GPIO1_CLKCTRL    | Section 8.1.12.1.29 |
| B0h      | CM_PER_GPIO2_CLKCTRL    | Section 8.1.12.1.30 |
| B4h      | CM_PER_GPIO3_CLKCTRL    | Section 8.1.12.1.31 |
| BCh      | CM_PER_TPCC_CLKCTRL     | Section 8.1.12.1.32 |
| C0h      | CM_PER_DCAN0_CLKCTRL    | Section 8.1.12.1.33 |
| C4h      | CM_PER_DCAN1_CLKCTRL    | Section 8.1.12.1.34 |
| CCh      | CM_PER_EPWMSS1_CLKCTRL  | Section 8.1.12.1.35 |
| D4h      | CM_PER_EPWMSS0_CLKCTRL  | Section 8.1.12.1.36 |
| D8h      | CM_PER_EPWMSS2_CLKCTRL  | Section 8.1.12.1.37 |
| DCh      | CM_PER_L3_INSTR_CLKCTRL | Section 8.1.12.1.38 |
| E0h      | CM_PER_L3_CLKCTRL       | Section 8.1.12.1.39 |
| E4h      | CM_PER_IEEE5000_CLKCTRL | Section 8.1.12.1.40 |
| E8h      | CM_PER_PRU_ICSS_CLKCTRL | Section 8.1.12.1.41 |
| ECh      | CM_PER_TIMER5_CLKCTRL   | Section 8.1.12.1.42 |

Table 8-30. CM\_PER REGISTERS (continued)

| Offset   | Acronym                     | Register Name   | Section             |
|----------|-----------------------------|-----------------|---------------------|
| F0h      | CM_PER_TIMER6_CLKCTRL       |                 | Section 8.1.12.1.43 |
| F4h      | CM_PER_MMC1_CLKCTRL         |                 | Section 8.1.12.1.44 |
| F8h      | CM_PER_MMC2_CLKCTRL         |                 | Section 8.1.12.1.45 |
| FCh      | CM_PER_TPTC1_CLKCTRL        |                 | Section 8.1.12.1.46 |
| 100h     | CM_PER_TPTC2_CLKCTRL        |                 | Section 8.1.12.1.47 |
| 10Ch     | CM_PER_SPINLOCK_CLKCTRL     |                 | Section 8.1.12.1.48 |
| 110h     | CM_PER_MAILBOX0_CLKCTRL     |                 | Section 8.1.12.1.49 |
| 11Ch     | CM_PER_L4HS_CLKSTCTRL       |                 | Section 8.1.12.1.50 |
| 120h     | CM_PER_L4HS_CLKCTRL         |                 | Section 8.1.12.1.51 |
| 12Ch     | CM_PER_OCPWP_L3_CLKSTCT RL  |                 | Section 8.1.12.1.52 |
| 130h     | CM_PER_OCPWP_CLKCTRL        |                 | Section 8.1.12.1.53 |
| 140h     | CM_PER_PRU_ICSS_CLKSTCTR L  |                 | Section 8.1.12.1.54 |
| 144h     | CM_PER_CPSW_CLKSTCTRL       |                 | Section 8.1.12.1.55 |
| 148h     | CM_PER_LCDC_CLKSTCTRL       |                 | Section 8.1.12.1.56 |
| 14Ch     | CM_PER_CLKDIV32K_CLKCTRL    |                 | Section 8.1.12.1.57 |
| 150h     | CM_PER_CLK_24MHZ_CLKSTCT RL |                 | Section 8.1.12.1.58 |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.1.1 CM\_PER\_L4LS\_CLKSTCTRL Register (offset = 0h) [reset = C0102h]

CM\_PER\_L4LS\_CLKSTCTRL is shown in Figure 8-28 and described in Table 8-31.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-PER and ON-INPER states. It also hold one status bit per clock input of the domain.

## Figure 8-28. CM\_PER\_L4LS\_CLKSTCTRL Register

R-0h

| 31                       | 30                       | 29                          | 28                          | 27                          | 26                      | 25                     | 24                       |
|--------------------------|--------------------------|-----------------------------|-----------------------------|-----------------------------|-------------------------|------------------------|--------------------------|
|                          | Reserved                 |                             | CLKACTIVITY_ TIMER6_GCLK    | CLKACTIVITY_ TIMER5_GCLK    | Reserved                | CLKACTIVITY_ SPI_GCLK  | CLKACTIVITY_ I2C_FCLK    |
|                          | R-0h                     |                             | R-0h                        | R-0h                        | R-0h                    | R-0h                   | R-0h                     |
| 23                       | 22                       | 21                          | 20                          | 19                          | 18                      | 17                     | 16                       |
| Reserved                 | Reserved                 | CLKACTIVITY_ GPIO_3_GDBC LK | CLKACTIVITY_ GPIO_2_GDBC LK | CLKACTIVITY_ GPIO_1_GDBC LK | Reserved                | CLKACTIVITY_ LCDC_GCLK | CLKACTIVITY_ TIMER4_GCLK |
| R-0h                     | R-0h                     | R-0h                        | R-0h                        | R-1h                        | R-1h                    | R-0h                   | R-0h                     |
| 15                       | 14                       | 13                          | 12                          | 11                          | 10                      | 9                      | 8                        |
| CLKACTIVITY_ TIMER3_GCLK | CLKACTIVITY_ TIMER2_GCLK | CLKACTIVITY_ TIMER7_GCLK    | Reserved                    | CLKACTIVITY_ CAN_CLK        | CLKACTIVITY_ UART_GFCLK | Reserved               | CLKACTIVITY_ L4LS_GCLK   |
| R-0h                     | R-0h                     | R-0h                        | R-0h                        | R-0h                        | R-0h                    | R-0h                   | R-1h                     |
| 7                        | 6                        | 5                           | 4                           | 3                           | 2                       | 1                      | 0                        |
| Reserved                 | Reserved                 | Reserved                    | Reserved                    | Reserved                    | Reserved                | CLKTRCTRL              | CLKTRCTRL                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-31. CM\_PER\_L4LS\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                      | Type   | Reset   | Description                                                                                                                                                     |
|-------|----------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | Reserved                   | R      | 0h      |                                                                                                                                                                 |
| 28    | CLKACTIVITY_TIMER6_ GCLK   | R      | 0h      | This field indicates the state of the TIMER6 CLKTIMER clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active |
| 27    | CLKACTIVITY_TIMER5_ GCLK   | R      | 0h      | This field indicates the state of the TIMER5 CLKTIMER clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active |
| 26    | Reserved                   | R      | 0h      | Reserved.                                                                                                                                                       |
| 25    | CLKACTIVITY_SPI_GCL K      | R      | 0h      | This field indicates the state of the SPI_GCLK clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active        |
| 24    | CLKACTIVITY_I2C_FCLK       | R      | 0h      | This field indicates the state of the I2C _FCLK clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active       |
| 23    | Reserved                   | R      | 0h      |                                                                                                                                                                 |
| 22    | Reserved                   | R      | 0h      | Reserved.                                                                                                                                                       |
| 21    | CLKACTIVITY_GPIO_3_ GDBCLK | R      | 0h      | This field indicates the state of the GPIO3_GDBCLK clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active    |

R/W-2h

<!-- image -->

Table 8-31. CM\_PER\_L4LS\_CLKSTCTRL Register Field Descriptions (continued)

| Bit   | Field                      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|----------------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 20    | CLKACTIVITY_GPIO_2_ GDBCLK | R      | 0h      | This field indicates the state of the GPIO2_ GDBCLK clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                               |
| 19    | CLKACTIVITY_GPIO_1_ GDBCLK | R      | 1h      | This field indicates the state of the GPIO1_GDBCLK clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                                |
| 18    | Reserved                   | R      | 1h      | Reserved.                                                                                                                                                                                                                                                                                                                                                                                   |
| 17    | CLKACTIVITY_LCDC_GC LK     | R      | 0h      | This field indicates the state of the LCD clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                                         |
| 16    | CLKACTIVITY_TIMER4_ GCLK   | R      | 0h      | This field indicates the state of the TIMER4 CLKTIMER clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                             |
| 15    | CLKACTIVITY_TIMER3_ GCLK   | R      | 0h      | This field indicates the state of the TIMER3 CLKTIMER clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                             |
| 14    | CLKACTIVITY_TIMER2_ GCLK   | R      | 0h      | This field indicates the state of the TIMER2 CLKTIMER clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                             |
| 13    | CLKACTIVITY_TIMER7_ GCLK   | R      | 0h      | This field indicates the state of the TIMER7 CLKTIMER clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                             |
| 12    | Reserved                   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                             |
| 11    | CLKACTIVITY_CAN_CLK        | R      | 0h      | This field indicates the state of the CAN_CLK clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                                     |
| 10    | CLKACTIVITY_UART_GF CLK    | R      | 0h      | This field indicates the state of the UART_GFCLK clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                                  |
| 9     | Reserved                   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                             |
| 8     | CLKACTIVITY_L4LS_GC LK     | R      | 1h      | This field indicates the state of the L4LS_GCLK clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                                   |
| 7-2   | Reserved                   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                             |
| 1-0   | CLKTRCTRL                  | R/W    | 2h      | Controls the clock state transition of the L4 SLOW clock domain in PER power domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

<!-- image -->

www.ti.com

## 8.1.12.1.2 CM\_PER\_L3S\_CLKSTCTRL Register (offset = 4h) [reset = Ah]

CM\_PER\_L3S\_CLKSTCTRL is shown in Figure 8-29 and described in Table 8-32.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

## Figure 8-29. CM\_PER\_L3S\_CLKSTCTRL Register

| 31   | 30       | 29       | 28       | 27                    | 26       | 25        | 24        | 24        | 24        | 24        | 24        | 24        | 24        | 24        | 24        | 24        | 24        |
|------|----------|----------|----------|-----------------------|----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|      |          | Reserved | Reserved |                       |          | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  |
|      |          | R-0h     | R-0h     |                       |          | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 23   | 22       | 21       |          | 19                    | 18       | 17        | 16        | 16        | 16        | 16        | 16        | 16        | 16        | 16        | 16        | 16        | 16        |
|      |          |          | 20       |                       |          |           |           |           |           |           |           |           |           |           |           |           |           |
|      | Reserved | Reserved | Reserved | Reserved              | Reserved | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  |
| R-0h | R-0h     | R-0h     | R-0h     | R-0h                  | R-0h     | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 15   | 14       | 13       | 12       | 11                    | 10       | 9         | 8         | 8         | 8         | 8         | 8         | 8         | 8         | 8         | 8         | 8         | 8         |
|      |          | Reserved |          |                       | Reserved | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  |
|      |          | R-0h     |          |                       | R-0h     | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 7    | 6        | 5        | 4        | 3                     | 2        | 1         | 0         | 0         | 0         | 0         | 0         | 0         | 0         | 0         | 0         | 0         | 0         |
|      | Reserved | Reserved |          | CLKACTIVITY_ L3S_GCLK | Reserved | CLKTRCTRL | CLKTRCTRL | CLKTRCTRL | CLKTRCTRL | CLKTRCTRL | CLKTRCTRL | CLKTRCTRL | CLKTRCTRL | CLKTRCTRL | CLKTRCTRL | CLKTRCTRL | CLKTRCTRL |
| R-0h |          | R-0h     |          | R-1h                  | R-0h     | R/W-2h    | R/W-2h    | R/W-2h    | R/W-2h    | R/W-2h    | R/W-2h    | R/W-2h    | R/W-2h    | R/W-2h    | R/W-2h    | R/W-2h    | R/W-2h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-32. CM\_PER\_L3S\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                             |
|-------|-----------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | Reserved              | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 25-11 | Reserved              | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 10    | Reserved              | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 9     | Reserved              | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 8     | Reserved              | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 7-5   | Reserved              | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 4     | Reserved              | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 3     | CLKACTIVITY_L3S_GCL K | R      | 1h      | This field indicates the state of the L3S_GCLK clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                               |
| 2     | Reserved              | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | CLKTRCTRL             | R/W    | 2h      | Controls the clock state transition of the L3 Slow clock domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

## 8.1.12.1.3 CM\_PER\_L3\_CLKSTCTRL Register (offset = Ch) [reset = 12h]

CM\_PER\_L3\_CLKSTCTRL is shown in Figure 8-30 and described in Table 8-33.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

## Figure 8-30. CM\_PER\_L3\_CLKSTCTRL Register

| 31                      | 30                          | 29       | 28                   | 27                    | 26                     | 25        | 24        |
|-------------------------|-----------------------------|----------|----------------------|-----------------------|------------------------|-----------|-----------|
| Reserved                | Reserved                    | Reserved | Reserved             | Reserved              | Reserved               | Reserved  | Reserved  |
| R-0h                    | R-0h                        | R-0h     | R-0h                 | R-0h                  | R-0h                   | R-0h      | R-0h      |
| 23                      | 22                          | 21       | 20                   | 19                    | 18                     | 17        | 16        |
| Reserved                | Reserved                    | Reserved | Reserved             | Reserved              | Reserved               | Reserved  | Reserved  |
| R-0h                    | R-0h                        | R-0h     | R-0h                 | R-0h                  | R-0h                   | R-0h      | R-0h      |
| 15                      | 14                          | 13       | 12                   | 11                    | 10                     | 9         | 8         |
| Reserved                | Reserved                    | Reserved | Reserved             | Reserved              | Reserved               | Reserved  | Reserved  |
| R-0h                    | R-0h                        | R-0h     | R-0h                 | R-0h                  | R-0h                   | R-0h      | R-0h      |
| 7                       | 6                           | 5        | 4                    | 3                     | 2                      | 1         | 0         |
| CLKACTIVITY_ MCASP_GCLK | CLKACTIVITY_ CPTS_RFT_G CLK | Reserved | CLKACTIVITY_ L3_GCLK | CLKACTIVITY_ MMC_FCLK | CLKACTIVITY_ EMIF_GCLK | CLKTRCTRL | CLKTRCTRL |
| R-0h                    | R-0h                        | R-0h     | R-1h                 | R-0h                  | R-0h                   | R/W-2h    |           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-33. CM\_PER\_L3\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved                   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                    |
| 7     | CLKACTIVITY_MCASP_ GCLK    | R      | 0h      | This field indicates the state of the MCASP_GCLK clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                        |
| 6     | CLKACTIVITY_CPTS_RF T_GCLK | R      | 0h      | This field indicates the state of the CLKACTIVITY_CPTS_RFT_GCLK clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                         |
| 5     | Reserved                   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                    |
| 4     | CLKACTIVITY_L3_GCLK        | R      | 1h      | This field indicates the state of the L3_GCLK clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                           |
| 3     | CLKACTIVITY_MMC_FCL K      | R      | 0h      | This field indicates the state of the MMC_GCLK clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                          |
| 2     | CLKACTIVITY_EMIF_GC LK     | R      | 0h      | This field indicates the state of the EMIF_GCLK clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                         |
| 1-0   | CLKTRCTRL                  | R/W    | 2h      | Controls the clock state transition of the L3 clock domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.1.4 CM\_PER\_CPGMAC0\_CLKCTRL Register (offset = 14h) [reset = 70000h]

CM\_PER\_CPGMAC0\_CLKCTRL is shown in Figure 8-31 and described in Table 8-34. This register manages the CPSW clocks.

| Figure 8-31. CM_PER_CPGMAC0_CLKCTRL Register   | Figure 8-31. CM_PER_CPGMAC0_CLKCTRL Register   | Figure 8-31. CM_PER_CPGMAC0_CLKCTRL Register   | Figure 8-31. CM_PER_CPGMAC0_CLKCTRL Register   | Figure 8-31. CM_PER_CPGMAC0_CLKCTRL Register   | Figure 8-31. CM_PER_CPGMAC0_CLKCTRL Register   | Figure 8-31. CM_PER_CPGMAC0_CLKCTRL Register   | Figure 8-31. CM_PER_CPGMAC0_CLKCTRL Register   |
|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|
| 31                                             | 30                                             | 29                                             | 28                                             | 27                                             | 26                                             | 25                                             | 24                                             |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       |
| R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           |
| 23                                             | 22                                             | 21                                             | 20                                             | 19                                             | 18                                             | 17                                             | 16                                             |
|                                                |                                                | Reserved                                       |                                                |                                                | STBYST                                         | IDLEST                                         | IDLEST                                         |
|                                                |                                                | R-0h                                           |                                                |                                                | R-1h                                           | R-3h                                           |                                                |
| 15                                             | 14                                             | 13                                             | 12                                             | 11                                             | 10                                             | 9                                              | 8                                              |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       |
| R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           |
| 7                                              | 6                                              | 5                                              | 4                                              | 3                                              | 2                                              | 1                                              | 0                                              |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | MODULEMODE                                     | MODULEMODE                                     |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-34. CM\_PER\_CPGMAC0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 18    | STBYST     | R      | 1h      | Module standby status. This bit is warm reset insensitive when CPSW RESET_ISO is enabled 0x0 = Func : Module is functional (not in standby) 0x1 = Standby : Module is in standby                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. This bit is warm reset insensitive when CPSW RESET_ISO is enabled 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. This bit is warm reset insensitive when CPSW RESET_ISO is enabled 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.5 CM\_PER\_LCDC\_CLKCTRL Register (offset = 18h) [reset = 70000h]

CM\_PER\_LCDC\_CLKCTRL is shown in Figure 8-32 and described in Table 8-35.

This register manages the LCD clocks.

| Figure 8-32. CM_PER_LCDC_CLKCTRL Register   | Figure 8-32. CM_PER_LCDC_CLKCTRL Register   | Figure 8-32. CM_PER_LCDC_CLKCTRL Register   | Figure 8-32. CM_PER_LCDC_CLKCTRL Register   | Figure 8-32. CM_PER_LCDC_CLKCTRL Register   | Figure 8-32. CM_PER_LCDC_CLKCTRL Register   | Figure 8-32. CM_PER_LCDC_CLKCTRL Register   | Figure 8-32. CM_PER_LCDC_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
|                                             |                                             | Reserved                                    |                                             |                                             | STBYST                                      | IDLEST                                      | IDLEST                                      |
|                                             |                                             | R-0h                                        |                                             |                                             | R-1h                                        | R-3h                                        | R-3h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-35. CM\_PER\_LCDC\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | STBYST     | R      | 1h      | Module standby status. 0x0 = Func : Module is functional (not in standby) 0x1 = Standby : Module is in standby                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.6 CM\_PER\_USB0\_CLKCTRL Register (offset = 1Ch) [reset = 70000h]

CM\_PER\_USB0\_CLKCTRL is shown in Figure 8-33 and described in Table 8-36. This register manages the USB clocks.

| Figure 8-33. CM_PER_USB0_CLKCTRL Register   | Figure 8-33. CM_PER_USB0_CLKCTRL Register   | Figure 8-33. CM_PER_USB0_CLKCTRL Register   | Figure 8-33. CM_PER_USB0_CLKCTRL Register   | Figure 8-33. CM_PER_USB0_CLKCTRL Register   | Figure 8-33. CM_PER_USB0_CLKCTRL Register   | Figure 8-33. CM_PER_USB0_CLKCTRL Register   | Figure 8-33. CM_PER_USB0_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
|                                             |                                             | Reserved                                    |                                             |                                             | STBYST                                      | IDLEST                                      | IDLEST                                      |
|                                             |                                             | R-0h                                        |                                             |                                             | R-1h                                        | R-3h                                        |                                             |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-36. CM\_PER\_USB0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | STBYST     | R      | 1h      | Module standby status. 0x0 = Func : Module is functional (not in standby) 0x1 = Standby : Module is in standby                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.7 CM\_PER\_TPTC0\_CLKCTRL Register (offset = 24h) [reset = 70000h]

CM\_PER\_TPTC0\_CLKCTRL is shown in Figure 8-34 and described in Table 8-37. This register manages the TPTC clocks.

| Figure 8-34. CM_PER_TPTC0_CLKCTRL Register   | Figure 8-34. CM_PER_TPTC0_CLKCTRL Register   | Figure 8-34. CM_PER_TPTC0_CLKCTRL Register   | Figure 8-34. CM_PER_TPTC0_CLKCTRL Register   | Figure 8-34. CM_PER_TPTC0_CLKCTRL Register   | Figure 8-34. CM_PER_TPTC0_CLKCTRL Register   | Figure 8-34. CM_PER_TPTC0_CLKCTRL Register   | Figure 8-34. CM_PER_TPTC0_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
|                                              |                                              | Reserved                                     |                                              |                                              | STBYST                                       | IDLEST                                       | IDLEST                                       |
|                                              |                                              | R-0h                                         |                                              |                                              | R-1h                                         | R-3h                                         | R-3h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-37. CM\_PER\_TPTC0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | STBYST     | R      | 1h      | Module standby status. 0x0 = Func : Module is functional (not in standby) 0x1 = Standby : Module is in standby                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.8 CM\_PER\_EMIF\_CLKCTRL Register (offset = 28h) [reset = 30000h]

CM\_PER\_EMIF\_CLKCTRL is shown in Figure 8-35 and described in Table 8-38. This register manages the EMIF clocks.

| Figure 8-35. CM_PER_EMIF_CLKCTRL Register   | Figure 8-35. CM_PER_EMIF_CLKCTRL Register   | Figure 8-35. CM_PER_EMIF_CLKCTRL Register   | Figure 8-35. CM_PER_EMIF_CLKCTRL Register   | Figure 8-35. CM_PER_EMIF_CLKCTRL Register   | Figure 8-35. CM_PER_EMIF_CLKCTRL Register   | Figure 8-35. CM_PER_EMIF_CLKCTRL Register   | Figure 8-35. CM_PER_EMIF_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             |                                             |                                             |                                             |                                             | R-3h                                        | R-3h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-38. CM\_PER\_EMIF\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

<!-- image -->

## 8.1.12.1.9 CM\_PER\_OCMCRAM\_CLKCTRL Register (offset = 2Ch) [reset = 30000h]

CM\_PER\_OCMCRAM\_CLKCTRL is shown in Figure 8-36 and described in Table 8-39. This register manages the OCMC clocks.

| Figure 8-36. CM_PER_OCMCRAM_CLKCTRL Register   | Figure 8-36. CM_PER_OCMCRAM_CLKCTRL Register   | Figure 8-36. CM_PER_OCMCRAM_CLKCTRL Register   | Figure 8-36. CM_PER_OCMCRAM_CLKCTRL Register   | Figure 8-36. CM_PER_OCMCRAM_CLKCTRL Register   | Figure 8-36. CM_PER_OCMCRAM_CLKCTRL Register   | Figure 8-36. CM_PER_OCMCRAM_CLKCTRL Register   | Figure 8-36. CM_PER_OCMCRAM_CLKCTRL Register   |
|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|
| 31                                             | 30                                             | 29                                             | 28                                             | 27                                             | 26                                             | 25                                             | 24                                             |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       |
| R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           |
| 23                                             | 22                                             | 21                                             | 20                                             | 19                                             | 18                                             | 17                                             | 16                                             |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | IDLEST                                         | IDLEST                                         |
|                                                |                                                |                                                |                                                |                                                |                                                | R-3h                                           | R-3h                                           |
| 15                                             | 14                                             | 13                                             | 12                                             | 11                                             | 10                                             | 9                                              | 8                                              |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       |
| R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           |
| 7                                              | 6                                              | 5                                              | 4                                              | 3                                              | 2                                              | 1                                              | 0                                              |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | MODULEMODE                                     | MODULEMODE                                     |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-39. CM\_PER\_OCMCRAM\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.10 CM\_PER\_GPMC\_CLKCTRL Register (offset = 30h) [reset = 30002h]

CM\_PER\_GPMC\_CLKCTRL is shown in Figure 8-37 and described in Table 8-40. This register manages the GPMC clocks.

| Figure 8-37. CM_PER_GPMC_CLKCTRL Register   | Figure 8-37. CM_PER_GPMC_CLKCTRL Register   | Figure 8-37. CM_PER_GPMC_CLKCTRL Register   | Figure 8-37. CM_PER_GPMC_CLKCTRL Register   | Figure 8-37. CM_PER_GPMC_CLKCTRL Register   | Figure 8-37. CM_PER_GPMC_CLKCTRL Register   | Figure 8-37. CM_PER_GPMC_CLKCTRL Register   | Figure 8-37. CM_PER_GPMC_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             |                                             |                                             |                                             |                                             | R-3h                                        | R-3h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-40. CM\_PER\_GPMC\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 2h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-2h

## 8.1.12.1.11 CM\_PER\_MCASP0\_CLKCTRL Register (offset = 34h) [reset = 30000h]

CM\_PER\_MCASP0\_CLKCTRL is shown in Figure 8-38 and described in Table 8-41. This register manages the MCASP0 clocks.

| Figure 8-38. CM_PER_MCASP0_CLKCTRL Register   | Figure 8-38. CM_PER_MCASP0_CLKCTRL Register   | Figure 8-38. CM_PER_MCASP0_CLKCTRL Register   | Figure 8-38. CM_PER_MCASP0_CLKCTRL Register   | Figure 8-38. CM_PER_MCASP0_CLKCTRL Register   | Figure 8-38. CM_PER_MCASP0_CLKCTRL Register   | Figure 8-38. CM_PER_MCASP0_CLKCTRL Register   | Figure 8-38. CM_PER_MCASP0_CLKCTRL Register   |
|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|
| 31                                            | 30                                            | 29                                            | 28                                            | 27                                            | 26                                            | 25                                            | 24                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 23                                            | 22                                            | 21                                            | 20                                            | 19                                            | 18                                            | 17                                            | 16                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | IDLEST                                        | IDLEST                                        |
|                                               |                                               |                                               |                                               |                                               |                                               | R-3h                                          | R-3h                                          |
| 15                                            | 14                                            | 13                                            | 12                                            | 11                                            | 10                                            | 9                                             | 8                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 7                                             | 6                                             | 5                                             | 4                                             | 3                                             | 2                                             | 1                                             | 0                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | MODULEMODE                                    | MODULEMODE                                    |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-41. CM\_PER\_MCASP0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.12 CM\_PER\_UART5\_CLKCTRL Register (offset = 38h) [reset = 30000h]

CM\_PER\_UART5\_CLKCTRL is shown in Figure 8-39 and described in Table 8-42. This register manages the UART5 clocks.

| Figure 8-39. CM_PER_UART5_CLKCTRL Register   | Figure 8-39. CM_PER_UART5_CLKCTRL Register   | Figure 8-39. CM_PER_UART5_CLKCTRL Register   | Figure 8-39. CM_PER_UART5_CLKCTRL Register   | Figure 8-39. CM_PER_UART5_CLKCTRL Register   | Figure 8-39. CM_PER_UART5_CLKCTRL Register   | Figure 8-39. CM_PER_UART5_CLKCTRL Register   | Figure 8-39. CM_PER_UART5_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | IDLEST                                       | IDLEST                                       |
|                                              |                                              |                                              |                                              |                                              |                                              | R-3h                                         | R-3h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-42. CM\_PER\_UART5\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.13 CM\_PER\_MMC0\_CLKCTRL Register (offset = 3Ch) [reset = 30000h]

CM\_PER\_MMC0\_CLKCTRL is shown in Figure 8-40 and described in Table 8-43. This register manages the MMC0 clocks.

| Figure 8-40. CM_PER_MMC0_CLKCTRL Register   | Figure 8-40. CM_PER_MMC0_CLKCTRL Register   | Figure 8-40. CM_PER_MMC0_CLKCTRL Register   | Figure 8-40. CM_PER_MMC0_CLKCTRL Register   | Figure 8-40. CM_PER_MMC0_CLKCTRL Register   | Figure 8-40. CM_PER_MMC0_CLKCTRL Register   | Figure 8-40. CM_PER_MMC0_CLKCTRL Register   | Figure 8-40. CM_PER_MMC0_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
|                                             |                                             | Reserved                                    |                                             |                                             | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             | R-0h                                        |                                             |                                             | R-0h                                        | R-3h                                        |                                             |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-43. CM\_PER\_MMC0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.14 CM\_PER\_ELM\_CLKCTRL Register (offset = 40h) [reset = 30000h]

CM\_PER\_ELM\_CLKCTRL is shown in Figure 8-41 and described in Table 8-44. This register manages the ELM clocks.

| Figure 8-41. CM_PER_ELM_CLKCTRL Register   | Figure 8-41. CM_PER_ELM_CLKCTRL Register   | Figure 8-41. CM_PER_ELM_CLKCTRL Register   | Figure 8-41. CM_PER_ELM_CLKCTRL Register   | Figure 8-41. CM_PER_ELM_CLKCTRL Register   | Figure 8-41. CM_PER_ELM_CLKCTRL Register   | Figure 8-41. CM_PER_ELM_CLKCTRL Register   | Figure 8-41. CM_PER_ELM_CLKCTRL Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | IDLEST                                     | IDLEST                                     |
|                                            |                                            |                                            |                                            |                                            |                                            | R-3h                                       | R-3h                                       |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | MODULEMODE                                 | MODULEMODE                                 |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-44. CM\_PER\_ELM\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.15 CM\_PER\_I2C2\_CLKCTRL Register (offset = 44h) [reset = 30000h]

CM\_PER\_I2C2\_CLKCTRL is shown in Figure 8-42 and described in Table 8-45. This register manages the I2C2 clocks.

| Figure 8-42. CM_PER_I2C2_CLKCTRL Register   | Figure 8-42. CM_PER_I2C2_CLKCTRL Register   | Figure 8-42. CM_PER_I2C2_CLKCTRL Register   | Figure 8-42. CM_PER_I2C2_CLKCTRL Register   | Figure 8-42. CM_PER_I2C2_CLKCTRL Register   | Figure 8-42. CM_PER_I2C2_CLKCTRL Register   | Figure 8-42. CM_PER_I2C2_CLKCTRL Register   | Figure 8-42. CM_PER_I2C2_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             |                                             |                                             |                                             |                                             | R-3h                                        | R-3h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-45. CM\_PER\_I2C2\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.16 CM\_PER\_I2C1\_CLKCTRL Register (offset = 48h) [reset = 30000h]

CM\_PER\_I2C1\_CLKCTRL is shown in Figure 8-43 and described in Table 8-46. This register manages the I2C1 clocks.

| Figure 8-43. CM_PER_I2C1_CLKCTRL Register   | Figure 8-43. CM_PER_I2C1_CLKCTRL Register   | Figure 8-43. CM_PER_I2C1_CLKCTRL Register   | Figure 8-43. CM_PER_I2C1_CLKCTRL Register   | Figure 8-43. CM_PER_I2C1_CLKCTRL Register   | Figure 8-43. CM_PER_I2C1_CLKCTRL Register   | Figure 8-43. CM_PER_I2C1_CLKCTRL Register   | Figure 8-43. CM_PER_I2C1_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             |                                             |                                             |                                             |                                             | R-3h                                        | R-3h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-46. CM\_PER\_I2C1\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.17 CM\_PER\_SPI0\_CLKCTRL Register (offset = 4Ch) [reset = 30000h]

CM\_PER\_SPI0\_CLKCTRL is shown in Figure 8-44 and described in Table 8-47. This register manages the SPI0 clocks.

| Figure 8-44. CM_PER_SPI0_CLKCTRL Register   | Figure 8-44. CM_PER_SPI0_CLKCTRL Register   | Figure 8-44. CM_PER_SPI0_CLKCTRL Register   | Figure 8-44. CM_PER_SPI0_CLKCTRL Register   | Figure 8-44. CM_PER_SPI0_CLKCTRL Register   | Figure 8-44. CM_PER_SPI0_CLKCTRL Register   | Figure 8-44. CM_PER_SPI0_CLKCTRL Register   | Figure 8-44. CM_PER_SPI0_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             |                                             |                                             |                                             |                                             | R-3h                                        | R-3h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-47. CM\_PER\_SPI0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.18 CM\_PER\_SPI1\_CLKCTRL Register (offset = 50h) [reset = 30000h]

CM\_PER\_SPI1\_CLKCTRL is shown in Figure 8-45 and described in Table 8-48. This register manages the SPI1 clocks.

| Figure 8-45. CM_PER_SPI1_CLKCTRL Register   | Figure 8-45. CM_PER_SPI1_CLKCTRL Register   | Figure 8-45. CM_PER_SPI1_CLKCTRL Register   | Figure 8-45. CM_PER_SPI1_CLKCTRL Register   | Figure 8-45. CM_PER_SPI1_CLKCTRL Register   | Figure 8-45. CM_PER_SPI1_CLKCTRL Register   | Figure 8-45. CM_PER_SPI1_CLKCTRL Register   | Figure 8-45. CM_PER_SPI1_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             |                                             |                                             |                                             |                                             | R-3h                                        | R-3h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-48. CM\_PER\_SPI1\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.19 CM\_PER\_L4LS\_CLKCTRL Register (offset = 60h) [reset = 2h]

CM\_PER\_L4LS\_CLKCTRL is shown in Figure 8-46 and described in Table 8-49. This register manages the L4LS clocks.

| Figure 8-46. CM_PER_L4LS_CLKCTRL Register   | Figure 8-46. CM_PER_L4LS_CLKCTRL Register   | Figure 8-46. CM_PER_L4LS_CLKCTRL Register   | Figure 8-46. CM_PER_L4LS_CLKCTRL Register   | Figure 8-46. CM_PER_L4LS_CLKCTRL Register   | Figure 8-46. CM_PER_L4LS_CLKCTRL Register   | Figure 8-46. CM_PER_L4LS_CLKCTRL Register   | Figure 8-46. CM_PER_L4LS_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             |                                             |                                             |                                             |                                             | R-0h                                        | R-0h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-49. CM\_PER\_L4LS\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 0h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 2h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-2h

<!-- image -->

www.ti.com

## 8.1.12.1.20 CM\_PER\_MCASP1\_CLKCTRL Register (offset = 68h) [reset = 30000h]

CM\_PER\_MCASP1\_CLKCTRL is shown in Figure 8-47 and described in Table 8-50. This register manages the MCASP1 clocks.

## Figure 8-47. CM\_PER\_MCASP1\_CLKCTRL Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24         |
|----------|----------|----------|----------|----------|----------|------------|------------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16         |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | IDLEST     | IDLEST     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-3h       | R-3h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | MODULEMODE | MODULEMODE |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-50. CM\_PER\_MCASP1\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.21 CM\_PER\_UART1\_CLKCTRL Register (offset = 6Ch) [reset = 30000h]

CM\_PER\_UART1\_CLKCTRL is shown in Figure 8-48 and described in Table 8-51. This register manages the UART1 clocks.

| Figure 8-48. CM_PER_UART1_CLKCTRL Register   | Figure 8-48. CM_PER_UART1_CLKCTRL Register   | Figure 8-48. CM_PER_UART1_CLKCTRL Register   | Figure 8-48. CM_PER_UART1_CLKCTRL Register   | Figure 8-48. CM_PER_UART1_CLKCTRL Register   | Figure 8-48. CM_PER_UART1_CLKCTRL Register   | Figure 8-48. CM_PER_UART1_CLKCTRL Register   | Figure 8-48. CM_PER_UART1_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | IDLEST                                       | IDLEST                                       |
|                                              |                                              |                                              |                                              |                                              |                                              | R-3h                                         | R-3h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-51. CM\_PER\_UART1\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.22 CM\_PER\_UART2\_CLKCTRL Register (offset = 70h) [reset = 30000h]

CM\_PER\_UART2\_CLKCTRL is shown in Figure 8-49 and described in Table 8-52. This register manages the UART2 clocks.

| Figure 8-49. CM_PER_UART2_CLKCTRL Register   | Figure 8-49. CM_PER_UART2_CLKCTRL Register   | Figure 8-49. CM_PER_UART2_CLKCTRL Register   | Figure 8-49. CM_PER_UART2_CLKCTRL Register   | Figure 8-49. CM_PER_UART2_CLKCTRL Register   | Figure 8-49. CM_PER_UART2_CLKCTRL Register   | Figure 8-49. CM_PER_UART2_CLKCTRL Register   | Figure 8-49. CM_PER_UART2_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | IDLEST                                       | IDLEST                                       |
|                                              |                                              |                                              |                                              |                                              |                                              | R-3h                                         | R-3h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-52. CM\_PER\_UART2\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.23 CM\_PER\_UART3\_CLKCTRL Register (offset = 74h) [reset = 30000h]

CM\_PER\_UART3\_CLKCTRL is shown in Figure 8-50 and described in Table 8-53. This register manages the UART3 clocks.

| Figure 8-50. CM_PER_UART3_CLKCTRL Register   | Figure 8-50. CM_PER_UART3_CLKCTRL Register   | Figure 8-50. CM_PER_UART3_CLKCTRL Register   | Figure 8-50. CM_PER_UART3_CLKCTRL Register   | Figure 8-50. CM_PER_UART3_CLKCTRL Register   | Figure 8-50. CM_PER_UART3_CLKCTRL Register   | Figure 8-50. CM_PER_UART3_CLKCTRL Register   | Figure 8-50. CM_PER_UART3_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | IDLEST                                       | IDLEST                                       |
|                                              |                                              |                                              |                                              |                                              |                                              | R-3h                                         | R-3h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-53. CM\_PER\_UART3\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.24 CM\_PER\_UART4\_CLKCTRL Register (offset = 78h) [reset = 30000h]

CM\_PER\_UART4\_CLKCTRL is shown in Figure 8-51 and described in Table 8-54. This register manages the UART4 clocks.

| Figure 8-51. CM_PER_UART4_CLKCTRL Register   | Figure 8-51. CM_PER_UART4_CLKCTRL Register   | Figure 8-51. CM_PER_UART4_CLKCTRL Register   | Figure 8-51. CM_PER_UART4_CLKCTRL Register   | Figure 8-51. CM_PER_UART4_CLKCTRL Register   | Figure 8-51. CM_PER_UART4_CLKCTRL Register   | Figure 8-51. CM_PER_UART4_CLKCTRL Register   | Figure 8-51. CM_PER_UART4_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | IDLEST                                       | IDLEST                                       |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-3h                                         | R-3h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-54. CM\_PER\_UART4\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.25 CM\_PER\_TIMER7\_CLKCTRL Register (offset = 7Ch) [reset = 30000h]

CM\_PER\_TIMER7\_CLKCTRL is shown in Figure 8-52 and described in Table 8-55. This register manages the TIMER7 clocks.

| Figure 8-52. CM_PER_TIMER7_CLKCTRL Register   | Figure 8-52. CM_PER_TIMER7_CLKCTRL Register   | Figure 8-52. CM_PER_TIMER7_CLKCTRL Register   | Figure 8-52. CM_PER_TIMER7_CLKCTRL Register   | Figure 8-52. CM_PER_TIMER7_CLKCTRL Register   | Figure 8-52. CM_PER_TIMER7_CLKCTRL Register   | Figure 8-52. CM_PER_TIMER7_CLKCTRL Register   | Figure 8-52. CM_PER_TIMER7_CLKCTRL Register   |
|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|
| 31                                            | 30                                            | 29                                            | 28                                            | 27                                            | 26                                            | 25                                            | 24                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 23                                            | 22                                            | 21                                            | 20                                            | 19                                            | 18                                            | 17                                            | 16                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | IDLEST                                        | IDLEST                                        |
|                                               |                                               |                                               |                                               |                                               |                                               | R-3h                                          | R-3h                                          |
| 15                                            | 14                                            | 13                                            | 12                                            | 11                                            | 10                                            | 9                                             | 8                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 7                                             | 6                                             | 5                                             | 4                                             | 3                                             | 2                                             | 1                                             | 0                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | MODULEMODE                                    | MODULEMODE                                    |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-55. CM\_PER\_TIMER7\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.26 CM\_PER\_TIMER2\_CLKCTRL Register (offset = 80h) [reset = 30000h]

CM\_PER\_TIMER2\_CLKCTRL is shown in Figure 8-53 and described in Table 8-56. This register manages the TIMER2 clocks.

| Figure 8-53. CM_PER_TIMER2_CLKCTRL Register   | Figure 8-53. CM_PER_TIMER2_CLKCTRL Register   | Figure 8-53. CM_PER_TIMER2_CLKCTRL Register   | Figure 8-53. CM_PER_TIMER2_CLKCTRL Register   | Figure 8-53. CM_PER_TIMER2_CLKCTRL Register   | Figure 8-53. CM_PER_TIMER2_CLKCTRL Register   | Figure 8-53. CM_PER_TIMER2_CLKCTRL Register   | Figure 8-53. CM_PER_TIMER2_CLKCTRL Register   |
|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|
| 31                                            | 30                                            | 29                                            | 28                                            | 27                                            | 26                                            | 25                                            | 24                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 23                                            | 22                                            | 21                                            | 20                                            | 19                                            | 18                                            | 17                                            | 16                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | IDLEST                                        | IDLEST                                        |
|                                               |                                               |                                               |                                               |                                               |                                               | R-3h                                          | R-3h                                          |
| 15                                            | 14                                            | 13                                            | 12                                            | 11                                            | 10                                            | 9                                             | 8                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 7                                             | 6                                             | 5                                             | 4                                             | 3                                             | 2                                             | 1                                             | 0                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | MODULEMODE                                    | MODULEMODE                                    |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-56. CM\_PER\_TIMER2\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.27 CM\_PER\_TIMER3\_CLKCTRL Register (offset = 84h) [reset = 30000h]

CM\_PER\_TIMER3\_CLKCTRL is shown in Figure 8-54 and described in Table 8-57. This register manages the TIMER3 clocks.

| Figure 8-54. CM_PER_TIMER3_CLKCTRL Register   | Figure 8-54. CM_PER_TIMER3_CLKCTRL Register   | Figure 8-54. CM_PER_TIMER3_CLKCTRL Register   | Figure 8-54. CM_PER_TIMER3_CLKCTRL Register   | Figure 8-54. CM_PER_TIMER3_CLKCTRL Register   | Figure 8-54. CM_PER_TIMER3_CLKCTRL Register   | Figure 8-54. CM_PER_TIMER3_CLKCTRL Register   | Figure 8-54. CM_PER_TIMER3_CLKCTRL Register   |
|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|
| 31                                            | 30                                            | 29                                            | 28                                            | 27                                            | 26                                            | 25                                            | 24                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 23                                            | 22                                            | 21                                            | 20                                            | 19                                            | 18                                            | 17                                            | 16                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | IDLEST                                        | IDLEST                                        |
|                                               |                                               |                                               |                                               |                                               |                                               | R-3h                                          | R-3h                                          |
| 15                                            | 14                                            | 13                                            | 12                                            | 11                                            | 10                                            | 9                                             | 8                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 7                                             | 6                                             | 5                                             | 4                                             | 3                                             | 2                                             | 1                                             | 0                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | MODULEMODE                                    | MODULEMODE                                    |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-57. CM\_PER\_TIMER3\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.28 CM\_PER\_TIMER4\_CLKCTRL Register (offset = 88h) [reset = 30000h]

CM\_PER\_TIMER4\_CLKCTRL is shown in Figure 8-55 and described in Table 8-58. This register manages the TIMER4 clocks.

| Figure 8-55. CM_PER_TIMER4_CLKCTRL Register   | Figure 8-55. CM_PER_TIMER4_CLKCTRL Register   | Figure 8-55. CM_PER_TIMER4_CLKCTRL Register   | Figure 8-55. CM_PER_TIMER4_CLKCTRL Register   | Figure 8-55. CM_PER_TIMER4_CLKCTRL Register   | Figure 8-55. CM_PER_TIMER4_CLKCTRL Register   | Figure 8-55. CM_PER_TIMER4_CLKCTRL Register   | Figure 8-55. CM_PER_TIMER4_CLKCTRL Register   |
|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|
| 31                                            | 30                                            | 29                                            | 28                                            | 27                                            | 26                                            | 25                                            | 24                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 23                                            | 22                                            | 21                                            | 20                                            | 19                                            | 18                                            | 17                                            | 16                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | IDLEST                                        | IDLEST                                        |
|                                               |                                               |                                               |                                               |                                               |                                               | R-3h                                          | R-3h                                          |
| 15                                            | 14                                            | 13                                            | 12                                            | 11                                            | 10                                            | 9                                             | 8                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 7                                             | 6                                             | 5                                             | 4                                             | 3                                             | 2                                             | 1                                             | 0                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | MODULEMODE                                    | MODULEMODE                                    |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-58. CM\_PER\_TIMER4\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.29 CM\_PER\_GPIO1\_CLKCTRL Register (offset = ACh) [reset = 30000h]

CM\_PER\_GPIO1\_CLKCTRL is shown in Figure 8-56 and described in Table 8-59. This register manages the GPIO1 clocks.

| Figure 8-56. CM_PER_GPIO1_CLKCTRL Register   | Figure 8-56. CM_PER_GPIO1_CLKCTRL Register   | Figure 8-56. CM_PER_GPIO1_CLKCTRL Register   | Figure 8-56. CM_PER_GPIO1_CLKCTRL Register   | Figure 8-56. CM_PER_GPIO1_CLKCTRL Register   | Figure 8-56. CM_PER_GPIO1_CLKCTRL Register   | Figure 8-56. CM_PER_GPIO1_CLKCTRL Register   | Figure 8-56. CM_PER_GPIO1_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
|                                              |                                              | Reserved                                     |                                              |                                              | OPTFCLKEN_ GPIO_1_GDBC LK                    | IDLEST                                       | IDLEST                                       |
|                                              |                                              | R-0h                                         |                                              |                                              | R/W-0h                                       | R-3h                                         | R-3h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-59. CM\_PER\_GPIO1\_CLKCTRL Register Field Descriptions

| Bit   | Field                    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|--------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | OPTFCLKEN_GPIO_1_G DBCLK | R/W    | 0h      | Optional functional clock control. 0x0 = FCLK_DIS : Optional functional clock is disabled 0x1 = FCLK_EN : Optional functional clock is enabled                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST                   | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE               | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guaranteed to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.30 CM\_PER\_GPIO2\_CLKCTRL Register (offset = B0h) [reset = 30000h]

CM\_PER\_GPIO2\_CLKCTRL is shown in Figure 8-57 and described in Table 8-60. This register manages the GPIO2 clocks.

| Figure 8-57. CM_PER_GPIO2_CLKCTRL Register   | Figure 8-57. CM_PER_GPIO2_CLKCTRL Register   | Figure 8-57. CM_PER_GPIO2_CLKCTRL Register   | Figure 8-57. CM_PER_GPIO2_CLKCTRL Register   | Figure 8-57. CM_PER_GPIO2_CLKCTRL Register   | Figure 8-57. CM_PER_GPIO2_CLKCTRL Register   | Figure 8-57. CM_PER_GPIO2_CLKCTRL Register   | Figure 8-57. CM_PER_GPIO2_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           | Reserved                                     |
| 22                                           | 22                                           | 22                                           | 22                                           | 22                                           | 22                                           | 22                                           | 22                                           |
| 21                                           | 21                                           | 21                                           | 21                                           | 21                                           | 21                                           | 21                                           | 21                                           |
| 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |                                              | IDLEST                                       | Reserved                                     |
|                                              |                                              | OPTFCLKEN_ GPIO_2_GDBC LK                    |                                              | R/W-0h                                       | R-0h                                         |                                              |                                              |
| 14                                           |                                              | R-3h                                         |                                              | 10                                           | 12                                           | 11                                           | 11                                           |
|                                              | 9                                            | 8                                            | Reserved                                     | 6                                            | R-0h 5                                       | 4                                            | 3                                            |
| 2                                            | 2                                            | 2                                            | 2                                            | 2                                            | 2                                            | 2                                            | 2                                            |
| 1                                            | 1                                            | 1                                            | 1                                            | 1                                            | 1                                            | 1                                            | 1                                            |
| 0                                            | Reserved MODULEMODE                          |                                              |                                              |                                              |                                              |                                              |                                              |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-60. CM\_PER\_GPIO2\_CLKCTRL Register Field Descriptions

| Bit   | Field                    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|--------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | OPTFCLKEN_GPIO_2_G DBCLK | R/W    | 0h      | Optional functional clock control. 0x0 = FCLK_DIS : Optional functional clock is disabled 0x1 = FCLK_EN : Optional functional clock is enabled                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST                   | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE               | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.31 CM\_PER\_GPIO3\_CLKCTRL Register (offset = B4h) [reset = 30000h]

CM\_PER\_GPIO3\_CLKCTRL is shown in Figure 8-58 and described in Table 8-61. This register manages the GPIO3 clocks.

| Figure 8-58. CM_PER_GPIO3_CLKCTRL Register   | Figure 8-58. CM_PER_GPIO3_CLKCTRL Register   | Figure 8-58. CM_PER_GPIO3_CLKCTRL Register   | Figure 8-58. CM_PER_GPIO3_CLKCTRL Register   | Figure 8-58. CM_PER_GPIO3_CLKCTRL Register   | Figure 8-58. CM_PER_GPIO3_CLKCTRL Register   | Figure 8-58. CM_PER_GPIO3_CLKCTRL Register   | Figure 8-58. CM_PER_GPIO3_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
|                                              |                                              | Reserved                                     |                                              |                                              | OPTFCLKEN_ GPIO_3_GDBC LK                    | IDLEST                                       | IDLEST                                       |
|                                              |                                              | R-0h                                         |                                              |                                              | R/W-0h                                       | R-3h                                         | R-3h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-61. CM\_PER\_GPIO3\_CLKCTRL Register Field Descriptions

| Bit   | Field                    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|--------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | OPTFCLKEN_GPIO_3_G DBCLK | R/W    | 0h      | Optional functional clock control. 0x0 = FCLK_DIS : Optional functional clock is disabled 0x1 = FCLK_EN : Optional functional clock is enabled                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST                   | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE               | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.32 CM\_PER\_TPCC\_CLKCTRL Register (offset = BCh) [reset = 30000h]

CM\_PER\_TPCC\_CLKCTRL is shown in Figure 8-59 and described in Table 8-62. This register manages the TPCC clocks.

| Figure 8-59. CM_PER_TPCC_CLKCTRL Register   | Figure 8-59. CM_PER_TPCC_CLKCTRL Register   | Figure 8-59. CM_PER_TPCC_CLKCTRL Register   | Figure 8-59. CM_PER_TPCC_CLKCTRL Register   | Figure 8-59. CM_PER_TPCC_CLKCTRL Register   | Figure 8-59. CM_PER_TPCC_CLKCTRL Register   | Figure 8-59. CM_PER_TPCC_CLKCTRL Register   | Figure 8-59. CM_PER_TPCC_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             |                                             |                                             |                                             |                                             | R-3h                                        | R-3h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-62. CM\_PER\_TPCC\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.33 CM\_PER\_DCAN0\_CLKCTRL Register (offset = C0h) [reset = 30000h]

CM\_PER\_DCAN0\_CLKCTRL is shown in Figure 8-60 and described in Table 8-63. This register manages the DCAN0 clocks.

|          | Figure 8-60. CM_PER_DCAN0_CLKCTRL Register   | Figure 8-60. CM_PER_DCAN0_CLKCTRL Register   | Figure 8-60. CM_PER_DCAN0_CLKCTRL Register   | Figure 8-60. CM_PER_DCAN0_CLKCTRL Register   | Figure 8-60. CM_PER_DCAN0_CLKCTRL Register   | Figure 8-60. CM_PER_DCAN0_CLKCTRL Register   | Figure 8-60. CM_PER_DCAN0_CLKCTRL Register   |
|----------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31       | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h     | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23       | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
|          |                                              | Reserved                                     |                                              |                                              | Reserved                                     | IDLEST                                       | IDLEST                                       |
|          |                                              | R-0h                                         |                                              |                                              | R-0h                                         | R-3h                                         |                                              |
| 15       | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h     | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7        | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-63. CM\_PER\_DCAN0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.34 CM\_PER\_DCAN1\_CLKCTRL Register (offset = C4h) [reset = 30000h]

CM\_PER\_DCAN1\_CLKCTRL is shown in Figure 8-61 and described in Table 8-64. This register manages the DCAN1 clocks.

| Figure 8-61. CM_PER_DCAN1_CLKCTRL Register   | Figure 8-61. CM_PER_DCAN1_CLKCTRL Register   | Figure 8-61. CM_PER_DCAN1_CLKCTRL Register   | Figure 8-61. CM_PER_DCAN1_CLKCTRL Register   | Figure 8-61. CM_PER_DCAN1_CLKCTRL Register   | Figure 8-61. CM_PER_DCAN1_CLKCTRL Register   | Figure 8-61. CM_PER_DCAN1_CLKCTRL Register   | Figure 8-61. CM_PER_DCAN1_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
|                                              |                                              | Reserved                                     |                                              |                                              | Reserved                                     | IDLEST                                       | IDLEST                                       |
|                                              |                                              | R-0h                                         |                                              |                                              | R-0h                                         | R-3h                                         |                                              |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-64. CM\_PER\_DCAN1\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

<!-- image -->

## 8.1.12.1.35 CM\_PER\_EPWMSS1\_CLKCTRL Register (offset = CCh) [reset = 30000h]

CM\_PER\_EPWMSS1\_CLKCTRL is shown in Figure 8-62 and described in Table 8-65. This register manages the PWMSS1 clocks.

| Figure 8-62. CM_PER_EPWMSS1_CLKCTRL Register   | Figure 8-62. CM_PER_EPWMSS1_CLKCTRL Register   | Figure 8-62. CM_PER_EPWMSS1_CLKCTRL Register   | Figure 8-62. CM_PER_EPWMSS1_CLKCTRL Register   | Figure 8-62. CM_PER_EPWMSS1_CLKCTRL Register   | Figure 8-62. CM_PER_EPWMSS1_CLKCTRL Register   | Figure 8-62. CM_PER_EPWMSS1_CLKCTRL Register   | Figure 8-62. CM_PER_EPWMSS1_CLKCTRL Register   |
|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|
| 31                                             | 30                                             | 29                                             | 28                                             | 27                                             | 26                                             | 25                                             | 24                                             |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       |
| R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           |
| 23                                             | 22                                             | 21                                             | 20                                             | 19                                             | 18                                             | 17                                             | 16                                             |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | IDLEST                                         | IDLEST                                         |
|                                                |                                                |                                                |                                                |                                                |                                                | R-3h                                           | R-3h                                           |
| 15                                             | 14                                             | 13                                             | 12                                             | 11                                             | 10                                             | 9                                              | 8                                              |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       |
| R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           |
| 7                                              | 6                                              | 5                                              | 4                                              | 3                                              | 2                                              | 1                                              | 0                                              |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | MODULEMODE                                     | MODULEMODE                                     |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-65. CM\_PER\_EPWMSS1\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.36 CM\_PER\_EPWMSS0\_CLKCTRL Register (offset = D4h) [reset = 30000h]

CM\_PER\_EPWMSS0\_CLKCTRL is shown in Figure 8-63 and described in Table 8-66. This register manages the PWMSS0 clocks.

## Figure 8-63. CM\_PER\_EPWMSS0\_CLKCTRL Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24         |
|----------|----------|----------|----------|----------|----------|------------|------------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16         |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | IDLEST     | IDLEST     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-3h       | R-3h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | MODULEMODE | MODULEMODE |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-66. CM\_PER\_EPWMSS0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

<!-- image -->

## 8.1.12.1.37 CM\_PER\_EPWMSS2\_CLKCTRL Register (offset = D8h) [reset = 30000h]

CM\_PER\_EPWMSS2\_CLKCTRL is shown in Figure 8-64 and described in Table 8-67. This register manages the PWMSS2 clocks.

| Figure 8-64. CM_PER_EPWMSS2_CLKCTRL Register   | Figure 8-64. CM_PER_EPWMSS2_CLKCTRL Register   | Figure 8-64. CM_PER_EPWMSS2_CLKCTRL Register   | Figure 8-64. CM_PER_EPWMSS2_CLKCTRL Register   | Figure 8-64. CM_PER_EPWMSS2_CLKCTRL Register   | Figure 8-64. CM_PER_EPWMSS2_CLKCTRL Register   | Figure 8-64. CM_PER_EPWMSS2_CLKCTRL Register   | Figure 8-64. CM_PER_EPWMSS2_CLKCTRL Register   |
|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|
| 31                                             | 30                                             | 29                                             | 28                                             | 27                                             | 26                                             | 25                                             | 24                                             |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       |
| R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           |
| 23                                             | 22                                             | 21                                             | 20                                             | 19                                             | 18                                             | 17                                             | 16                                             |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | IDLEST                                         | IDLEST                                         |
|                                                |                                                |                                                |                                                |                                                |                                                | R-3h                                           | R-3h                                           |
| 15                                             | 14                                             | 13                                             | 12                                             | 11                                             | 10                                             | 9                                              | 8                                              |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       |
| R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           | R-0h                                           |
| 7                                              | 6                                              | 5                                              | 4                                              | 3                                              | 2                                              | 1                                              | 0                                              |
| Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | Reserved                                       | MODULEMODE                                     | MODULEMODE                                     |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-67. CM\_PER\_EPWMSS2\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.38 CM\_PER\_L3\_INSTR\_CLKCTRL Register (offset = DCh) [reset = 2h]

CM\_PER\_L3\_INSTR\_CLKCTRL is shown in Figure 8-65 and described in Table 8-68. This register manages the L3 INSTR clocks.

## Figure 8-65. CM\_PER\_L3\_INSTR\_CLKCTRL Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24         |
|----------|----------|----------|----------|----------|----------|------------|------------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16         |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | IDLEST     | IDLEST     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | MODULEMODE | MODULEMODE |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-68. CM\_PER\_L3\_INSTR\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 0h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 2h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-2h

## 8.1.12.1.39 CM\_PER\_L3\_CLKCTRL Register (offset = E0h) [reset = 2h]

CM\_PER\_L3\_CLKCTRL is shown in Figure 8-66 and described in Table 8-69. This register manages the L3 Interconnect clocks.

| Figure 8-66. CM_PER_L3_CLKCTRL Register   | Figure 8-66. CM_PER_L3_CLKCTRL Register   | Figure 8-66. CM_PER_L3_CLKCTRL Register   | Figure 8-66. CM_PER_L3_CLKCTRL Register   | Figure 8-66. CM_PER_L3_CLKCTRL Register   | Figure 8-66. CM_PER_L3_CLKCTRL Register   | Figure 8-66. CM_PER_L3_CLKCTRL Register   | Figure 8-66. CM_PER_L3_CLKCTRL Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | IDLEST                                    | IDLEST                                    |
|                                           |                                           |                                           |                                           |                                           |                                           | R-0h                                      | R-0h                                      |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | MODULEMODE                                | MODULEMODE                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-69. CM\_PER\_L3\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 0h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 2h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-2h

<!-- image -->

www.ti.com

## 8.1.12.1.40 CM\_PER\_IEEE5000\_CLKCTRL Register (offset = E4h) [reset = 70002h]

CM\_PER\_IEEE5000\_CLKCTRL is shown in Figure 8-67 and described in Table 8-70. This register manages the IEEE1500 clocks.

## Figure 8-67. CM\_PER\_IEEE5000\_CLKCTRL Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24         |
|----------|----------|----------|----------|----------|----------|------------|------------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16         |
| Reserved | Reserved | Reserved | Reserved | Reserved | STBYST   | IDLEST     | IDLEST     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-1h     | R-3h       | R-3h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | MODULEMODE | MODULEMODE |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-70. CM\_PER\_IEEE5000\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | STBYST     | R      | 1h      | Module standby status. 0x0 = Func : Module is functional (not in standby) 0x1 = Standby : Module is in standby                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 2h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-2h

<!-- image -->

## 8.1.12.1.41 CM\_PER\_PRU\_ICSS\_CLKCTRL Register (offset = E8h) [reset = 70000h]

CM\_PER\_PRU\_ICSS\_CLKCTRL is shown in Figure 8-68 and described in Table 8-71. This register manages the PRU-ICSS clocks.

| Figure 8-68. CM_PER_PRU_ICSS_CLKCTRL Register   | Figure 8-68. CM_PER_PRU_ICSS_CLKCTRL Register   | Figure 8-68. CM_PER_PRU_ICSS_CLKCTRL Register   | Figure 8-68. CM_PER_PRU_ICSS_CLKCTRL Register   | Figure 8-68. CM_PER_PRU_ICSS_CLKCTRL Register   | Figure 8-68. CM_PER_PRU_ICSS_CLKCTRL Register   | Figure 8-68. CM_PER_PRU_ICSS_CLKCTRL Register   | Figure 8-68. CM_PER_PRU_ICSS_CLKCTRL Register   |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| 31                                              | 30                                              | 29                                              | 28                                              | 27                                              | 26                                              | 25                                              | 24                                              |
| Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        |
| R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            |
| 23                                              | 22                                              | 21                                              | 20                                              | 19                                              | 18                                              | 17                                              | 16                                              |
|                                                 |                                                 | Reserved                                        |                                                 |                                                 | STBYST                                          | IDLEST                                          | IDLEST                                          |
|                                                 |                                                 | R-0h                                            |                                                 |                                                 | R-1h                                            | R-3h                                            |                                                 |
| 15                                              | 14                                              | 13                                              | 12                                              | 11                                              | 10                                              | 9                                               | 8                                               |
| Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        |
| R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            |
| 7                                               | 6                                               | 5                                               | 4                                               | 3                                               | 2                                               | 1                                               | 0                                               |
| Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | MODULEMODE                                      | MODULEMODE                                      |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-71. CM\_PER\_PRU\_ICSS\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | STBYST     | R      | 1h      | Module standby status. 0x0 = Func : Module is functional (not in standby) 0x1 = Standby : Module is in standby                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.42 CM\_PER\_TIMER5\_CLKCTRL Register (offset = ECh) [reset = 30000h]

CM\_PER\_TIMER5\_CLKCTRL is shown in Figure 8-69 and described in Table 8-72. This register manages the TIMER5 clocks.

| Figure 8-69. CM_PER_TIMER5_CLKCTRL Register   | Figure 8-69. CM_PER_TIMER5_CLKCTRL Register   | Figure 8-69. CM_PER_TIMER5_CLKCTRL Register   | Figure 8-69. CM_PER_TIMER5_CLKCTRL Register   | Figure 8-69. CM_PER_TIMER5_CLKCTRL Register   | Figure 8-69. CM_PER_TIMER5_CLKCTRL Register   | Figure 8-69. CM_PER_TIMER5_CLKCTRL Register   | Figure 8-69. CM_PER_TIMER5_CLKCTRL Register   |
|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|
| 31                                            | 30                                            | 29                                            | 28                                            | 27                                            | 26                                            | 25                                            | 24                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 23                                            | 22                                            | 21                                            | 20                                            | 19                                            | 18                                            | 17                                            | 16                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | IDLEST                                        | IDLEST                                        |
|                                               |                                               |                                               |                                               |                                               |                                               | R-3h                                          | R-3h                                          |
| 15                                            | 14                                            | 13                                            | 12                                            | 11                                            | 10                                            | 9                                             | 8                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 7                                             | 6                                             | 5                                             | 4                                             | 3                                             | 2                                             | 1                                             | 0                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | MODULEMODE                                    | MODULEMODE                                    |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-72. CM\_PER\_TIMER5\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.43 CM\_PER\_TIMER6\_CLKCTRL Register (offset = F0h) [reset = 30000h]

CM\_PER\_TIMER6\_CLKCTRL is shown in Figure 8-70 and described in Table 8-73. This register manages the TIMER6 clocks.

| Figure 8-70. CM_PER_TIMER6_CLKCTRL Register   | Figure 8-70. CM_PER_TIMER6_CLKCTRL Register   | Figure 8-70. CM_PER_TIMER6_CLKCTRL Register   | Figure 8-70. CM_PER_TIMER6_CLKCTRL Register   | Figure 8-70. CM_PER_TIMER6_CLKCTRL Register   | Figure 8-70. CM_PER_TIMER6_CLKCTRL Register   | Figure 8-70. CM_PER_TIMER6_CLKCTRL Register   | Figure 8-70. CM_PER_TIMER6_CLKCTRL Register   |
|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|
| 31                                            | 30                                            | 29                                            | 28                                            | 27                                            | 26                                            | 25                                            | 24                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 23                                            | 22                                            | 21                                            | 20                                            | 19                                            | 18                                            | 17                                            | 16                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | IDLEST                                        | IDLEST                                        |
|                                               |                                               |                                               |                                               |                                               |                                               | R-3h                                          | R-3h                                          |
| 15                                            | 14                                            | 13                                            | 12                                            | 11                                            | 10                                            | 9                                             | 8                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 7                                             | 6                                             | 5                                             | 4                                             | 3                                             | 2                                             | 1                                             | 0                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | MODULEMODE                                    | MODULEMODE                                    |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-73. CM\_PER\_TIMER6\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.44 CM\_PER\_MMC1\_CLKCTRL Register (offset = F4h) [reset = 30000h]

CM\_PER\_MMC1\_CLKCTRL is shown in Figure 8-71 and described in Table 8-74. This register manages the MMC1 clocks.

| Figure 8-71. CM_PER_MMC1_CLKCTRL Register   | Figure 8-71. CM_PER_MMC1_CLKCTRL Register   | Figure 8-71. CM_PER_MMC1_CLKCTRL Register   | Figure 8-71. CM_PER_MMC1_CLKCTRL Register   | Figure 8-71. CM_PER_MMC1_CLKCTRL Register   | Figure 8-71. CM_PER_MMC1_CLKCTRL Register   | Figure 8-71. CM_PER_MMC1_CLKCTRL Register   | Figure 8-71. CM_PER_MMC1_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
|                                             |                                             | Reserved                                    |                                             |                                             | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             | R-0h                                        |                                             |                                             | R-0h                                        | R-3h                                        |                                             |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-74. CM\_PER\_MMC1\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.45 CM\_PER\_MMC2\_CLKCTRL Register (offset = F8h) [reset = 30000h]

CM\_PER\_MMC2\_CLKCTRL is shown in Figure 8-72 and described in Table 8-75. This register manages the MMC2 clocks.

| Figure 8-72. CM_PER_MMC2_CLKCTRL Register   | Figure 8-72. CM_PER_MMC2_CLKCTRL Register   | Figure 8-72. CM_PER_MMC2_CLKCTRL Register   | Figure 8-72. CM_PER_MMC2_CLKCTRL Register   | Figure 8-72. CM_PER_MMC2_CLKCTRL Register   | Figure 8-72. CM_PER_MMC2_CLKCTRL Register   | Figure 8-72. CM_PER_MMC2_CLKCTRL Register   | Figure 8-72. CM_PER_MMC2_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
|                                             |                                             | Reserved                                    |                                             |                                             | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             | R-0h                                        |                                             |                                             | R-0h                                        | R-3h                                        |                                             |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-75. CM\_PER\_MMC2\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.46 CM\_PER\_TPTC1\_CLKCTRL Register (offset = FCh) [reset = 70000h]

CM\_PER\_TPTC1\_CLKCTRL is shown in Figure 8-73 and described in Table 8-76. This register manages the TPTC1 clocks.

| Figure 8-73. CM_PER_TPTC1_CLKCTRL Register   | Figure 8-73. CM_PER_TPTC1_CLKCTRL Register   | Figure 8-73. CM_PER_TPTC1_CLKCTRL Register   | Figure 8-73. CM_PER_TPTC1_CLKCTRL Register   | Figure 8-73. CM_PER_TPTC1_CLKCTRL Register   | Figure 8-73. CM_PER_TPTC1_CLKCTRL Register   | Figure 8-73. CM_PER_TPTC1_CLKCTRL Register   | Figure 8-73. CM_PER_TPTC1_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
|                                              |                                              | Reserved                                     |                                              |                                              | STBYST                                       | IDLEST                                       | IDLEST                                       |
|                                              |                                              | R-0h                                         |                                              |                                              | R-1h                                         | R-3h                                         | R-3h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-76. CM\_PER\_TPTC1\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | STBYST     | R      | 1h      | Module standby status. 0x0 = Func : Module is functional (not in standby) 0x1 = Standby : Module is in standby                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

## 8.1.12.1.47 CM\_PER\_TPTC2\_CLKCTRL Register (offset = 100h) [reset = 70000h]

CM\_PER\_TPTC2\_CLKCTRL is shown in Figure 8-74 and described in Table 8-77. This register manages the TPTC2 clocks.

| Figure 8-74. CM_PER_TPTC2_CLKCTRL Register   | Figure 8-74. CM_PER_TPTC2_CLKCTRL Register   | Figure 8-74. CM_PER_TPTC2_CLKCTRL Register   | Figure 8-74. CM_PER_TPTC2_CLKCTRL Register   | Figure 8-74. CM_PER_TPTC2_CLKCTRL Register   | Figure 8-74. CM_PER_TPTC2_CLKCTRL Register   | Figure 8-74. CM_PER_TPTC2_CLKCTRL Register   | Figure 8-74. CM_PER_TPTC2_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
|                                              |                                              | Reserved                                     |                                              |                                              | STBYST                                       | IDLEST                                       | IDLEST                                       |
|                                              |                                              | R-0h                                         |                                              |                                              | R-1h                                         | R-3h                                         | R-3h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-77. CM\_PER\_TPTC2\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | STBYST     | R      | 1h      | Module standby status. 0x0 = Func : Module is functional (not in standby) 0x1 = Standby : Module is in standby                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.48 CM\_PER\_SPINLOCK\_CLKCTRL Register (offset = 10Ch) [reset = 30000h]

CM\_PER\_SPINLOCK\_CLKCTRL is shown in Figure 8-75 and described in Table 8-78. This register manages the SPINLOCK clocks.

| Figure 8-75. CM_PER_SPINLOCK_CLKCTRL Register   | Figure 8-75. CM_PER_SPINLOCK_CLKCTRL Register   | Figure 8-75. CM_PER_SPINLOCK_CLKCTRL Register   | Figure 8-75. CM_PER_SPINLOCK_CLKCTRL Register   | Figure 8-75. CM_PER_SPINLOCK_CLKCTRL Register   | Figure 8-75. CM_PER_SPINLOCK_CLKCTRL Register   | Figure 8-75. CM_PER_SPINLOCK_CLKCTRL Register   | Figure 8-75. CM_PER_SPINLOCK_CLKCTRL Register   |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| 31                                              | 30                                              | 29                                              | 28                                              | 27                                              | 26                                              | 25                                              | 24                                              |
| Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        |
| R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            |
| 23                                              | 22                                              | 21                                              | 20                                              | 19                                              | 18                                              | 17                                              | 16                                              |
| Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | IDLEST                                          | IDLEST                                          |
|                                                 |                                                 |                                                 |                                                 |                                                 |                                                 | R-3h                                            | R-3h                                            |
| 15                                              | 14                                              | 13                                              | 12                                              | 11                                              | 10                                              | 9                                               | 8                                               |
| Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        |
| R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            |
| 7                                               | 6                                               | 5                                               | 4                                               | 3                                               | 2                                               | 1                                               | 0                                               |
| Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | MODULEMODE                                      | MODULEMODE                                      |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-78. CM\_PER\_SPINLOCK\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

<!-- image -->

## 8.1.12.1.49 CM\_PER\_MAILBOX0\_CLKCTRL Register (offset = 110h) [reset = 30000h]

CM\_PER\_MAILBOX0\_CLKCTRL is shown in Figure 8-76 and described in Table 8-79. This register manages the MAILBOX0 clocks.

| Figure 8-76. CM_PER_MAILBOX0_CLKCTRL Register   | Figure 8-76. CM_PER_MAILBOX0_CLKCTRL Register   | Figure 8-76. CM_PER_MAILBOX0_CLKCTRL Register   | Figure 8-76. CM_PER_MAILBOX0_CLKCTRL Register   | Figure 8-76. CM_PER_MAILBOX0_CLKCTRL Register   | Figure 8-76. CM_PER_MAILBOX0_CLKCTRL Register   | Figure 8-76. CM_PER_MAILBOX0_CLKCTRL Register   | Figure 8-76. CM_PER_MAILBOX0_CLKCTRL Register   |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| 31                                              | 30                                              | 29                                              | 28                                              | 27                                              | 26                                              | 25                                              | 24                                              |
| Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        |
| R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            |
| 23                                              | 22                                              | 21                                              | 20                                              | 19                                              | 18                                              | 17                                              | 16                                              |
| Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | IDLEST                                          | IDLEST                                          |
|                                                 |                                                 |                                                 |                                                 |                                                 |                                                 | R-3h                                            | R-3h                                            |
| 15                                              | 14                                              | 13                                              | 12                                              | 11                                              | 10                                              | 9                                               | 8                                               |
| Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        |
| R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            | R-0h                                            |
| 7                                               | 6                                               | 5                                               | 4                                               | 3                                               | 2                                               | 1                                               | 0                                               |
| Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | Reserved                                        | MODULEMODE                                      | MODULEMODE                                      |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-79. CM\_PER\_MAILBOX0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.50 CM\_PER\_L4HS\_CLKSTCTRL Register (offset = 11Ch) [reset = 7Ah]

CM\_PER\_L4HS\_CLKSTCTRL is shown in Figure 8-77 and described in Table 8-80.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

|          | Figure 8-77. CM_PER_L4HS_CLKSTCTRL Register   | Figure 8-77. CM_PER_L4HS_CLKSTCTRL Register   | Figure 8-77. CM_PER_L4HS_CLKSTCTRL Register   | Figure 8-77. CM_PER_L4HS_CLKSTCTRL Register   | Figure 8-77. CM_PER_L4HS_CLKSTCTRL Register   | Figure 8-77. CM_PER_L4HS_CLKSTCTRL Register   | Figure 8-77. CM_PER_L4HS_CLKSTCTRL Register   |
|----------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|
| 31       | 30                                            | 29                                            | 28                                            | 27                                            | 26                                            | 25                                            | 24                                            |
| Reserved | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h     | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 23       | 22                                            | 21                                            | 20                                            | 19                                            | 18                                            | 17                                            | 16                                            |
| Reserved | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h     | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 15       | 14                                            | 13                                            | 12                                            | 11                                            | 10                                            | 9                                             | 8                                             |
| Reserved | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h     | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 7        | 6                                             | 5                                             | 4                                             | 3                                             | 2                                             | 1                                             | 0                                             |
| Reserved | CLKACTIVITY_ CPSW_5MHZ_ GCLK                  | CLKACTIVITY_ CPSW_50MHZ _GCLK                 | CLKACTIVITY_ CPSW_250MH Z_GCLK                | CLKACTIVITY_ L4HS_GCLK                        | Reserved                                      | CLKTRCTRL                                     | CLKTRCTRL                                     |
| R-0h     | R-1h                                          | R-1h                                          | R-1h                                          | R-1h                                          | R-0h                                          | R/W-2h                                        |                                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-80. CM\_PER\_L4HS\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                             |
|-------|-------------------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-7  | Reserved                      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 6     | CLKACTIVITY_CPSW_5 MHZ_GCLK   | R      | 1h      | This field indicates the state of the CPSW_5MHZ_GCLK clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                         |
| 5     | CLKACTIVITY_CPSW_50 MHZ_GCLK  | R      | 1h      | This field indicates the state of the CPSW_50MHZ_GCLK clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                        |
| 4     | CLKACTIVITY_CPSW_25 0MHZ_GCLK | R      | 1h      | This field indicates the state of the CPSW_250MHZ_GCLK clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                       |
| 3     | CLKACTIVITY_L4HS_GC LK        | R      | 1h      | This field indicates the state of the L4HS_GCLK clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                              |
| 2     | Reserved                      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | CLKTRCTRL                     | R/W    | 2h      | Controls the clock state transition of the L4 Fast clock domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

## 8.1.12.1.51 CM\_PER\_L4HS\_CLKCTRL Register (offset = 120h) [reset = 2h]

CM\_PER\_L4HS\_CLKCTRL is shown in Figure 8-78 and described in Table 8-81. This register manages the L4 Fast clocks.

| Figure 8-78. CM_PER_L4HS_CLKCTRL Register   | Figure 8-78. CM_PER_L4HS_CLKCTRL Register   | Figure 8-78. CM_PER_L4HS_CLKCTRL Register   | Figure 8-78. CM_PER_L4HS_CLKCTRL Register   | Figure 8-78. CM_PER_L4HS_CLKCTRL Register   | Figure 8-78. CM_PER_L4HS_CLKCTRL Register   | Figure 8-78. CM_PER_L4HS_CLKCTRL Register   | Figure 8-78. CM_PER_L4HS_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             |                                             |                                             |                                             |                                             | R-0h                                        | R-0h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-81. CM\_PER\_L4HS\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 0h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 2h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-2h

<!-- image -->

www.ti.com

## 8.1.12.1.52 CM\_PER\_OCPWP\_L3\_CLKSTCTRL Register (offset = 12Ch) [reset = 2h]

CM\_PER\_OCPWP\_L3\_CLKSTCTRL is shown in Figure 8-79 and described in Table 8-82.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

| Figure 8-79. CM_PER_OCPWP_L3_CLKSTCTRL   | Register   | Register                    | Register                    | Register   | Register   | Register   | Register   |
|------------------------------------------|------------|-----------------------------|-----------------------------|------------|------------|------------|------------|
| 31                                       | 30         | 29                          | 28                          | 27         | 26         | 25         | 24         |
| Reserved                                 | Reserved   | Reserved                    | Reserved                    | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h                                     | R-0h       | R-0h                        | R-0h                        | R-0h       | R-0h       | R-0h       | R-0h       |
| 23                                       | 22         | 21                          | 20                          | 19         | 18         | 17         | 16         |
| Reserved                                 | Reserved   | Reserved                    | Reserved                    | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h                                     | R-0h       | R-0h                        | R-0h                        | R-0h       | R-0h       | R-0h       | R-0h       |
| 15                                       | 14         | 13                          | 12                          | 11         | 10         | 9          | 8          |
| Reserved                                 | Reserved   | Reserved                    | Reserved                    | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h                                     | R-0h       | R-0h                        | R-0h                        | R-0h       | R-0h       | R-0h       | R-0h       |
| 7                                        | 6          | 5                           | 4                           | 3          | 2          | 1          | 0          |
| Reserved                                 | Reserved   | CLKACTIVITY_ OCPWP_L4_G CLK | CLKACTIVITY_ OCPWP_L3_G CLK | Reserved   | Reserved   | CLKTRCTRL  | CLKTRCTRL  |
| R-0h                                     | R-0h       | R-0h                        | R-0h                        | R-0h       | R-0h       | R/W-2h     | R/W-2h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-82. CM\_PER\_OCPWP\_L3\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                           |
|-------|----------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | Reserved                   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                       |
| 5     | CLKACTIVITY_OCPWP_ L4_GCLK | R      | 0h      | This field indicates the state of the OCPWP L4 clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                             |
| 4     | CLKACTIVITY_OCPWP_ L3_GCLK | R      | 0h      | This field indicates the state of the OCPWP L3 clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                             |
| 3-2   | Reserved                   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                       |
| 1-0   | CLKTRCTRL                  | R/W    | 2h      | Controls the clock state transition of the OCPWP clock domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

## 8.1.12.1.53 CM\_PER\_OCPWP\_CLKCTRL Register (offset = 130h) [reset = 70002h]

CM\_PER\_OCPWP\_CLKCTRL is shown in Figure 8-80 and described in Table 8-83. This register manages the OCPWP clocks.

| Figure 8-80. CM_PER_OCPWP_CLKCTRL Register   | Figure 8-80. CM_PER_OCPWP_CLKCTRL Register   | Figure 8-80. CM_PER_OCPWP_CLKCTRL Register   | Figure 8-80. CM_PER_OCPWP_CLKCTRL Register   | Figure 8-80. CM_PER_OCPWP_CLKCTRL Register   | Figure 8-80. CM_PER_OCPWP_CLKCTRL Register   | Figure 8-80. CM_PER_OCPWP_CLKCTRL Register   | Figure 8-80. CM_PER_OCPWP_CLKCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
|                                              |                                              | Reserved                                     |                                              |                                              | STBYST                                       | IDLEST                                       | IDLEST                                       |
|                                              |                                              | R-0h                                         |                                              |                                              | R-1h                                         | R-3h                                         | R-3h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | MODULEMODE                                   | MODULEMODE                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-83. CM\_PER\_OCPWP\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | STBYST     | R      | 1h      | Module standby status. 0x0 = Func : Module is functional (not in standby) 0x1 = Standby : Module is in standby                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 2h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-2h

<!-- image -->

www.ti.com

## 8.1.12.1.54 CM\_PER\_PRU\_ICSS\_CLKSTCTRL Register (offset = 140h) [reset = 2h]

CM\_PER\_PRU\_ICSS\_CLKSTCTRL is shown in Figure 8-81 and described in Table 8-84.

This register enables the clock domain state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

| Figure 8-81. CM_PER_PRU_ICSS_CLKSTCTRL Register   | Figure 8-81. CM_PER_PRU_ICSS_CLKSTCTRL Register   | Figure 8-81. CM_PER_PRU_ICSS_CLKSTCTRL Register   | Figure 8-81. CM_PER_PRU_ICSS_CLKSTCTRL Register   | Figure 8-81. CM_PER_PRU_ICSS_CLKSTCTRL Register   | Figure 8-81. CM_PER_PRU_ICSS_CLKSTCTRL Register   | Figure 8-81. CM_PER_PRU_ICSS_CLKSTCTRL Register   | Figure 8-81. CM_PER_PRU_ICSS_CLKSTCTRL Register   |
|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|
| 31                                                | 30                                                | 29                                                | 28                                                | 27                                                | 26                                                | 25                                                | 24                                                |
| Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          |
| R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              |
| 23                                                | 22                                                | 21                                                | 20                                                | 19                                                | 18                                                | 17                                                | 16                                                |
| Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          |
| R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              |
| 15                                                | 14                                                | 13                                                | 12                                                | 11                                                | 10                                                | 9                                                 | 8                                                 |
| Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          |
| R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              |
| 7                                                 | 6                                                 | 5                                                 | 4                                                 | 3                                                 | 2                                                 | 1                                                 | 0                                                 |
| Reserved                                          | CLKACTIVITY_ PRU_ICSS_UA RT_GCLK                  | CLKACTIVITY_ PRU_ICSS_IE P_GCLK                   | CLKACTIVITY_ PRU_ICSS_OC P_GCLK                   | Reserved                                          | Reserved                                          | CLKTRCTRL                                         | CLKTRCTRL                                         |
| R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R/W-2h                                            | R/W-2h                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-84. CM\_PER\_PRU\_ICSS\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                  |
|-------|---------------------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-7  | Reserved                        | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                              |
| 6     | CLKACTIVITY_PRU_ICS S_UART_GCLK | R      | 0h      | This field indicates the state of the PRU-ICSS UART clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                               |
| 5     | CLKACTIVITY_PRU_ICS S_IEP_GCLK  | R      | 0h      | This field indicates the state of the PRU-ICSS IEP clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                                |
| 4     | CLKACTIVITY_PRU_ICS S_OCP_GCLK  | R      | 0h      | This field indicates the state of the PRU-ICSS OCP clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                                |
| 3-2   | Reserved                        | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                              |
| 1-0   | CLKTRCTRL                       | R/W    | 2h      | Controls the clock state transition of the PRU-ICSS OCP clock domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

## 8.1.12.1.55 CM\_PER\_CPSW\_CLKSTCTRL Register (offset = 144h) [reset = 2h]

CM\_PER\_CPSW\_CLKSTCTRL is shown in Figure 8-82 and described in Table 8-85.

This register enables the clock domain state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

| Figure 8-82. CM_PER_CPSW_CLKSTCTRL Register   | Figure 8-82. CM_PER_CPSW_CLKSTCTRL Register   | Figure 8-82. CM_PER_CPSW_CLKSTCTRL Register   | Figure 8-82. CM_PER_CPSW_CLKSTCTRL Register   | Figure 8-82. CM_PER_CPSW_CLKSTCTRL Register   | Figure 8-82. CM_PER_CPSW_CLKSTCTRL Register   | Figure 8-82. CM_PER_CPSW_CLKSTCTRL Register   | Figure 8-82. CM_PER_CPSW_CLKSTCTRL Register   |
|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|
| 31                                            | 30                                            | 29                                            | 28                                            | 27                                            | 26                                            | 25                                            | 24                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 23                                            | 22                                            | 21                                            | 20                                            | 19                                            | 18                                            | 17                                            | 16                                            |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 15                                            | 14                                            | 13                                            | 12                                            | 11                                            | 10                                            | 9                                             | 8                                             |
| Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 7                                             | 6                                             | 5                                             | 4                                             | 3                                             | 2                                             | 1                                             | 0                                             |
|                                               | Reserved                                      |                                               | CLKACTIVITY_ CPSW_125MH z_GCLK                | Reserved                                      | Reserved                                      | CLKTRCTRL                                     | CLKTRCTRL                                     |
|                                               | R-0h                                          |                                               | R-0h                                          |                                               | R-0h                                          |                                               | R/W-2h                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-85. CM\_PER\_CPSW\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                              |
|-------|-------------------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | Reserved                      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 4     | CLKACTIVITY_CPSW_12 5MHz_GCLK | R      | 0h      | This field indicates the state of the CPSW 125 MHz OCP clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                        |
| 3-2   | Reserved                      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 1-0   | CLKTRCTRL                     | R/W    | 2h      | Controls the clock state transition of the CPSW OCP clock domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.1.56 CM\_PER\_LCDC\_CLKSTCTRL Register (offset = 148h) [reset = 2h]

CM\_PER\_LCDC\_CLKSTCTRL is shown in Figure 8-83 and described in Table 8-86.

This register enables the clock domain state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

|          | Figure 8-83. CM_PER_LCDC_CLKSTCTRL Register   | Figure 8-83. CM_PER_LCDC_CLKSTCTRL Register   | Figure 8-83. CM_PER_LCDC_CLKSTCTRL Register   | Figure 8-83. CM_PER_LCDC_CLKSTCTRL Register   | Figure 8-83. CM_PER_LCDC_CLKSTCTRL Register   | Figure 8-83. CM_PER_LCDC_CLKSTCTRL Register   | Figure 8-83. CM_PER_LCDC_CLKSTCTRL Register   |
|----------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|
| 31       | 30                                            | 29                                            | 28                                            | 27                                            | 26                                            | 25                                            | 24                                            |
| Reserved | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h     | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 23       | 22                                            | 21                                            | 20                                            | 19                                            | 18                                            | 17                                            | 16                                            |
| Reserved | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h     | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 15       | 14                                            | 13                                            | 12                                            | 11                                            | 10                                            | 9                                             | 8                                             |
| Reserved | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      | Reserved                                      |
| R-0h     | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          |
| 7        | 6                                             | 5                                             | 4                                             | 3                                             | 2                                             | 1                                             | 0                                             |
| Reserved | Reserved                                      | CLKACTIVITY_ LCDC_L4_OCP _GCLK                | CLKACTIVITY_ LCDC_L3_OCP _GCLK                | Reserved                                      | Reserved                                      | CLKTRCTRL                                     | CLKTRCTRL                                     |
| R-0h     | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R-0h                                          | R/W-2h                                        | R/W-2h                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-86. CM\_PER\_LCDC\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                              |
|-------|-------------------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | Reserved                      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 5     | CLKACTIVITY_LCDC_L4 _OCP_GCLK | R      | 0h      | This field indicates the state of the LCDC L4 OCP clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                             |
| 4     | CLKACTIVITY_LCDC_L3 _OCP_GCLK | R      | 0h      | This field indicates the state of the LCDC L3 OCP clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                             |
| 3-2   | Reserved                      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 1-0   | CLKTRCTRL                     | R/W    | 2h      | Controls the clock state transition of the LCDC OCP clock domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

<!-- image -->

## 8.1.12.1.57 CM\_PER\_CLKDIV32K\_CLKCTRL Register (offset = 14Ch) [reset = 30000h]

CM\_PER\_CLKDIV32K\_CLKCTRL is shown in Figure 8-84 and described in Table 8-87. This register manages the CLKDIV32K clocks.

| Figure 8-84. CM_PER_CLKDIV32K_CLKCTRL Register   | Figure 8-84. CM_PER_CLKDIV32K_CLKCTRL Register   | Figure 8-84. CM_PER_CLKDIV32K_CLKCTRL Register   | Figure 8-84. CM_PER_CLKDIV32K_CLKCTRL Register   | Figure 8-84. CM_PER_CLKDIV32K_CLKCTRL Register   | Figure 8-84. CM_PER_CLKDIV32K_CLKCTRL Register   | Figure 8-84. CM_PER_CLKDIV32K_CLKCTRL Register   | Figure 8-84. CM_PER_CLKDIV32K_CLKCTRL Register   |
|--------------------------------------------------|--------------------------------------------------|--------------------------------------------------|--------------------------------------------------|--------------------------------------------------|--------------------------------------------------|--------------------------------------------------|--------------------------------------------------|
| 31                                               | 30                                               | 29                                               | 28                                               | 27                                               | 26                                               | 25                                               | 24                                               |
| Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         |
| R-0h                                             | R-0h                                             | R-0h                                             | R-0h                                             | R-0h                                             | R-0h                                             | R-0h                                             | R-0h                                             |
| 23                                               | 22                                               | 21                                               | 20                                               | 19                                               | 18                                               | 17                                               | 16                                               |
| Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | IDLEST                                           | IDLEST                                           |
|                                                  |                                                  |                                                  |                                                  |                                                  |                                                  | R-3h                                             | R-3h                                             |
| 15                                               | 14                                               | 13                                               | 12                                               | 11                                               | 10                                               | 9                                                | 8                                                |
| Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         |
| R-0h                                             | R-0h                                             | R-0h                                             | R-0h                                             | R-0h                                             | R-0h                                             | R-0h                                             | R-0h                                             |
| 7                                                | 6                                                | 5                                                | 4                                                | 3                                                | 2                                                | 1                                                | 0                                                |
| Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | Reserved                                         | MODULEMODE                                       | MODULEMODE                                       |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-87. CM\_PER\_CLKDIV32K\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.1.58 CM\_PER\_CLK\_24MHZ\_CLKSTCTRL Register (offset = 150h) [reset = 2h]

CM\_PER\_CLK\_24MHZ\_CLKSTCTRL is shown in Figure 8-85 and described in Table 8-88.

This register enables the clock domain state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

## Figure 8-85. CM\_PER\_CLK\_24MHZ\_CLKSTCTRL Register

| 31       | 30       | 29       | 28                           | 27       | 26       | 25        | 24        |
|----------|----------|----------|------------------------------|----------|----------|-----------|-----------|
| Reserved | Reserved | Reserved | Reserved                     | Reserved | Reserved | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h                         | R-0h     | R-0h     | R-0h      | R-0h      |
| 23       | 22       | 21       | 20                           | 19       | 18       | 17        | 16        |
| Reserved | Reserved | Reserved | Reserved                     | Reserved | Reserved | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h                         | R-0h     | R-0h     | R-0h      | R-0h      |
| 15       | 14       | 13       | 12                           | 11       | 10       | 9         | 8         |
| Reserved | Reserved | Reserved | Reserved                     | Reserved | Reserved | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h                         | R-0h     | R-0h     | R-0h      | R-0h      |
| 7        | 6        | 5        | 4                            | 3        | 2        | 1         | 0         |
|          | Reserved |          | CLKACTIVITY_ CLK_24MHZ_G CLK | Reserved | Reserved | CLKTRCTRL | CLKTRCTRL |
|          | R-0h     |          | R-0h                         |          | R-0h     |           | R/W-2h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-88. CM\_PER\_CLK\_24MHZ\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                           |
|-------|-----------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | Reserved                    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                       |
| 4     | CLKACTIVITY_CLK_24M HZ_GCLK | R      | 0h      | This field indicates the state of the 24MHz clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                                |
| 3-2   | Reserved                    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                       |
| 1-0   | CLKTRCTRL                   | R/W    | 2h      | Controls the clock state transition of the 24MHz clock domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

## 8.1.12.2 CM\_WKUP Registers

Table 8-89 lists the memory-mapped registers for the CM\_WKUP. All register offset addresses not listed in Table 8-89 should be considered as reserved locations and the register contents should not be modified.

## Table 8-89. CM\_WKUP Registers

| Offset   | Acronym                 | Section            |
|----------|-------------------------|--------------------|
| 0h       | CM_WKUP_CLKSTCTRL       | Section 8.1.12.2.1 |
| 4h       | CM_WKUP_CONTROL_CLKCTRL | Section 8.1.12.2.2 |
| 8h       | CM_WKUP_GPIO0_CLKCTRL   | Section 8.1.12.2.3 |
| Ch       | CM_WKUP_L4WKUP_CLKCTRL  | Section 8.1.12.2.4 |
| 10h      | CM_WKUP_TIMER0_CLKCTRL  | Section 8.1.12.2.5 |

1313 Power, Reset, and Clock Management (PRCM)

Table 8-89. CM\_WKUP Registers (continued)

| Offset   | Acronym                     | Section             |
|----------|-----------------------------|---------------------|
| 14h      | CM_WKUP_DEBUGSS_CLKCTRL     | Section 8.1.12.2.6  |
| 18h      | CM_L3_AON_CLKSTCTRL         | Section 8.1.12.2.7  |
| 1Ch      | CM_AUTOIDLE_DPLL_MPU        | Section 8.1.12.2.8  |
| 20h      | CM_IDLEST_DPLL_MPU          | Section 8.1.12.2.9  |
| 24h      | CM_SSC_DELTAMSTEP_DPLL_MPU  | Section 8.1.12.2.10 |
| 28h      | CM-SSC_MODFREQDIV_DPLL_MPU  | Section 8.1.12.2.11 |
| 2Ch      | CM_CLKSEL_DPLL_MPU          | Section 8.1.12.2.12 |
| 30h      | CM_AUTOIDLE_DPLL_DDR        | Section 8.1.12.2.13 |
| 34h      | CM_IDLEST_DPLL_DDR          | Section 8.1.12.2.14 |
| 38h      | CM_SSC_DELTAMSTEP_DPLL_DDR  | Section 8.1.12.2.15 |
| 3Ch      | CM_SSC_MODFREQDIV_DPLL_DDR  | Section 8.1.12.2.16 |
| 40h      | CM_CLKSEL_DPLL_DDR          | Section 8.1.12.2.17 |
| 44h      | CM_AUTOIDLE_DPLL_DISP       | Section 8.1.12.2.18 |
| 48h      | CM_IDLEST_DPLL_DISP         | Section 8.1.12.2.19 |
| 4Ch      | CM_SSC_DELTAMSTEP_DPLL_DISP | Section 8.1.12.2.20 |
| 50h      | CM_SSC_MODFREQDIV_DPLL_DISP | Section 8.1.12.2.21 |
| 54h      | CM_CLKSEL_DPLL_DISP         | Section 8.1.12.2.22 |
| 58h      | CM_AUTOIDLE_DPLL_CORE       | Section 8.1.12.2.23 |
| 5Ch      | CM_IDLEST_DPLL_CORE         | Section 8.1.12.2.24 |
| 60h      | CM_SSC_DELTAMSTEP_DPLL_CORE | Section 8.1.12.2.25 |
| 64h      | CM_SSC_MODFREQDIV_DPLL_CORE | Section 8.1.12.2.26 |
| 68h      | CM_CLKSEL_DPLL_CORE         | Section 8.1.12.2.27 |
| 6Ch      | CM_AUTOIDLE_DPLL_PER        | Section 8.1.12.2.28 |
| 70h      | CM_IDLEST_DPLL_PER          | Section 8.1.12.2.29 |
| 74h      | CM_SSC_DELTAMSTEP_DPLL_PER  | Section 8.1.12.2.30 |
| 78h      | CM_SSC_MODFREQDIV_DPLL_PER  | Section 8.1.12.2.31 |
| 7Ch      | CM_CLKDCOLDO_DPLL_PER       | Section 8.1.12.2.32 |
| 80h      | CM_DIV_M4_DPLL_CORE         | Section 8.1.12.2.33 |
| 84h      | CM_DIV_M5_DPLL_CORE         | Section 8.1.12.2.34 |
| 88h      | CM_CLKMODE_DPLL_MPU         | Section 8.1.12.2.35 |

<!-- image -->

<!-- image -->

www.ti.com

Table 8-89. CM\_WKUP Registers (continued)

| Offset   | Acronym                       | Section             |
|----------|-------------------------------|---------------------|
| 8Ch      | CM_CLKMODE_DPLL_PER           | Section 8.1.12.2.36 |
| 90h      | CM_CLKMODE_DPLL_CORE          | Section 8.1.12.2.37 |
| 94h      | CM_CLKMODE_DPLL_DDR           | Section 8.1.12.2.38 |
| 98h      | CM_CLKMODE_DPLL_DISP          | Section 8.1.12.2.39 |
| 9Ch      | CM_CLKSEL_DPLL_PERIPH         | Section 8.1.12.2.40 |
| A0h      | CM_DIV_M2_DPLL_DDR            | Section 8.1.12.2.41 |
| A4h      | CM_DIV_M2_DPLL_DISP           | Section 8.1.12.2.42 |
| A8h      | CM_DIV_M2_DPLL_MPU            | Section 8.1.12.2.43 |
| ACh      | CM_DIV_M2_DPLL_PER            | Section 8.1.12.2.44 |
| B0h      | CM_WKUP_WKUP_M3_CLKCTRL       | Section 8.1.12.2.45 |
| B4h      | CM_WKUP_UART0_CLKCTRL         | Section 8.1.12.2.46 |
| B8h      | CM_WKUP_I2C0_CLKCTRL          | Section 8.1.12.2.47 |
| BCh      | CM_WKUP_ADC_TSC_CLKCTRL       | Section 8.1.12.2.48 |
| C0h      | CM_WKUP_SMARTREFLEX0_CLKCT RL | Section 8.1.12.2.49 |
| C4h      | CM_WKUP_TIMER1_CLKCTRL        | Section 8.1.12.2.50 |
| C8h      | CM_WKUP_SMARTREFLEX1_CLKCT RL | Section 8.1.12.2.51 |
| CCh      | CM_L4_WKUP_AON_CLKSTCTRL      | Section 8.1.12.2.52 |
| D4h      | CM_WKUP_WDT1_CLKCTRL          | Section 8.1.12.2.53 |
| D8h      | CM_DIV_M6_DPLL_CORE           | Section 8.1.12.2.54 |

## 8.1.12.2.1 CM\_WKUP\_CLKSTCTRL Register (offset = 0h) [reset = 6h]

Register mask: FFFFFFFFh

CM\_WKUP\_CLKSTCTRL is shown in Figure 8-86 and described in Table 8-90.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

Figure 8-86. CM\_WKUP\_CLKSTCTRL Register

| 31            | 30                    | 29                       | 28                        | 27                      | 26                         | 25            | 24                         |
|---------------|-----------------------|--------------------------|---------------------------|-------------------------|----------------------------|---------------|----------------------------|
| RESERVED      | RESERVED              | RESERVED                 | RESERVED                  | RESERVED                | RESERVED                   | RESERVED      | RESERVED                   |
| Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h            | Rreturns0s-0h             | Rreturns0s-0h           | Rreturns0s-0h              | Rreturns0s-0h | Rreturns0s-0h              |
| 23            | 22                    | 21                       | 20                        | 19                      | 18                         | 17            | 16                         |
| RESERVED      | RESERVED              | RESERVED                 | RESERVED                  | RESERVED                | RESERVED                   | RESERVED      | RESERVED                   |
| Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h            | Rreturns0s-0h             | Rreturns0s-0h           | Rreturns0s-0h              | Rreturns0s-0h | Rreturns0s-0h              |
| 15            | 14                    | 13                       | 12                        | 11                      | 10                         | 9             | 8                          |
| RESERVED      | CLKACTIVITY_ ADC_FCLK | CLKACTIVITY_ TIMER1_GCLK | CLKACTIVITY_ UART0_GFCL K | CLKACTIVITY_ I2C0_GFCLK | CLKACTIVITY_ TIMER0_GCLK   | RESERVED      | CLKACTIVITY_ GPIO0_GDBCL K |
| Rreturns0s-0h | R-0h                  | R-0h                     | R-0h                      | R-0h                    | R-0h                       | R-0h          | R-0h                       |
| 7             | 6                     | 5                        | 4                         | 3                       | 2                          | 1             | 0                          |
| RESERVED      | RESERVED              | RESERVED                 | CLKACTIVITY_ WDT1_GCLK    | CLKACTIVITY_ SR_SYSCLK  | CLKACTIVITY_ L4_WKUP_GC LK | CLKTRCTRL     | CLKTRCTRL                  |
| Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h            | R-0h                      | R-0h                    | R-1h                       | R/W-2h        | R/W-2h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-90. CM\_WKUP\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                     | Type       | Reset   | Description                                                                                                                                              |
|-------|---------------------------|------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-15 | RESERVED                  | Rreturns0s | 0h      |                                                                                                                                                          |
| 14    | CLKACTIVITY_ADC_FCL K     | R          | 0h      | This field indicates the state of the ADC clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active              |
| 13    | CLKACTIVITY_TIMER1_ GCLK  | R          | 0h      | This field indicates the state of the TIMER1 clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active           |
| 12    | CLKACTIVITY_UART0_G FCLK  | R          | 0h      | This field indicates the state of the UART0 clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active            |
| 11    | CLKACTIVITY_I2C0_GFC LK   | R          | 0h      | This field indicates the state of the I2C0 clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active             |
| 10    | CLKACTIVITY_TIMER0_ GCLK  | R          | 0h      | This field indicates the state of the WKUPTIMER_GCLK clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active   |
| 9     | RESERVED                  | R          | 0h      |                                                                                                                                                          |
| 8     | CLKACTIVITY_GPIO0_G DBCLK | R          | 0h      | This field indicates the state of the WKUPGPIO_DBGICLK clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active |
| 7-5   | RESERVED                  | Rreturns0s | 0h      |                                                                                                                                                          |

<!-- image -->

<!-- image -->

www.ti.com

## Table 8-90. CM\_WKUP\_CLKSTCTRL Register Field Descriptions (continued)

| Bit   | Field                     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                        |
|-------|---------------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 4     | CLKACTIVITY_WDT1_G CLK    | R      | 0h      | This field indicates the state of the WDT1_GCLK clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active                                                                                                                                                                                                  |
| 3     | CLKACTIVITY_SR_SYSC LK    | R      | 0h      | This field indicates the state of the SMARTREFGLEX SYSCLK clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active                                                                                                                                                                                        |
| 2     | CLKACTIVITY_L4_WKUP _GCLK | R      | 1h      | This field indicates the state of the L4_WKUP clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active                                                                                                                                                                                                    |
| 1-0   | CLKTRCTRL                 | R/W    | 2h      | Controls the clock state transition of the always on clock domain. 0h (R/W) = NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 1h (R/W) = SW_SLEEP: Start a software forced sleep transition on the domain. 2h (R/W) = SW_WKUP: Start a software forced wake-up transition on the domain. 3h (R/W) = Reserved. |

## 8.1.12.2.2 CM\_WKUP\_CONTROL\_CLKCTRL Register (offset = 4h) [reset = 30000h]

Register mask: FFFFFFFFh

CM\_WKUP\_CONTROL\_CLKCTRL is shown in Figure 8-87 and described in Table 8-91.

This register manages the Control Module clocks.

Figure 8-87. CM\_WKUP\_CONTROL\_CLKCTRL Register

| 31       | 30               | 29            | 28       | 27       | 26       | 25            | 24            |
|----------|------------------|---------------|----------|----------|----------|---------------|---------------|
| RESERVED | RESERVED         | RESERVED      | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      |
| 22       | 22               | 22            | 22       | 22       | 22       | 22            | 22            |
| 23 21    | 20               | 19            | 18       | 17       | 16       |               |               |
|          |                  |               |          | RESERVED |          | Rreturns0s-0h | Rreturns0s-0h |
| 15 14    |                  | Rreturns0s-0h |          |          | 13       | 12            | 12            |
| 11       | 10 Rreturns0s-0h | 9             | 8        | RESERVED | 6        | 5             | 4             |
| 3        | 3                | 3             | 3        | 3        | 3        | 3             | 3             |
| 2        | 2                | 2             | 2        | 2        | 2        | 2             | 2             |
| 7 1      | 0                | RESERVED      |          |          |          |               | MODULEMODE    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-91. CM\_WKUP\_CONTROL\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 18    | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 17-16 | IDLEST     | R          | 3h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed                                                                                                                                                                                                  |
| 15-2  | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 1-0   | MODULEMODE | R/W        | 0h      | Control the way mandatory clocks are managed. 0h (R/W) = Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 1h (R/W) = Reserved 2h (R/W) = Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 3h (R) = Reserved |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.3 CM\_WKUP\_GPIO0\_CLKCTRL Register (offset = 8h) [reset = 30000h]

Register mask: FFFFFFFFh

CM\_WKUP\_GPIO0\_CLKCTRL is shown in Figure 8-88 and described in Table 8-92.

This register manages the GPIO0 clocks.

Figure 8-88. CM\_WKUP\_GPIO0\_CLKCTRL Register

| 31               | 30       | 29       | 28       | 27                     | 26          | 25       | 24         |
|------------------|----------|----------|----------|------------------------|-------------|----------|------------|
| RESERVED         | RESERVED | RESERVED | RESERVED | RESERVED               | RESERVED    | RESERVED | RESERVED   |
| 22               | 22       | 22       | 22       | 22                     | 22          | 22       | 22         |
| 23 21            | 20       | 19       | 18       | 17                     | 16          |          |            |
| Rreturns0s-0h    |          |          |          | OPTFCLKEN_ GPIO0_GDBCL | R/W-0h R-3h | 14       | 14         |
| 15 13            | 15 13    | 15 13    | 15 13    | 15 13                  | 12          | 11       | 11         |
| 10 Rreturns0s-0h | 9        | 8        | RESERVED | 6                      | 5           | 4        | 3          |
| 2                | 2        | 2        | 2        | 2                      | 2           | 2        | 2          |
| 1                | 1        | 1        | 1        | 1                      | 1           | 1        | 1          |
| 7 0              | RESERVED |          |          |                        |             |          | MODULEMODE |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-92. CM\_WKUP\_GPIO0\_CLKCTRL Register Field Descriptions

| Bit   | Field                   | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-------------------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED                | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 18    | OPTFCLKEN_GPIO0_GD BCLK | R/W        | 0h      | Optional functional clock control. 0h (R/W) = Optional functional clock is disabled 1h (R/W) = Optional functional clock is enabled                                                                                                                                                                                                                                                                                                                                                                           |
| 17-16 | IDLEST                  | R          | 3h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed                                                                                                                                                                                                  |
| 15-2  | RESERVED                | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 1-0   | MODULEMODE              | R/W        | 0h      | Control the way mandatory clocks are managed. 0h (R/W) = Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 1h (R/W) = Reserved 2h (R/W) = Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 3h (R) = Reserved |

## 8.1.12.2.4 CM\_WKUP\_L4WKUP\_CLKCTRL Register (offset = Ch) [reset = 2h]

Register mask: FFFFFFFFh

CM\_WKUP\_L4WKUP\_CLKCTRL is shown in Figure 8-89 and described in Table 8-93.

This register manages the L4WKUP clocks.

Figure 8-89. CM\_WKUP\_L4WKUP\_CLKCTRL Register

| 31       | 30               | 29            | 28       | 27       | 26       | 25            | 24            |
|----------|------------------|---------------|----------|----------|----------|---------------|---------------|
| RESERVED | RESERVED         | RESERVED      | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      |
| 22       | 22               | 22            | 22       | 22       | 22       | 22            | 22            |
| 23 21    | 20               | 19            | 18       | 17       | 16       |               |               |
|          |                  |               |          | RESERVED |          | Rreturns0s-0h | Rreturns0s-0h |
| 15 14    |                  | Rreturns0s-0h |          |          | 13       | 12            | 12            |
| 11       | 10 Rreturns0s-0h | 9             | 8        | RESERVED | 6        | 5             | 4             |
| 3        | 3                | 3             | 3        | 3        | 3        | 3             | 3             |
| 2        | 2                | 2             | 2        | 2        | 2        | 2             | 2             |
| 7 1      | 0                | RESERVED      |          |          |          |               | MODULEMODE    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-93. CM\_WKUP\_L4WKUP\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                  |
|-------|------------|------------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                              |
| 18    | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                              |
| 17-16 | IDLEST     | R          | 0h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed |
| 15-2  | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                              |
| 1-0   | MODULEMODE | R          | 2h      | Control the way mandatory clocks are managed.                                                                                                                                                                                                                                                                |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.5 CM\_WKUP\_TIMER0\_CLKCTRL Register (offset = 10h) [reset = 30002h]

Register mask: FFFFFFFFh

CM\_WKUP\_TIMER0\_CLKCTRL is shown in Figure 8-90 and described in Table 8-94.

This register manages the TIMER0 clocks.

## Figure 8-90. CM\_WKUP\_TIMER0\_CLKCTRL Register

| 31       | 30               | 29            | 28       | 27       | 26       | 25            | 24            |
|----------|------------------|---------------|----------|----------|----------|---------------|---------------|
| RESERVED | RESERVED         | RESERVED      | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      |
| 22       | 22               | 22            | 22       | 22       | 22       | 22            | 22            |
| 23 21    | 20               | 19            | 18       | 17       | 16       |               |               |
|          |                  |               |          | RESERVED |          | Rreturns0s-0h | Rreturns0s-0h |
| 15 14    |                  | Rreturns0s-0h |          |          | 13       | 12            | 12            |
| 11       | 10 Rreturns0s-0h | 9             | 8        | RESERVED | 6        | 5             | 4             |
| 3        | 3                | 3             | 3        | 3        | 3        | 3             | 3             |
| 2        | 2                | 2             | 2        | 2        | 2        | 2             | 2             |
| 7 1      | 0                | RESERVED      |          |          |          |               | MODULEMODE    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-94. CM\_WKUP\_TIMER0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 18    | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 17-16 | IDLEST     | R          | 3h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed                                                                                                                                                                                                  |
| 15-2  | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 1-0   | MODULEMODE | R/W        | 2h      | Control the way mandatory clocks are managed. 0h (R/W) = Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 1h (R/W) = Reserved 2h (R/W) = Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 3h (R) = Reserved |

<!-- image -->

## 8.1.12.2.6 CM\_WKUP\_DEBUGSS\_CLKCTRL Register (offset = 14h) [reset = 52580002h]

Register mask: FFFFFFFFh

CM\_WKUP\_DEBUGSS\_CLKCTRL is shown in Figure 8-91 and described in Table 8-95.

This register manages the DEBUGSS clocks.

Figure 8-91. CM\_WKUP\_DEBUGSS\_CLKCTRL Register

| 31             | 30                 | 29                | 28                | 27                   | 26                | 25                | 24                |
|----------------|--------------------|-------------------|-------------------|----------------------|-------------------|-------------------|-------------------|
| RESERVED       | OPTCLK_DEB UG_CLKA | STM_PMD_CLKDIVSEL | STM_PMD_CLKDIVSEL | STM_PMD_CLKDIVSEL    | TRC_PMD_CLKDIVSEL | TRC_PMD_CLKDIVSEL | TRC_PMD_CLKDIVSEL |
| Rreturns0s-0h  | R/W-1h             | R/W-2h            | R/W-2h            | R/W-2h               | R/W-2h            | R/W-2h            | R/W-2h            |
| 23             | 22                 | 21                | 20                | 19                   | 18                | 17                | 16                |
| STM_PMD_CLKSEL | STM_PMD_CLKSEL     | TRC_PMD_CLKSEL    | TRC_PMD_CLKSEL    | OPTFCLKEN_ DBGSYSCLK | STBYST            | IDLEST            | IDLEST            |
| R/W-1h         | R/W-1h             | R/W-1h            | R/W-1h            | R/W-1h               | R-0h              | R-0h              | R-0h              |
| 15             | 14                 | 13                | 12                | 11                   | 10                | 9                 | 8                 |
| RESERVED       | RESERVED           | RESERVED          | RESERVED          | RESERVED             | RESERVED          | RESERVED          | RESERVED          |
| Rreturns0s-0h  | Rreturns0s-0h      | Rreturns0s-0h     | Rreturns0s-0h     | Rreturns0s-0h        | Rreturns0s-0h     | Rreturns0s-0h     | Rreturns0s-0h     |
| 7              | 6                  | 5                 | 4                 | 3                    | 2                 | 1                 | 0                 |
| RESERVED       | RESERVED           | RESERVED          | RESERVED          | RESERVED             | RESERVED          | MODULEMODE        | MODULEMODE        |
| Rreturns0s-0h  | Rreturns0s-0h      | Rreturns0s-0h     | Rreturns0s-0h     | Rreturns0s-0h        | Rreturns0s-0h     | R/W-2h            | R/W-2h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-95. CM\_WKUP\_DEBUGSS\_CLKCTRL Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                  |
|-------|----------------------|------------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED             | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                              |
| 30    | OPTCLK_DEBUG_CLKA    | R/W        | 1h      | Optional functional clock control. 0h = Optional functional clock is disabled. 1h = Optional functional clock is enabled.                                                                                                                                                                                    |
| 29-27 | STM_PMD_CLKDIVSEL    | R/W        | 2h      |                                                                                                                                                                                                                                                                                                              |
| 26-24 | TRC_PMD_CLKDIVSEL    | R/W        | 2h      |                                                                                                                                                                                                                                                                                                              |
| 23-22 | STM_PMD_CLKSEL       | R/W        | 1h      |                                                                                                                                                                                                                                                                                                              |
| 21-20 | TRC_PMD_CLKSEL       | R/W        | 1h      |                                                                                                                                                                                                                                                                                                              |
| 19    | OPTFCLKEN_DBGSYSC LK | R/W        | 1h      | Optional functional clock control. 0h (R/W) = Optional functional clock is disabled 1h (R/W) = Optional functional clock is enabled                                                                                                                                                                          |
| 18    | STBYST               | R          | 0h      | Module standby status. 0h (R) = Module is functional (not in standby) 1h (R) = Module is in standby                                                                                                                                                                                                          |
| 17-16 | IDLEST               | R          | 0h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed |
| 15-2  | RESERVED             | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                              |

<!-- image -->

www.ti.com

## Table 8-95. CM\_WKUP\_DEBUGSS\_CLKCTRL Register Field Descriptions (continued)

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | MODULEMODE | R/W    | 2h      | Control the way mandatory clocks are managed. 0h (R/W) = Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 1h (R/W) = Reserved 2h (R/W) = Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 3h (R) = Reserved |

## 8.1.12.2.7 CM\_L3\_AON\_CLKSTCTRL Register (offset = 18h) [reset = 1Ah]

Register mask: FFFFFFFFh

CM\_L3\_AON\_CLKSTCTRL is shown in Figure 8-92 and described in Table 8-96.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

Figure 8-92. CM\_L3\_AON\_CLKSTCTRL Register

| 31            | 30            | 29            | 28                      | 27                       | 26                     | 25            | 24            |
|---------------|---------------|---------------|-------------------------|--------------------------|------------------------|---------------|---------------|
|               | RESERVED      | RESERVED      | RESERVED                | RESERVED                 |                        |               |               |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h           | Rreturns0s-0h            | Rreturns0s-0h          | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20                      | 19                       | 18                     | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED                | RESERVED                 | RESERVED               | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h           | Rreturns0s-0h            | Rreturns0s-0h          | Rreturns0s-0h | Rreturns0s-0h |
| 15            | 14            | 13            | 12                      | 11                       | 10                     | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED                | RESERVED                 | RESERVED               | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h           | Rreturns0s-0h            | Rreturns0s-0h          | Rreturns0s-0h | Rreturns0s-0h |
| 7             | 6             | 5             | 4                       | 3                        | 2                      | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | CLKACTIVITY_ DEBUG_CLKA | CLKACTIVITY_ L3_AON_GCLK | CLKACTIVITY_ DBGSYSCLK | CLKTRCTRL     | CLKTRCTRL     |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-1h                    | R-1h                     | R-0h                   | R/W-2h        | R/W-2h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-96. CM\_L3\_AON\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                    | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                     |
|-------|--------------------------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | RESERVED                 | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                 |
| 25-11 | RESERVED                 | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                 |
| 10-8  | RESERVED                 | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                 |
| 7-5   | RESERVED                 | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                 |
| 4     | CLKACTIVITY_DEBUG_C LKA  | R          | 1h      | This field indicates the state of the Debugss CLKA clock in the domain. 0h (R) = Corresponding clock is gated. 1h (R) = Corresponding clock is active.                                                                                                                                                                                          |
| 3     | CLKACTIVITY_L3_AON_ GCLK | R          | 1h      | This field indicates the state of the L3_AON clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active                                                                                                                                                                                                  |
| 2     | CLKACTIVITY_DBGSYS CLK   | R          | 0h      | This field indicates the state of the Debugss sysclk clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active                                                                                                                                                                                          |
| 1-0   | CLKTRCTRL                | R/W        | 2h      | Controls the clock state transition of the L3 AON clock domain. 0h (R/W) = NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 1h (R/W) = SW_SLEEP: Start a software forced sleep transition on the domain. 2h (R/W) = SW_WKUP: Start a software forced wake-up transition on the domain. 3h (R/W) = Reserved. |

<!-- image -->

<!-- image -->

## 8.1.12.2.8 CM\_AUTOIDLE\_DPLL\_MPU Register (offset = 1Ch) [reset = 0h]

Register mask: FFFFFFFFh

CM\_AUTOIDLE\_DPLL\_MPU is shown in Figure 8-93 and described in Table 8-97.

This register provides automatic control over the DPLL activity.

## Figure 8-93. CM\_AUTOIDLE\_DPLL\_MPU Register

| 31       | 30       | 29               | 28             | 27       | 26       | 25       | 24       |
|----------|----------|------------------|----------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED         | RESERVED       | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22               | 22             | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 Rreturns0s-0h | 18             | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13               | 13             | 13       | 13       | 13       | 13       |
| 12       | 12       | 12               | 12             | 12       | 12       | 12       | 12       |
| 11       | 10       | 9 Rreturns0s-0h  | 8              | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3                | 3              | 3        | 3        | 3        | 3        |
| 2        | 2        | 2                | 2              | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RESERVED         | AUTO_DPLL_MODE |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-97. CM\_AUTOIDLE\_DPLL\_MPU Register Field Descriptions

| Bit   | Field          | Type       | Reset   | Description                    |
|-------|----------------|------------|---------|--------------------------------|
| 31-3  | RESERVED       | Rreturns0s | 0h      |                                |
| 2-0   | AUTO_DPLL_MODE | R/W        | 0h      | This feature is not supported. |

## 8.1.12.2.9 CM\_IDLEST\_DPLL\_MPU Register (offset = 20h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_IDLEST\_DPLL\_MPU is shown in Figure 8-94 and described in Table 8-98.

This register allows monitoring the master clock activity. This register is read only and automatically updated.[warm reset insensitive]

Figure 8-94. CM\_IDLEST\_DPLL\_MPU Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | ST_MN_BYPA SS |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | ST_DPLL_CLK   |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-98. CM\_IDLEST\_DPLL\_MPU Register Field Descriptions

| Bit   | Field        | Type       | Reset   | Description                                                                                         |
|-------|--------------|------------|---------|-----------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED     | Rreturns0s | 0h      |                                                                                                     |
| 8     | ST_MN_BYPASS | R          | 0h      | DPLL MN_BYPASS status 0h (R) = DPLL is not in MN_Bypass 1h (R) = DPLL is in MN_Bypass               |
| 7-1   | RESERVED     | Rreturns0s | 0h      |                                                                                                     |
| 0     | ST_DPLL_CLK  | R          | 0h      | DPLL clock activity 0h (R) = DPLL is either in bypass mode or in stop mode. 1h (R) = DPLL is LOCKED |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.10 CM\_SSC\_DELTAMSTEP\_DPLL\_MPU Register (offset = 24h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_SSC\_DELTAMSTEP\_DPLL\_MPU is shown in Figure 8-95 and described in Table 8-99.

Control the DeltaMStep parameter for Spread Spectrum Clocking technique DeltaMStep is split into fractional and integer part. [warm reset insensitive]

Figure 8-95. CM\_SSC\_DELTAMSTEP\_DPLL\_MPU Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | DELTAMSTEP_INTEGER  | DELTAMSTEP_INTEGER  | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-99. CM\_SSC\_DELTAMSTEP\_DPLL\_MPU Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                            |
|-------|----------------------|------------|---------|----------------------------------------|
| 31-20 | RESERVED             | Rreturns0s | 0h      |                                        |
| 19-18 | DELTAMSTEP_INTEGER   | R/W        | 0h      | Integer part for DeltaM coefficient    |
| 17-0  | DELTAMSTEP_FRACTIO N | R/W        | 0h      | Fractional part for DeltaM coefficient |

## 8.1.12.2.11 CM-SSC\_MODFREQDIV\_DPLL\_MPU Register (offset = 28h) [reset = 0h]

Register mask: FFFFFFFFh

CM-SSC\_MODFREQDIV\_DPLL\_MPU is shown in Figure 8-96 and described in Table 8-100.

Control the Modulation Frequency (Fm) for Spread Spectrum Clocking technique by defining it as a ratio of DPLL\_REFCLK/4 Fm = [DPLL\_REFCLK/4]/MODFREQDIV MODFREQDIV = MODFREQDIV\_MANTISSA * 2^MODFREQDIV\_EXPONENT [warm reset insensitive]

Figure 8-96. CM-SSC\_MODFREQDIV\_DPLL\_MPU Register

| 31            | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 23            | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 15            | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | MODFREQDIV_EXPONENT | MODFREQDIV_EXPONENT | MODFREQDIV_EXPONENT |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | R/W-0h              | R/W-0h              | R/W-0h              |
| 7             | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| RESERVED      | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA |
| Rreturns0s-0h |                     |                     |                     | R/W-0h              |                     |                     |                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-100. CM-SSC\_MODFREQDIV\_DPLL\_MPU Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                     |
|-------|----------------------|------------|---------|-------------------------------------------------|
| 31-11 | RESERVED             | Rreturns0s | 0h      |                                                 |
| 10-8  | MODFREQDIV_EXPONE NT | R/W        | 0h      | Set the Exponent component of MODFREQDIV factor |
| 7     | RESERVED             | Rreturns0s | 0h      |                                                 |
| 6-0   | MODFREQDIV_MANTISS A | R/W        | 0h      | Set the Mantissa component of MODFREQDIV factor |

<!-- image -->

<!-- image -->

## 8.1.12.2.12 CM\_CLKSEL\_DPLL\_MPU Register (offset = 2Ch) [reset = 0h]

Register mask: FFFFFFFFh

CM\_CLKSEL\_DPLL\_MPU is shown in Figure 8-97 and described in Table 8-101.

This register provides controls over the DPLL.

## Figure 8-97. CM\_CLKSEL\_DPLL\_MPU Register

| 31               | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|------------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED         | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h    | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23               | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| DPLL_BYP_CL KSEL | RESERVED      | RESERVED      | RESERVED      | RESERVED      | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     |
| R/W-0h           | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h        | R/W-0h        | R/W-0h        |
| 15               | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| DPLL_MULT        | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     |
| R/W-0h           | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 7                | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED         | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      |
| Rreturns0s-0h    |               |               |               | R/W-0h        |               |               |               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-101. CM\_CLKSEL\_DPLL\_MPU Register Field Descriptions

| Bit   | Field           | Type       | Reset   | Description                                                                                                                                                                                                                                                                            |
|-------|-----------------|------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                        |
| 23    | DPLL_BYP_CLKSEL | R/W        | 0h      | Selects CLKINP or CLKINPULOW as Bypass Clock 0h (R/W) = Selects CLKINP Clock as BYPASS Clock 1h (R/W) = Selects CLKINPULOW as Bypass Clock                                                                                                                                             |
| 22-19 | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                        |
| 18-8  | DPLL_MULT       | R/W        | 0h      | DPLL multiplier factor (2 to 2047). This register is automatically cleared to 0 when the DPLL_EN field in the *CLKMODE_DPLL* register is set to select MN Bypass mode. (equal to input M of DPLL M=2 to 2047 => DPLL multiplies by M). 0h (R/W) = 0 : Reserved 1h (R/W) = 1 : Reserved |
| 7     | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                        |
| 6-0   | DPLL_DIV        | R/W        | 0h      | DPLL divider factor (0 to 127) (equal to input N of DPLL actual division factor is N+1).                                                                                                                                                                                               |

## 8.1.12.2.13 CM\_AUTOIDLE\_DPLL\_DDR Register (offset = 30h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_AUTOIDLE\_DPLL\_DDR is shown in Figure 8-98 and described in Table 8-102.

This register provides automatic control over the DPLL activity.

## Figure 8-98. CM\_AUTOIDLE\_DPLL\_DDR Register

| 31       | 30       | 29               | 28             | 27       | 26       | 25       | 24       |
|----------|----------|------------------|----------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED         | RESERVED       | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22               | 22             | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 Rreturns0s-0h | 18             | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13               | 13             | 13       | 13       | 13       | 13       |
| 12       | 12       | 12               | 12             | 12       | 12       | 12       | 12       |
| 11       | 10       | 9 Rreturns0s-0h  | 8              | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3                | 3              | 3        | 3        | 3        | 3        |
| 2        | 2        | 2                | 2              | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RESERVED         | AUTO_DPLL_MODE |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-102. CM\_AUTOIDLE\_DPLL\_DDR Register Field Descriptions

| Bit   | Field          | Type       | Reset   | Description                      |
|-------|----------------|------------|---------|----------------------------------|
| 31-3  | RESERVED       | Rreturns0s | 0h      |                                  |
| 2-0   | AUTO_DPLL_MODE | R/W        | 0h      | AUTO_DPLL_MODE is not supported. |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.14 CM\_IDLEST\_DPLL\_DDR Register (offset = 34h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_IDLEST\_DPLL\_DDR is shown in Figure 8-99 and described in Table 8-103.

This register allows monitoring the master clock activity. This register is read only and automatically updated. [warm reset insensitive]

Figure 8-99. CM\_IDLEST\_DPLL\_DDR Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | ST_MN_BYPA SS |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | ST_DPLL_CLK   |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-103. CM\_IDLEST\_DPLL\_DDR Register Field Descriptions

| Bit   | Field        | Type       | Reset   | Description                                                                                         |
|-------|--------------|------------|---------|-----------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED     | Rreturns0s | 0h      |                                                                                                     |
| 8     | ST_MN_BYPASS | R          | 0h      | DPLL MN_BYPASS status 0h (R) = DPLL is not in MN_Bypass 1h (R) = DPLL is in MN_Bypass               |
| 7-1   | RESERVED     | Rreturns0s | 0h      |                                                                                                     |
| 0     | ST_DPLL_CLK  | R          | 0h      | DPLL clock activity 0h (R) = DPLL is either in bypass mode or in stop mode. 1h (R) = DPLL is LOCKED |

## 8.1.12.2.15 CM\_SSC\_DELTAMSTEP\_DPLL\_DDR Register (offset = 38h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_SSC\_DELTAMSTEP\_DPLL\_DDR is shown in Figure 8-100 and described in Table 8-104.

Control the DeltaMStep parameter for Spread Spectrum Clocking technique DeltaMStep is split into fractional and integer part. [warm reset insensitive]

Figure 8-100. CM\_SSC\_DELTAMSTEP\_DPLL\_DDR Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | DELTAMSTEP_INTEGER  | DELTAMSTEP_INTEGER  | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-104. CM\_SSC\_DELTAMSTEP\_DPLL\_DDR Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                 |
|-------|----------------------|------------|---------|---------------------------------------------|
| 31-20 | RESERVED             | Rreturns0s | 0h      |                                             |
| 19-18 | DELTAMSTEP_INTEGER   | R/W        | 0h      | Integer part for DeltaM coefficient         |
| 17-0  | DELTAMSTEP_FRACTIO N | R/W        | 0h      | Fractional setting for DeltaMStep parameter |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.16 CM\_SSC\_MODFREQDIV\_DPLL\_DDR Register (offset = 3Ch) [reset = 0h]

Register mask: FFFFFFFFh

CM\_SSC\_MODFREQDIV\_DPLL\_DDR is shown in Figure 8-101 and described in Table 8-105.

Control the Modulation Frequency (Fm) for Spread Spectrum Clocking technique by defining it as a ratio of DPLL\_REFCLK/4 Fm = [DPLL\_REFCLK/4]/MODFREQDIV MODFREQDIV = MODFREQDIV\_MANTISSA * 2^MODFREQDIV\_EXPONENT [warm reset insensitive]

Figure 8-101. CM\_SSC\_MODFREQDIV\_DPLL\_DDR Register

| 31            | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 23            | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 15            | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | MODFREQDIV_EXPONENT | MODFREQDIV_EXPONENT | MODFREQDIV_EXPONENT |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | R/W-0h              | R/W-0h              | R/W-0h              |
| 7             | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| RESERVED      | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA |
| Rreturns0s-0h |                     |                     |                     | R/W-0h              |                     |                     |                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-105. CM\_SSC\_MODFREQDIV\_DPLL\_DDR Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                     |
|-------|----------------------|------------|---------|-------------------------------------------------|
| 31-11 | RESERVED             | Rreturns0s | 0h      |                                                 |
| 10-8  | MODFREQDIV_EXPONE NT | R/W        | 0h      | Set the Exponent component of MODFREQDIV factor |
| 7     | RESERVED             | Rreturns0s | 0h      |                                                 |
| 6-0   | MODFREQDIV_MANTISS A | R/W        | 0h      | Set the Mantissa component of MODFREQDIV factor |

## 8.1.12.2.17 CM\_CLKSEL\_DPLL\_DDR Register (offset = 40h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_CLKSEL\_DPLL\_DDR is shown in Figure 8-102 and described in Table 8-106.

This register provides controls over the DPLL.

Figure 8-102. CM\_CLKSEL\_DPLL\_DDR Register

| 31               | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|------------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED         | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h    | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23               | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| DPLL_BYP_CL KSEL | RESERVED      | RESERVED      | RESERVED      | RESERVED      | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     |
| R/W-0h           | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h        | R/W-0h        | R/W-0h        |
| 15               | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| DPLL_MULT        | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     |
| R/W-0h           | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 7                | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED         | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      |
| Rreturns0s-0h    |               |               |               | R/W-0h        |               |               |               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-106. CM\_CLKSEL\_DPLL\_DDR Register Field Descriptions

| Bit   | Field           | Type       | Reset   | Description                                                                                                                                                                                                                                                                            |
|-------|-----------------|------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                        |
| 23    | DPLL_BYP_CLKSEL | R/W        | 0h      | Select CLKINP orr CLKINPULOW as bypass clock 0h (R/W) = Selects CLKINP Clock as BYPASS Clock 1h (R/W) = Selects CLKINPULOW as Bypass Clock                                                                                                                                             |
| 22-19 | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                        |
| 18-8  | DPLL_MULT       | R/W        | 0h      | DPLL multiplier factor (2 to 2047). This register is automatically cleared to 0 when the DPLL_EN field in the *CLKMODE_DPLL* register is set to select MN Bypass mode. (equal to input M of DPLL M=2 to 2047 => DPLL multiplies by M). 0h (R/W) = 0 : Reserved 1h (R/W) = 1 : Reserved |
| 7     | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                        |
| 6-0   | DPLL_DIV        | R/W        | 0h      | DPLL divider factor (0 to 127) (equal to input N of DPLL actual division factor is N+1).                                                                                                                                                                                               |

<!-- image -->

<!-- image -->

## 8.1.12.2.18 CM\_AUTOIDLE\_DPLL\_DISP Register (offset = 44h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_AUTOIDLE\_DPLL\_DISP is shown in Figure 8-103 and described in Table 8-107.

This register provides automatic control over the DPLL activity.

## Figure 8-103. CM\_AUTOIDLE\_DPLL\_DISP Register

| 31       | 30       | 29               | 28             | 27       | 26       | 25       | 24       |
|----------|----------|------------------|----------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED         | RESERVED       | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22               | 22             | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 Rreturns0s-0h | 18             | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13               | 13             | 13       | 13       | 13       | 13       |
| 12       | 12       | 12               | 12             | 12       | 12       | 12       | 12       |
| 11       | 10       | 9 Rreturns0s-0h  | 8              | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3                | 3              | 3        | 3        | 3        | 3        |
| 2        | 2        | 2                | 2              | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RESERVED         | AUTO_DPLL_MODE |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-107. CM\_AUTOIDLE\_DPLL\_DISP Register Field Descriptions

| Bit   | Field          | Type       | Reset   | Description                      |
|-------|----------------|------------|---------|----------------------------------|
| 31-3  | RESERVED       | Rreturns0s | 0h      |                                  |
| 2-0   | AUTO_DPLL_MODE | R/W        | 0h      | AUTO_DPLL_MODE is not supported. |

## 8.1.12.2.19 CM\_IDLEST\_DPLL\_DISP Register (offset = 48h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_IDLEST\_DPLL\_DISP is shown in Figure 8-104 and described in Table 8-108.

This register allows monitoring the master clock activity. This register is read only and automatically updated. [warm reset insensitive]

Figure 8-104. CM\_IDLEST\_DPLL\_DISP Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | ST_MN_BYPA SS |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | ST_DPLL_CLK   |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-108. CM\_IDLEST\_DPLL\_DISP Register Field Descriptions

| Bit   | Field        | Type       | Reset   | Description                                                                                         |
|-------|--------------|------------|---------|-----------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED     | Rreturns0s | 0h      |                                                                                                     |
| 8     | ST_MN_BYPASS | R          | 0h      | DPLL MN_BYPASS status 0h (R) = DPLL is not in MN_Bypass 1h (R) = DPLL is in MN_Bypass               |
| 7-1   | RESERVED     | Rreturns0s | 0h      |                                                                                                     |
| 0     | ST_DPLL_CLK  | R          | 0h      | DPLL clock activity 0h (R) = DPLL is either in bypass mode or in stop mode. 1h (R) = DPLL is LOCKED |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.20 CM\_SSC\_DELTAMSTEP\_DPLL\_DISP Register (offset = 4Ch) [reset = 0h]

Register mask: FFFFFFFFh

CM\_SSC\_DELTAMSTEP\_DPLL\_DISP is shown in Figure 8-105 and described in Table 8-109.

Control the DeltaMStep parameter for Spread Spectrum Clocking technique DeltaMStep is split into fractional and integer part. [warm reset insensitive]

Figure 8-105. CM\_SSC\_DELTAMSTEP\_DPLL\_DISP Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | DELTAMSTEP_INTEGER  | DELTAMSTEP_INTEGER  | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-109. CM\_SSC\_DELTAMSTEP\_DPLL\_DISP Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                 |
|-------|----------------------|------------|---------|---------------------------------------------|
| 31-20 | RESERVED             | Rreturns0s | 0h      |                                             |
| 19-18 | DELTAMSTEP_INTEGER   | R/W        | 0h      | Integer part for DeltaM coefficient         |
| 17-0  | DELTAMSTEP_FRACTIO N | R/W        | 0h      | Fractional setting for DeltaMStep parameter |

## 8.1.12.2.21 CM\_SSC\_MODFREQDIV\_DPLL\_DISP Register (offset = 50h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_SSC\_MODFREQDIV\_DPLL\_DISP is shown in Figure 8-106 and described in Table 8-110.

Control the Modulation Frequency (Fm) for Spread Spectrum Clocking technique by defining it as a ratio of DPLL\_REFCLK/4 Fm = [DPLL\_REFCLK/4]/MODFREQDIV MODFREQDIV = MODFREQDIV\_MANTISSA * 2^MODFREQDIV\_EXPONENT [warm reset insensitive]

Figure 8-106. CM\_SSC\_MODFREQDIV\_DPLL\_DISP Register

| 31            | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 23            | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 15            | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | MODFREQDIV_EXPONENT | MODFREQDIV_EXPONENT | MODFREQDIV_EXPONENT |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | R/W-0h              | R/W-0h              | R/W-0h              |
| 7             | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| RESERVED      | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA |
| Rreturns0s-0h |                     |                     |                     | R/W-0h              |                     |                     |                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-110. CM\_SSC\_MODFREQDIV\_DPLL\_DISP Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                     |
|-------|----------------------|------------|---------|-------------------------------------------------|
| 31-11 | RESERVED             | Rreturns0s | 0h      |                                                 |
| 10-8  | MODFREQDIV_EXPONE NT | R/W        | 0h      | Set the Exponent component of MODFREQDIV factor |
| 7     | RESERVED             | Rreturns0s | 0h      |                                                 |
| 6-0   | MODFREQDIV_MANTISS A | R/W        | 0h      | Set the Mantissa component of MODFREQDIV factor |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.22 CM\_CLKSEL\_DPLL\_DISP Register (offset = 54h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_CLKSEL\_DPLL\_DISP is shown in Figure 8-107 and described in Table 8-111.

This register provides controls over the DPLL.

## Figure 8-107. CM\_CLKSEL\_DPLL\_DISP Register

| 31               | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|------------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED         | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h    | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23               | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| DPLL_BYP_CL KSEL | RESERVED      | RESERVED      | RESERVED      | RESERVED      | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     |
| R/W-0h           | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h        | R/W-0h        | R/W-0h        |
| 15               | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| DPLL_MULT        | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     |
| R/W-0h           | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 7                | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED         | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      |
| Rreturns0s-0h    |               |               |               | R/W-0h        |               |               |               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-111. CM\_CLKSEL\_DPLL\_DISP Register Field Descriptions

| Bit   | Field           | Type       | Reset   | Description                                                                                                                                                                                                                                                                            |
|-------|-----------------|------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                        |
| 23    | DPLL_BYP_CLKSEL | R/W        | 0h      | Select CLKINP or CLKINPULOW as bypass clock 0h (R/W) = Selects CLKINP Clock as BYPASS Clock 1h (R/W) = Selects CLKINPULOW as Bypass Clock                                                                                                                                              |
| 22-19 | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                        |
| 18-8  | DPLL_MULT       | R/W        | 0h      | DPLL multiplier factor (2 to 2047). This register is automatically cleared to 0 when the DPLL_EN field in the *CLKMODE_DPLL* register is set to select MN Bypass mode. (equal to input M of DPLL M=2 to 2047 => DPLL multiplies by M). 0h (R/W) = 0 : Reserved 1h (R/W) = 1 : Reserved |
| 7     | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                        |
| 6-0   | DPLL_DIV        | R/W        | 0h      | DPLL divider factor (0 to 127) (equal to input N of DPLL actual division factor is N+1).                                                                                                                                                                                               |

## 8.1.12.2.23 CM\_AUTOIDLE\_DPLL\_CORE Register (offset = 58h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_AUTOIDLE\_DPLL\_CORE is shown in Figure 8-108 and described in Table 8-112.

This register provides automatic control over the DPLL activity.

## Figure 8-108. CM\_AUTOIDLE\_DPLL\_CORE Register

| 31       | 30       | 29               | 28             | 27       | 26       | 25       | 24       |
|----------|----------|------------------|----------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED         | RESERVED       | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22               | 22             | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 Rreturns0s-0h | 18             | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13               | 13             | 13       | 13       | 13       | 13       |
| 12       | 12       | 12               | 12             | 12       | 12       | 12       | 12       |
| 11       | 10       | 9 Rreturns0s-0h  | 8              | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3                | 3              | 3        | 3        | 3        | 3        |
| 2        | 2        | 2                | 2              | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RESERVED         | AUTO_DPLL_MODE |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-112. CM\_AUTOIDLE\_DPLL\_CORE Register Field Descriptions

| Bit   | Field          | Type       | Reset   | Description                    |
|-------|----------------|------------|---------|--------------------------------|
| 31-3  | RESERVED       | Rreturns0s | 0h      |                                |
| 2-0   | AUTO_DPLL_MODE | R/W        | 0h      | This feature is not supported. |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.24 CM\_IDLEST\_DPLL\_CORE Register (offset = 5Ch) [reset = 0h]

Register mask: FFFFFFFFh

CM\_IDLEST\_DPLL\_CORE is shown in Figure 8-109 and described in Table 8-113.

This register allows monitoring the master clock activity. This register is read only and automatically updated. [warm reset insensitive]

## Figure 8-109. CM\_IDLEST\_DPLL\_CORE Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | ST_MN_BYPA SS |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | ST_DPLL_CLK   |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-113. CM\_IDLEST\_DPLL\_CORE Register Field Descriptions

| Bit   | Field        | Type       | Reset   | Description                                                                                         |
|-------|--------------|------------|---------|-----------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED     | Rreturns0s | 0h      |                                                                                                     |
| 8     | ST_MN_BYPASS | R          | 0h      | DPLL MN_BYPASS status 0h (R) = DPLL is not in MN_Bypass 1h (R) = DPLL is in MN_Bypass               |
| 7-1   | RESERVED     | Rreturns0s | 0h      |                                                                                                     |
| 0     | ST_DPLL_CLK  | R          | 0h      | DPLL clock activity 0h (R) = DPLL is either in bypass mode or in stop mode. 1h (R) = DPLL is LOCKED |

## 8.1.12.2.25 CM\_SSC\_DELTAMSTEP\_DPLL\_CORE Register (offset = 60h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_SSC\_DELTAMSTEP\_DPLL\_CORE is shown in Figure 8-110 and described in Table 8-114.

Control the DeltaMStep parameter for Spread Spectrum Clocking technique DeltaMStep is split into fractional and integer part. [warm reset insensitive]

Figure 8-110. CM\_SSC\_DELTAMSTEP\_DPLL\_CORE Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | DELTAMSTEP_INTEGER  | DELTAMSTEP_INTEGER  | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-114. CM\_SSC\_DELTAMSTEP\_DPLL\_CORE Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                 |
|-------|----------------------|------------|---------|---------------------------------------------|
| 31-20 | RESERVED             | Rreturns0s | 0h      |                                             |
| 19-18 | DELTAMSTEP_INTEGER   | R/W        | 0h      | Integer part for DeltaM coefficient         |
| 17-0  | DELTAMSTEP_FRACTIO N | R/W        | 0h      | Fractional setting for DeltaMStep parameter |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.26 CM\_SSC\_MODFREQDIV\_DPLL\_CORE Register (offset = 64h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_SSC\_MODFREQDIV\_DPLL\_CORE is shown in Figure 8-111 and described in Table 8-115.

Control the Modulation Frequency (Fm) for Spread Spectrum Clocking technique by defining it as a ratio of DPLL\_REFCLK/4 Fm = [DPLL\_REFCLK/4]/MODFREQDIV MODFREQDIV = MODFREQDIV\_MANTISSA * 2^MODFREQDIV\_EXPONENT [warm reset insensitive]

## Figure 8-111. CM\_SSC\_MODFREQDIV\_DPLL\_CORE Register

| 31            | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 23            | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 15            | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | MODFREQDIV_EXPONENT | MODFREQDIV_EXPONENT | MODFREQDIV_EXPONENT |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | R/W-0h              | R/W-0h              | R/W-0h              |
| 7             | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| RESERVED      | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA |
| Rreturns0s-0h |                     |                     |                     | R/W-0h              |                     |                     |                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-115. CM\_SSC\_MODFREQDIV\_DPLL\_CORE Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                     |
|-------|----------------------|------------|---------|-------------------------------------------------|
| 31-11 | RESERVED             | Rreturns0s | 0h      |                                                 |
| 10-8  | MODFREQDIV_EXPONE NT | R/W        | 0h      | Set the Exponent component of MODFREQDIV factor |
| 7     | RESERVED             | Rreturns0s | 0h      |                                                 |
| 6-0   | MODFREQDIV_MANTISS A | R/W        | 0h      | Set the Mantissa component of MODFREQDIV factor |

## 8.1.12.2.27 CM\_CLKSEL\_DPLL\_CORE Register (offset = 68h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_CLKSEL\_DPLL\_CORE is shown in Figure 8-112 and described in Table 8-116.

This register provides controls over the DPLL.

Figure 8-112. CM\_CLKSEL\_DPLL\_CORE Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h        | R/W-0h        | R/W-0h        |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     |
| R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      |
| Rreturns0s-0h |               |               |               | R/W-0h        |               |               |               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-116. CM\_CLKSEL\_DPLL\_CORE Register Field Descriptions

| Bit   | Field     | Type       | Reset   | Description                                                                                                                                                                                                                                                                   |
|-------|-----------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-23 | RESERVED  | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                               |
| 22-19 | RESERVED  | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                               |
| 18-8  | DPLL_MULT | R/W        | 0h      | DPLL multiplier factor (2 to 2047). This register is automatically cleared to 0 when the DPLL_EN field in the *CLKMODE_DPLL* register is set to select MN Bypass mode. (equal to input M of DPLL M=2 to 2047 => DPLL multiplies by M) 0h (R/W) = Reserved 1h (R/W) = Reserved |
| 7     | RESERVED  | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                               |
| 6-0   | DPLL_DIV  | R/W        | 0h      | DPLL divider factor (0 to 127) (equal to input N of DPLL actual division factor is N+1).                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## 8.1.12.2.28 CM\_AUTOIDLE\_DPLL\_PER Register (offset = 6Ch) [reset = 0h]

Register mask: FFFFFFFFh

CM\_AUTOIDLE\_DPLL\_PER is shown in Figure 8-113 and described in Table 8-117.

This register provides automatic control over the DPLL activity.

## Figure 8-113. CM\_AUTOIDLE\_DPLL\_PER Register

| 31       | 30       | 29               | 28             | 27       | 26       | 25       | 24       |
|----------|----------|------------------|----------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED         | RESERVED       | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22               | 22             | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 Rreturns0s-0h | 18             | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13               | 13             | 13       | 13       | 13       | 13       |
| 12       | 12       | 12               | 12             | 12       | 12       | 12       | 12       |
| 11       | 10       | 9 Rreturns0s-0h  | 8              | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3                | 3              | 3        | 3        | 3        | 3        |
| 2        | 2        | 2                | 2              | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RESERVED         | AUTO_DPLL_MODE |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-117. CM\_AUTOIDLE\_DPLL\_PER Register Field Descriptions

| Bit   | Field          | Type       | Reset   | Description                      |
|-------|----------------|------------|---------|----------------------------------|
| 31-3  | RESERVED       | Rreturns0s | 0h      |                                  |
| 2-0   | AUTO_DPLL_MODE | R/W        | 0h      | AUTO_DPLL_MODE is not supported. |

## 8.1.12.2.29 CM\_IDLEST\_DPLL\_PER Register (offset = 70h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_IDLEST\_DPLL\_PER is shown in Figure 8-114 and described in Table 8-118.

This register allows monitoring the master clock activity. This register is read only and automatically updated. [warm reset insensitive]

Figure 8-114. CM\_IDLEST\_DPLL\_PER Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | ST_MN_BYPA SS |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | ST_DPLL_CLK   |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-118. CM\_IDLEST\_DPLL\_PER Register Field Descriptions

| Bit   | Field        | Type       | Reset   | Description                                                                                         |
|-------|--------------|------------|---------|-----------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED     | Rreturns0s | 0h      |                                                                                                     |
| 8     | ST_MN_BYPASS | R          | 0h      | DPLL MN_BYPASS status 0h (R) = DPLL is not in MN_Bypass 1h (R) = DPLL is in MN_Bypass               |
| 7-1   | RESERVED     | Rreturns0s | 0h      |                                                                                                     |
| 0     | ST_DPLL_CLK  | R          | 0h      | DPLL clock activity 0h (R) = DPLL is either in bypass mode or in stop mode. 1h (R) = DPLL is LOCKED |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.30 CM\_SSC\_DELTAMSTEP\_DPLL\_PER Register (offset = 74h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_SSC\_DELTAMSTEP\_DPLL\_PER is shown in Figure 8-115 and described in Table 8-119.

Control the DeltaMStep parameter for Spread Spectrum Clocking technique DeltaMStep is split into fractional and integer part. [warm reset insensitive]

Figure 8-115. CM\_SSC\_DELTAMSTEP\_DPLL\_PER Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | DELTAMSTEP_INTEGER  | DELTAMSTEP_INTEGER  | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION | DELTAMSTEP_FRACTION |
| R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-119. CM\_SSC\_DELTAMSTEP\_DPLL\_PER Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                 |
|-------|----------------------|------------|---------|---------------------------------------------|
| 31-20 | RESERVED             | Rreturns0s | 0h      |                                             |
| 19-18 | DELTAMSTEP_INTEGER   | R/W        | 0h      | Integer part for DeltaM coefficient         |
| 17-0  | DELTAMSTEP_FRACTIO N | R/W        | 0h      | Fractional setting for DeltaMStep parameter |

## 8.1.12.2.31 CM\_SSC\_MODFREQDIV\_DPLL\_PER Register (offset = 78h) [reset = 0h]

Register mask: FFFFFFFFh

CM\_SSC\_MODFREQDIV\_DPLL\_PER is shown in Figure 8-116 and described in Table 8-120.

Control the Modulation Frequency (Fm) for Spread Spectrum Clocking technique by defining it as a ratio of DPLL\_REFCLK/4 Fm = [DPLL\_REFCLK/4]/MODFREQDIV MODFREQDIV = MODFREQDIV\_MANTISSA * 2^MODFREQDIV\_EXPONENT [warm reset insensitive]

Figure 8-116. CM\_SSC\_MODFREQDIV\_DPLL\_PER Register

| 31            | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 23            | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       |
| 15            | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED      | RESERVED            | RESERVED            | RESERVED            | RESERVED            | MODFREQDIV_EXPONENT | MODFREQDIV_EXPONENT | MODFREQDIV_EXPONENT |
| Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | Rreturns0s-0h       | R/W-0h              | R/W-0h              | R/W-0h              |
| 7             | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| RESERVED      | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA | MODFREQDIV_MANTISSA |
| Rreturns0s-0h |                     |                     |                     | R/W-0h              |                     |                     |                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-120. CM\_SSC\_MODFREQDIV\_DPLL\_PER Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                     |
|-------|----------------------|------------|---------|-------------------------------------------------|
| 31-11 | RESERVED             | Rreturns0s | 0h      |                                                 |
| 10-8  | MODFREQDIV_EXPONE NT | R/W        | 0h      | Set the Exponent component of MODFREQDIV factor |
| 7     | RESERVED             | Rreturns0s | 0h      |                                                 |
| 6-0   | MODFREQDIV_MANTISS A | R/W        | 0h      | Set the Mantissa component of MODFREQDIV factor |

<!-- image -->

<!-- image -->

## 8.1.12.2.32 CM\_CLKDCOLDO\_DPLL\_PER Register (offset = 7Ch) [reset = 0h]

Register mask: FFFFFFFFh

CM\_CLKDCOLDO\_DPLL\_PER is shown in Figure 8-117 and described in Table 8-121.

This register provides controls over the digitally controlled oscillator output of the PER DPLL.

Figure 8-117. CM\_CLKDCOLDO\_DPLL\_PER Register

| 31            | 30            | 29            | 28                   | 27            | 26            | 25                 | 24                         |
|---------------|---------------|---------------|----------------------|---------------|---------------|--------------------|----------------------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED             | RESERVED      | RESERVED      | RESERVED           | RESERVED                   |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h        | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h      | Rreturns0s-0h              |
| 23            | 22            | 21            | 20                   | 19            | 18            | 17                 | 16                         |
| RESERVED      | RESERVED      | RESERVED      | RESERVED             | RESERVED      | RESERVED      | RESERVED           | RESERVED                   |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h        | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h      | Rreturns0s-0h              |
| 15            | 14            | 13            | 12                   | 11            | 10            | 9                  | 8                          |
|               | RESERVED      |               | DPLL_CLKDC OLDO_PWDN | RESERVED      | RESERVED      | ST_DPLL_CLK DCOLDO | DPLL_CLKDC OLDO_GATE_ CTRL |
|               | Rreturns0s-0h |               | R/W-0h               | Rreturns0s-0h | Rreturns0s-0h | R-0h               | R/W-0h                     |
| 7             | 6             | 5             | 4                    | 3             | 2             | 1                  | 0                          |
| RESERVED      | RESERVED      | RESERVED      | RESERVED             | RESERVED      | RESERVED      | RESERVED           | RESERVED                   |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h        | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h      | Rreturns0s-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-121. CM\_CLKDCOLDO\_DPLL\_PER Register Field Descriptions

| Bit   | Field                     | Type       | Reset   | Description                                                                                                                                                                                |
|-------|---------------------------|------------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED                  | Rreturns0s | 0h      |                                                                                                                                                                                            |
| 12    | DPLL_CLKDCOLDO_PW DN      | R/W        | 0h      | Automatic power down for CLKDCOLDO o/p when it is gated 0h (R/W) = Keep CLKDCOLDO o/p powered on even when it is gated 1h (R/W) = Automatically power down CLKDCOLDO o/p when it is gated. |
| 11-10 | RESERVED                  | Rreturns0s | 0h      |                                                                                                                                                                                            |
| 9     | ST_DPLL_CLKDCOLDO         | R          | 0h      | DPLL CLKDCOLDO status 0h (R) = The clock output is gated 1h (R) = The clock output is enabled                                                                                              |
| 8     | DPLL_CLKDCOLDO_GA TE_CTRL | R/W        | 0h      | Control gating of DPLL CLKDCOLDO 0h (R/W) = Automatically gate this clock when there is no dependency for it 1h (R/W) = Force this clock to stay enabled even if there is no request       |
| 7-0   | RESERVED                  | Rreturns0s | 0h      |                                                                                                                                                                                            |

## 8.1.12.2.33 CM\_DIV\_M4\_DPLL\_CORE Register (offset = 80h) [reset = 4h]

Register mask: FFFFFFFFh

CM\_DIV\_M4\_DPLL\_CORE is shown in Figure 8-118 and described in Table 8-122.

This register provides controls over the CLKOUT1 o/p of the HSDIVIDER.

Figure 8-118. CM\_DIV\_M4\_DPLL\_CORE Register

| 31            | 30            | 29                           | 28                       | 27                    | 26                    | 25                    | 24                            |
|---------------|---------------|------------------------------|--------------------------|-----------------------|-----------------------|-----------------------|-------------------------------|
| RESERVED      | RESERVED      | RESERVED                     | RESERVED                 | RESERVED              | RESERVED              | RESERVED              | RESERVED                      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                | Rreturns0s-0h            | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h                 |
| 23            | 22            | 21                           | 20                       | 19                    | 18                    | 17                    | 16                            |
| RESERVED      | RESERVED      | RESERVED                     | RESERVED                 | RESERVED              | RESERVED              | RESERVED              | RESERVED                      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                | Rreturns0s-0h            | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h                 |
| 15            | 14            | 13                           | 12                       | 11                    | 10                    | 9                     | 8                             |
|               | RESERVED      |                              | HSDIVIDER_C LKOUT1_PWD N | RESERVED              | RESERVED              | ST_HSDIVIDE R_CLKOUT1 | HSDIVIDER_C LKOUT1_GAT E_CTRL |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                | R/W-0h                   | Rreturns0s-0h         | Rreturns0s-0h         | R-0h                  | R/W-0h                        |
| 7             | 6             | 5                            | 4                        | 3                     | 2                     | 1                     | 0                             |
| RESERVED      | RESERVED      | HSDIVIDER_C LKOUT1_DIVC HACK | HSDIVIDER_CLKOUT1_DIV    | HSDIVIDER_CLKOUT1_DIV | HSDIVIDER_CLKOUT1_DIV | HSDIVIDER_CLKOUT1_DIV | HSDIVIDER_CLKOUT1_DIV         |
| Rreturns0s-0h | Rreturns0s-0h | R-0h                         | R/W-4h                   | R/W-4h                | R/W-4h                | R/W-4h                | R/W-4h                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-122. CM\_DIV\_M4\_DPLL\_CORE Register Field Descriptions

| Bit   | Field                        | Type       | Reset   | Description                                                                                                                                                                                                                                 |
|-------|------------------------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED                     | Rreturns0s | 0h      |                                                                                                                                                                                                                                             |
| 12    | HSDIVIDER_CLKOUT1_P WDN      | R/W        | 0h      | Automatic power down for HSDIVIDER M4 divider and hence CLKOUT1 output when the o/p clock is gated. 0h (R/W) = Keep M4 divider powered on even when CLKOUT1 is gated. 1h (R/W) = Automatically power down M4 divider when CLKOUT1 is gated. |
| 11-10 | RESERVED                     | Rreturns0s | 0h      |                                                                                                                                                                                                                                             |
| 9     | ST_HSDIVIDER_CLKOU T1        | R          | 0h      | HSDIVIDER CLKOUT1 status 0h (R) = The clock output is gated 1h (R) = The clock output is enabled                                                                                                                                            |
| 8     | HSDIVIDER_CLKOUT1_ GATE_CTRL | R/W        | 0h      | Control gating of HSDIVIDER CLKOUT1 0h (R/W) = Automatically gate this clock when there is no dependency for it 1h (R/W) = Force this clock to stay enabled even if there is no request                                                     |
| 7-6   | RESERVED                     | Rreturns0s | 0h      |                                                                                                                                                                                                                                             |
| 5     | HSDIVIDER_CLKOUT1_ DIVCHACK  | R          | 0h      | Toggle on this status bit after changing HSDIVIDER_CLKOUT1_DIV indicates that the change in divider value has taken effect                                                                                                                  |
| 4-0   | HSDIVIDER_CLKOUT1_ DIV       | R/W        | 4h      | DPLL post-divider factor, M4, for internal clock generation. Divide values from 1 to 31. 0h (R/W) = Reserved                                                                                                                                |

<!-- image -->

<!-- image -->

## 8.1.12.2.34 CM\_DIV\_M5\_DPLL\_CORE Register (offset = 84h) [reset = 4h]

Register mask: FFFFFFFFh

CM\_DIV\_M5\_DPLL\_CORE is shown in Figure 8-119 and described in Table 8-123.

This register provides controls over the CLKOUT2 o/p of the HSDIVIDER.

## Figure 8-119. CM\_DIV\_M5\_DPLL\_CORE Register

| 31            | 30            | 29                           | 28                       | 27                    | 26                    | 25                    | 24                            |
|---------------|---------------|------------------------------|--------------------------|-----------------------|-----------------------|-----------------------|-------------------------------|
| RESERVED      | RESERVED      | RESERVED                     | RESERVED                 | RESERVED              | RESERVED              | RESERVED              | RESERVED                      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                | Rreturns0s-0h            | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h                 |
| 23            | 22            | 21                           | 20                       | 19                    | 18                    | 17                    | 16                            |
| RESERVED      | RESERVED      | RESERVED                     | RESERVED                 | RESERVED              | RESERVED              | RESERVED              | RESERVED                      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                | Rreturns0s-0h            | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h                 |
| 15            | 14            | 13                           | 12                       | 11                    | 10                    | 9                     | 8                             |
|               | RESERVED      |                              | HSDIVIDER_C LKOUT2_PWD N | RESERVED              | RESERVED              | ST_HSDIVIDE R_CLKOUT2 | HSDIVIDER_C LKOUT2_GAT E_CTRL |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                | R/W-0h                   | Rreturns0s-0h         | Rreturns0s-0h         | R-0h                  | R/W-0h                        |
| 7             | 6             | 5                            | 4                        | 3                     | 2                     | 1                     | 0                             |
| RESERVED      | RESERVED      | HSDIVIDER_C LKOUT2_DIVC HACK | HSDIVIDER_CLKOUT2_DIV    | HSDIVIDER_CLKOUT2_DIV | HSDIVIDER_CLKOUT2_DIV | HSDIVIDER_CLKOUT2_DIV | HSDIVIDER_CLKOUT2_DIV         |
| Rreturns0s-0h | Rreturns0s-0h | R-0h                         | R/W-4h                   | R/W-4h                | R/W-4h                | R/W-4h                | R/W-4h                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-123. CM\_DIV\_M5\_DPLL\_CORE Register Field Descriptions

| Bit   | Field                        | Type       | Reset   | Description                                                                                                                                                                                                                                 |
|-------|------------------------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED                     | Rreturns0s | 0h      |                                                                                                                                                                                                                                             |
| 12    | HSDIVIDER_CLKOUT2_P WDN      | R/W        | 0h      | Automatic power down for HSDIVIDER M5 divider and hence CLKOUT2 output when the o/p clock is gated. 0h (R/W) = Keep M5 divider powered on even when CLKOUT2 is gated. 1h (R/W) = Automatically power down M5 divider when CLKOUT2 is gated. |
| 11-10 | RESERVED                     | Rreturns0s | 0h      |                                                                                                                                                                                                                                             |
| 9     | ST_HSDIVIDER_CLKOU T2        | R          | 0h      | HSDIVIDER CLKOUT2 status 0h (R) = The clock output is gated 1h (R) = The clock output is enabled                                                                                                                                            |
| 8     | HSDIVIDER_CLKOUT2_ GATE_CTRL | R/W        | 0h      | Control gating of HSDIVIDER CLKOUT2 0h (R/W) = Automatically gate this clock when there is no dependency for it 1h (R/W) = Force this clock to stay enabled even if there is no request                                                     |
| 7-6   | RESERVED                     | Rreturns0s | 0h      |                                                                                                                                                                                                                                             |
| 5     | HSDIVIDER_CLKOUT2_ DIVCHACK  | R          | 0h      | Toggle on this status bit after changing HSDIVIDER_CLKOUT2_DIV indicates that the change in divider value has taken effect                                                                                                                  |
| 4-0   | HSDIVIDER_CLKOUT2_ DIV       | R/W        | 4h      | DPLL post-divider factor, M5, for internal clock generation. Divide values from 1 to 31. 0h (R/W) = Reserved                                                                                                                                |

## 8.1.12.2.35 CM\_CLKMODE\_DPLL\_MPU Register (offset = 88h) [reset = 4h]

Register mask: FFFFFFFFh

CM\_CLKMODE\_DPLL\_MPU is shown in Figure 8-120 and described in Table 8-124.

This register allows controlling the DPLL modes.

Figure 8-120. CM\_CLKMODE\_DPLL\_MPU Register

| 31             | 30                   | 29             | 28              | 27              | 26              | 25                   | 24                  |
|----------------|----------------------|----------------|-----------------|-----------------|-----------------|----------------------|---------------------|
| RESERVED       | RESERVED             | RESERVED       | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED            |
| Rreturns0s-0h  | Rreturns0s-0h        | Rreturns0s-0h  | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h       |
| 23             | 22                   | 21             | 20              | 19              | 18              | 17                   | 16                  |
| RESERVED       | RESERVED             | RESERVED       | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED            |
| Rreturns0s-0h  | Rreturns0s-0h        | Rreturns0s-0h  | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h       |
| 15             | 14                   | 13             | 12              | 11              | 10              | 9                    | 8                   |
| DPLL_SSC_TY PE | DPLL_SSC_D OWNSPREAD | DPLL_SSC_AC K  | DPLL_SSC_EN     | DPLL_REGM4 XEN  | DPLL_LPMOD E_EN | DPLL_RELOC K_RAMP_EN | DPLL_DRIFTG UARD_EN |
| R/W-0h         | R/W-0h               | R-0h           | R/W-0h          | Rreturns0s-0h   | R/W-0h          | R/W-0h               | R/W-0h              |
| 7              | 6                    | 5              | 4               | 3               | 2               | 1                    | 0                   |
| DPLL_RAMP_RATE | DPLL_RAMP_RATE       | DPLL_RAMP_RATE | DPLL_RAMP_LEVEL | DPLL_RAMP_LEVEL |                 | DPLL_EN              |                     |
| R/W-0h         | R/W-0h               | R/W-0h         | R/W-0h          | R/W-0h          |                 | R/W-4h               |                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-124. CM\_CLKMODE\_DPLL\_MPU Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                                                                                                                                                                                                                                       |
|-------|----------------------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED             | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                   |
| 15    | DPLL_SSC_TYPE        | R/W        | 0h      | Select Triangular Spread Spectrum clocking. Always write 0. 0 = Triangular Spread Spectrum Clocking is selected. 1 = Reserved.                                                                                                                                    |
| 14    | DPLL_SSC_DOWNSPRE AD | R/W        | 0h      | Control if only low frequency spread is required 0h (R/W) = When SSC is enabled, clock frequency is spread on both sides of the programmed frequency 1h (R/W) = When SSC is enabled, clock frequency is spread only on the lower side of the programmed frequency |
| 13    | DPLL_SSC_ACK         | R          | 0h      | Acknowledgement from the DPLL regarding start and stop of Spread Spectrum Clocking feature 0h (R) = SSC has been turned off on PLL o/ps 1h (R) = SSC has been turned on on PLL o/ps                                                                               |
| 12    | DPLL_SSC_EN          | R/W        | 0h      | Enable or disable Spread Spectrum Clocking 0h (R/W) = SSC disabled 1h (R/W) = SSC enabled                                                                                                                                                                         |
| 11    | DPLL_REGM4XEN        | Rreturns0s | 0h      | Enable the REGM4XEN mode of the DPLL. Please check the DPLL documentation to check when this mode can be enabled. 0h (R) = REGM4XEN mode of the DPLL is disabled                                                                                                  |
| 10    | DPLL_LPMODE_EN       | R/W        | 0h      | Set the DPLL in Low Power mode. Check the DPLL documentation to see when this can be enabled. 0h (R/W) = Low power mode of the DPLL is disabled 1h (R/W) = Low power mode of the DPLL is enabled                                                                  |
| 9     | DPLL_RELOCK_RAMP_E N | R/W        | 0h      | If enabled, the clock ramping feature is used applied during the lock process, as well as the relock process. If disabled, the clock ramping feature is used only during the first lock.                                                                          |

<!-- image -->

<!-- image -->

www.ti.com

Table 8-124. CM\_CLKMODE\_DPLL\_MPU Register Field Descriptions (continued)

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|--------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | DPLL_DRIFTGUARD_EN | R/W    | 0h      | This bit allows to enable or disable the automatic recalibration feature of the DPLL. The DPLL will automatically start a recalibration process upon assertion of the DPLL's RECAL flag if this bit is set. 0h (R/W) = DRIFTGUARD feature is disabled 1h (R/W) = DRIFTGUARD feature is enabled                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 7-5   | DPLL_RAMP_RATE     | R/W    | 0h      | Selects the time in terms of DPLL REFCLKs spent at each stage of the clock ramping process 0h (R/W) = 2 REFCLKs 1h (R/W) = 4 REFCLKs 2h (R/W) = 8 REFCLKs 3h (R/W) = 16 REFCLKs 4h (R/W) = 32 REFCLKs 5h (R/W) = 64 REFCLKs 6h (R/W) = 128 REFCLKs 7h (R/W) = 512 REFCLKs                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 4-3   | DPLL_RAMP_LEVEL    | R/W    | 0h      | The DPLL provides an output clock frequency ramping feature when switching from bypass clock to normal clock during lock and re-lock. The frequency ramping will happen in a maximum of 4 steps in frequency before the DPLL's frequency lock indicator is asserted. This register is used to enable/disable the DPLL ramping feature. If enabled, it is also used to select the algorithm used for clock ramping 0h (R/W) = CLKOUT => No ramping CLKOUTX2 => No ramping 1h (R/W) = CLKOUT => Bypass clk -> Fout/8 -> Fout/4 -> Fout/2 -> Fout CLKOUTX2 => Bypass clk -> Foutx2/8 -> Foutx2/4 -> Foutx2/2 -> Foutx2 2h (R/W) = CLKOUT => Bypass clk -> Fout/4 -> Fout/2 -> Fout/1.5 - > Fout CLKOUTX2 => Bypass clk -> Foutx2/4 -> Foutx2/2 -> Foutx2/1.5 -> Foutx2 3h (R/W) = Reserved |
| 2-0   | DPLL_EN            | R/W    | 4h      | DPLL control. Upon Warm Reset, the PRCM DPLL control state machine updates this register to reflect MN Bypass mode. 0h (R/W) = Reserved 1h (R/W) = Reserved 2h (R/W) = Reserved 3h (R/W) = Reserved 4h (R/W) = Put the DPLL in MN Bypass mode. The DPLL_MULT register bits are reset to 0 automatically by putting the DPLL in this mode. 5h (R/W) = Put the DPLL in Idle Bypass Low Power mode. 6h (R/W) = Put the DPLL in Idle Bypass Fast Relock mode. 7h (R/W) = Enables the DPLL in Lock mode                                                                                                                                                                                                                                                                                      |

## 8.1.12.2.36 CM\_CLKMODE\_DPLL\_PER Register (offset = 8Ch) [reset = 4h]

Register mask: FFFFFFFFh

CM\_CLKMODE\_DPLL\_PER is shown in Figure 8-121 and described in Table 8-125.

This register allows controlling the DPLL modes.

Figure 8-121. CM\_CLKMODE\_DPLL\_PER Register

| 31            | 30               | 29       | 28       | 27                | 26                   | 25            | 24          |
|---------------|------------------|----------|----------|-------------------|----------------------|---------------|-------------|
| RESERVED      | RESERVED         | RESERVED | RESERVED | RESERVED          | RESERVED             | RESERVED      | RESERVED    |
| 22            | 22               | 22       | 22       | 22                | 22                   | 22            | 22          |
| 21            | 20 Rreturns0s-0h | 19       | 18       | 23 17             | 16                   | RESERVED      | 14          |
| 13            | 13               | 13       | 13       | 13                | 13                   | 13            | 13          |
| 12            | 12               | 12       | 12       | 12                | 12                   | 12            | 12          |
| 11            | 10               | 9        | 8        | 15 DPLL_SSC_TY PE | DPLL_SSC_D OWNSPREAD | DPLL_SSC_AC K | DPLL_SSC_EN |
|               | RESERVED         | R/W-0h   | R/W-0h   | R-0h              | R/W-0h               | R/W-0h        |             |
| Rreturns0s-0h | 7                | 6        | 5        |                   | 3                    | 3             |             |
| 4 1           | 0                | RESERVED |          |                   |                      |               | 2 DPLL_EN   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-125. CM\_CLKMODE\_DPLL\_PER Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------------------|------------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED             | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 15    | DPLL_SSC_TYPE        | R/W        | 0h      | Select Triangular Spread Spectrum clocking. Always write 0. 0 = Triangular Spread Spectrum Clocking is selected. 1 = Reserved.                                                                                                                                                                                                                                                                                                                                                                      |
| 14    | DPLL_SSC_DOWNSPRE AD | R/W        | 0h      | Control if only low frequency spread is required 0h (R/W) = When SSC is enabled, clock frequency is spread on both sides of the programmed frequency 1h (R/W) = When SSC is enabled, clock frequency is spread only on the lower side of the programmed frequency                                                                                                                                                                                                                                   |
| 13    | DPLL_SSC_ACK         | R          | 0h      | Acknowledgement from the DPLL regarding start and stop of Spread Spectrum Clocking feature 0h (R) = SSC has been turned off on PLL o/ps 1h (R) = SSC has been turned on on PLL o/ps                                                                                                                                                                                                                                                                                                                 |
| 12    | DPLL_SSC_EN          | R/W        | 0h      | Enable or disable Spread Spectrum Clocking 0h (R/W) = SSC disabled 1h (R/W) = SSC enabled                                                                                                                                                                                                                                                                                                                                                                                                           |
| 11-3  | RESERVED             | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 2-0   | DPLL_EN              | R/W        | 4h      | DPLL control. Upon Warm Reset, the PRCM DPLL control state machine updates this register to reflect DPLL Low Power Stop mode. 0h (R/W) = Reserved 1h (R/W) = Put the DPLL in Low Power Stop mode 2h (R/W) = Reserved2 3h (R/W) = Reserved 4h (R/W) = Put the DPLL in MN Bypass mode. The DPLL_MULT register bits are reset to 0 automatically by putting the DPLL in this mode. 5h (R/W) = Put the DPLL in Idle Bypass Low Power mode. 6h (R/W) = Reserved 7h (R/W) = Enables the DPLL in Lock mode |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.37 CM\_CLKMODE\_DPLL\_CORE Register (offset = 90h) [reset = 4h]

Register mask: FFFFFFFFh

CM\_CLKMODE\_DPLL\_CORE is shown in Figure 8-122 and described in Table 8-126.

This register allows controlling the DPLL modes.

Figure 8-122. CM\_CLKMODE\_DPLL\_CORE Register

| 31             | 30                   | 29             | 28              | 27              | 26              | 25                   | 24                  |
|----------------|----------------------|----------------|-----------------|-----------------|-----------------|----------------------|---------------------|
| RESERVED       | RESERVED             | RESERVED       | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED            |
| Rreturns0s-0h  | Rreturns0s-0h        | Rreturns0s-0h  | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h       |
| 23             | 22                   | 21             | 20              | 19              | 18              | 17                   | 16                  |
| RESERVED       | RESERVED             | RESERVED       | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED            |
| Rreturns0s-0h  | Rreturns0s-0h        | Rreturns0s-0h  | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h       |
| 15             | 14                   | 13             | 12              | 11              | 10              | 9                    | 8                   |
| DPLL_SSC_TY PE | DPLL_SSC_D OWNSPREAD | DPLL_SSC_AC K  | DPLL_SSC_EN     | DPLL_REGM4 XEN  | DPLL_LPMOD E_EN | DPLL_RELOC K_RAMP_EN | DPLL_DRIFTG UARD_EN |
| R/W-0h         | R/W-0h               | R-0h           | R/W-0h          | Rreturns0s-0h   | R/W-0h          | R/W-0h               | R/W-0h              |
| 7              | 6                    | 5              | 4               | 3               | 2               | 1                    | 0                   |
| DPLL_RAMP_RATE | DPLL_RAMP_RATE       | DPLL_RAMP_RATE | DPLL_RAMP_LEVEL | DPLL_RAMP_LEVEL |                 | DPLL_EN              |                     |
| R/W-0h         | R/W-0h               | R/W-0h         | R/W-0h          | R/W-0h          |                 | R/W-4h               |                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-126. CM\_CLKMODE\_DPLL\_CORE Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                                                                                                                                                                                                                                       |
|-------|----------------------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED             | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                   |
| 15    | DPLL_SSC_TYPE        | R/W        | 0h      | Select Triangular Spread Spectrum clocking. Always write 0. 0 = Triangular Spread Spectrum Clocking is selected. 1 = Reserved.                                                                                                                                    |
| 14    | DPLL_SSC_DOWNSPRE AD | R/W        | 0h      | Control if only low frequency spread is required 0h (R/W) = When SSC is enabled, clock frequency is spread on both sides of the programmed frequency 1h (R/W) = When SSC is enabled, clock frequency is spread only on the lower side of the programmed frequency |
| 13    | DPLL_SSC_ACK         | R          | 0h      | Acknowledgement from the DPLL regarding start and stop of Spread Spectrum Clocking feature 0h (R) = SSC has been turned off on PLL o/ps 1h (R) = SSC has been turned on on PLL o/ps                                                                               |
| 12    | DPLL_SSC_EN          | R/W        | 0h      | Enable or disable Spread Spectrum Clocking 0h (R/W) = SSC disabled 1h (R/W) = SSC enabled                                                                                                                                                                         |
| 11    | DPLL_REGM4XEN        | Rreturns0s | 0h      | Enable the REGM4XEN mode of the DPLL. Please check the DPLL documentation to check when this mode can be enabled. 0h (R) = REGM4XEN mode of the DPLL is disabled                                                                                                  |
| 10    | DPLL_LPMODE_EN       | R/W        | 0h      | Set the DPLL in Low Power mode. Check the DPLL documentation to see when this can be enabled. 0h (R/W) = Low power mode of the DPLL is disabled 1h (R/W) = Low power mode of the DPLL is enabled                                                                  |
| 9     | DPLL_RELOCK_RAMP_E N | R/W        | 0h      | If enabled, the clock ramping feature is used applied during the lock process, as well as the relock process. If disabled, the clock ramping feature is used only during the first lock.                                                                          |

<!-- image -->

Table 8-126. CM\_CLKMODE\_DPLL\_CORE Register Field Descriptions (continued)

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|--------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | DPLL_DRIFTGUARD_EN | R/W    | 0h      | This bit allows to enable or disable the automatic recalibration feature of the DPLL. The DPLL will automatically start a recalibration process upon assertion of the DPLL's RECAL flag if this bit is set. 0h (R/W) = DRIFTGUARD feature is disabled 1h (R/W) = DRIFTGUARD feature is enabled                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 7-5   | DPLL_RAMP_RATE     | R/W    | 0h      | Selects the time in terms of DPLL REFCLKs spent at each stage of the clock ramping process 0h (R/W) = 2 REFCLKs 1h (R/W) = 4 REFCLKs 2h (R/W) = 8 REFCLKs 3h (R/W) = 16 REFCLKs 4h (R/W) = 32 REFCLKs 5h (R/W) = 64 REFCLKs 6h (R/W) = 128 REFCLKs 7h (R/W) = 512 REFCLKs                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 4-3   | DPLL_RAMP_LEVEL    | R/W    | 0h      | The DPLL provides an output clock frequency ramping feature when switching from bypass clock to normal clock during lock and re-lock. The frequency ramping will happen in a maximum of 4 steps in frequency before the DPLL's frequency lock indicator is asserted. This register is used to enable/disable the DPLL ramping feature. If enabled, it is also used to select the algorithm used for clock ramping 0h (R/W) = CLKOUT => No ramping CLKOUTX2 => No ramping 1h (R/W) = CLKOUT => Bypass clk -> Fout/8 -> Fout/4 -> Fout/2 -> Fout CLKOUTX2 => Bypass clk -> Foutx2/8 -> Foutx2/4 -> Foutx2/2 -> Foutx2 2h (R/W) = CLKOUT => Bypass clk -> Fout/4 -> Fout/2 -> Fout/1.5 - > Fout CLKOUTX2 => Bypass clk -> Foutx2/4 -> Foutx2/2 -> Foutx2/1.5 -> Foutx2 3h (R/W) = Reserved |
| 2-0   | DPLL_EN            | R/W    | 4h      | DPLL control. Upon Warm Reset, the PRCM DPLL control state machine updates this register to reflect MN Bypass mode. 0h (R/W) = Reserved 1h (R/W) = Reserved 2h (R/W) = Reserved 3h (R/W) = Reserved 4h (R/W) = Put the DPLL in MN Bypass mode. The DPLL_MULT register bits are reset to 0 automatically by putting the DPLL in this mode. 5h (R/W) = Put the DPLL in Idle Bypass Low Power mode. 6h (R/W) = Put the DPLL in Idle Bypass Fast Relock mode. 7h (R/W) = Enables the DPLL in Lock mode                                                                                                                                                                                                                                                                                      |

<!-- image -->

## 8.1.12.2.38 CM\_CLKMODE\_DPLL\_DDR Register (offset = 94h) [reset = 4h]

Register mask: FFFFFFFFh

CM\_CLKMODE\_DPLL\_DDR is shown in Figure 8-123 and described in Table 8-127.

This register allows controlling the DPLL modes.

Figure 8-123. CM\_CLKMODE\_DPLL\_DDR Register

| 31             | 30                   | 29             | 28              | 27              | 26              | 25                   | 24                  |
|----------------|----------------------|----------------|-----------------|-----------------|-----------------|----------------------|---------------------|
| RESERVED       | RESERVED             | RESERVED       | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED            |
| Rreturns0s-0h  | Rreturns0s-0h        | Rreturns0s-0h  | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h       |
| 23             | 22                   | 21             | 20              | 19              | 18              | 17                   | 16                  |
| RESERVED       | RESERVED             | RESERVED       | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED            |
| Rreturns0s-0h  | Rreturns0s-0h        | Rreturns0s-0h  | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h       |
| 15             | 14                   | 13             | 12              | 11              | 10              | 9                    | 8                   |
| DPLL_SSC_TY PE | DPLL_SSC_D OWNSPREAD | DPLL_SSC_AC K  | DPLL_SSC_EN     | DPLL_REGM4 XEN  | DPLL_LPMOD E_EN | DPLL_RELOC K_RAMP_EN | DPLL_DRIFTG UARD_EN |
| R/W-0h         | R/W-0h               | R-0h           | R/W-0h          | Rreturns0s-0h   | R/W-0h          | R/W-0h               | R/W-0h              |
| 7              | 6                    | 5              | 4               | 3               | 2               | 1                    | 0                   |
| DPLL_RAMP_RATE | DPLL_RAMP_RATE       | DPLL_RAMP_RATE | DPLL_RAMP_LEVEL | DPLL_RAMP_LEVEL |                 | DPLL_EN              |                     |
| R/W-0h         | R/W-0h               | R/W-0h         | R/W-0h          | R/W-0h          |                 | R/W-4h               |                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-127. CM\_CLKMODE\_DPLL\_DDR Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                                                                                                                                                                                                                                       |
|-------|----------------------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED             | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                   |
| 15    | DPLL_SSC_TYPE        | R/W        | 0h      | Select Triangular Spread Spectrum clocking. Always write 0. 0 = Triangular Spread Spectrum Clocking is selected. 1 = Reserved.                                                                                                                                    |
| 14    | DPLL_SSC_DOWNSPRE AD | R/W        | 0h      | Control if only low frequency spread is required 0h (R/W) = When SSC is enabled, clock frequency is spread on both sides of the programmed frequency 1h (R/W) = When SSC is enabled, clock frequency is spread only on the lower side of the programmed frequency |
| 13    | DPLL_SSC_ACK         | R          | 0h      | Acknowledgement from the DPLL regarding start and stop of Spread Spectrum Clocking feature 0h (R) = SSC has been turned off on PLL o/ps 1h (R) = SSC has been turned on on PLL o/ps                                                                               |
| 12    | DPLL_SSC_EN          | R/W        | 0h      | Enable or disable Spread Spectrum Clocking 0h (R/W) = SSC disabled 1h (R/W) = SSC enabled                                                                                                                                                                         |
| 11    | DPLL_REGM4XEN        | Rreturns0s | 0h      | Enable the REGM4XEN mode of the DPLL. Please check the DPLL documentation to check when this mode can be enabled. 0h (R) = REGM4XEN mode of the DPLL is disabled                                                                                                  |
| 10    | DPLL_LPMODE_EN       | R/W        | 0h      | Set the DPLL in Low Power mode. Check the DPLL documentation to see when this can be enabled. 0h (R/W) = Low power mode of the DPLL is disabled 1h (R/W) = Low power mode of the DPLL is enabled                                                                  |
| 9     | DPLL_RELOCK_RAMP_E N | R/W        | 0h      | If enabled, the clock ramping feature is used applied during the lock process, as well as the relock process. If disabled, the clock ramping feature is used only during the first lock.                                                                          |

<!-- image -->

Table 8-127. CM\_CLKMODE\_DPLL\_DDR Register Field Descriptions (continued)

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|--------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | DPLL_DRIFTGUARD_EN | R/W    | 0h      | This bit allows to enable or disable the automatic recalibration feature of the DPLL. The DPLL will automatically start a recalibration process upon assertion of the DPLL's RECAL flag if this bit is set. 0h (R/W) = DRIFTGUARD feature is disabled 1h (R/W) = DRIFTGUARD feature is enabled                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 7-5   | DPLL_RAMP_RATE     | R/W    | 0h      | Selects the time in terms of DPLL REFCLKs spent at each stage of the clock ramping process 0h (R/W) = 2 REFCLKs 1h (R/W) = 4 REFCLKs 2h (R/W) = 8 REFCLKs 3h (R/W) = 16 REFCLKs 4h (R/W) = 32 REFCLKs 5h (R/W) = 64 REFCLKs 6h (R/W) = 128 REFCLKs 7h (R/W) = 512 REFCLKs                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 4-3   | DPLL_RAMP_LEVEL    | R/W    | 0h      | The DPLL provides an output clock frequency ramping feature when switching from bypass clock to normal clock during lock and re-lock. The frequency ramping will happen in a maximum of 4 steps in frequency before the DPLL's frequency lock indicator is asserted. This register is used to enable/disable the DPLL ramping feature. If enabled, it is also used to select the algorithm used for clock ramping 0h (R/W) = CLKOUT => No ramping CLKOUTX2 => No ramping 1h (R/W) = CLKOUT => Bypass clk -> Fout/8 -> Fout/4 -> Fout/2 -> Fout CLKOUTX2 => Bypass clk -> Foutx2/8 -> Foutx2/4 -> Foutx2/2 -> Foutx2 2h (R/W) = CLKOUT => Bypass clk -> Fout/4 -> Fout/2 -> Fout/1.5 - > Fout CLKOUTX2 => Bypass clk -> Foutx2/4 -> Foutx2/2 -> Foutx2/1.5 -> Foutx2 3h (R/W) = Reserved |
| 2-0   | DPLL_EN            | R/W    | 4h      | DPLL control. Upon Warm Reset, the PRCM DPLL control state machine updates this register to reflect MN Bypass mode. 0h (R/W) = Reserved 1h (R/W) = Reserved 2h (R/W) = Reserved 3h (R/W) = Reserved 4h (R/W) = Put the DPLL in MN Bypass mode. The DPLL_MULT register bits are reset to 0 automatically by putting the DPLL in this mode. 5h (R/W) = Put the DPLL in Idle Bypass Low Power mode. 6h (R/W) = Put the DPLL in Idle Bypass Fast Relock mode. 7h (R/W) = Enables the DPLL in Lock mode                                                                                                                                                                                                                                                                                      |

<!-- image -->

www.ti.com

## 8.1.12.2.39 CM\_CLKMODE\_DPLL\_DISP Register (offset = 98h) [reset = 4h]

Register mask: FFFFFFFFh

CM\_CLKMODE\_DPLL\_DISP is shown in Figure 8-124 and described in Table 8-128.

This register allows controlling the DPLL modes.

Figure 8-124. CM\_CLKMODE\_DPLL\_DISP Register

| 31             | 30                   | 29             | 28              | 27              | 26              | 25                   | 24                  |
|----------------|----------------------|----------------|-----------------|-----------------|-----------------|----------------------|---------------------|
| RESERVED       | RESERVED             | RESERVED       | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED            |
| Rreturns0s-0h  | Rreturns0s-0h        | Rreturns0s-0h  | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h       |
| 23             | 22                   | 21             | 20              | 19              | 18              | 17                   | 16                  |
| RESERVED       | RESERVED             | RESERVED       | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED            |
| Rreturns0s-0h  | Rreturns0s-0h        | Rreturns0s-0h  | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h       |
| 15             | 14                   | 13             | 12              | 11              | 10              | 9                    | 8                   |
| DPLL_SSC_TY PE | DPLL_SSC_D OWNSPREAD | DPLL_SSC_AC K  | DPLL_SSC_EN     | DPLL_REGM4 XEN  | DPLL_LPMOD E_EN | DPLL_RELOC K_RAMP_EN | DPLL_DRIFTG UARD_EN |
| R/W-0h         | R/W-0h               | R-0h           | R/W-0h          | Rreturns0s-0h   | R/W-0h          | R/W-0h               | R/W-0h              |
| 7              | 6                    | 5              | 4               | 3               | 2               | 1                    | 0                   |
| DPLL_RAMP_RATE | DPLL_RAMP_RATE       | DPLL_RAMP_RATE | DPLL_RAMP_LEVEL | DPLL_RAMP_LEVEL |                 | DPLL_EN              |                     |
| R/W-0h         | R/W-0h               | R/W-0h         | R/W-0h          | R/W-0h          |                 | R/W-4h               |                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-128. CM\_CLKMODE\_DPLL\_DISP Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                                                                                                                                                                                                                                       |
|-------|----------------------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED             | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                   |
| 15    | DPLL_SSC_TYPE        | R/W        | 0h      | Select Triangular Spread Spectrum clocking. Always write 0. 0 = Triangular Spread Spectrum Clocking is selected. 1 = Reserved.                                                                                                                                    |
| 14    | DPLL_SSC_DOWNSPRE AD | R/W        | 0h      | Control if only low frequency spread is required 0h (R/W) = When SSC is enabled, clock frequency is spread on both sides of the programmed frequency 1h (R/W) = When SSC is enabled, clock frequency is spread only on the lower side of the programmed frequency |
| 13    | DPLL_SSC_ACK         | R          | 0h      | Acknowledgement from the DPLL regarding start and stop of Spread Spectrum Clocking feature 0h (R) = SSC has been turned off on PLL o/ps 1h (R) = SSC has been turned on on PLL o/ps                                                                               |
| 12    | DPLL_SSC_EN          | R/W        | 0h      | Enable or disable Spread Spectrum Clocking 0h (R/W) = SSC disabled 1h (R/W) = SSC enabled                                                                                                                                                                         |
| 11    | DPLL_REGM4XEN        | Rreturns0s | 0h      | Enable the REGM4XEN mode of the DPLL. Please check the DPLL documentation to check when this mode can be enabled. 0h (R) = REGM4XEN mode of the DPLL is disabled                                                                                                  |
| 10    | DPLL_LPMODE_EN       | R/W        | 0h      | Set the DPLL in Low Power mode. Check the DPLL documentation to see when this can be enabled. 0h (R/W) = Low power mode of the DPLL is disabled 1h (R/W) = Low power mode of the DPLL is enabled                                                                  |
| 9     | DPLL_RELOCK_RAMP_E N | R/W        | 0h      | If enabled, the clock ramping feature is used applied during the lock process, as well as the relock process. If disabled, the clock ramping feature is used only during the first lock.                                                                          |

<!-- image -->

Table 8-128. CM\_CLKMODE\_DPLL\_DISP Register Field Descriptions (continued)

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|--------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | DPLL_DRIFTGUARD_EN | R/W    | 0h      | This bit allows to enable or disable the automatic recalibration feature of the DPLL. The DPLL will automatically start a recalibration process upon assertion of the DPLL's RECAL flag if this bit is set. 0h (R/W) = DRIFTGUARD feature is disabled 1h (R/W) = DRIFTGUARD feature is enabled                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 7-5   | DPLL_RAMP_RATE     | R/W    | 0h      | Selects the time in terms of DPLL REFCLKs spent at each stage of the clock ramping process 0h (R/W) = 2 REFCLKs 1h (R/W) = 4 REFCLKs 2h (R/W) = 8 REFCLKs 3h (R/W) = 16 REFCLKs 4h (R/W) = 32 REFCLKs 5h (R/W) = 64 REFCLKs 6h (R/W) = 128 REFCLKs 7h (R/W) = 512 REFCLKs                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 4-3   | DPLL_RAMP_LEVEL    | R/W    | 0h      | The DPLL provides an output clock frequency ramping feature when switching from bypass clock to normal clock during lock and re-lock. The frequency ramping will happen in a maximum of 4 steps in frequency before the DPLL's frequency lock indicator is asserted. This register is used to enable/disable the DPLL ramping feature. If enabled, it is also used to select the algorithm used for clock ramping 0h (R/W) = CLKOUT => No ramping CLKOUTX2 => No ramping 1h (R/W) = CLKOUT => Bypass clk -> Fout/8 -> Fout/4 -> Fout/2 -> Fout CLKOUTX2 => Bypass clk -> Foutx2/8 -> Foutx2/4 -> Foutx2/2 -> Foutx2 2h (R/W) = CLKOUT => Bypass clk -> Fout/4 -> Fout/2 -> Fout/1.5 - > Fout CLKOUTX2 => Bypass clk -> Foutx2/4 -> Foutx2/2 -> Foutx2/1.5 -> Foutx2 3h (R/W) = Reserved |
| 2-0   | DPLL_EN            | R/W    | 4h      | DPLL control. Upon Warm Reset, the PRCM DPLL control state machine updates this register to reflect MN Bypass mode. 0h (R/W) = Reserved 1h (R/W) = Reserved 2h (R/W) = Reserved 3h (R/W) = Reserved 4h (R/W) = Put the DPLL in MN Bypass mode. The DPLL_MULT register bits are reset to 0 automatically by putting the DPLL in this mode. 5h (R/W) = Put the DPLL in Idle Bypass Low Power mode. 6h (R/W) = Put the DPLL in Idle Bypass Fast Relock mode. 7h (R/W) = Enables the DPLL in Lock mode                                                                                                                                                                                                                                                                                      |

<!-- image -->

## 8.1.12.2.40 CM\_CLKSEL\_DPLL\_PERIPH Register (offset = 9Ch) [reset = 0h]

Register mask: FFFFFFFFh

CM\_CLKSEL\_DPLL\_PERIPH is shown in Figure 8-125 and described in Table 8-129.

This register provides controls over the DPLL.

## Figure 8-125. CM\_CLKSEL\_DPLL\_PERIPH Register

| 31            | 30            | 29            | 28            | 27          | 26          | 25          | 24          |
|---------------|---------------|---------------|---------------|-------------|-------------|-------------|-------------|
| DPLL_SD_DIV   | DPLL_SD_DIV   | DPLL_SD_DIV   | DPLL_SD_DIV   | DPLL_SD_DIV | DPLL_SD_DIV | DPLL_SD_DIV | DPLL_SD_DIV |
| R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 23            | 22            | 21            | 20            | 19          | 18          | 17          | 16          |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | DPLL_MULT   | DPLL_MULT   | DPLL_MULT   | DPLL_MULT   |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 15            | 14            | 13            | 12            | 11          | 10          | 9           | 8           |
| DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT     | DPLL_MULT   | DPLL_MULT   | DPLL_MULT   | DPLL_MULT   |
| R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7             | 6             | 5             | 4             | 3           | 2           | 1           | 0           |
| DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV      | DPLL_DIV    | DPLL_DIV    | DPLL_DIV    | DPLL_DIV    |
| R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-129. CM\_CLKSEL\_DPLL\_PERIPH Register Field Descriptions

| Bit   | Field       | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------|------------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | DPLL_SD_DIV | R/W        | 0h      | Sigma-Delta divider select ( 2-255). This factor must be set by s/w to ensure optimum jitter performance. DPLL_SD_DIV = CEILING ([DPLL_MULT/(DPLL_DIV+1)] * CLKINP / 250), where CLKINP is the input clock of the DPLL in MHz). Must be set with M and N factors, and must not be changed once DPLL is locked. 0h (R/W) = Reserved 1h (R/W) = Reserved |
| 23    | RESERVED    | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                        |
| 22-20 | RESERVED    | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                        |
| 19-8  | DPLL_MULT   | R/W        | 0h      | DPLL multiplier factor (2 to 4095). This register is automatically cleared to 0 when the DPLL_EN field in the *CLKMODE_DPLL* register is set to select MN Bypass mode. (equal to input M of DPLL M=2 to 4095 => DPLL multiplies by M). 0h (R/W) = 0 : Reserved 1h (R/W) = 1 : Reserved                                                                 |
| 7-0   | DPLL_DIV    | R/W        | 0h      | DPLL divider factor (0 to 255) (equal to input N of DPLL actual division factor is N+1).                                                                                                                                                                                                                                                               |

## 8.1.12.2.41 CM\_DIV\_M2\_DPLL\_DDR Register (offset = A0h) [reset = 1h]

Register mask: FFFFFFFFh

CM\_DIV\_M2\_DPLL\_DDR is shown in Figure 8-126 and described in Table 8-130.

This register provides controls over the M2 divider of the DPLL.

Figure 8-126. CM\_DIV\_M2\_DPLL\_DDR Register

| 31            | 30            | 29                    | 28              | 27              | 26              | 25              | 24                     |
|---------------|---------------|-----------------------|-----------------|-----------------|-----------------|-----------------|------------------------|
| RESERVED      | RESERVED      | RESERVED              | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED               |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h          |
| 23            | 22            | 21                    | 20              | 19              | 18              | 17              | 16                     |
| RESERVED      | RESERVED      | RESERVED              | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED               |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h          |
| 15            | 14            | 13                    | 12              | 11              | 10              | 9               | 8                      |
| RESERVED      | RESERVED      | RESERVED              | RESERVED        | RESERVED        | RESERVED        | ST_DPLL_CLK OUT | DPLL_CLKOUT _GATE_CTRL |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | R-0h            | R/W-0h                 |
| 7             | 6             | 5                     | 4               | 3               | 2               | 1               | 0                      |
| RESERVED      | RESERVED      | DPLL_CLKOUT _DIVCHACK | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV        |
| Rreturns0s-0h | Rreturns0s-0h | R-0h                  | R/W-1h          | R/W-1h          | R/W-1h          | R/W-1h          | R/W-1h                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-130. CM\_DIV\_M2\_DPLL\_DDR Register Field Descriptions

| Bit   | Field                  | Type       | Reset   | Description                                                                                                                                                                       |
|-------|------------------------|------------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED               | Rreturns0s | 0h      |                                                                                                                                                                                   |
| 9     | ST_DPLL_CLKOUT         | R          | 0h      | DPLL CLKOUT status 0h (R) = The clock output is gated 1h (R) = The clock output is enabled                                                                                        |
| 8     | DPLL_CLKOUT_GATE_C TRL | R/W        | 0h      | Control gating of DPLL CLKOUT 0h (R/W) = Automatically gate this clock when there is no dependency for it 1h (R/W) = Force this clock to stay enabled even if there is no request |
| 7-6   | RESERVED               | Rreturns0s | 0h      |                                                                                                                                                                                   |
| 5     | DPLL_CLKOUT_DIVCHA CK  | R          | 0h      | Toggle on this status bit after changing DPLL_CLKOUT_DIV indicates that the change in divider value has taken effect                                                              |
| 4-0   | DPLL_CLKOUT_DIV        | R/W        | 1h      | DPLL M2 post-divider factor (1 to 31). 0h (R/W) = Reserved                                                                                                                        |

<!-- image -->

<!-- image -->

## 8.1.12.2.42 CM\_DIV\_M2\_DPLL\_DISP Register (offset = A4h) [reset = 1h]

Register mask: FFFFFFFFh

CM\_DIV\_M2\_DPLL\_DISP is shown in Figure 8-127 and described in Table 8-131.

This register provides controls over the M2 divider of the DPLL.

## Figure 8-127. CM\_DIV\_M2\_DPLL\_DISP Register

| 31            | 30            | 29                    | 28              | 27              | 26              | 25              | 24                     |
|---------------|---------------|-----------------------|-----------------|-----------------|-----------------|-----------------|------------------------|
| RESERVED      | RESERVED      | RESERVED              | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED               |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h          |
| 23            | 22            | 21                    | 20              | 19              | 18              | 17              | 16                     |
| RESERVED      | RESERVED      | RESERVED              | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED               |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h          |
| 15            | 14            | 13                    | 12              | 11              | 10              | 9               | 8                      |
| RESERVED      | RESERVED      | RESERVED              | RESERVED        | RESERVED        | RESERVED        | ST_DPLL_CLK OUT | DPLL_CLKOUT _GATE_CTRL |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | R-0h            | R/W-0h                 |
| 7             | 6             | 5                     | 4               | 3               | 2               | 1               | 0                      |
| RESERVED      | RESERVED      | DPLL_CLKOUT _DIVCHACK | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV        |
| Rreturns0s-0h | Rreturns0s-0h | R-0h                  | R/W-1h          | R/W-1h          | R/W-1h          | R/W-1h          | R/W-1h                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-131. CM\_DIV\_M2\_DPLL\_DISP Register Field Descriptions

| Bit   | Field                  | Type       | Reset   | Description                                                                                                                                                                       |
|-------|------------------------|------------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED               | Rreturns0s | 0h      |                                                                                                                                                                                   |
| 9     | ST_DPLL_CLKOUT         | R          | 0h      | DPLL CLKOUT status 0h (R) = The clock output is gated 1h (R) = The clock output is enabled                                                                                        |
| 8     | DPLL_CLKOUT_GATE_C TRL | R/W        | 0h      | Control gating of DPLL CLKOUT 0h (R/W) = Automatically gate this clock when there is no dependency for it 1h (R/W) = Force this clock to stay enabled even if there is no request |
| 7-6   | RESERVED               | Rreturns0s | 0h      |                                                                                                                                                                                   |
| 5     | DPLL_CLKOUT_DIVCHA CK  | R          | 0h      | Toggle on this status bit after changing DPLL_CLKOUT_DIV indicates that the change in divider value has taken effect                                                              |
| 4-0   | DPLL_CLKOUT_DIV        | R/W        | 1h      | DPLL M2 post-divider factor (1 to 31). 0h (R/W) = Reserved                                                                                                                        |

## 8.1.12.2.43 CM\_DIV\_M2\_DPLL\_MPU Register (offset = A8h) [reset = 1h]

Register mask: FFFFFFFFh

CM\_DIV\_M2\_DPLL\_MPU is shown in Figure 8-128 and described in Table 8-132.

This register provides controls over the M2 divider of the DPLL.

## Figure 8-128. CM\_DIV\_M2\_DPLL\_MPU Register

| 31            | 30            | 29                    | 28              | 27              | 26              | 25              | 24                     |
|---------------|---------------|-----------------------|-----------------|-----------------|-----------------|-----------------|------------------------|
| RESERVED      | RESERVED      | RESERVED              | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED               |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h          |
| 23            | 22            | 21                    | 20              | 19              | 18              | 17              | 16                     |
| RESERVED      | RESERVED      | RESERVED              | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED               |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h          |
| 15            | 14            | 13                    | 12              | 11              | 10              | 9               | 8                      |
| RESERVED      | RESERVED      | RESERVED              | RESERVED        | RESERVED        | RESERVED        | ST_DPLL_CLK OUT | DPLL_CLKOUT _GATE_CTRL |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | R-0h            | R/W-0h                 |
| 7             | 6             | 5                     | 4               | 3               | 2               | 1               | 0                      |
| RESERVED      | RESERVED      | DPLL_CLKOUT _DIVCHACK | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV        |
| Rreturns0s-0h | Rreturns0s-0h | R-0h                  | R/W-1h          | R/W-1h          | R/W-1h          | R/W-1h          | R/W-1h                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-132. CM\_DIV\_M2\_DPLL\_MPU Register Field Descriptions

| Bit   | Field                  | Type       | Reset   | Description                                                                                                                                                                       |
|-------|------------------------|------------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED               | Rreturns0s | 0h      |                                                                                                                                                                                   |
| 9     | ST_DPLL_CLKOUT         | R          | 0h      | DPLL CLKOUT status 0h (R) = The clock output is gated 1h (R) = The clock output is enabled                                                                                        |
| 8     | DPLL_CLKOUT_GATE_C TRL | R/W        | 0h      | Control gating of DPLL CLKOUT 0h (R/W) = Automatically gate this clock when there is no dependency for it 1h (R/W) = Force this clock to stay enabled even if there is no request |
| 7-6   | RESERVED               | Rreturns0s | 0h      |                                                                                                                                                                                   |
| 5     | DPLL_CLKOUT_DIVCHA CK  | R          | 0h      | Toggle on this status bit after changing DPLL_CLKOUT_DIV indicates that the change in divider value has taken effect                                                              |
| 4-0   | DPLL_CLKOUT_DIV        | R/W        | 1h      | DPLL M2 post-divider factor (1 to 31). 0h (R/W) = Reserved                                                                                                                        |

<!-- image -->

<!-- image -->

## 8.1.12.2.44 CM\_DIV\_M2\_DPLL\_PER Register (offset = ACh) [reset = 1h]

Register mask: FFFFFFFFh

CM\_DIV\_M2\_DPLL\_PER is shown in Figure 8-129 and described in Table 8-133.

This register provides controls over the M2 divider of the DPLL.

## Figure 8-129. CM\_DIV\_M2\_DPLL\_PER Register

| 31                    | 30              | 29              | 28              | 27              | 26              | 25              | 24                     |
|-----------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------------|
| RESERVED              | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED               |
| Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h          |
| 23                    | 22              | 21              | 20              | 19              | 18              | 17              | 16                     |
| RESERVED              | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED               |
| Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h          |
| 15                    | 14              | 13              | 12              | 11              | 10              | 9               | 8                      |
| RESERVED              | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | ST_DPLL_CLK OUT | DPLL_CLKOUT _GATE_CTRL |
| Rreturns0s-0h         | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | R-0h            | R/W-0h                 |
| 7                     | 6               | 5               | 4               | 3               | 2               | 1               | 0                      |
| DPLL_CLKOUT _DIVCHACK | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV | DPLL_CLKOUT_DIV        |
| R-0h                  | R/W-1h          | R/W-1h          | R/W-1h          | R/W-1h          | R/W-1h          | R/W-1h          | R/W-1h                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-133. CM\_DIV\_M2\_DPLL\_PER Register Field Descriptions

| Bit   | Field                  | Type       | Reset   | Description                                                                                                                                                                       |
|-------|------------------------|------------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED               | Rreturns0s | 0h      |                                                                                                                                                                                   |
| 9     | ST_DPLL_CLKOUT         | R          | 0h      | DPLL CLKOUT status 0h (R) = The clock output is gated 1h (R) = The clock output is enabled                                                                                        |
| 8     | DPLL_CLKOUT_GATE_C TRL | R/W        | 0h      | Control gating of DPLL CLKOUT 0h (R/W) = Automatically gate this clock when there is no dependency for it 1h (R/W) = Force this clock to stay enabled even if there is no request |
| 7     | DPLL_CLKOUT_DIVCHA CK  | R          | 0h      | Toggle on this status bit after changing DPLL_CLKOUT_DIV indicates that the change in divider value has taken effect                                                              |
| 6-0   | DPLL_CLKOUT_DIV        | R/W        | 1h      | DPLL M2 post-divider factor (1 to 31). 0h (R/W) = Reserved                                                                                                                        |

## 8.1.12.2.45 CM\_WKUP\_WKUP\_M3\_CLKCTRL Register (offset = B0h) [reset = 2h]

Register mask: FFFFFFFFh

CM\_WKUP\_WKUP\_M3\_CLKCTRL is shown in Figure 8-130 and described in Table 8-134.

This register manages the WKUP M3 clocks.

Figure 8-130. CM\_WKUP\_WKUP\_M3\_CLKCTRL Register

| 31       | 30               | 29       | 28       | 27       | 26       | 25            | 24            |
|----------|------------------|----------|----------|----------|----------|---------------|---------------|
| RESERVED | RESERVED         | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      |
| 22       | 22               | 22       | 22       | 22       | 22       | 22            | 22            |
| 23 21    | 20               | 19       | 18       | 17       | 16       |               |               |
|          |                  |          |          | STBYST   |          | Rreturns0s-0h | Rreturns0s-0h |
| 15 14    |                  | R-0h     |          |          | 13       | 12            | 12            |
| 11       | 10 Rreturns0s-0h | 9        | 8        | RESERVED | 6        | 5             | 4             |
| 3        | 3                | 3        | 3        | 3        | 3        | 3             | 3             |
| 2        | 2                | 2        | 2        | 2        | 2        | 2             | 2             |
| 7 1      | 0                | RESERVED |          |          |          |               | MODULEMODE    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-134. CM\_WKUP\_WKUP\_M3\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                         |
|-------|------------|------------|---------|-----------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED   | Rreturns0s | 0h      |                                                                                                     |
| 18    | STBYST     | R          | 0h      | Module standby status. 0h (R) = Module is functional (not in standby) 1h (R) = Module is in standby |
| 17-2  | RESERVED   | Rreturns0s | 0h      |                                                                                                     |
| 1-0   | MODULEMODE | R          | 2h      | Control the way mandatory clocks are managed.                                                       |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.46 CM\_WKUP\_UART0\_CLKCTRL Register (offset = B4h) [reset = 30000h]

Register mask: FFFFFFFFh

CM\_WKUP\_UART0\_CLKCTRL is shown in Figure 8-131 and described in Table 8-135.

This register manages the UART0 clocks.

Figure 8-131. CM\_WKUP\_UART0\_CLKCTRL Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | IDLEST        | IDLEST        |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-3h          | R-3h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | MODULEMODE    | MODULEMODE    |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-135. CM\_WKUP\_UART0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 17-16 | IDLEST     | R          | 3h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed                                                                                                                                                                                                  |
| 15-2  | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 1-0   | MODULEMODE | R/W        | 0h      | Control the way mandatory clocks are managed. 0h (R/W) = Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 1h (R/W) = Reserved 2h (R/W) = Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 3h (R) = Reserved |

## 8.1.12.2.47 CM\_WKUP\_I2C0\_CLKCTRL Register (offset = B8h) [reset = 30000h]

Register mask: FFFFFFFFh

CM\_WKUP\_I2C0\_CLKCTRL is shown in Figure 8-132 and described in Table 8-136.

This register manages the I2C0 clocks.

Figure 8-132. CM\_WKUP\_I2C0\_CLKCTRL Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | IDLEST        | IDLEST        |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-3h          | R-3h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | MODULEMODE    | MODULEMODE    |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-136. CM\_WKUP\_I2C0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 17-16 | IDLEST     | R          | 3h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed                                                                                                                                                                                                  |
| 15-2  | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 1-0   | MODULEMODE | R/W        | 0h      | Control the way mandatory clocks are managed. 0h (R/W) = Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 1h (R/W) = Reserved 2h (R/W) = Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 3h (R) = Reserved |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.2.48 CM\_WKUP\_ADC\_TSC\_CLKCTRL Register (offset = BCh) [reset = 30000h]

Register mask: FFFFFFFFh

CM\_WKUP\_ADC\_TSC\_CLKCTRL is shown in Figure 8-133 and described in Table 8-137.

This register manages the ADC clocks.

Figure 8-133. CM\_WKUP\_ADC\_TSC\_CLKCTRL Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | IDLEST        | IDLEST        |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-3h          | R-3h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | MODULEMODE    | MODULEMODE    |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-137. CM\_WKUP\_ADC\_TSC\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 17-16 | IDLEST     | R          | 3h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed                                                                                                                                                                                                  |
| 15-2  | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 1-0   | MODULEMODE | R/W        | 0h      | Control the way mandatory clocks are managed. 0h (R/W) = Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 1h (R/W) = Reserved 2h (R/W) = Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 3h (R) = Reserved |

<!-- image -->

## 8.1.12.2.49 CM\_WKUP\_SMARTREFLEX0\_CLKCTRL Register (offset = C0h) [reset = 30000h]

Register mask: FFFFFFFFh

CM\_WKUP\_SMARTREFLEX0\_CLKCTRL is shown in Figure 8-134 and described in Table 8-138.

This register manages the SmartReflex0 clocks.

Figure 8-134. CM\_WKUP\_SMARTREFLEX0\_CLKCTRL Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | IDLEST        | IDLEST        |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-3h          | R-3h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | MODULEMODE    | MODULEMODE    |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-138. CM\_WKUP\_SMARTREFLEX0\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 17-16 | IDLEST     | R          | 3h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed                                                                                                                                                                                                  |
| 15-2  | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 1-0   | MODULEMODE | R/W        | 0h      | Control the way mandatory clocks are managed. 0h (R/W) = Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 1h (R/W) = Reserved 2h (R/W) = Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 3h (R) = Reserved |

<!-- image -->

www.ti.com

## 8.1.12.2.50 CM\_WKUP\_TIMER1\_CLKCTRL Register (offset = C4h) [reset = 30000h]

Register mask: FFFFFFFFh

CM\_WKUP\_TIMER1\_CLKCTRL is shown in Figure 8-135 and described in Table 8-139.

This register manages the TIMER1 clocks.

Figure 8-135. CM\_WKUP\_TIMER1\_CLKCTRL Register

| 31       | 30               | 29            | 28       | 27       | 26       | 25            | 24            |
|----------|------------------|---------------|----------|----------|----------|---------------|---------------|
| RESERVED | RESERVED         | RESERVED      | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      |
| 22       | 22               | 22            | 22       | 22       | 22       | 22            | 22            |
| 23 21    | 20               | 19            | 18       | 17       | 16       |               |               |
|          |                  |               |          | RESERVED |          | Rreturns0s-0h | Rreturns0s-0h |
| 15 14    |                  | Rreturns0s-0h |          |          | 13       | 12            | 12            |
| 11       | 10 Rreturns0s-0h | 9             | 8        | RESERVED | 6        | 5             | 4             |
| 3        | 3                | 3             | 3        | 3        | 3        | 3             | 3             |
| 2        | 2                | 2             | 2        | 2        | 2        | 2             | 2             |
| 7 1      | 0                | RESERVED      |          |          |          |               | MODULEMODE    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-139. CM\_WKUP\_TIMER1\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 18    | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 17-16 | IDLEST     | R          | 3h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed                                                                                                                                                                                                  |
| 15-2  | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 1-0   | MODULEMODE | R/W        | 0h      | Control the way mandatory clocks are managed. 0h (R/W) = Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 1h (R/W) = Reserved 2h (R/W) = Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 3h (R) = Reserved |

<!-- image -->

## 8.1.12.2.51 CM\_WKUP\_SMARTREFLEX1\_CLKCTRL Register (offset = C8h) [reset = 30000h]

Register mask: FFFFFFFFh

CM\_WKUP\_SMARTREFLEX1\_CLKCTRL is shown in Figure 8-136 and described in Table 8-140.

This register manages the SmartReflex1 clocks.

Figure 8-136. CM\_WKUP\_SMARTREFLEX1\_CLKCTRL Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | IDLEST        | IDLEST        |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-3h          | R-3h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | MODULEMODE    | MODULEMODE    |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-140. CM\_WKUP\_SMARTREFLEX1\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 17-16 | IDLEST     | R          | 3h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed                                                                                                                                                                                                  |
| 15-2  | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 1-0   | MODULEMODE | R/W        | 0h      | Control the way mandatory clocks are managed. 0h (R/W) = Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 1h (R/W) = Reserved 2h (R/W) = Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 3h (R) = Reserved |

<!-- image -->

www.ti.com

## 8.1.12.2.52 CM\_L4\_WKUP\_AON\_CLKSTCTRL Register (offset = CCh) [reset = 6h]

Register mask: FFFFFFFFh

CM\_L4\_WKUP\_AON\_CLKSTCTRL is shown in Figure 8-137 and described in Table 8-141.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

## Figure 8-137. CM\_L4\_WKUP\_AON\_CLKSTCTRL Register

| 31            | 30            | 29            | 28            | 27            | 26                             | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|--------------------------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED                       | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                  | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18                             | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED                       | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                  | Rreturns0s-0h | Rreturns0s-0h |
| 15            | 14            | 13            | 12            | 11            | 10                             | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED                       | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                  | Rreturns0s-0h | Rreturns0s-0h |
| 7             | 6             | 5             | 4             | 3             | 2                              | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | CLKACTIVITY_ L4_WKUP_AO N_GCLK | CLKTRCTRL     | CLKTRCTRL     |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-1h                           | R-2h          | R-2h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-141. CM\_L4\_WKUP\_AON\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                         | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                              |
|-------|-------------------------------|------------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | RESERVED                      | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                          |
| 25-14 | RESERVED                      | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                          |
| 13-8  | RESERVED                      | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                          |
| 7-4   | RESERVED                      | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                          |
| 3     | RESERVED                      | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                          |
| 2     | CLKACTIVITY_L4_WKUP _AON_GCLK | R          | 1h      | This field indicates the state of the L4_WKUP clock in the domain. 0h (R) = Corresponding clock is gated 1h (R) = Corresponding clock is active                                                                                                                                                                          |
| 1-0   | CLKTRCTRL                     | R          | 2h      | Controls the clock state transition of the always on L4 clock domain. 0h (R/W) = Sleep transition cannot be initiated. Wakeup transition may however occur. 1h (R/W) = Start a software forced sleep transition on the domain. 2h (R/W) = Start a software forced wake-up transition on the domain. 3h (R/W) = Reserved. |

## 8.1.12.2.53 CM\_WKUP\_WDT1\_CLKCTRL Register (offset = D4h) [reset = 30002h]

Register mask: FFFFFFFFh

CM\_WKUP\_WDT1\_CLKCTRL is shown in Figure 8-138 and described in Table 8-142.

This register manages the WDT1 clocks.

Figure 8-138. CM\_WKUP\_WDT1\_CLKCTRL Register

| 31       | 30               | 29            | 28       | 27       | 26       | 25            | 24            |
|----------|------------------|---------------|----------|----------|----------|---------------|---------------|
| RESERVED | RESERVED         | RESERVED      | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      |
| 22       | 22               | 22            | 22       | 22       | 22       | 22            | 22            |
| 23 21    | 20               | 19            | 18       | 17       | 16       |               |               |
|          |                  |               |          | RESERVED |          | Rreturns0s-0h | Rreturns0s-0h |
| 15 14    |                  | Rreturns0s-0h |          |          | 13       | 12            | 12            |
| 11       | 10 Rreturns0s-0h | 9             | 8        | RESERVED | 6        | 5             | 4             |
| 3        | 3                | 3             | 3        | 3        | 3        | 3             | 3             |
| 2        | 2                | 2             | 2        | 2        | 2        | 2             | 2             |
| 7 1      | 0                | RESERVED      |          |          |          |               | MODULEMODE    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-142. CM\_WKUP\_WDT1\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 18    | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 17-16 | IDLEST     | R          | 3h      | Module idle status. 0h (R) = Module is fully functional, including OCP 1h (R) = Module is performing transition: wakeup, or sleep, or sleep abortion 2h (R) = Module is in Idle mode (only OCP part). It is functional if using separate functional clock 3h (R) = Module is disabled and cannot be accessed                                                                                                                                                                                                  |
| 15-2  | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 1-0   | MODULEMODE | R/W        | 2h      | Control the way mandatory clocks are managed. 0h (R/W) = Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 1h (R/W) = Reserved 2h (R/W) = Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 3h (R) = Reserved |

<!-- image -->

<!-- image -->

## 8.1.12.2.54 CM\_DIV\_M6\_DPLL\_CORE Register (offset = D8h) [reset = 4h]

Register mask: FFFFFFFFh

CM\_DIV\_M6\_DPLL\_CORE is shown in Figure 8-139 and described in Table 8-143.

This register provides controls over the CLKOUT3 o/p of the HSDIVIDER. [warm reset insensitive]

## Figure 8-139. CM\_DIV\_M6\_DPLL\_CORE Register

| 31            | 30            | 29                           | 28                       | 27                    | 26                    | 25                    | 24                            |
|---------------|---------------|------------------------------|--------------------------|-----------------------|-----------------------|-----------------------|-------------------------------|
| RESERVED      | RESERVED      | RESERVED                     | RESERVED                 | RESERVED              | RESERVED              | RESERVED              | RESERVED                      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                | Rreturns0s-0h            | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h                 |
| 23            | 22            | 21                           | 20                       | 19                    | 18                    | 17                    | 16                            |
| RESERVED      | RESERVED      | RESERVED                     | RESERVED                 | RESERVED              | RESERVED              | RESERVED              | RESERVED                      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                | Rreturns0s-0h            | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h         | Rreturns0s-0h                 |
| 15            | 14            | 13                           | 12                       | 11                    | 10                    | 9                     | 8                             |
|               | RESERVED      |                              | HSDIVIDER_C LKOUT3_PWD N | RESERVED              | RESERVED              | ST_HSDIVIDE R_CLKOUT3 | HSDIVIDER_C LKOUT3_GAT E_CTRL |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h                | R/W-0h                   | Rreturns0s-0h         | Rreturns0s-0h         | R-0h                  | R/W-0h                        |
| 7             | 6             | 5                            | 4                        | 3                     | 2                     | 1                     | 0                             |
| RESERVED      | RESERVED      | HSDIVIDER_C LKOUT3_DIVC HACK | HSDIVIDER_CLKOUT3_DIV    | HSDIVIDER_CLKOUT3_DIV | HSDIVIDER_CLKOUT3_DIV | HSDIVIDER_CLKOUT3_DIV | HSDIVIDER_CLKOUT3_DIV         |
| Rreturns0s-0h | Rreturns0s-0h | R-0h                         | R/W-4h                   | R/W-4h                | R/W-4h                | R/W-4h                | R/W-4h                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-143. CM\_DIV\_M6\_DPLL\_CORE Register Field Descriptions

| Bit   | Field                        | Type       | Reset   | Description                                                                                                                                                                                                                                 |
|-------|------------------------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED                     | Rreturns0s | 0h      |                                                                                                                                                                                                                                             |
| 12    | HSDIVIDER_CLKOUT3_P WDN      | R/W        | 0h      | Automatic power down for HSDIVIDER M6 divider and hence CLKOUT3 output when the o/p clock is gated. 0h (R/W) = Keep M6 divider powered on even when CLKOUT3 is gated. 1h (R/W) = Automatically power down M6 divider when CLKOUT3 is gated. |
| 11-10 | RESERVED                     | Rreturns0s | 0h      |                                                                                                                                                                                                                                             |
| 9     | ST_HSDIVIDER_CLKOU T3        | R          | 0h      | HSDIVIDER CLKOUT3 status 0h (R) = The clock output is gated 1h (R) = The clock output is enabled                                                                                                                                            |
| 8     | HSDIVIDER_CLKOUT3_ GATE_CTRL | R/W        | 0h      | Control gating of HSDIVIDER CLKOUT3 0h (R/W) = Automatically gate this clock when there is no dependency for it 1h (R/W) = Force this clock to stay enabled even if there is no request                                                     |
| 7-6   | RESERVED                     | Rreturns0s | 0h      |                                                                                                                                                                                                                                             |
| 5     | HSDIVIDER_CLKOUT3_ DIVCHACK  | R          | 0h      | Toggle on this status bit after changing HSDIVIDER_CLKOUT3_DIV indicates that the change in divider value has taken effect                                                                                                                  |
| 4-0   | HSDIVIDER_CLKOUT3_ DIV       | R/W        | 4h      | DPLL post-divider factor, M6, for internal clock generation. Divide values from 1 to 31. 0h (R/W) = Reserved                                                                                                                                |

## 8.1.12.3 CM\_DPLL Registers

Table 8-144 lists the memory-mapped registers for the CM\_DPLL. All register offset addresses not listed in Table 8-144 should be considered as reserved locations and the register contents should not be modified.

## Table 8-144. CM\_DPLL REGISTERS

| Offset   | Acronym                 | Register Name                                                                 | Section             |
|----------|-------------------------|-------------------------------------------------------------------------------|---------------------|
| 4h       | CLKSEL_TIMER7_CLK       | Selects the Mux select line for TIMER7 clock [warm reset insensitive]         | Section 8.1.12.3.1  |
| 8h       | CLKSEL_TIMER2_CLK       | Selects the Mux select line for TIMER2 clock [warm reset insensitive]         | Section 8.1.12.3.2  |
| Ch       | CLKSEL_TIMER3_CLK       | Selects the Mux select line for TIMER3 clock [warm reset insensitive]         | Section 8.1.12.3.3  |
| 10h      | CLKSEL_TIMER4_CLK       | Selects the Mux select line for TIMER4 clock [warm reset insensitive]         | Section 8.1.12.3.4  |
| 14h      | CM_MAC_CLKSEL           | Selects the clock divide ration for MII clock [warm reset insensitive]        | Section 8.1.12.3.5  |
| 18h      | CLKSEL_TIMER5_CLK       | Selects the Mux select line for TIMER5 clock [warm reset insensitive]         | Section 8.1.12.3.6  |
| 1Ch      | CLKSEL_TIMER6_CLK       | Selects the Mux select line for TIMER6 clock [warm reset insensitive]         | Section 8.1.12.3.7  |
| 20h      | CM_CPTS_RFT_CLKSEL      | Selects the Mux select line for CPTS RFT clock [warm reset insensitive]       | Section 8.1.12.3.8  |
| 28h      | CLKSEL_TIMER1MS_CLK     | Selects the Mux select line for TIMER1 clock [warm reset insensitive]         | Section 8.1.12.3.9  |
| 2Ch      | CLKSEL_GFX_FCLK         | Selects the divider value for GFX clock [warm reset insensitive]              | Section 8.1.12.3.10 |
| 30h      | CLKSEL_PRU_ICSS_OCP_CLK | Controls the Mux select line for PRU-ICSS OCP clock [warm reset insensitive]  | Section 8.1.12.3.11 |
| 34h      | CLKSEL_LCDC_PIXEL_CLK   | Controls the Mux select line for LCDC PIXEL clock [warm reset insensitive]    | Section 8.1.12.3.12 |
| 38h      | CLKSEL_WDT1_CLK         | Selects the Mux select line for Watchdog1 clock [warm reset insensitive]      | Section 8.1.12.3.13 |
| 3Ch      | CLKSEL_GPIO0_DBCLK      | Selects the Mux select line for GPIO0 debounce clock [warm reset insensitive] | Section 8.1.12.3.14 |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.3.1 CLKSEL\_TIMER7\_CLK Register (offset = 4h) [reset = 1h]

CLKSEL\_TIMER7\_CLK is shown in Figure 8-140 and described in Table 8-145.

Selects the Mux select line for TIMER7 clock [warm reset insensitive]

## Figure 8-140. CLKSEL\_TIMER7\_CLK Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | CLKSEL   | CLKSEL   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-145. CLKSEL\_TIMER7\_CLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved | R      | 0h      |                                                                                                                                                                                                      |
| 1-0   | CLKSEL   | R/W    | 1h      | Selects the Mux select line for TIMER7 clock [warm reset insensitive] 0x0 = SEL1 : Select TCLKIN clock 0x1 = SEL2 : Select CLK_M_OSC clock 0x2 = SEL3 : Select CLK_32KHZ clock 0x3 = SEL4 : Reserved |

R/W-1h

## 8.1.12.3.2 CLKSEL\_TIMER2\_CLK Register (offset = 8h) [reset = 1h]

CLKSEL\_TIMER2\_CLK is shown in Figure 8-141 and described in Table 8-146.

Selects the Mux select line for TIMER2 clock [warm reset insensitive]

| Figure 8-141. CLKSEL_TIMER2_CLK Register   | Figure 8-141. CLKSEL_TIMER2_CLK Register   | Figure 8-141. CLKSEL_TIMER2_CLK Register   | Figure 8-141. CLKSEL_TIMER2_CLK Register   | Figure 8-141. CLKSEL_TIMER2_CLK Register   | Figure 8-141. CLKSEL_TIMER2_CLK Register   | Figure 8-141. CLKSEL_TIMER2_CLK Register   | Figure 8-141. CLKSEL_TIMER2_CLK Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | CLKSEL                                     | CLKSEL                                     |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-146. CLKSEL\_TIMER2\_CLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved | R      | 0h      |                                                                                                                                                                                                      |
| 1-0   | CLKSEL   | R/W    | 1h      | Selects the Mux select line for TIMER2 clock [warm reset insensitive] 0x0 = SEL1 : Select TCLKIN clock 0x1 = SEL2 : Select CLK_M_OSC clock 0x2 = SEL3 : Select CLK_32KHZ clock 0x3 = SEL4 : Reserved |

<!-- image -->

R/W-1h

<!-- image -->

www.ti.com

## 8.1.12.3.3 CLKSEL\_TIMER3\_CLK Register (offset = Ch) [reset = 1h]

CLKSEL\_TIMER3\_CLK is shown in Figure 8-142 and described in Table 8-147.

Selects the Mux select line for TIMER3 clock [warm reset insensitive]

## Figure 8-142. CLKSEL\_TIMER3\_CLK Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | CLKSEL   | CLKSEL   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-147. CLKSEL\_TIMER3\_CLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved | R      | 0h      |                                                                                                                                                                                                      |
| 1-0   | CLKSEL   | R/W    | 1h      | Selects the Mux select line for TIMER3 clock [warm reset insensitive] 0x0 = SEL1 : Select TCLKIN clock 0x1 = SEL2 : Select CLK_M_OSC clock 0x2 = SEL3 : Select CLK_32KHZ clock 0x3 = SEL4 : Reserved |

R/W-1h

## 8.1.12.3.4 CLKSEL\_TIMER4\_CLK Register (offset = 10h) [reset = 1h]

CLKSEL\_TIMER4\_CLK is shown in Figure 8-143 and described in Table 8-148.

Selects the Mux select line for TIMER4 clock [warm reset insensitive]

| Figure 8-143. CLKSEL_TIMER4_CLK Register   | Figure 8-143. CLKSEL_TIMER4_CLK Register   | Figure 8-143. CLKSEL_TIMER4_CLK Register   | Figure 8-143. CLKSEL_TIMER4_CLK Register   | Figure 8-143. CLKSEL_TIMER4_CLK Register   | Figure 8-143. CLKSEL_TIMER4_CLK Register   | Figure 8-143. CLKSEL_TIMER4_CLK Register   | Figure 8-143. CLKSEL_TIMER4_CLK Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | CLKSEL                                     | CLKSEL                                     |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-148. CLKSEL\_TIMER4\_CLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved | R      | 0h      |                                                                                                                                                                                                      |
| 1-0   | CLKSEL   | R/W    | 1h      | Selects the Mux select line for TIMER4 clock [warm reset insensitive] 0x0 = SEL1 : Select TCLKIN clock 0x1 = SEL2 : Select CLK_M_OSC clock 0x2 = SEL3 : Select CLK_32KHZ clock 0x3 = SEL4 : Reserved |

<!-- image -->

R/W-1h

<!-- image -->

www.ti.com

## 8.1.12.3.5 CM\_MAC\_CLKSEL Register (offset = 14h) [reset = 4h]

CM\_MAC\_CLKSEL is shown in Figure 8-144 and described in Table 8-149. Selects the clock divide ration for MII clock [warm reset insensitive]

|   Figure 8-144. CM_MAC_CLKSEL Register | Figure 8-144. CM_MAC_CLKSEL Register   | Figure 8-144. CM_MAC_CLKSEL Register   | Figure 8-144. CM_MAC_CLKSEL Register   | Figure 8-144. CM_MAC_CLKSEL Register   | Figure 8-144. CM_MAC_CLKSEL Register   | Figure 8-144. CM_MAC_CLKSEL Register   | Figure 8-144. CM_MAC_CLKSEL Register   |
|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|
|                                     30 | 29                                     | 28                                     | 27                                     | 26                                     | 25                                     | 24                                     | Reserved                               |
|                                     22 | 22                                     | 22                                     | 22                                     | 22                                     | 22                                     | 22                                     | 22                                     |
|                                     21 | 21                                     | 21                                     | 21                                     | 21                                     | 21                                     | 21                                     | 21                                     |
|                                     20 | 19 R-0h                                | 18                                     | 17                                     | 16                                     | Reserved                               | 14                                     | 13                                     |
|                                     12 | 12                                     | 12                                     | 12                                     | 12                                     | 12                                     | 12                                     | 12                                     |
|                                     11 | 11                                     | 11                                     | 11                                     | 11                                     | 11                                     | 11                                     | 11                                     |
|                                     10 | 9 R-0h                                 | 8                                      | Reserved                               | 6                                      | 5                                      | 4                                      | 3                                      |
|                                      2 | 2                                      | 2                                      | 2                                      | 2                                      | 2                                      | 2                                      | 2                                      |
|                                      1 | 1                                      | 1                                      | 1                                      | 1                                      | 1                                      | 1                                      | 1                                      |
|                                      0 | Reserved MII_CLK_SEL                   | Reserved                               |                                        |                                        |                                        |                                        |                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-149. CM\_MAC\_CLKSEL Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                 |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | Reserved    | R      | 0h      |                                                                                                                                                                                             |
| 2     | MII_CLK_SEL | R/W    | 1h      | MII Clock Divider Selection. This bit is warm reset insensitive when CPSW RESET_ISO is enabled 0x0 = SEL0 : Selects 1/2 divider of SYSCLK2 0x1 = SEL1 : Selects 1/5 divide ratio of SYSCLK2 |
| 1-0   | Reserved    | R      | 0h      |                                                                                                                                                                                             |

## 8.1.12.3.6 CLKSEL\_TIMER5\_CLK Register (offset = 18h) [reset = 1h]

CLKSEL\_TIMER5\_CLK is shown in Figure 8-145 and described in Table 8-150.

Selects the Mux select line for TIMER5 clock [warm reset insensitive]

| Figure 8-145. CLKSEL_TIMER5_CLK Register   | Figure 8-145. CLKSEL_TIMER5_CLK Register   | Figure 8-145. CLKSEL_TIMER5_CLK Register   | Figure 8-145. CLKSEL_TIMER5_CLK Register   | Figure 8-145. CLKSEL_TIMER5_CLK Register   | Figure 8-145. CLKSEL_TIMER5_CLK Register   | Figure 8-145. CLKSEL_TIMER5_CLK Register   | Figure 8-145. CLKSEL_TIMER5_CLK Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | CLKSEL                                     | CLKSEL                                     |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-150. CLKSEL\_TIMER5\_CLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved | R      | 0h      |                                                                                                                                                                                                      |
| 1-0   | CLKSEL   | R/W    | 1h      | Selects the Mux select line for TIMER5 clock [warm reset insensitive] 0x0 = SEL1 : Select TCLKIN clock 0x1 = SEL2 : Select CLK_M_OSC clock 0x2 = SEL3 : Select CLK_32KHZ clock 0x3 = SEL4 : Reserved |

<!-- image -->

R/W-1h

<!-- image -->

www.ti.com

## 8.1.12.3.7 CLKSEL\_TIMER6\_CLK Register (offset = 1Ch) [reset = 1h]

CLKSEL\_TIMER6\_CLK is shown in Figure 8-146 and described in Table 8-151.

Selects the Mux select line for TIMER6 clock [warm reset insensitive]

## Figure 8-146. CLKSEL\_TIMER6\_CLK Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | CLKSEL   | CLKSEL   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-151. CLKSEL\_TIMER6\_CLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved | R      | 0h      |                                                                                                                                                                                                      |
| 1-0   | CLKSEL   | R/W    | 1h      | Selects the Mux select line for TIMER6 clock [warm reset insensitive] 0x0 = SEL1 : Select TCLKIN clock 0x1 = SEL2 : Select CLK_M_OSC clock 0x2 = SEL3 : Select CLK_32KHZ clock 0x3 = SEL4 : Reserved |

R/W-1h

## 8.1.12.3.8 CM\_CPTS\_RFT\_CLKSEL Register (offset = 20h) [reset = 0h]

CM\_CPTS\_RFT\_CLKSEL is shown in Figure 8-147 and described in Table 8-152.

Selects the Mux select line for CPTS RFT clock [warm reset insensitive]

|          | Figure 8-147. CM_CPTS_RFT_CLKSEL Register   | Figure 8-147. CM_CPTS_RFT_CLKSEL Register   | Figure 8-147. CM_CPTS_RFT_CLKSEL Register   | Figure 8-147. CM_CPTS_RFT_CLKSEL Register   | Figure 8-147. CM_CPTS_RFT_CLKSEL Register   | Figure 8-147. CM_CPTS_RFT_CLKSEL Register   | Figure 8-147. CM_CPTS_RFT_CLKSEL Register   |
|----------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31       | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h     | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23       | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
| Reserved | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h     | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 15       | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h     | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7        | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
|          |                                             | Reserved                                    |                                             |                                             | Reserved                                    | Reserved                                    | CLKSEL                                      |
|          |                                             | R-0h                                        |                                             |                                             | R-0h                                        | R-0h                                        | R/W-0h                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-152. CM\_CPTS\_RFT\_CLKSEL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                     |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | Reserved | R      | 0h      |                                                                                                                                                 |
| 2     | Reserved | R      | 0h      |                                                                                                                                                 |
| 1     | Reserved | R      | 0h      |                                                                                                                                                 |
| 0     | CLKSEL   | R/W    | 0h      | Selects the Mux select line for cpgmac rft clock [warm reset insensitive] 0x0 = SEL1 : Selects CORE_CLKOUTM5 0x1 = SEL2 : Selects CORE_CLKOUTM4 |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.3.9 CLKSEL\_TIMER1MS\_CLK Register (offset = 28h) [reset = 0h]

CLKSEL\_TIMER1MS\_CLK is shown in Figure 8-148 and described in Table 8-153.

Selects the Mux select line for TIMER1 clock [warm reset insensitive]

## Figure 8-148. CLKSEL\_TIMER1MS\_CLK Register

| 31              | 30              | 29              | 28              | 27              | 26              | 25              | 24              |
|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|
| Reserved        | Reserved        | Reserved        | Reserved        | Reserved        | Reserved        | Reserved        | Reserved        |
| R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            |
| 23              | 22              | 21              | 20              | 19              | 18              | 17              | 16              |
| Reserved        | Reserved        | Reserved        | Reserved        | Reserved        | Reserved        | Reserved        | Reserved        |
| R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            |
| 15              | 14              | 13              | 12              | 11              | 10              | 9               | 8               |
| Reserved        | Reserved        | Reserved        | Reserved        | Reserved        | Reserved        | Reserved        | Reserved        |
| R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            |
| 7               | 6               | 5               | 4               | 3               | 2               | 1               | 0               |
| Reserved CLKSEL | Reserved CLKSEL | Reserved CLKSEL | Reserved CLKSEL | Reserved CLKSEL | Reserved CLKSEL | Reserved CLKSEL | Reserved CLKSEL |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-153. CLKSEL\_TIMER1MS\_CLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | Reserved | R      | 0h      |                                                                                                                                                                                                                                                                                   |
| 2-0   | CLKSEL   | R/W    | 0h      | Selects the Mux select line for DMTIMER_1MS clock [warm reset insensitive] 0x0 = SEL1 : Select CLK_M_OSC clock 0x1 = SEL2 : Select CLK_32KHZ clock 0x2 = SEL3 : Select TCLKIN clock 0x3 = SEL4 : Select CLK_RC32K clock 0x4 = SEL5 : Selects the CLK_32768 from 32KHz Crystal Osc |

R/W-0h

## 8.1.12.3.10 CLKSEL\_GFX\_FCLK Register (offset = 2Ch) [reset = 0h]

CLKSEL\_GFX\_FCLK is shown in Figure 8-149 and described in Table 8-154. Selects the divider value for GFX clock [warm reset insensitive]

| Figure 8-149. CLKSEL_GFX_FCLK Register   | Figure 8-149. CLKSEL_GFX_FCLK Register   | Figure 8-149. CLKSEL_GFX_FCLK Register   | Figure 8-149. CLKSEL_GFX_FCLK Register   | Figure 8-149. CLKSEL_GFX_FCLK Register   | Figure 8-149. CLKSEL_GFX_FCLK Register   | Figure 8-149. CLKSEL_GFX_FCLK Register   | Figure 8-149. CLKSEL_GFX_FCLK Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | CLKSEL_GFX_ FCLK                         | CLKDIV_SEL_ GFX_FCLK                     |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-154. CLKSEL\_GFX\_FCLK Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                              |
|-------|---------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved            | R      | 0h      |                                                                                                                                                                          |
| 1     | CLKSEL_GFX_FCLK     | R/W    | 0h      | Selects the clock on gfx fclk [warm reset insensitive] 0x0 = SEL0 : SGX FCLK is from CORE PLL (same as L3 clock) 0x1 = SEL1 : SGX FCLK is from PER PLL (192 MHz clock)   |
| 0     | CLKDIV_SEL_GFX_FCLK | R/W    | 0h      | Selects the divider value on gfx fclk [warm reset insensitive] 0x0 = DIV1 : SGX FCLK is same as L3 Clock or 192MHz Clock 0x1 = DIV2 : SGX FCLK is L3 clock/2 or 192Mhz/2 |

<!-- image -->

R/W-0h

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.3.11 CLKSEL\_PRU\_ICSS\_OCP\_CLK Register (offset = 30h) [reset = 0h]

CLKSEL\_PRU\_ICSS\_OCP\_CLK is shown in Figure 8-150 and described in Table 8-155.

Controls the Mux select line for PRU-ICSS OCP clock [warm reset insensitive]

## Figure 8-150. CLKSEL\_PRU\_ICSS\_OCP\_CLK Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | CLKSEL   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-155. CLKSEL\_PRU\_ICSS\_OCP\_CLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved | R      | 0h      |                                                                                                                                                                   |
| 0     | CLKSEL   | R/W    | 0h      | Controls Mux Select of PRU-ICSS OCP clock mux 0x0 = SEL1 : Select L3F clock as OCP Clock of PRU-ICSS 0x1 = SEL2 : Select DISP DPLL clock as OCP clock of PRU-ICSS |

R/W-0h

## 8.1.12.3.12 CLKSEL\_LCDC\_PIXEL\_CLK Register (offset = 34h) [reset = 0h]

CLKSEL\_LCDC\_PIXEL\_CLK is shown in Figure 8-151 and described in Table 8-156.

Controls the Mux select line for LCDC PIXEL clock [warm reset insensitive]

## Figure 8-151. CLKSEL\_LCDC\_PIXEL\_CLK Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | CLKSEL   | CLKSEL   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-156. CLKSEL\_LCDC\_PIXEL\_CLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                        |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved | R      | 0h      |                                                                                                                                                                                    |
| 1-0   | CLKSEL   | R/W    | 0h      | Controls the Mux Select of LCDC PIXEL clock 0x0 = SEL1 : Select DISP PLL CLKOUTM2 0x1 = SEL2 : Select CORE PLL CLKOUTM5 0x2 = SEL3 : Select PER PLL CLKOUTM2 0x3 = SEL4 : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.3.13 CLKSEL\_WDT1\_CLK Register (offset = 38h) [reset = 1h]

CLKSEL\_WDT1\_CLK is shown in Figure 8-152 and described in Table 8-157.

Selects the Mux select line for Watchdog1 clock [warm reset insensitive]

| Figure 8-152. CLKSEL_WDT1_CLK Register   | Figure 8-152. CLKSEL_WDT1_CLK Register   | Figure 8-152. CLKSEL_WDT1_CLK Register   | Figure 8-152. CLKSEL_WDT1_CLK Register   | Figure 8-152. CLKSEL_WDT1_CLK Register   | Figure 8-152. CLKSEL_WDT1_CLK Register   | Figure 8-152. CLKSEL_WDT1_CLK Register   | Figure 8-152. CLKSEL_WDT1_CLK Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | CLKSEL                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-157. CLKSEL\_WDT1\_CLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved | R      | 0h      |                                                                                                                                                                         |
| 0     | CLKSEL   | R/W    | 1h      | Selects the Mux select line for WDT1 clock [warm reset insensitive] 0x0 = SEL1 : Select 32KHZ clock from RC Oscillator 0x1 = SEL2 : Select 32KHZ from 32K Clock divider |

R/W-1h

## 8.1.12.3.14 CLKSEL\_GPIO0\_DBCLK Register (offset = 3Ch) [reset = 0h]

CLKSEL\_GPIO0\_DBCLK is shown in Figure 8-153 and described in Table 8-158.

Selects the Mux select line for GPIO0 debounce clock [warm reset insensitive]

## Figure 8-153. CLKSEL\_GPIO0\_DBCLK Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | CLKSEL   | CLKSEL   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-158. CLKSEL\_GPIO0\_DBCLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                         |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved | R      | 0h      |                                                                                                                                                                                                                                     |
| 1-0   | CLKSEL   | R/W    | 0h      | Selects the Mux select line for GPIO0 debounce clock [warm reset insensitive] 0x0 = SEL1 : Select 32KHZ clock from RC Oscillator 0x1 = SEL2 : Select 32KHZ from 32K Crystal Oscillator 0x2 = SEL3 : Select 32KHz from Clock Divider |

## 8.1.12.4 CM\_MPU Registers

Table 8-159 lists the memory-mapped registers for the CM\_MPU. All register offset addresses not listed in Table 8-159 should be considered as reserved locations and the register contents should not be modified.

## Table 8-159. CM\_MPU REGISTERS

| Offset   | Acronym            | Register Name                                                                                                                                                                                                             | Section            |
|----------|--------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------|
| 0h       | CM_MPU_CLKSTCTRL   | This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain. | Section 8.1.12.4.1 |
| 4h       | CM_MPU_MPU_CLKCTRL | This register manages the MPU clocks.                                                                                                                                                                                     | Section 8.1.12.4.2 |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.4.1 CM\_MPU\_CLKSTCTRL Register (offset = 0h) [reset = 6h]

CM\_MPU\_CLKSTCTRL is shown in Figure 8-154 and described in Table 8-160.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

## Figure 8-154. CM\_MPU\_CLKSTCTRL Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26                   | 25        | 24        |
|----------|----------|----------|----------|----------|----------------------|-----------|-----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved             | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                 | R-0h      | R-0h      |
| 23       | 22       | 21       | 20       | 19       | 18                   | 17        | 16        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved             | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                 | R-0h      | R-0h      |
| 15       | 14       | 13       | 12       | 11       | 10                   | 9         | 8         |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved             | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                 | R-0h      | R-0h      |
| 7        | 6        | 5        | 4        | 3        | 2                    | 1         | 0         |
| Reserved | Reserved | Reserved | Reserved | Reserved | CLKACTIVITY_ MPU_CLK | CLKTRCTRL | CLKTRCTRL |

R-1h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-160. CM\_MPU\_CLKSTCTRL Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                          |
|-------|---------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                      |
| 2     | CLKACTIVITY_MPU_CLK | R      | 1h      | This field indicates the state of the MPU Clock 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                                 |
| 1-0   | CLKTRCTRL           | R/W    | 2h      | Controls the clock state transition of the MPU clock domains. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

R/W-2h

## 8.1.12.4.2 CM\_MPU\_MPU\_CLKCTRL Register (offset = 4h) [reset = 2h]

CM\_MPU\_MPU\_CLKCTRL is shown in Figure 8-155 and described in Table 8-161. This register manages the MPU clocks.

| Figure 8-155. CM_MPU_MPU_CLKCTRL Register   | Figure 8-155. CM_MPU_MPU_CLKCTRL Register   | Figure 8-155. CM_MPU_MPU_CLKCTRL Register   | Figure 8-155. CM_MPU_MPU_CLKCTRL Register   | Figure 8-155. CM_MPU_MPU_CLKCTRL Register   | Figure 8-155. CM_MPU_MPU_CLKCTRL Register   | Figure 8-155. CM_MPU_MPU_CLKCTRL Register   | Figure 8-155. CM_MPU_MPU_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
|                                             |                                             | Reserved                                    |                                             |                                             | STBYST                                      | IDLEST                                      | IDLEST                                      |
|                                             |                                             | R-0h                                        |                                             |                                             | R-0h                                        | R-0h                                        | R-0h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-161. CM\_MPU\_MPU\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | STBYST     | R      | 0h      | Module standby status. 0x0 = Func : Module is functional (not in standby) 0x1 = Standby : Module is in standby                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST     | R      | 0h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 2h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

## 8.1.12.5 CM\_DEVICE Registers

Table 8-162 lists the memory-mapped registers for the CM\_DEVICE. All register offset addresses not listed in Table 8-162 should be considered as reserved locations and the register contents should not be modified.

Table 8-162. CM\_DEVICE REGISTERS

| Offset   | Acronym        | Register Name                                          | Section            |
|----------|----------------|--------------------------------------------------------|--------------------|
| 0h       | CM_CLKOUT_CTRL | This register provides the control over CLKOUT2 output | Section 8.1.12.5.1 |

<!-- image -->

R/W-2h

<!-- image -->

www.ti.com

## 8.1.12.5.1 CM\_CLKOUT\_CTRL Register (offset = 0h) [reset = 0h]

CM\_CLKOUT\_CTRL is shown in Figure 8-156 and described in Table 8-163.

This register provides the control over CLKOUT2 output

| Figure 8-156. CM_CLKOUT_CTRL Register   | Figure 8-156. CM_CLKOUT_CTRL Register   | Figure 8-156. CM_CLKOUT_CTRL Register   | Figure 8-156. CM_CLKOUT_CTRL Register   | Figure 8-156. CM_CLKOUT_CTRL Register   | Figure 8-156. CM_CLKOUT_CTRL Register   | Figure 8-156. CM_CLKOUT_CTRL Register   | Figure 8-156. CM_CLKOUT_CTRL Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| CLKOUT2EN                               | Reserved                                | CLKOUT2DIV                              | CLKOUT2DIV                              | CLKOUT2DIV                              | CLKOUT2SOURCE                           | CLKOUT2SOURCE                           | CLKOUT2SOURCE                           |
| R/W-0h                                  | R-0h                                    | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-163. CM\_CLKOUT\_CTRL Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                   |
| 7     | CLKOUT2EN     | R/W    | 0h      | This bit controls the external clock activity 0x0 = DIS : SYS_CLKOUT2 is disabled 0x1 = EN : SYS_CLKOUT2 is enabled                                                                                                                                               |
| 6     | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                   |
| 5-3   | CLKOUT2DIV    | R/W    | 0h      | THis field controls the external clock divison factor 0x0 = DIV1 : SYS_CLKOUT2/1 0x1 = DIV2 : SYS_CLKOUT2/2 0x2 = DIV3 : SYS_CLKOUT2/3 0x3 = DIV4 : SYS_CLKOUT2/4 0x4 = DIV5 : SYS_CLKOUT2/5 0x5 = DIV6 : SYS_CLKOUT2/6 0x6 = DIV7 : SYS_CLKOUT2/7 0x7 = Reserved |
| 2-0   | CLKOUT2SOURCE | R/W    | 0h      | This field selects the external output clock source 0x0 = SEL0 : Select 32KHz Oscillator O/P 0x1 = SEL1 : Select L3 Clock 0x2 = SEL2 : Select DDR PHY Clock 0x3 = SEL4 : Select 192Mhz clock from PER PLL 0x4 = SEL5 : Select LCD Pixel Clock                     |

## 8.1.12.6 CM\_RTC Registers

Table 8-164 lists the memory-mapped registers for the CM\_RTC. All register offset addresses not listed in Table 8-164 should be considered as reserved locations and the register contents should not be modified.

<!-- image -->

<!-- image -->

## Table 8-164. CM\_RTC REGISTERS

| Offset   | Acronym            | Register Name                                                                                                                                                                                                             | Section            |
|----------|--------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------|
| 0h       | CM_RTC_RTC_CLKCTRL | This register manages the RTC clocks.                                                                                                                                                                                     | Section 8.1.12.6.1 |
| 4h       | CM_RTC_CLKSTCTRL   | This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain. | Section 8.1.12.6.2 |

## 8.1.12.6.1 CM\_RTC\_RTC\_CLKCTRL Register (offset = 0h) [reset = 30002h]

CM\_RTC\_RTC\_CLKCTRL is shown in Figure 8-157 and described in Table 8-165. This register manages the RTC clocks.

| Figure 8-157. CM_RTC_RTC_CLKCTRL Register   | Figure 8-157. CM_RTC_RTC_CLKCTRL Register   | Figure 8-157. CM_RTC_RTC_CLKCTRL Register   | Figure 8-157. CM_RTC_RTC_CLKCTRL Register   | Figure 8-157. CM_RTC_RTC_CLKCTRL Register   | Figure 8-157. CM_RTC_RTC_CLKCTRL Register   | Figure 8-157. CM_RTC_RTC_CLKCTRL Register   | Figure 8-157. CM_RTC_RTC_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
|                                             |                                             | Reserved                                    |                                             |                                             | Reserved                                    | IDLEST                                      | IDLEST                                      |
|                                             |                                             | R-0h                                        |                                             |                                             | R-0h                                        | R-3h                                        |                                             |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-165. CM\_RTC\_RTC\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 2h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-2h

<!-- image -->

www.ti.com

## 8.1.12.6.2 CM\_RTC\_CLKSTCTRL Register (offset = 4h) [reset = 102h]

CM\_RTC\_CLKSTCTRL is shown in Figure 8-158 and described in Table 8-166.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

## Figure 8-158. CM\_RTC\_CLKSTCTRL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25                      | 24                       |
|----------|----------|----------|----------|----------|----------|-------------------------|--------------------------|
|          |          | Reserved | Reserved |          |          | Reserved                | Reserved                 |
|          |          | R-0h     | R-0h     |          |          | R-0h                    | R-0h                     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17                      | 16                       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved                | Reserved                 |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                    | R-0h                     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9                       | 8                        |
|          |          | Reserved |          |          | Reserved | CLKACTIVITY_ RTC_32KCLK | CLKACTIVITY_ L4_RTC_GCLK |
|          |          | R-0h     |          |          | R-0h     | R-0h                    | R-1h                     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1                       | 0                        |
|          |          | Reserved | Reserved |          |          | CLKTRCTRL               | CLKTRCTRL                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-166. CM\_RTC\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                          |
|-------|--------------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                      |
| 25-11 | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                      |
| 10    | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                      |
| 9     | CLKACTIVITY_RTC_32K CLK  | R      | 0h      | This field indicates the state of the 32K RTC clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                             |
| 8     | CLKACTIVITY_L4_RTC_ GCLK | R      | 1h      | This field indicates the state of the L4 RTC clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                               |
| 7-2   | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                      |
| 1-0   | CLKTRCTRL                | R/W    | 2h      | Controls the clock state transition of the RTC clock domains. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

## 8.1.12.7 CM\_GFX Registers

Table 8-167 lists the memory-mapped registers for the CM\_GFX. All register offset addresses not listed in

Table 8-167 should be considered as reserved locations and the register contents should not be modified.

R/W-2h

## Table 8-167. CM\_GFX REGISTERS

| Offset   | Acronym                    | Register Name                                                                                                                                                                                                             | Section            |
|----------|----------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------|
| 0h       | CM_GFX_L3_CLKSTCTRL        | This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain. | Section 8.1.12.7.1 |
| 4h       | CM_GFX_GFX_CLKCTRL         | This register manages the GFX clocks.                                                                                                                                                                                     | Section 8.1.12.7.2 |
| Ch       | CM_GFX_L4LS_GFX_CLKSTCTR L | This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain. | Section 8.1.12.7.3 |
| 10h      | CM_GFX_MMUCFG_CLKCTRL      | This register manages the MMU CFG clocks.                                                                                                                                                                                 | Section 8.1.12.7.4 |
| 14h      | CM_GFX_MMUDATA_CLKCTRL     | This register manages the MMU clocks.                                                                                                                                                                                     | Section 8.1.12.7.5 |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.7.1 CM\_GFX\_L3\_CLKSTCTRL Register (offset = 0h) [reset = 2h]

CM\_GFX\_L3\_CLKSTCTRL is shown in Figure 8-159 and described in Table 8-168.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

## Figure 8-159. CM\_GFX\_L3\_CLKSTCTRL Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25                    | 24                       |
|----------|----------|----------|----------|----------|----------|-----------------------|--------------------------|
|          | Reserved | Reserved | Reserved |          |          | Reserved              | Reserved                 |
|          |          |          |          |          |          | R-0h                  | R-0h                     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17                    | 16                       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved              | Reserved                 |
| 15       | 14       | 13       |          | 11       | 10       | 9                     | 8                        |
|          |          |          | 12       |          |          |                       |                          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | CLKACTIVITY_ GFX_FCLK | CLKACTIVITY_ GFX_L3_GCLK |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                  | R-0h                     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1                     | 0                        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | CLKTRCTRL             | CLKTRCTRL                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-168. CM\_GFX\_L3\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                             |
|-------|--------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                         |
| 25-10 | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                         |
| 9     | CLKACTIVITY_GFX_FCL K    | R      | 0h      | This field indicates the state of the GFX_GCLK clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                                |
| 8     | CLKACTIVITY_GFX_L3_ GCLK | R      | 0h      | This field indicates the state of the GFX_L3_GCLK clock in the domain. 0x0 = Inact : Corresponding clock is gated 0x1 = Act : Corresponding clock is active                                                                                                                                                                                                                             |
| 7-2   | Reserved                 | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | CLKTRCTRL                | R/W    | 2h      | Controls the clock state transition of the GFX clock domain in GFX power domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

R/W-2h

## 8.1.12.7.2 CM\_GFX\_GFX\_CLKCTRL Register (offset = 4h) [reset = 70000h]

CM\_GFX\_GFX\_CLKCTRL is shown in Figure 8-160 and described in Table 8-169. This register manages the GFX clocks.

| Figure 8-160. CM_GFX_GFX_CLKCTRL Register   | Figure 8-160. CM_GFX_GFX_CLKCTRL Register   | Figure 8-160. CM_GFX_GFX_CLKCTRL Register   | Figure 8-160. CM_GFX_GFX_CLKCTRL Register   | Figure 8-160. CM_GFX_GFX_CLKCTRL Register   | Figure 8-160. CM_GFX_GFX_CLKCTRL Register   | Figure 8-160. CM_GFX_GFX_CLKCTRL Register   | Figure 8-160. CM_GFX_GFX_CLKCTRL Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
|                                             |                                             | Reserved                                    |                                             |                                             | STBYST                                      | IDLEST                                      | IDLEST                                      |
|                                             |                                             | R-0h                                        |                                             |                                             | R-1h                                        | R-3h                                        | R-3h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | MODULEMODE                                  | MODULEMODE                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-169. CM\_GFX\_GFX\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 18    | STBYST     | R      | 1h      | Module standby status. 0x0 = Func : Module is functional (not in standby) 0x1 = Standby : Module is in standby                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.7.3 CM\_GFX\_L4LS\_GFX\_CLKSTCTRL Register (offset = Ch) [reset = 102h]

CM\_GFX\_L4LS\_GFX\_CLKSTCTRL is shown in Figure 8-161 and described in Table 8-170.

This register enables the domain power state transition. It controls the SW supervised clock domain state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

| Figure 8-161. CM_GFX_L4LS_GFX_CLKSTCTRL Register   | Figure 8-161. CM_GFX_L4LS_GFX_CLKSTCTRL Register   | Figure 8-161. CM_GFX_L4LS_GFX_CLKSTCTRL Register   | Figure 8-161. CM_GFX_L4LS_GFX_CLKSTCTRL Register   | Figure 8-161. CM_GFX_L4LS_GFX_CLKSTCTRL Register   | Figure 8-161. CM_GFX_L4LS_GFX_CLKSTCTRL Register   | Figure 8-161. CM_GFX_L4LS_GFX_CLKSTCTRL Register   | Figure 8-161. CM_GFX_L4LS_GFX_CLKSTCTRL Register   |
|----------------------------------------------------|----------------------------------------------------|----------------------------------------------------|----------------------------------------------------|----------------------------------------------------|----------------------------------------------------|----------------------------------------------------|----------------------------------------------------|
| 31                                                 | 30                                                 | 29                                                 | 28                                                 | 27                                                 | 26                                                 | 25                                                 | 24                                                 |
| Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           |
| R-0h                                               | R-0h                                               | R-0h                                               | R-0h                                               | R-0h                                               | R-0h                                               | R-0h                                               | R-0h                                               |
| 23                                                 | 22                                                 | 21                                                 | 20                                                 | 19                                                 | 18                                                 | 17                                                 | 16                                                 |
| Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           |
| R-0h                                               | R-0h                                               | R-0h                                               | R-0h                                               | R-0h                                               | R-0h                                               | R-0h                                               | R-0h                                               |
| 15                                                 | 14                                                 | 13                                                 | 12                                                 | 11                                                 | 10                                                 | 9                                                  | 8                                                  |
| Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | CLKACTIVITY_ L4LS_GFX_GC LK                        |
| R-0h R-1h                                          | R-0h R-1h                                          | R-0h R-1h                                          | R-0h R-1h                                          | R-0h R-1h                                          | R-0h R-1h                                          | R-0h R-1h                                          | R-0h R-1h                                          |
| 7                                                  | 6                                                  | 5                                                  | 4                                                  | 3                                                  | 2                                                  | 1                                                  | 0                                                  |
| Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | Reserved                                           | CLKTRCTRL                                          | CLKTRCTRL                                          |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-170. CM\_GFX\_L4LS\_GFX\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                              |
|-------|----------------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | Reserved                   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                          |
| 8     | CLKACTIVITY_L4LS_GF X_GCLK | R      | 1h      | This field indicates the state of the L4_LS clock in the domain. 0x0 = Inact 0x1 = Act                                                                                                                                                                                                                                                                                                   |
| 7-2   | Reserved                   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                          |
| 1-0   | CLKTRCTRL                  | R/W    | 2h      | Controls the clock state transition of the L4LS clock domain in GFX power domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

R/W-2h

<!-- image -->

## 8.1.12.7.4 CM\_GFX\_MMUCFG\_CLKCTRL Register (offset = 10h) [reset = 30000h]

CM\_GFX\_MMUCFG\_CLKCTRL is shown in Figure 8-162 and described in Table 8-171. This register manages the MMU CFG clocks.

## Figure 8-162. CM\_GFX\_MMUCFG\_CLKCTRL Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24         |
|----------|----------|----------|----------|----------|----------|------------|------------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16         |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | IDLEST     | IDLEST     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-3h       | R-3h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | MODULEMODE | MODULEMODE |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-171. CM\_GFX\_MMUCFG\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h

<!-- image -->

www.ti.com

## 8.1.12.7.5 CM\_GFX\_MMUDATA\_CLKCTRL Register (offset = 14h) [reset = 30000h]

CM\_GFX\_MMUDATA\_CLKCTRL is shown in Figure 8-163 and described in Table 8-172. This register manages the MMU clocks.

## Figure 8-163. CM\_GFX\_MMUDATA\_CLKCTRL Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24         |
|----------|----------|----------|----------|----------|----------|------------|------------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16         |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | IDLEST     | IDLEST     |
|          |          |          |          |          |          | R-3h       | R-3h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | MODULEMODE | MODULEMODE |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-172. CM\_GFX\_MMUDATA\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                                                        |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

## 8.1.12.8 CM\_CEFUSE Registers

Table 8-173 lists the memory-mapped registers for the CM\_CEFUSE. All register offset addresses not listed in Table 8-173 should be considered as reserved locations and the register contents should not be modified.

Table 8-173. CM\_CEFUSE REGISTERS

| Offset   | Acronym             | Register Name                                                                                                                                                                                                             | Section            |
|----------|---------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------|
| 0h       | CM_CEFUSE_CLKSTCTRL | This register enables the domain power state transition. It controls the HW supervised domain power state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain. | Section 8.1.12.8.1 |

R/W-0h

## Table 8-173. CM\_CEFUSE REGISTERS (continued)

| Offset   | Acronym                 | Register Name                            | Section            |
|----------|-------------------------|------------------------------------------|--------------------|
| 20h      | CM_CEFUSE_CEFUSE_CLKCTR | This register manages the CEFUSE clocks. | Section 8.1.12.8.2 |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.12.8.1 CM\_CEFUSE\_CLKSTCTRL Register (offset = 0h) [reset = 2h]

CM\_CEFUSE\_CLKSTCTRL is shown in Figure 8-164 and described in Table 8-174.

This register enables the domain power state transition. It controls the HW supervised domain power state transition between ON-ACTIVE and ON-INACTIVE states. It also hold one status bit per clock input of the domain.

| Figure 8-164. CM_CEFUSE_CLKSTCTRL Register   | Figure 8-164. CM_CEFUSE_CLKSTCTRL Register   | Figure 8-164. CM_CEFUSE_CLKSTCTRL Register   | Figure 8-164. CM_CEFUSE_CLKSTCTRL Register   | Figure 8-164. CM_CEFUSE_CLKSTCTRL Register   | Figure 8-164. CM_CEFUSE_CLKSTCTRL Register   | Figure 8-164. CM_CEFUSE_CLKSTCTRL Register   | Figure 8-164. CM_CEFUSE_CLKSTCTRL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | CLKACTIVITY_ CUST_EFUSE _SYS_CLK             | CLKACTIVITY_ L4_CEFUSE_G ICLK                |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | CLKTRCTRL                                    | CLKTRCTRL                                    |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-174. CM\_CEFUSE\_CLKSTCTRL Register Field Descriptions

| Bit   | Field                           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|---------------------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | Reserved                        | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                |
| 9     | CLKACTIVITY_CUST_EF USE_SYS_CLK | R      | 0h      | This field indicates the state of the Cust_Efuse_SYSCLK clock input of the domain. [warm reset insensitive] 0x0 = Inact : Corresponding clock is definitely gated 0x1 = Act : Corresponding clock is running or gating/ungating transition is on-going                                                                                                                                         |
| 8     | CLKACTIVITY_L4_CEFU SE_GICLK    | R      | 0h      | This field indicates the state of the L4_CEFUSE_GCLK clock input of the domain. [warm reset insensitive] 0x0 = Inact : Corresponding clock is definitely gated 0x1 = Act : Corresponding clock is running or gating/ungating transition is on-going                                                                                                                                            |
| 7-2   | Reserved                        | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                |
| 1-0   | CLKTRCTRL                       | R/W    | 2h      | Controls the clock state transition of the clock domain in customer efuse power domain. 0x0 = NO_SLEEP : NO_SLEEP: Sleep transition cannot be initiated. Wakeup transition may however occur. 0x1 = SW_SLEEP : SW_SLEEP: Start a software forced sleep transition on the domain. 0x2 = SW_WKUP : SW_WKUP: Start a software forced wake-up transition on the domain. 0x3 = Reserved : Reserved. |

R/W-2h

<!-- image -->

## 8.1.12.8.2 CM\_CEFUSE\_CEFUSE\_CLKCTRL Register (offset = 20h) [reset = 30000h]

CM\_CEFUSE\_CEFUSE\_CLKCTRL is shown in Figure 8-165 and described in Table 8-175. This register manages the CEFUSE clocks.

| Figure 8-165. CM_CEFUSE_CEFUSE_CLKCTRL Register   | Figure 8-165. CM_CEFUSE_CEFUSE_CLKCTRL Register   | Figure 8-165. CM_CEFUSE_CEFUSE_CLKCTRL Register   | Figure 8-165. CM_CEFUSE_CEFUSE_CLKCTRL Register   | Figure 8-165. CM_CEFUSE_CEFUSE_CLKCTRL Register   | Figure 8-165. CM_CEFUSE_CEFUSE_CLKCTRL Register   | Figure 8-165. CM_CEFUSE_CEFUSE_CLKCTRL Register   | Figure 8-165. CM_CEFUSE_CEFUSE_CLKCTRL Register   |
|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|
| 31                                                | 30                                                | 29                                                | 28                                                | 27                                                | 26                                                | 25                                                | 24                                                |
| Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          |
| R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              |
| 23                                                | 22                                                | 21                                                | 20                                                | 19                                                | 18                                                | 17                                                | 16                                                |
| Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | IDLEST                                            | IDLEST                                            |
|                                                   |                                                   |                                                   |                                                   |                                                   |                                                   | R-3h                                              | R-3h                                              |
| 15                                                | 14                                                | 13                                                | 12                                                | 11                                                | 10                                                | 9                                                 | 8                                                 |
| Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          |
| R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              | R-0h                                              |
| 7                                                 | 6                                                 | 5                                                 | 4                                                 | 3                                                 | 2                                                 | 1                                                 | 0                                                 |
| Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | Reserved                                          | MODULEMODE                                        | MODULEMODE                                        |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-175. CM\_CEFUSE\_CEFUSE\_CLKCTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | IDLEST     | R      | 3h      | Module idle status. [warm reset insensitive] 0x0 = Func : Module is fully functional, including OCP 0x1 = Trans : Module is performing transition: wakeup, or sleep, or sleep abortion 0x2 = Idle : Module is in Idle mode (only OCP part). It is functional if using separate functional clock 0x3 = Disable : Module is disabled and cannot be accessed                                                                                                                                                                               |
| 15-2  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | MODULEMODE | R/W    | 0h      | Control the way mandatory clocks are managed. 0x0 = DISABLED : Module is disable by SW. Any OCP access to module results in an error, except if resulting from a module wakeup (asynchronous wakeup). 0x1 = RESERVED_1 : Reserved 0x2 = ENABLE : Module is explicitly enabled. Interface clock (if not used for functions) may be gated according to the clock domain state. Functional clocks are guarantied to stay present. As long as in this configuration, power domain sleep transition cannot happen. 0x3 = RESERVED : Reserved |

R/W-0h