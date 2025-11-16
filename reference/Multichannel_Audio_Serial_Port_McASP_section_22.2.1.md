<!-- image -->

www.ti.com

## 22.2 Integration

The device contains two instantiations of the McASP subsystem: McASP0 and McASP1. The McASP subsystem includes a McASP peripheral, and transmit/receive buffers.

Each McASP is configured with four serializers.

Figure 22-1. McASP0-1 Integration

<!-- image -->

## 22.2.1 McASP Connectivity Attributes

The general connectivity attributes for the McASP modules are summarized in Table 22-2

Table 22-2. McASP Connectivity Attributes

| Attributes          | Type                                                                                                                                                                                                            |
|---------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Power Domain        | Peripheral Domain                                                                                                                                                                                               |
| Clock Domain        | PD_PER_L3S_GCLK (OCP Clock) PD_PER_MCASP_FCLK (Aux Clock)                                                                                                                                                       |
| Reset Signals       | PER_DOM_RST_N                                                                                                                                                                                                   |
| Idle/Wakeup Signals | Smart Idle                                                                                                                                                                                                      |
| Interrupt Requests  | 1 Transmit Interrupt per instance x_intr_pend - to MPU Subsystem (MCATXINTx) and PRU- ICSS (mcasp_x_intr_pend) 1 Receive Interrupt r_intr_pend - to MPU Subsystem (MCARXINTx) and PRU- ICSS (mcasp_r_intr_pend) |
| DMA Requests        | 2 DMA requests per instance to EDMA (Transmit: AXEVTx, Receive: AREVTx)                                                                                                                                         |
| Physical Address    | L3 Slow slave port (data) L4 Peripheral slave port (CFG)                                                                                                                                                        |