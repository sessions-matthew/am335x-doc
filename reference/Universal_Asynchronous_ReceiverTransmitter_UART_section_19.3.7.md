<!-- image -->

www.ti.com

## 19.3.6.4.3 DMA Reception

Figure 19-13 shows DMA reception.

Figure 19-13. DMA Reception

<!-- image -->

1. Enable the reception.
2. Received data are put in the RX FIFO.
3. Data are transferred from the RX FIFO to the device memory by the DMA:
- a. At each received byte, the RX FIFO trigger level (one character) is reached and a DMA request is generated.
- b. An element (1 byte) is transferred from the RX FIFO to the SDRAM at each DMA request (DMA element synchronization).
4. The end of the reception is signaled by the EOF interrupt.

## 19.3.7 Mode Selection

## 19.3.7.1 Register Access Modes

## 19.3.7.1.1 Operational Mode and Configuration Modes

Register access depends on the register access mode, although register access modes are not correlated to functional mode selection. Three different modes are available:

- Operational mode
- Configuration mode A
- Configuration mode B

Operational mode is the selected mode when the function is active; serial data transfer can be performed in this mode.

Configuration mode A and configuration mode B are used during module initialization steps. These modes enable access to configuration registers, which are hidden in the operational mode. The modes are used when the module is inactive (no serial data transfer processed) and only for initialization or reconfiguration of the module.

The value of the UARTi.UART\_LCR register determines the register access mode (see Table 19-16).

Table 19-16. UART/IrDA/CIR Register Access Mode Programming (Using UART\_LCR)

| Mode                 | Condition                                   |
|----------------------|---------------------------------------------|
| Configuration mode A | UART_LCR[7] = 0x1 and UART_LCR[7:0] != 0xBF |
| Configuration mode B | UART_LCR[7] = 0x1 and UART_LCR[7:0] = 0xBF  |
| Operational mode     | UART_LCR[7] = 0x0                           |

## 19.3.7.1.2 Register Access Submode

In each access register mode (operational mode or configuration mode A/B), some register accesses are conditional on the programming of a submode (MSR\_SPR, TCR\_TLR, and XOFF).

Table 19-17 through Table 19-19 summarize the register access submodes.

Table 19-17. Subconfiguration Mode A Summary

| Mode    | Condition                                |
|---------|------------------------------------------|
| MSR_SPR | (UART_EFR[4] = 0x0 or UART_MCR[6] = 0x0) |
| TCR_TLR | UART_EFR[4] = 0x1 and UART_MCR[6] = 0x1  |

Table 19-18. Subconfiguration Mode B Summary

| Mode    | Condition                                |
|---------|------------------------------------------|
| TCR_TLR | UART_EFR[4] = 0x1 and UART_MCR[6] = 0x1  |
| XOFF    | (UART_EFR[4] = 0x0 or UART_MCR[6] = 0x0) |

Table 19-19. Suboperational Mode Summary

| Mode    | Condition                               |
|---------|-----------------------------------------|
| MSR_SPR | UART_EFR[4] = 0x0 or UART_MCR[6] = 0x0  |
| TCR_TLR | UART_EFR[4] = 0x1 and UART_MCR[6] = 0x1 |

## 19.3.7.1.3 Registers Available for the Register Access Modes

Table 19-20 lists the names of the register bits in each access register mode. Gray shading indicates that the register does not depend on the register access mode (available in all modes).

Table 19-20. UART/IrDA/CIR Register Access Mode Overview

