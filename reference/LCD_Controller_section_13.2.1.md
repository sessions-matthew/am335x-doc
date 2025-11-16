<!-- image -->

www.ti.com

## 13.2 Integration

The device includes an LCD Controller that reads display data from external memory and drives several different types of LCD displays. The LCD Controller integration is shown in Figure 13-2.

Figure 13-2. LCD Controller Integration

<!-- image -->

## 13.2.1 LCD Controller Connectivity Attributes

The general connectivity attributes for the LCDC subsystems are shown in Table 13-1.

Table 13-1. LCD Controller Connectivity Attributes

| Attributes          | Type                                                                                                          |
|---------------------|---------------------------------------------------------------------------------------------------------------|
| Power Domain        | Peripheral Domain                                                                                             |
| Clock Domain        | PD_PER_LCD_L3_GCLK (OCP Master Clock) PD_PER_LCD_L3_GCLK (OCP Slave Clock) PD_PER_LCD_GCLK (Functional Clock) |
| Reset Signals       | PER_DOM_RST_N                                                                                                 |
| Idle/Wakeup Signals | Standby Smart Idle                                                                                            |
| Interrupt Requests  | 1 Interrupt to MPU Subsystem (LCDCINT)                                                                        |
| DMA Requests        | None                                                                                                          |
| Physical Address    | L4 Peripheral Slave Port                                                                                      |