<!-- image -->

Figure 18-3. MMCHS Module MMC Application

<!-- image -->

## 18.2.1 MMCHS Connectivity Attributes

The general connectivity attributes for the three MMCHS modules are shown in Table 18-2.

Table 18-2. MMCHS Connectivity Attributes

| Attributes          | Type                                                                                                     |
|---------------------|----------------------------------------------------------------------------------------------------------|
| Power Domain        | Peripheral Domain                                                                                        |
| Clock Domain        | PD_PER_L4LS_GCLK (OCP) PD_PER_MMC_FCLK (Func) CLK_32KHZ (Debounce)                                       |
| Reset Signals       | PER_DOM_RST_N                                                                                            |
| Idle/Wakeup Signals | Smart Idle                                                                                               |
| Interrupt Requests  | 1 interrupt per instance to MPU Subsystem (MMCSDxINT)                                                    |
| DMA Requests        | 2 DMA requests per instance to EDMA (SDTXEVTx, SDRXEVTx) (Active low, need to be inverted in glue logic) |
| Physical Address    | L4 Peripheral slave port                                                                                 |