| Address Offset   | Registers                  | Registers                  | Registers                    | Registers                    | Registers                  | Registers                  |
|------------------|----------------------------|----------------------------|------------------------------|------------------------------|----------------------------|----------------------------|
|                  | Configuration Mode A       | Configuration Mode A       | Configuration Mode B         | Configuration Mode B         | Operational Mode           | Operational Mode           |
|                  | Read                       | Write                      | Read                         | Write                        | Read                       | Write                      |
| 0x000            | UART_DLL                   | UART_DLL                   | UART_DLL                     | UART_DLL                     | UART_RHR                   | UART_THR                   |
| 0x004            | UART_DLH                   | UART_DLH                   | UART_DLH                     | UART_DLH                     | UART_IER                   | UART_IER                   |
| 0x008            | UART_IIR                   | UART_FCR                   | UART_EFR                     | UART_EFR                     | UART_IIR                   | UART_FCR                   |
| 0x00C            | UART_LCR                   | UART_LCR                   | UART_LCR                     | UART_LCR                     | UART_LCR                   | UART_LCR                   |
| 0x010            | UART_MCR                   | UART_MCR                   | UART_XON1_ADD R1             | UART_XON1_AD DR1             | UART_MCR                   | UART_MCR                   |
| 0x014            | UART_LSR                   | -                          | UART_XON2_ADD R2             | UART_XON2_AD DR2             | UART_LSR                   | -                          |
| 0x018            | UART_MSR (1) /UART_TCR (2) | UART_TCR (2)               | UART_TCR (2) /UART_XOFF1 (3) | UART_TCR (2) /UART_XOFF1 (3) | UART_MSR (1) /UART_TCR (2) | UART_TCR (2)               |
| 0x01C            | UART_SPR (1) /UART_TLR (2) | UART_SPR (1) /UART_TLR (2) | UART_TLR (2) /UART_XOFF2 (3) | UART_TLR (2) /UART_XOFF2 (3) | UART_SPR (1) /UART_TLR (2) | UART_SPR (1) /UART_TLR (2) |
| 0x020            | UART_MDR1                  | UART_MDR1                  | UART_MDR1                    | UART_MDR1                    | UART_MDR1                  | UART_MDR1                  |
| 0x024            | UART_MDR2                  | UART_MDR2                  | UART_MDR2                    | UART_MDR2                    | UART_MDR2                  | UART_MDR2                  |
| 0x028            | UART_SFLSR                 | UART_TXFLL                 | UART_SFLSR                   | UART_TXFLL                   | UART_SFLSR                 | UART_TXFLL                 |

(1) MSR\_SPR mode is active (see Section 19.3.7.1.2, Register Access Submode )

(2) TCR\_TLR mode is active (see Section 19.3.7.1.2, Register Access Submode )

(3) XOFF mode is active (see Section 19.3.7.1.2, Register Access Submode )

<!-- image -->

<!-- image -->

Table 19-20. UART/IrDA/CIR Register Access Mode Overview (continued)

| Address Offset   | Registers               | Registers              | Registers              | Registers              | Registers              | Registers               |
|------------------|-------------------------|------------------------|------------------------|------------------------|------------------------|-------------------------|
|                  | Configuration Mode A    | Configuration Mode A   | Configuration Mode B   | Configuration Mode B   | Operational Mode       | Operational Mode        |
|                  | Read                    | Write                  | Read                   | Write                  | Read                   | Write                   |
| 0x02C            | UART_RESUM E            | UART_TXFLH             | UART_RESUME            | UART_TXFLH             | UART_RESUME            | UART_TXFLH              |
| 0x030            | UART_SFREG L            | UART_RXFLL             | UART_SFREGL            | UART_RXFLL             | UART_SFREGL            | UART_RXFLL              |
| 0x034            | UART_SFREG H            | UART_RXFLH             | UART_SFREGH            | UART_RXFLH             | UART_SFREGH            | UART_RXFLH              |
| 0x038            | UART_UASR               | -                      | UART_UASR              | -                      | UART_BLR               | UART_BLR                |
| 0x03C            | -                       | -                      | -                      | -                      | UART_ACREG             | UART_ACREG              |
| 0x040            | UART_SCR                | UART_SCR               | UART_SCR               | UART_SCR               | UART_SCR               | UART_SCR                |
| 0x044            | UART_SSR                | -                      | UART_SSR               | -                      | UART_SSR               | -                       |
| 0x048            | -                       | -                      | -                      | -                      | UART_EBLR              | UART_EBLR               |
| 0x050            | UART_MVR                | -                      | UART_MVR               | -                      | UART_MVR               | -                       |
| 0x054            | UART_SYSC               | UART_SYSC              | UART_SYSC              | UART_SYSC              | UART_SYSC              | UART_SYSC               |
| 0x058            | UART_SYSS               | -                      | UART_SYSS              | -                      | UART_SYSS              | -                       |
| 0x05C            | UART_WER                | UART_WER               | UART_WER               | UART_WER               | UART_WER               | UART_WER                |
| 0x060            | UART_CFPS               | UART_CFPS              | UART_CFPS              | UART_CFPS              | UART_CFPS              | UART_CFPS               |
| 0x064            | UART_RXFIFO _LVL        | UART_RXFIFO_ LVL       | UART_RXFIFO_LVL        | UART_RXFIFO_L VL       | UART_RXFIFO_LV L       | UART_RXFIFO _LVL        |
| 0x068            | UART_TXFIFO _LVL        | UART_TXFIFO_ LVL       | UART_TXFIFO_LVL        | UART_TXFIFO_L VL       | UART_TXFIFO_LV L       | UART_TXFIFO _LVL        |
| 0x06C            | UART_IER2               | UART_IER2              | UART_IER2              | UART_IER2              | UART_IER2              | UART_IER2               |
| 0x070            | UART_ISR2               | UART_ISR2              | UART_ISR2              | UART_ISR2              | UART_ISR2              | UART_ISR2               |
| 0x074            | UART_FREQ_ SEL          | UART_FREQ_S EL         | UART_FREQ_SEL          | UART_FREQ_SE L         | UART_FREQ_SEL          | UART_FREQ_ SEL          |
| 0x080            | UART_MDR3               | UART_MDR3              | UART_MDR3              | UART_MDR3              | UART_MDR3              | UART_MDR3               |
| 0x084            | UART_TX_DM A_THRESHOL D | UART_TX_DMA _THRESHOLD | UART_TX_DMA_TH RESHOLD | UART_TX_DMA_ THRESHOLD | UART_TX_DMA_T HRESHOLD | UART_TX_DM A_THRESHOL D |

## 19.3.7.2 UART/IrDA (SIR, MIR, FIR)/CIR Mode Selection

To select a mode, set the UARTi.UART\_MDR1[2:0] MODESELECT bit field (see Table 19-21).

## Table 19-21. UART Mode Selection

| Value   | Mode               |
|---------|--------------------|
| 0x0:    | UART 16x mode      |
| 0x1:    | SIR mode           |
| 0x2:    | UART 16x auto-baud |
| 0x3:    | UART 13x mode      |
| 0x4:    | MIR mode           |
| 0x5:    | FIR mode           |
| 0x6:    | CIR mode           |

<!-- image -->

MODESELECT is effective when the module is in operational mode (see Section 19.3.7.1, Register Access Modes ).

## 19.3.7.2.1 Registers Available for the UART Function

Only the registers listed in Table 19-22 are used for the UART function.

Table 19-22. UART Mode Register Overview (1) (2)

| Address Offset   | Registers            | Registers            | Registers            | Registers            | Registers          | Registers          |
|------------------|----------------------|----------------------|----------------------|----------------------|--------------------|--------------------|
|                  | Configuration Mode A | Configuration Mode A | Configuration Mode B | Configuration Mode B | Operational Mode   | Operational Mode   |
|                  | Read                 | Write                | Read                 | Write                | Read               | Write              |
| 0x000            | UART_DLL             | UART_DLL             | UART_DLL             | UART_DLL             | UART_RHR           | UART_THR           |
| 0x004            | UART_DLH             | UART_DLH             | UART_DLH             | UART_DLH             | UART_IER(UART)     | UART_IER(UA RT)    |
| 0x008            | UART_IIR             | UART_FCR             | UART_EFR[4]          | UART_EFR[4]          | UART_IIR(UART)     | UART_FCR(U ART)    |
| 0x00C            | UART_LCR             | UART_LCR             | UART_LCR             | UART_LCR             | UART_LCR           | UART_LCR           |
| 0x010            | UART_MCR             | UART_MCR             | UART_XON1_ADD R1     | UART_XON1_AD DR1     | UART_MCR           | UART_MCR           |
| 0x014            | UART_LSR(UA RT)      | -                    | UART_XON2_ADD R2     | UART_XON2_AD DR2     | UART_LSR(UART)     | -                  |
| 0x018            | UART_MSR/U ART_TCR   | UART_TCR             | UART_XOFF1/UAR T_TCR | UART_XOFF1/U ART_TCR | UART_MSR/UART _TCR | UART_TCR           |
| 0x01C            | UART_TLR/UA RT_SPR   | UART_TLR/UA RT_SPR   | UART_TLR/UART_ XOFF2 | UART_TLR/UAR T_XOFF2 | UART_TLR/UART_ SPR | UART_TLR/UA RT_SPR |
| 0x020            | UART_MDR1            | UART_MDR1[2: 0]      | UART_MDR1[2:0]       | UART_MDR1[2:0]       | UART_MDR1[2:0]     | UART_MDR1[2 :0]    |
| 0x024            | UART_MDR2            | UART_MDR2            | UART_MDR2            | UART_MDR2            | UART_MDR2          | UART_MDR2          |
| 0x028            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x02C            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x030            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x034            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x038            | UART_UASR            | -                    | UART_UASR            | -                    | -                  | -                  |
| 0x03C            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x040            | UART_SCR             | UART_SCR             | UART_SCR             | UART_SCR             | UART_SCR           | UART_SCR           |
| 0x044            | UART_SSR             | -                    | UART_SSR             | -                    | UART_SSR           | -                  |
| 0x048            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x050            | UART_MVR             | -                    | UART_MVR             | -                    | UART_MVR           | -                  |
| 0x054            | UART_SYSC            | UART_SYSC            | UART_SYSC            | UART_SYSC            | UART_SYSC          | UART_SYSC          |
| 0x058            | UART_SYSS            | -                    | UART_SYSS            | -                    | UART_SYSS          | -                  |
| 0x05C            | UART_WER             | UART_WER             | UART_WER             | UART_WER             | UART_WER           | UART_WER           |
| 0x060            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x064            | UART_RXFIFO _LVL     | UART_RXFIFO_ LVL     | UART_RXFIFO_LVL      | UART_RXFIFO_L VL     | UART_RXFIFO_LV L   | UART_RXFIFO _LVL   |
| 0x068            | UART_TXFIFO _LVL     | UART_TXFIFO_ LVL     | UART_TXFIFO_LVL      | UART_TXFIFO_L VL     | UART_TXFIFO_LV L   | UART_TXFIFO _LVL   |
| 0x06C            | UART_IER2            | UART_IER2            | UART_IER2            | UART_IER2            | UART_IER2          | UART_IER2          |
| 0x070            | UART_ISR2            | UART_ISR2            | UART_ISR2            | UART_ISR2            | UART_ISR2          | UART_ISR2          |
| 0x074            | UART_FREQ_ SEL       | UART_FREQ_S EL       | UART_FREQ_SEL        | UART_FREQ_SE L       | UART_FREQ_SEL      | UART_FREQ_ SEL     |
| 0x080            | UART_MDR3            | UART_MDR3            | UART_MDR3            | UART_MDR3            | UART_MDR3          | UART_MDR3          |

(1) REGISTER\_NAME(UART) notation indicates that the register exists for other functions (IrDA or CIR), but fields have different meanings for other functions.

(2) REGISTER\_NAME[m:n] notation indicates that only register bits numbered m to n apply to the UART function.

<!-- image -->

www.ti.com

Table 19-22. UART Mode Register Overview (1) (2) (continued)

| Address Offset   | Registers               | Registers              | Registers              | Registers              | Registers              | Registers               |
|------------------|-------------------------|------------------------|------------------------|------------------------|------------------------|-------------------------|
|                  | Configuration Mode A    | Configuration Mode A   | Configuration Mode B   | Configuration Mode B   | Operational Mode       | Operational Mode        |
|                  | Read                    | Write                  | Read                   | Write                  | Read                   | Write                   |
| 0x084            | UART_TX_DM A_THRESHOL D | UART_TX_DMA _THRESHOLD | UART_TX_DMA_TH RESHOLD | UART_TX_DMA_ THRESHOLD | UART_TX_DMA_T HRESHOLD | UART_TX_DM A_THRESHOL D |

## 19.3.7.2.2 Registers Available for the IrDA Function

Only the registers listed in Table 19-23 are used for the IrDA function.

Table 19-23. IrDA Mode Register Overview (1) (2)

| Address Offset   | Registers            | Registers            | Registers            | Registers            | Registers          | Registers          |
|------------------|----------------------|----------------------|----------------------|----------------------|--------------------|--------------------|
|                  | Configuration Mode A | Configuration Mode A | Configuration Mode B | Configuration Mode B | Operational Mode   | Operational Mode   |
|                  | Read                 | Write                | Read                 | Write                | Read               | Write              |
| 0x000            | UART_DLL             | UART_DLL             | UART_DLL             | UART_DLL             | UART_RHR           | UART_THR           |
| 0x004            | UART_DLH             | UART_DLH             | UART_DLH             | UART_DLH             | UART_IER(IrDA)     | UART_IER(IrD A)    |
| 0x008            | UART_IIR             | UART_FCR             | UART_EFR[4]          | UART_EFR[4]          | UART_IIR(IrDA)     | UART_FCR(Ir DA)    |
| 0x00C            | UART_LCR[7]          | UART_LCR[7]          | UART_LCR[7]          | UART_LCR[7]          | UART_LCR[7]        | UART_LCR[7]        |
| 0x010            | -                    | -                    | UART_XON1_ADD R1     | UART_XON1_AD DR1     | -                  | -                  |
| 0x014            | UART_LSR(IrD A )     | -                    | UART_XON2_ADD R2     | UART_XON2_AD DR2     | UART_LSR(IrDA)     | -                  |
| 0x018            | UART_MSR/U ART_TCR   | UART_TCR             | UART_TCR             | UART_TCR             | UART_MSR/UART _TCR | UART_TCR           |
| 0x01C            | UART_TLR/UA RT_SPR   | UART_TLR/UA RT_SPR   | UART_TLR             | UART_TLR             | UART_TLR/UART_ SPR | UART_TLR/UA RT_SPR |
| 0x020            | UART_MDR1            | UART_MDR1            | UART_MDR1            | UART_MDR1            | UART_MDR1          | UART_MDR1          |
| 0x024            | UART_MDR2            | UART_MDR2            | UART_MDR2            | UART_MDR2            | UART_MDR2          | UART_MDR2          |
| 0x028            | UART_SFLSR           | UART_TXFLL           | UART_SFLSR           | UART_TXFLL           | UART_SFLSR         | UART_TXFLL         |
| 0x02C            | UART_RESUM E         | UART_TXFLH           | UART_RESUME          | UART_TXFLH           | UART_RESUME        | UART_TXFLH         |
| 0x030            | UART_SFREG L         | UART_RXFLL           | UART_SFREGL          | UART_RXFLL           | UART_SFREGL        | UART_RXFLL         |
| 0x034            | UART_SFREG H         | UART_RXFLH           | UART_SFREGH          | UART_RXFLH           | UART_SFREGH        | UART_RXFLH         |
| 0x038            | -                    | -                    | -                    | -                    | UART_BLR           | UART_BLR           |
| 0x03C            | -                    | -                    | -                    | -                    | UART_ACREG         | UART_ACREG         |
| 0x040            | UART_SCR             | UART_SCR             | UART_SCR             | UART_SCR             | UART_SCR           | UART_SCR           |
| 0x044            | UART_SSR             | -                    | UART_SSR             | -                    | UART_SSR           | -                  |
| 0x048            | -                    | -                    | -                    | -                    | UART_EBLR          | UART_EBLR          |
| 0x050            | UART_MVR             | -                    | UART_MVR             | -                    | UART_MVR           | -                  |
| 0x054            | UART_SYSC            | UART_SYSC            | UART_SYSC            | UART_SYSC            | UART_SYSC          | UART_SYSC          |
| 0x058            | UART_SYSS            | -                    | UART_SYSS            | -                    | UART_SYSS          | -                  |
| 0x05C            | UART_WER[6: 4]       | UART_WER[6:4 ]       | UART_WER[6:4]        | UART_WER[6:4]        | UART_WER[6:4]      | UART_WER[6: 4]     |

(1) REGISTER\_NAME(UART) notation indicates that the register exists for other functions (IrDA or CIR), but fields have different meanings for other functions.

(2) REGISTER\_NAME[m:n] notation indicates that only register bits numbered m to n apply to the UART function.

Table 19-23. IrDA Mode Register Overview (1) (2) (continued)

| Address Offset   | Registers               | Registers              | Registers              | Registers              | Registers              | Registers               |
|------------------|-------------------------|------------------------|------------------------|------------------------|------------------------|-------------------------|
|                  | Configuration Mode A    | Configuration Mode A   | Configuration Mode B   | Configuration Mode B   | Operational Mode       | Operational Mode        |
|                  | Read                    | Write                  | Read                   | Write                  | Read                   | Write                   |
| 0x060            | -                       | -                      | -                      | -                      | -                      | -                       |
| 0x064            | UART_RXFIFO _LVL        | UART_RXFIFO_ LVL       | UART_RXFIFO_LVL        | UART_RXFIFO_L VL       | UART_RXFIFO_LV L       | UART_RXFIFO _LVL        |
| 0x068            | UART_TXFIFO _LVL        | UART_TXFIFO_ LVL       | UART_TXFIFO_LVL        | UART_TXFIFO_L VL       | UART_TXFIFO_LV L       | UART_TXFIFO _LVL        |
| 0x06C            | UART_IER2               | UART_IER2              | UART_IER2              | UART_IER2              | UART_IER2              | UART_IER2               |
| 0x070            | UART_ISR2               | UART_ISR2              | UART_ISR2              | UART_ISR2              | UART_ISR2              | UART_ISR2               |
| 0x074            | UART_FREQ_ SEL          | UART_FREQ_S EL         | UART_FREQ_SEL          | UART_FREQ_SE L         | UART_FREQ_SEL          | UART_FREQ_ SEL          |
| 0x080            | UART_MDR3               | UART_MDR3              | UART_MDR3              | UART_MDR3              | UART_MDR3              | UART_MDR3               |
| 0x084            | UART_TX_DM A_THRESHOL D | UART_TX_DMA _THRESHOLD | UART_TX_DMA_TH RESHOLD | UART_TX_DMA_ THRESHOLD | UART_TX_DMA_T HRESHOLD | UART_TX_DM A_THRESHOL D |

## 19.3.7.2.3 Registers Available for the CIR Function

Only the registers listed in Table 19-24 are used for the CIR function.

Table 19-24. CIR Mode Register Overview (1) (2)

| Address Offset   | Registers            | Registers            | Registers            | Registers            | Registers          | Registers          |
|------------------|----------------------|----------------------|----------------------|----------------------|--------------------|--------------------|
|                  | Configuration Mode A | Configuration Mode A | Configuration Mode B | Configuration Mode B | Operational Mode   | Operational Mode   |
|                  | Read                 | Write                | Read                 | Write                | Read               | Write              |
| 0x000            | UART_DLL             | UART_DLL             | UART_DLL             | UART_DLL             | -                  | UART_THR           |
| 0x004            | UART_DLH             | UART_DLH             | UART_DLH             | UART_DLH             | UART_IER(CIR)      | UART_IER(CI R)     |
| 0x008            | UART_IIR             | UART_FCR             | UART_EFR             | UART_EFR             | UART_IIR(CIR)      | UART_FCR(CI R)     |
| 0x00C            | UART_LCR             | UART_LCR[7]          | UART_LCR[7]          | UART_LCR[7]          | UART_LCR[7]        | UART_LCR[7]        |
| 0x010            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x014            | UART_LSR(IrD A)      | -                    | -                    | -                    | UART_LSR(IrDA)     | -                  |
| 0x018            | UART_MSR/U ART_TCR   | UART_TCR             | UART_TCR             | UART_TCR             | UART_MSR/UART _TCR | UART_TCR           |
| 0x01C            | UART_TLR/UA RT_SPR   | UART_TLR/UA RT_SPR   | UART_TLR             | UART_TLR             | UART_TLR/UART_ SPR | UART_TLR/UA RT_SPR |
| 0x020            | UART_MDR1[3 :0]      | UART_MDR1[3: 0]      | UART_MDR1[3:0]       | UART_MDR1[3:0]       | UART_MDR1[3:0]     | UART_MDR1[3 :0]    |
| 0x024            | UART_MDR2            | UART_MDR2            | UART_MDR2            | UART_MDR2            | UART_MDR2          | UART_MDR2          |
| 0x028            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x02C            | UART_RESUM E         | -                    | UART_RESUME          | -                    | UART_RESUME        | -                  |
| 0x030            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x034            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x038            | -                    | -                    | -                    | -                    | -                  | -                  |
| 0x03C            | -                    | -                    | -                    | -                    | UART_ACREG         | UART_ACREG         |

(1) REGISTER\_NAME(UART) notation indicates that the register exists for other functions (IrDA or CIR), but fields have different meanings for other functions.

(2) REGISTER\_NAME[m:n] notation indicates that only register bits numbered m to n apply to the UART function.

<!-- image -->