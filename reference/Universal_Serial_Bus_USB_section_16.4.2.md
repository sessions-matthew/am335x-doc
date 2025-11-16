<!-- image -->

## 16.4.1.42 IRQFRAMEENABLE1 Register (offset = 244h) [reset = 0h]

IRQFRAMEENABLE1 is shown in Figure 16-63 and described in Table 16-71.

## Figure 16-63. IRQFRAMEENABLE1 Register

| 31               | 30       | 29       | 28       | 27       | 26       | 25              | 24       |
|------------------|----------|----------|----------|----------|----------|-----------------|----------|
| FRAME_EN_R X1_15 | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED        | RESERVED |
| R/W-0h           | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h          | R/W-0h   |
| 23               | 22       | 21       | 20       | 19       | 18       | 17              | 16       |
| RESERVED         | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | FRAME_EN_R X1_1 | RESERVED |
| R/W-0h           | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h          | R/W-0h   |
| 15               | 14       | 13       | 12       | 11       | 10       | 9               | 8        |
| FRAME_EN_T X1_15 | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED        | RESERVED |
| R/W-0h           | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h          | R/W-0h   |
| 7                | 6        | 5        | 4        | 3        | 2        | 1               | 0        |
| RESERVED         | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | FRAME_EN_T X1_1 | RESERVED |
| R/W-0h           | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h          | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-71. IRQFRAMEENABLE1 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                             |
|-------|-----------------|--------|---------|-----------------------------------------------------------------------------------------|
| 31    | FRAME_EN_RX1_15 | R/W    | 0h      | FRAME threshold enable value for rx_pkt_cmp_1 for USB1 Endpoint 15. ... ... ... ... ... |
| 30-18 | RESERVED        | R/W    | 0h      |                                                                                         |
| 17    | FRAME_EN_RX1_1  | R/W    | 0h      | FRAME threshold enable value for rx_pkt_cmp_1 for USB1 Endpoint 1.                      |
| 16    | RESERVED        | R/W    | 0h      |                                                                                         |
| 15    | FRAME_EN_TX1_15 | R/W    | 0h      | FRAME threshold enable value for tx_pkt_cmp_1 for USB1 Endpoint 15. ... ... ... ... ... |
| 14-2  | RESERVED        | R/W    | 0h      |                                                                                         |
| 1     | FRAME_EN_TX1_1  | R/W    | 0h      | FRAME threshold enable value for tx_pkt_cmp_1 for USB1 Endpoint 1.                      |
| 0     | RESERVED        | R/W    | 0h      |                                                                                         |

## 16.4.2 USB0\_CTRL Registers

Table 16-72 lists the memory-mapped registers for the USB0\_CTRL. All register offset addresses not listed in Table 16-72 should be considered as reserved locations and the register contents should not be modified.

Universal Serial Bus (USB)

## Table 16-72. USB0\_CTRL Registers

| Offset   | Acronym           | Register Name   | Section           |
|----------|-------------------|-----------------|-------------------|
| 1000h    | USB0REV           |                 | Section 16.4.2.1  |
| 1014h    | USB0CTRL          |                 | Section 16.4.2.2  |
| 1018h    | USB0STAT          |                 | Section 16.4.2.3  |
| 1020h    | USB0IRQMSTAT      |                 | Section 16.4.2.4  |
| 1028h    | USB0IRQSTATRAW0   |                 | Section 16.4.2.5  |
| 102Ch    | USB0IRQSTATRAW1   |                 | Section 16.4.2.6  |
| 1030h    | USB0IRQSTAT0      |                 | Section 16.4.2.7  |
| 1034h    | USB0IRQSTAT1      |                 | Section 16.4.2.8  |
| 1038h    | USB0IRQENABLESET0 |                 | Section 16.4.2.9  |
| 103Ch    | USB0IRQENABLESET1 |                 | Section 16.4.2.10 |
| 1040h    | USB0IRQENABLECLR0 |                 | Section 16.4.2.11 |
| 1044h    | USB0IRQENABLECLR1 |                 | Section 16.4.2.12 |
| 1070h    | USB0TXMODE        |                 | Section 16.4.2.13 |
| 1074h    | USB0RXMODE        |                 | Section 16.4.2.14 |
| 1080h    | USB0GENRNDISEP1   |                 | Section 16.4.2.15 |
| 1084h    | USB0GENRNDISEP2   |                 | Section 16.4.2.16 |
| 1088h    | USB0GENRNDISEP3   |                 | Section 16.4.2.17 |
| 108Ch    | USB0GENRNDISEP4   |                 | Section 16.4.2.18 |
| 1090h    | USB0GENRNDISEP5   |                 | Section 16.4.2.19 |
| 1094h    | USB0GENRNDISEP6   |                 | Section 16.4.2.20 |
| 1098h    | USB0GENRNDISEP7   |                 | Section 16.4.2.21 |
| 109Ch    | USB0GENRNDISEP8   |                 | Section 16.4.2.22 |
| 10A0h    | USB0GENRNDISEP9   |                 | Section 16.4.2.23 |
| 10A4h    | USB0GENRNDISEP10  |                 | Section 16.4.2.24 |
| 10A8h    | USB0GENRNDISEP11  |                 | Section 16.4.2.25 |
| 10ACh    | USB0GENRNDISEP12  |                 | Section 16.4.2.26 |
| 10B0h    | USB0GENRNDISEP13  |                 | Section 16.4.2.27 |
| 10B4h    | USB0GENRNDISEP14  |                 | Section 16.4.2.28 |
| 10B8h    | USB0GENRNDISEP15  |                 | Section 16.4.2.29 |
| 10D0h    | USB0AUTOREQ       |                 | Section 16.4.2.30 |
| 10D4h    | USB0SRPFIXTIME    |                 | Section 16.4.2.31 |
| 10D8h    | USB0_TDOWN        |                 | Section 16.4.2.32 |
| 10E0h    | USB0UTMI          |                 | Section 16.4.2.33 |
| 10E4h    | USB0MGCUTMILB     |                 | Section 16.4.2.34 |
| 10E8h    | USB0MODE          |                 | Section 16.4.2.35 |

<!-- image -->

<!-- image -->

## 16.4.2.1 USB0REV Register (offset = 1000h) [reset = 4EA20800h]

USB0REV is shown in Figure 16-64 and described in Table 16-73.

## Figure 16-64. USB0REV Register

| 31     | 30     | 29       | 28       | 27     | 26      | 25      | 24      | 23     | 22     | 21     | 20     | 19     | 18     | 17     | 16     |        |
|--------|--------|----------|----------|--------|---------|---------|---------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
| SCHEME | SCHEME | RESERVED | RESERVED | FUNC   | FUNC    | FUNC    | FUNC    | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   |
| R-1h   | R-1h   | R-0h     | R-0h     | R-EA2h | R-EA2h  | R-EA2h  | R-EA2h  | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h |
| 15     | 14     | 13       | 12       | 11     | 10      | 9       | 8       | 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |        |
|        |        | R_RTL    | R_RTL    |        | X_MAJOR | X_MAJOR | X_MAJOR | CUSTOM | CUSTOM |        |        |        |        |        |        |        |
|        |        | R-1h     | R-1h     |        | R-0h    | R-0h    | R-0h    | R-0h   | R-0h   |        |        |        |        |        |        |        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-73. USB0REV Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                             |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------|
| 31-30 | SCHEME   | R      | 1h      | Used to distinguish between legacy interface scheme and current. 0 = Legacy 1 = Current |
| 29-28 | RESERVED | R      | 0h      |                                                                                         |
| 27-16 | FUNC     | R      | EA2h    | Function indicates a software compatible module family.                                 |
| 15-11 | R_RTL    | R      | 1h      | RTL revision. Will vary depending on release.                                           |
| 10-8  | X_MAJOR  | R      | 0h      | Major revision.                                                                         |
| 7-6   | CUSTOM   | R      | 0h      | Custom revision                                                                         |
| 5-0   | Y_MINOR  | R      | 0h      | Minor revision. USB0 Revision Register                                                  |

## 16.4.2.2 USB0CTRL Register (offset = 1014h) [reset = 0h]

USB0CTRL is shown in Figure 16-65 and described in Table 16-74.

## Figure 16-65. USB0CTRL Register

| 31       | 30       | 29                    | 28       | 27       | 26       | 25       | 24         |
|----------|----------|-----------------------|----------|----------|----------|----------|------------|
| DIS_DEB  | DIS_SRP  | RESERVED              | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R/W-0h   | R/W-0h   | R/W-0h                | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     |
| 23       | 22       | 21                    | 20       | 19       | 18       | 17       | 16         |
| RESERVED | RESERVED | RESERVED              | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R/W-0h   | R/W-0h   | R/W-0h                | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     |
| 15       | 14       | 13                    | 12       | 11       | 10       | 9        | 8          |
| RESERVED | RESERVED | RESERVED              | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R/W-0h   | R/W-0h   | R/W-0h                | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     |
| 7        | 6        | 5                     | 4        | 3        | 2        | 1        | 0          |
| RESERVED | RESERVED | SOFT_RESET_ ISOLATION | RNDIS    | UINT     | RESERVED | CLKFACK  | SOFT_RESET |
| R/W-0h   | R/W-0h   | R/W-0h                | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-74. USB0CTRL Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|-----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | DIS_DEB               | R/W    | 0h      | Disable the VBUS debouncer circuit fix                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 30    | DIS_SRP               | R/W    | 0h      | Disable the OTG Session Request Protocol (SRP) AVALID circuit fix. When enabled (=0) this allows additional time for the VBUS signal to be measured against the VBUS thresholds. The time is specified in the USB0 SRP Fix Time Register.                                                                                                                                                                                                                                                                                                           |
| 29-6  | RESERVED              | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 5     | SOFT_RESET_ISOLATIO N | R/W    | 0h      | Soft reset isolation. When high this bit forces all USB0 signals that connect to the USBSS to known values during a soft reset via bit 0 of this register. This bit should be set high prior to setting bit 0 and cleared after bit 0 is cleared.                                                                                                                                                                                                                                                                                                   |
| 4     | RNDIS                 | R/W    | 0h      | Global RNDIS mode enable for all endpoints.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 3     | UINT                  | R/W    | 0h      | USB interrupt enable 1 = Legacy 0 = Current (recommended setting) If uint is set high, then the mentor controller generic interrupt for USB[9] will be generated (if enabled). This requires S/W to read the mentor controller's registers to determine which interrupt from USB[0] to USB[7] that occurred. If uint is set low, then the usb20otg_f module will automatically read the mentor controller's registers and set the appropriate interrupt from USB[0] to USB[7] (if enabled). The generic interrupt for USB[9] will not be generated. |
| 2     | RESERVED              | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 1     | CLKFACK               | R/W    | 0h      | Clock stop fast ack enable.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |

<!-- image -->

<!-- image -->

## Table 16-74. USB0CTRL Register Field Descriptions (continued)

|   Bit | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     0 | SOFT_RESET | R/W    | 0h      | Software reset of USB0. Write 0 = no action Write 1 = Initiate software reset Read 0 = Reset done, no action Read 1 = Reset ongoing Both the soft_reset and soft_reset_isolation bits should be asserted simultaneously. This will cause the following sequence of actions to occur over multiple cycles: - All USB0 output signals will go to a known constant value via multiplexers. This removes the possibility of timing errors due to the asynchronous resets. - All USB0 registers will be reset. - The USB0 resets will be de-asserted. - The reset isolation multiplexer inputs will be de-selected. - Both the soft_reset and soft_reset_isolation bits will be automatically cleared. Setting only the soft_reset_isolation bit will cause all USB0 output signals to go to a known constant value via multiplexers. This will prevent future access to USB0. To clear this condition the USBSS must be reset via a hard or soft reset. |

## 16.4.2.3 USB0STAT Register (offset = 1018h) [reset = 0h]

USB0STAT is shown in Figure 16-66 and described in Table 16-75.

## Figure 16-66. USB0STAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | DRVVBUS  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-75. USB0STAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                |
|-------|----------|--------|---------|--------------------------------------------|
| 31-1  | RESERVED | R      | 0h      |                                            |
| 0     | DRVVBUS  | R      | 0h      | Current DRVVBUS value USB0 Status Register |

<!-- image -->

<!-- image -->

## 16.4.2.4 USB0IRQMSTAT Register (offset = 1020h) [reset = 0h]

USB0IRQMSTAT is shown in Figure 16-67 and described in Table 16-76.

## Figure 16-67. USB0IRQMSTAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | BANK1    | BANK0    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-76. USB0IRQMSTAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                               |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED | R      | 0h      |                                                                                                                           |
| 1     | BANK1    | R      | 0h      | 0: No events pending from IRQ_STATUS_1 1: At least one event is pending from IRQ_STATUS_1                                 |
| 0     | BANK0    | R      | 0h      | 0: No events pending from IRQ_STATUS_0 1: At least one event is pending from IRQ_STATUS_0 USB0 IRQ_MERGED_STATUS Register |

Universal Serial Bus (USB)

## 16.4.2.5 USB0IRQSTATRAW0 Register (offset = 1028h) [reset = 0h]

USB0IRQSTATRAW0 is shown in Figure 16-68 and described in Table 16-77.

## Figure 16-68. USB0IRQSTATRAW0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25      | 24       |
|----------|----------|----------|----------|----------|----------|---------|----------|
| RX_EP_15 | RX_EP_14 | RX_EP_13 | RX_EP_12 | RX_EP_11 | RX_EP_10 | RX_EP_9 | RX_EP_8  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17      | 16       |
| RX_EP_7  | RX_EP_6  | RX_EP_5  | RX_EP_4  | RX_EP_3  | RX_EP_2  | RX_EP_1 | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9       | 8        |
| TX_EP_15 | TX_EP_14 | TX_EP_13 | TX_EP_12 | TX_EP_11 | TX_EP_10 | TX_EP_9 | TX_EP_8  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1       | 0        |
| TX_EP_7  | TX_EP_6  | TX_EP_5  | TX_EP_4  | TX_EP_3  | TX_EP_2  | TX_EP_1 | TX_EP_0  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-77. USB0IRQSTATRAW0 Register Field Descriptions

|   Bit | Field    | Type   | Reset   | Description                         |
|-------|----------|--------|---------|-------------------------------------|
|    31 | RX_EP_15 | R/W    | 0h      | Interrupt status for RX endpoint 15 |
|    30 | RX_EP_14 | R/W    | 0h      | Interrupt status for RX endpoint 14 |
|    29 | RX_EP_13 | R/W    | 0h      | Interrupt status for RX endpoint 13 |
|    28 | RX_EP_12 | R/W    | 0h      | Interrupt status for RX endpoint 12 |
|    27 | RX_EP_11 | R/W    | 0h      | Interrupt status for RX endpoint 11 |
|    26 | RX_EP_10 | R/W    | 0h      | Interrupt status for RX endpoint 10 |
|    25 | RX_EP_9  | R/W    | 0h      | Interrupt status for RX endpoint 9  |
|    24 | RX_EP_8  | R/W    | 0h      | Interrupt status for RX endpoint 8  |
|    23 | RX_EP_7  | R/W    | 0h      | Interrupt status for RX endpoint 7  |
|    22 | RX_EP_6  | R/W    | 0h      | Interrupt status for RX endpoint 6  |
|    21 | RX_EP_5  | R/W    | 0h      | Interrupt status for RX endpoint 5  |
|    20 | RX_EP_4  | R/W    | 0h      | Interrupt status for RX endpoint 4  |
|    19 | RX_EP_3  | R/W    | 0h      | Interrupt status for RX endpoint 3  |
|    18 | RX_EP_2  | R/W    | 0h      | Interrupt status for RX endpoint 2  |
|    17 | RX_EP_1  | R/W    | 0h      | Interrupt status for RX endpoint 1  |
|    16 | RESERVED | R/W    | 0h      |                                     |
|    15 | TX_EP_15 | R/W    | 0h      | Interrupt status for TX endpoint 15 |
|    14 | TX_EP_14 | R/W    | 0h      | Interrupt status for TX endpoint 14 |
|    13 | TX_EP_13 | R/W    | 0h      | Interrupt status for TX endpoint 13 |
|    12 | TX_EP_12 | R/W    | 0h      | Interrupt status for TX endpoint 12 |
|    11 | TX_EP_11 | R/W    | 0h      | Interrupt status for TX endpoint 11 |
|    10 | TX_EP_10 | R/W    | 0h      | Interrupt status for TX endpoint 10 |
|     9 | TX_EP_9  | R/W    | 0h      | Interrupt status for TX endpoint 9  |
|     8 | TX_EP_8  | R/W    | 0h      | Interrupt status for TX endpoint 8  |
|     7 | TX_EP_7  | R/W    | 0h      | Interrupt status for TX endpoint 7  |
|     6 | TX_EP_6  | R/W    | 0h      | Interrupt status for TX endpoint 6  |

<!-- image -->

<!-- image -->

Table 16-77. USB0IRQSTATRAW0 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                       |
|-------|---------|--------|---------|-------------------------------------------------------------------|
|     5 | TX_EP_5 | R/W    | 0h      | Interrupt status for TX endpoint 5                                |
|     4 | TX_EP_4 | R/W    | 0h      | Interrupt status for TX endpoint 4                                |
|     3 | TX_EP_3 | R/W    | 0h      | Interrupt status for TX endpoint 3                                |
|     2 | TX_EP_2 | R/W    | 0h      | Interrupt status for TX endpoint 2                                |
|     1 | TX_EP_1 | R/W    | 0h      | Interrupt status for TX endpoint 1                                |
|     0 | TX_EP_0 | R/W    | 0h      | Interrupt status for TX endpoint 0 USB0 IRQ_STATUS_RAW_0 Register |

Universal Serial Bus (USB)

## 16.4.2.6 USB0IRQSTATRAW1 Register (offset = 102Ch) [reset = 0h]

USB0IRQSTATRAW1 is shown in Figure 16-69 and described in Table 16-78.

## Figure 16-69. USB0IRQSTATRAW1 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25        | 24        |
|------------|------------|------------|------------|------------|------------|-----------|-----------|
| TX_FIFO_15 | TX_FIFO_14 | TX_FIFO_13 | TX_FIFO_12 | TX_FIFO_11 | TX_FIFO_10 | TX_FIFO_9 | TX_FIFO_8 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 23         | 22         | 21         | 20         | 19         | 18         | 17        | 16        |
| TX_FIFO_7  | TX_FIFO_6  | TX_FIFO_5  | TX_FIFO_4  | TX_FIFO_3  | TX_FIFO_2  | TX_FIFO_1 | TX_FIFO_0 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 15         | 14         | 13         | 12         | 11         | 10         | 9         | 8         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | USB_9     | USB_8     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
| USB_7      | USB_6      | USB_5      | USB_4      | USB_3      | USB_2      | USB_1     | USB_0     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-78. USB0IRQSTATRAW1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                 |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------|
| 31    | TX_FIFO_15 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 15                                                    |
| 30    | TX_FIFO_14 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 14                                                    |
| 29    | TX_FIFO_13 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 13                                                    |
| 28    | TX_FIFO_12 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 12                                                    |
| 27    | TX_FIFO_11 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 11                                                    |
| 26    | TX_FIFO_10 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 10                                                    |
| 25    | TX_FIFO_9  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 9                                                     |
| 24    | TX_FIFO_8  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 8                                                     |
| 23    | TX_FIFO_7  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 7                                                     |
| 22    | TX_FIFO_6  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 6                                                     |
| 21    | TX_FIFO_5  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 5                                                     |
| 20    | TX_FIFO_4  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 4                                                     |
| 19    | TX_FIFO_3  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 3                                                     |
| 18    | TX_FIFO_2  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 2                                                     |
| 17    | TX_FIFO_1  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 1                                                     |
| 16    | TX_FIFO_0  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 0                                                     |
| 15-10 | RESERVED   | R/W    | 0h      |                                                                                             |
| 9     | USB_9      | R/W    | 0h      | Interrupt status for Mentor controller USB_INT generic interrupt                            |
| 8     | USB_8      | R/W    | 0h      | Interrupt status for DRVVBUS level change                                                   |
| 7     | USB_7      | R/W    | 0h      | Interrupt status for VBUS < VBUS valid threshold                                            |
| 6     | USB_6      | R/W    | 0h      | Interrupt status for SRP detected                                                           |
| 5     | USB_5      | R/W    | 0h      | Interrupt status for device disconnected (host mode)                                        |
| 4     | USB_4      | R/W    | 0h      | Interrupt status for device connected (host mode)                                           |
| 3     | USB_3      | R/W    | 0h      | Interrupt status for SOF started                                                            |
| 2     | USB_2      | R/W    | 0h      | Interrupt status for Reset signaling detected (peripheral mode) Babble detected (host mode) |

<!-- image -->

<!-- image -->

## Table 16-78. USB0IRQSTATRAW1 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                    |
|-------|---------|--------|---------|--------------------------------------------------------------------------------|
|     1 | USB_1   | R/W    | 0h      | Interrupt status for Resume signaling detected                                 |
|     0 | USB_0   | R/W    | 0h      | Interrupt status for Suspend signaling detected USB0 IRQ_STATUS_RAW_1 Register |

Universal Serial Bus (USB)

## 16.4.2.7 USB0IRQSTAT0 Register (offset = 1030h) [reset = 0h]

USB0IRQSTAT0 is shown in Figure 16-70 and described in Table 16-79.

## Figure 16-70. USB0IRQSTAT0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25      | 24       |
|----------|----------|----------|----------|----------|----------|---------|----------|
| RX_EP_15 | RX_EP_14 | RX_EP_13 | RX_EP_12 | RX_EP_11 | RX_EP_10 | RX_EP_9 | RX_EP_8  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17      | 16       |
| RX_EP_7  | RX_EP_6  | RX_EP_5  | RX_EP_4  | RX_EP_3  | RX_EP_2  | RX_EP_1 | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9       | 8        |
| TX_EP_15 | TX_EP_14 | TX_EP_13 | TX_EP_12 | TX_EP_11 | TX_EP_10 | TX_EP_9 | TX_EP_8  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1       | 0        |
| TX_EP_7  | TX_EP_6  | TX_EP_5  | TX_EP_4  | TX_EP_3  | TX_EP_2  | TX_EP_1 | TX_EP_0  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-79. USB0IRQSTAT0 Register Field Descriptions

|   Bit | Field    | Type   | Reset   | Description                         |
|-------|----------|--------|---------|-------------------------------------|
|    31 | RX_EP_15 | R/W    | 0h      | Interrupt status for RX endpoint 15 |
|    30 | RX_EP_14 | R/W    | 0h      | Interrupt status for RX endpoint 14 |
|    29 | RX_EP_13 | R/W    | 0h      | Interrupt status for RX endpoint 13 |
|    28 | RX_EP_12 | R/W    | 0h      | Interrupt status for RX endpoint 12 |
|    27 | RX_EP_11 | R/W    | 0h      | Interrupt status for RX endpoint 11 |
|    26 | RX_EP_10 | R/W    | 0h      | Interrupt status for RX endpoint 10 |
|    25 | RX_EP_9  | R/W    | 0h      | Interrupt status for RX endpoint 9  |
|    24 | RX_EP_8  | R/W    | 0h      | Interrupt status for RX endpoint 8  |
|    23 | RX_EP_7  | R/W    | 0h      | Interrupt status for RX endpoint 7  |
|    22 | RX_EP_6  | R/W    | 0h      | Interrupt status for RX endpoint 6  |
|    21 | RX_EP_5  | R/W    | 0h      | Interrupt status for RX endpoint 5  |
|    20 | RX_EP_4  | R/W    | 0h      | Interrupt status for RX endpoint 4  |
|    19 | RX_EP_3  | R/W    | 0h      | Interrupt status for RX endpoint 3  |
|    18 | RX_EP_2  | R/W    | 0h      | Interrupt status for RX endpoint 2  |
|    17 | RX_EP_1  | R/W    | 0h      | Interrupt status for RX endpoint 1  |
|    16 | RESERVED | R/W    | 0h      |                                     |
|    15 | TX_EP_15 | R/W    | 0h      | Interrupt status for TX endpoint 15 |
|    14 | TX_EP_14 | R/W    | 0h      | Interrupt status for TX endpoint 14 |
|    13 | TX_EP_13 | R/W    | 0h      | Interrupt status for TX endpoint 13 |
|    12 | TX_EP_12 | R/W    | 0h      | Interrupt status for TX endpoint 12 |
|    11 | TX_EP_11 | R/W    | 0h      | Interrupt status for TX endpoint 11 |
|    10 | TX_EP_10 | R/W    | 0h      | Interrupt status for TX endpoint 10 |
|     9 | TX_EP_9  | R/W    | 0h      | Interrupt status for TX endpoint 9  |
|     8 | TX_EP_8  | R/W    | 0h      | Interrupt status for TX endpoint 8  |
|     7 | TX_EP_7  | R/W    | 0h      | Interrupt status for TX endpoint 7  |
|     6 | TX_EP_6  | R/W    | 0h      | Interrupt status for TX endpoint 6  |

<!-- image -->

<!-- image -->

## Table 16-79. USB0IRQSTAT0 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                   |
|-------|---------|--------|---------|---------------------------------------------------------------|
|     5 | TX_EP_5 | R/W    | 0h      | Interrupt status for TX endpoint 5                            |
|     4 | TX_EP_4 | R/W    | 0h      | Interrupt status for TX endpoint 4                            |
|     3 | TX_EP_3 | R/W    | 0h      | Interrupt status for TX endpoint 3                            |
|     2 | TX_EP_2 | R/W    | 0h      | Interrupt status for TX endpoint 2                            |
|     1 | TX_EP_1 | R/W    | 0h      | Interrupt status for TX endpoint 1                            |
|     0 | TX_EP_0 | R/W    | 0h      | Interrupt status for TX endpoint 0 USB0 IRQ_STATUS_0 Register |

Universal Serial Bus (USB)

## 16.4.2.8 USB0IRQSTAT1 Register (offset = 1034h) [reset = 0h]

USB0IRQSTAT1 is shown in Figure 16-71 and described in Table 16-80.

## Figure 16-71. USB0IRQSTAT1 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25        | 24        |
|------------|------------|------------|------------|------------|------------|-----------|-----------|
| TX_FIFO_15 | TX_FIFO_14 | TX_FIFO_13 | TX_FIFO_12 | TX_FIFO_11 | TX_FIFO_10 | TX_FIFO_9 | TX_FIFO_8 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 23         | 22         | 21         | 20         | 19         | 18         | 17        | 16        |
| TX_FIFO_7  | TX_FIFO_6  | TX_FIFO_5  | TX_FIFO_4  | TX_FIFO_3  | TX_FIFO_2  | TX_FIFO_1 | TX_FIFO_0 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 15         | 14         | 13         | 12         | 11         | 10         | 9         | 8         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | USB_9     | USB_8     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
| USB_7      | USB_6      | USB_5      | USB_4      | USB_3      | USB_2      | USB_1     | USB_0     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-80. USB0IRQSTAT1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                 |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------|
| 31    | TX_FIFO_15 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 15                                                    |
| 30    | TX_FIFO_14 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 14                                                    |
| 29    | TX_FIFO_13 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 13                                                    |
| 28    | TX_FIFO_12 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 12                                                    |
| 27    | TX_FIFO_11 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 11                                                    |
| 26    | TX_FIFO_10 | R/W    | 0h      | Interrupt status for TX FIFO endpoint 10                                                    |
| 25    | TX_FIFO_9  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 9                                                     |
| 24    | TX_FIFO_8  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 8                                                     |
| 23    | TX_FIFO_7  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 7                                                     |
| 22    | TX_FIFO_6  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 6                                                     |
| 21    | TX_FIFO_5  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 5                                                     |
| 20    | TX_FIFO_4  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 4                                                     |
| 19    | TX_FIFO_3  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 3                                                     |
| 18    | TX_FIFO_2  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 2                                                     |
| 17    | TX_FIFO_1  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 1                                                     |
| 16    | TX_FIFO_0  | R/W    | 0h      | Interrupt status for TX FIFO endpoint 0                                                     |
| 15-10 | RESERVED   | R/W    | 0h      |                                                                                             |
| 9     | USB_9      | R/W    | 0h      | Interrupt status for Mentor controller USB_INT generic interrupt                            |
| 8     | USB_8      | R/W    | 0h      | Interrupt status for DRVVBUS level change                                                   |
| 7     | USB_7      | R/W    | 0h      | Interrupt status for VBUS < VBUS valid threshold                                            |
| 6     | USB_6      | R/W    | 0h      | Interrupt status for SRP detected                                                           |
| 5     | USB_5      | R/W    | 0h      | Interrupt status for device disconnected (host mode)                                        |
| 4     | USB_4      | R/W    | 0h      | Interrupt status for device connected (host mode)                                           |
| 3     | USB_3      | R/W    | 0h      | Interrupt status for SOF started                                                            |
| 2     | USB_2      | R/W    | 0h      | Interrupt status for Reset signaling detected (peripheral mode) Babble detected (host mode) |

<!-- image -->

<!-- image -->

## Table 16-80. USB0IRQSTAT1 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                |
|-------|---------|--------|---------|----------------------------------------------------------------------------|
|     1 | USB_1   | R/W    | 0h      | Interrupt status for Resume signaling detected                             |
|     0 | USB_0   | R/W    | 0h      | Interrupt status for Suspend signaling detected USB0 IRQ_STATUS_1 Register |

Universal Serial Bus (USB)

## 16.4.2.9 USB0IRQENABLESET0 Register (offset = 1038h) [reset = 0h]

USB0IRQENABLESET0 is shown in Figure 16-72 and described in Table 16-81.

## Figure 16-72. USB0IRQENABLESET0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25      | 24       |
|----------|----------|----------|----------|----------|----------|---------|----------|
| RX_EP_15 | RX_EP_14 | RX_EP_13 | RX_EP_12 | RX_EP_11 | RX_EP_10 | RX_EP_9 | RX_EP_8  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17      | 16       |
| RX_EP_7  | RX_EP_6  | RX_EP_5  | RX_EP_4  | RX_EP_3  | RX_EP_2  | RX_EP_1 | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9       | 8        |
| TX_EP_15 | TX_EP_14 | TX_EP_13 | TX_EP_12 | TX_EP_11 | TX_EP_10 | TX_EP_9 | TX_EP_8  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1       | 0        |
| TX_EP_7  | TX_EP_6  | TX_EP_5  | TX_EP_4  | TX_EP_3  | TX_EP_2  | TX_EP_1 | TX_EP_0  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-81. USB0IRQENABLESET0 Register Field Descriptions

|   Bit | Field    | Type   | Reset   | Description                         |
|-------|----------|--------|---------|-------------------------------------|
|    31 | RX_EP_15 | R/W    | 0h      | Interrupt enable for RX endpoint 15 |
|    30 | RX_EP_14 | R/W    | 0h      | Interrupt enable for RX endpoint 14 |
|    29 | RX_EP_13 | R/W    | 0h      | Interrupt enable for RX endpoint 13 |
|    28 | RX_EP_12 | R/W    | 0h      | Interrupt enable for RX endpoint 12 |
|    27 | RX_EP_11 | R/W    | 0h      | Interrupt enable for RX endpoint 11 |
|    26 | RX_EP_10 | R/W    | 0h      | Interrupt enable for RX endpoint 10 |
|    25 | RX_EP_9  | R/W    | 0h      | Interrupt enable for RX endpoint 9  |
|    24 | RX_EP_8  | R/W    | 0h      | Interrupt enable for RX endpoint 8  |
|    23 | RX_EP_7  | R/W    | 0h      | Interrupt enable for RX endpoint 7  |
|    22 | RX_EP_6  | R/W    | 0h      | Interrupt enable for RX endpoint 6  |
|    21 | RX_EP_5  | R/W    | 0h      | Interrupt enable for RX endpoint 5  |
|    20 | RX_EP_4  | R/W    | 0h      | Interrupt enable for RX endpoint 4  |
|    19 | RX_EP_3  | R/W    | 0h      | Interrupt enable for RX endpoint 3  |
|    18 | RX_EP_2  | R/W    | 0h      | Interrupt enable for RX endpoint 2  |
|    17 | RX_EP_1  | R/W    | 0h      | Interrupt enable for RX endpoint 1  |
|    16 | RESERVED | R/W    | 0h      |                                     |
|    15 | TX_EP_15 | R/W    | 0h      | Interrupt enable for TX endpoint 15 |
|    14 | TX_EP_14 | R/W    | 0h      | Interrupt enable for TX endpoint 14 |
|    13 | TX_EP_13 | R/W    | 0h      | Interrupt enable for TX endpoint 13 |
|    12 | TX_EP_12 | R/W    | 0h      | Interrupt enable for TX endpoint 12 |
|    11 | TX_EP_11 | R/W    | 0h      | Interrupt enable for TX endpoint 11 |
|    10 | TX_EP_10 | R/W    | 0h      | Interrupt enable for TX endpoint 10 |
|     9 | TX_EP_9  | R/W    | 0h      | Interrupt enable for TX endpoint 9  |
|     8 | TX_EP_8  | R/W    | 0h      | Interrupt enable for TX endpoint 8  |
|     7 | TX_EP_7  | R/W    | 0h      | Interrupt enable for TX endpoint 7  |
|     6 | TX_EP_6  | R/W    | 0h      | Interrupt enable for TX endpoint 6  |

<!-- image -->

<!-- image -->

## Table 16-81. USB0IRQENABLESET0 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                       |
|-------|---------|--------|---------|-------------------------------------------------------------------|
|     5 | TX_EP_5 | R/W    | 0h      | Interrupt enable for TX endpoint 5                                |
|     4 | TX_EP_4 | R/W    | 0h      | Interrupt enable for TX endpoint 4                                |
|     3 | TX_EP_3 | R/W    | 0h      | Interrupt enable for TX endpoint 3                                |
|     2 | TX_EP_2 | R/W    | 0h      | Interrupt enable for TX endpoint 2                                |
|     1 | TX_EP_1 | R/W    | 0h      | Interrupt enable for TX endpoint 1                                |
|     0 | TX_EP_0 | R/W    | 0h      | Interrupt enable for TX endpoint 0 USB0 IRQ_ENABLE_SET_0 Register |

Universal Serial Bus (USB)

## 16.4.2.10 USB0IRQENABLESET1 Register (offset = 103Ch) [reset = 0h]

USB0IRQENABLESET1 is shown in Figure 16-73 and described in Table 16-82.

## Figure 16-73. USB0IRQENABLESET1 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25        | 24        |
|------------|------------|------------|------------|------------|------------|-----------|-----------|
| TX_FIFO_15 | TX_FIFO_14 | TX_FIFO_13 | TX_FIFO_12 | TX_FIFO_11 | TX_FIFO_10 | TX_FIFO_9 | TX_FIFO_8 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 23         | 22         | 21         | 20         | 19         | 18         | 17        | 16        |
| TX_FIFO_7  | TX_FIFO_6  | TX_FIFO_5  | TX_FIFO_4  | TX_FIFO_3  | TX_FIFO_2  | TX_FIFO_1 | TX_FIFO_0 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 15         | 14         | 13         | 12         | 11         | 10         | 9         | 8         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | USB_9     | USB_8     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
| USB_7      | USB_6      | USB_5      | USB_4      | USB_3      | USB_2      | USB_1     | USB_0     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-82. USB0IRQENABLESET1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                 |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------|
| 31    | TX_FIFO_15 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 15                                                    |
| 30    | TX_FIFO_14 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 14                                                    |
| 29    | TX_FIFO_13 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 13                                                    |
| 28    | TX_FIFO_12 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 12                                                    |
| 27    | TX_FIFO_11 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 11                                                    |
| 26    | TX_FIFO_10 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 10                                                    |
| 25    | TX_FIFO_9  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 9                                                     |
| 24    | TX_FIFO_8  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 8                                                     |
| 23    | TX_FIFO_7  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 7                                                     |
| 22    | TX_FIFO_6  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 6                                                     |
| 21    | TX_FIFO_5  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 5                                                     |
| 20    | TX_FIFO_4  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 4                                                     |
| 19    | TX_FIFO_3  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 3                                                     |
| 18    | TX_FIFO_2  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 2                                                     |
| 17    | TX_FIFO_1  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 1                                                     |
| 16    | TX_FIFO_0  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 0                                                     |
| 15-10 | RESERVED   | R/W    | 0h      |                                                                                             |
| 9     | USB_9      | R/W    | 0h      | Interrupt enable for Mentor controller USB_INT generic interrupt                            |
| 8     | USB_8      | R/W    | 0h      | Interrupt enable for DRVVBUS level change                                                   |
| 7     | USB_7      | R/W    | 0h      | Interrupt enable for VBUS < VBUS valid threshold                                            |
| 6     | USB_6      | R/W    | 0h      | Interrupt enable for SRP detected                                                           |
| 5     | USB_5      | R/W    | 0h      | Interrupt enable for device disconnected (host mode)                                        |
| 4     | USB_4      | R/W    | 0h      | Interrupt enable for device connected (host mode)                                           |
| 3     | USB_3      | R/W    | 0h      | Interrupt enable for SOF started                                                            |
| 2     | USB_2      | R/W    | 0h      | Interrupt enable for Reset signaling detected (peripheral mode) Babble detected (host mode) |

<!-- image -->

<!-- image -->

## Table 16-82. USB0IRQENABLESET1 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                    |
|-------|---------|--------|---------|--------------------------------------------------------------------------------|
|     1 | USB_1   | R/W    | 0h      | Interrupt enable for Resume signaling detected                                 |
|     0 | USB_0   | R/W    | 0h      | Interrupt enable for Suspend signaling detected USB0 IRQ_ENABLE_SET_1 Register |

Universal Serial Bus (USB)

## 16.4.2.11 USB0IRQENABLECLR0 Register (offset = 1040h) [reset = 0h]

USB0IRQENABLECLR0 is shown in Figure 16-74 and described in Table 16-83.

## Figure 16-74. USB0IRQENABLECLR0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25      | 24       |
|----------|----------|----------|----------|----------|----------|---------|----------|
| RX_EP_15 | RX_EP_14 | RX_EP_13 | RX_EP_12 | RX_EP_11 | RX_EP_10 | RX_EP_9 | RX_EP_8  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17      | 16       |
| RX_EP_7  | RX_EP_6  | RX_EP_5  | RX_EP_4  | RX_EP_3  | RX_EP_2  | RX_EP_1 | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9       | 8        |
| TX_EP_15 | TX_EP_14 | TX_EP_13 | TX_EP_12 | TX_EP_11 | TX_EP_10 | TX_EP_9 | TX_EP_8  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1       | 0        |
| TX_EP_7  | TX_EP_6  | TX_EP_5  | TX_EP_4  | TX_EP_3  | TX_EP_2  | TX_EP_1 | TX_EP_0  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-83. USB0IRQENABLECLR0 Register Field Descriptions

|   Bit | Field    | Type   | Reset   | Description                         |
|-------|----------|--------|---------|-------------------------------------|
|    31 | RX_EP_15 | R/W    | 0h      | Interrupt enable for RX endpoint 15 |
|    30 | RX_EP_14 | R/W    | 0h      | Interrupt enable for RX endpoint 14 |
|    29 | RX_EP_13 | R/W    | 0h      | Interrupt enable for RX endpoint 13 |
|    28 | RX_EP_12 | R/W    | 0h      | Interrupt enable for RX endpoint 12 |
|    27 | RX_EP_11 | R/W    | 0h      | Interrupt enable for RX endpoint 11 |
|    26 | RX_EP_10 | R/W    | 0h      | Interrupt enable for RX endpoint 10 |
|    25 | RX_EP_9  | R/W    | 0h      | Interrupt enable for RX endpoint 9  |
|    24 | RX_EP_8  | R/W    | 0h      | Interrupt enable for RX endpoint 8  |
|    23 | RX_EP_7  | R/W    | 0h      | Interrupt enable for RX endpoint 7  |
|    22 | RX_EP_6  | R/W    | 0h      | Interrupt enable for RX endpoint 6  |
|    21 | RX_EP_5  | R/W    | 0h      | Interrupt enable for RX endpoint 5  |
|    20 | RX_EP_4  | R/W    | 0h      | Interrupt enable for RX endpoint 4  |
|    19 | RX_EP_3  | R/W    | 0h      | Interrupt enable for RX endpoint 3  |
|    18 | RX_EP_2  | R/W    | 0h      | Interrupt enable for RX endpoint 2  |
|    17 | RX_EP_1  | R/W    | 0h      | Interrupt enable for RX endpoint 1  |
|    16 | RESERVED | R/W    | 0h      |                                     |
|    15 | TX_EP_15 | R/W    | 0h      | Interrupt enable for TX endpoint 15 |
|    14 | TX_EP_14 | R/W    | 0h      | Interrupt enable for TX endpoint 14 |
|    13 | TX_EP_13 | R/W    | 0h      | Interrupt enable for TX endpoint 13 |
|    12 | TX_EP_12 | R/W    | 0h      | Interrupt enable for TX endpoint 12 |
|    11 | TX_EP_11 | R/W    | 0h      | Interrupt enable for TX endpoint 11 |
|    10 | TX_EP_10 | R/W    | 0h      | Interrupt enable for TX endpoint 10 |
|     9 | TX_EP_9  | R/W    | 0h      | Interrupt enable for TX endpoint 9  |
|     8 | TX_EP_8  | R/W    | 0h      | Interrupt enable for TX endpoint 8  |
|     7 | TX_EP_7  | R/W    | 0h      | Interrupt enable for TX endpoint 7  |
|     6 | TX_EP_6  | R/W    | 0h      | Interrupt enable for TX endpoint 6  |

<!-- image -->

<!-- image -->

Table 16-83. USB0IRQENABLECLR0 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                       |
|-------|---------|--------|---------|-------------------------------------------------------------------|
|     5 | TX_EP_5 | R/W    | 0h      | Interrupt enable for TX endpoint 5                                |
|     4 | TX_EP_4 | R/W    | 0h      | Interrupt enable for TX endpoint 4                                |
|     3 | TX_EP_3 | R/W    | 0h      | Interrupt enable for TX endpoint 3                                |
|     2 | TX_EP_2 | R/W    | 0h      | Interrupt enable for TX endpoint 2                                |
|     1 | TX_EP_1 | R/W    | 0h      | Interrupt enable for TX endpoint 1                                |
|     0 | TX_EP_0 | R/W    | 0h      | Interrupt enable for TX endpoint 0 USB0 IRQ_ENABLE_CLR_0 Register |

Universal Serial Bus (USB)

## 16.4.2.12 USB0IRQENABLECLR1 Register (offset = 1044h) [reset = 0h]

USB0IRQENABLECLR1 is shown in Figure 16-75 and described in Table 16-84.

## Figure 16-75. USB0IRQENABLECLR1 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25        | 24        |
|------------|------------|------------|------------|------------|------------|-----------|-----------|
| TX_FIFO_15 | TX_FIFO_14 | TX_FIFO_13 | TX_FIFO_12 | TX_FIFO_11 | TX_FIFO_10 | TX_FIFO_9 | TX_FIFO_8 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 23         | 22         | 21         | 20         | 19         | 18         | 17        | 16        |
| TX_FIFO_7  | TX_FIFO_6  | TX_FIFO_5  | TX_FIFO_4  | TX_FIFO_3  | TX_FIFO_2  | TX_FIFO_1 | TX_FIFO_0 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 15         | 14         | 13         | 12         | 11         | 10         | 9         | 8         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | USB_9     | USB_8     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
| USB_7      | USB_6      | USB_5      | USB_4      | USB_3      | USB_2      | USB_1     | USB_0     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-84. USB0IRQENABLECLR1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                 |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------|
| 31    | TX_FIFO_15 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 15                                                    |
| 30    | TX_FIFO_14 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 14                                                    |
| 29    | TX_FIFO_13 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 13                                                    |
| 28    | TX_FIFO_12 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 12                                                    |
| 27    | TX_FIFO_11 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 11                                                    |
| 26    | TX_FIFO_10 | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 10                                                    |
| 25    | TX_FIFO_9  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 9                                                     |
| 24    | TX_FIFO_8  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 8                                                     |
| 23    | TX_FIFO_7  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 7                                                     |
| 22    | TX_FIFO_6  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 6                                                     |
| 21    | TX_FIFO_5  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 5                                                     |
| 20    | TX_FIFO_4  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 4                                                     |
| 19    | TX_FIFO_3  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 3                                                     |
| 18    | TX_FIFO_2  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 2                                                     |
| 17    | TX_FIFO_1  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 1                                                     |
| 16    | TX_FIFO_0  | R/W    | 0h      | Interrupt enable for TX FIFO endpoint 0                                                     |
| 15-10 | RESERVED   | R/W    | 0h      |                                                                                             |
| 9     | USB_9      | R/W    | 0h      | Interrupt enable for Mentor controller USB_INT generic interrupt                            |
| 8     | USB_8      | R/W    | 0h      | Interrupt enable for DRVVBUS level change                                                   |
| 7     | USB_7      | R/W    | 0h      | Interrupt enable for VBUS < VBUS valid threshold                                            |
| 6     | USB_6      | R/W    | 0h      | Interrupt enable for SRP detected                                                           |
| 5     | USB_5      | R/W    | 0h      | Interrupt enable for device disconnected (host mode)                                        |
| 4     | USB_4      | R/W    | 0h      | Interrupt enable for device connected (host mode)                                           |
| 3     | USB_3      | R/W    | 0h      | Interrupt enable for SOF started                                                            |
| 2     | USB_2      | R/W    | 0h      | Interrupt enable for Reset signaling detected (peripheral mode) Babble detected (host mode) |

<!-- image -->

<!-- image -->

## Table 16-84. USB0IRQENABLECLR1 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                    |
|-------|---------|--------|---------|--------------------------------------------------------------------------------|
|     1 | USB_1   | R/W    | 0h      | Interrupt enable for Resume signaling detected                                 |
|     0 | USB_0   | R/W    | 0h      | Interrupt enable for Suspend signaling detected USB0 IRQ_ENABLE_CLR_1 Register |

Universal Serial Bus (USB)

## 16.4.2.13 USB0TXMODE Register (offset = 1070h) [reset = 0h]

USB0TXMODE is shown in Figure 16-76 and described in Table 16-85.

## Figure 16-76. USB0TXMODE Register

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| RESERVED  | RESERVED  | TX15_MODE | TX15_MODE | TX14_MODE | TX14_MODE | TX13_MODE | TX13_MODE |
| R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| TX12_MODE | TX12_MODE | TX11_MODE | TX11_MODE | TX10_MODE | TX10_MODE | TX9_MODE  | TX9_MODE  |
| R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| TX8_MODE  | TX8_MODE  | TX7_MODE  | TX7_MODE  | TX6_MODE  | TX6_MODE  | TX5_MODE  | TX5_MODE  |
| R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| TX4_MODE  | TX4_MODE  | TX3_MODE  | TX3_MODE  | TX2_MODE  | TX2_MODE  | TX1_MODE  | TX1_MODE  |
| R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-85. USB0TXMODE Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                     |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED  | R/W    | 0h      |                                                                                                                                                 |
| 29-28 | TX15_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 14 01: RNDIS Mode on TX endpoint 14 10: CDC Mode on TX endpoint 14 11: Generic RNDIS Mode on TX endpoint 14 |
| 27-26 | TX14_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 13 01: RNDIS Mode on TX endpoint 13 10: CDC Mode on TX endpoint 13 11: Generic RNDIS Mode on TX endpoint 13 |
| 25-24 | TX13_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 12 01: RNDIS Mode on TX endpoint 12 10: CDC Mode on TX endpoint 12 11: Generic RNDIS Mode on TX endpoint 12 |
| 23-22 | TX12_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 11 01: RNDIS Mode on TX endpoint 11 10: CDC Mode on TX endpoint 11 11: Generic RNDIS Mode on TX endpoint 11 |
| 21-20 | TX11_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 10 01: RNDIS Mode on TX endpoint 10 10: CDC Mode on TX endpoint 10 11: Generic RNDIS Mode on TX endpoint 10 |
| 19-18 | TX10_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 9 01: RNDIS Mode on TX endpoint 9 10: CDC Mode on TX endpoint 9 11: Generic RNDIS Mode on TX endpoint 9     |
| 17-16 | TX9_MODE  | R/W    | 0h      | 00: Transparent Mode on TX endpoint 8 01: RNDIS Mode on TX endpoint 8 10: CDC Mode on TX endpoint 8 11: Generic RNDIS Mode on TX endpoint 8     |
| 15-14 | TX8_MODE  | R/W    | 0h      | 00: Transparent Mode on TX endpoint 7 01: RNDIS Mode on TX endpoint 7 10: CDC Mode on TX endpoint 7 11: Generic RNDIS Mode on TX endpoint 7     |
| 13-12 | TX7_MODE  | R/W    | 0h      | 00: Transparent Mode on TX endpoint 6 01: RNDIS Mode on TX endpoint 6 10: CDC Mode on TX endpoint 6 11: Generic RNDIS Mode on TX endpoint 6     |

<!-- image -->

<!-- image -->

## Table 16-85. USB0TXMODE Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                        |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 11-10 | TX6_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 5 01: RNDIS Mode on TX endpoint 5 10: CDC Mode on TX endpoint 5 11: Generic RNDIS Mode on TX endpoint 5                        |
| 9-8   | TX5_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 4 01: RNDIS Mode on TX endpoint 4 10: CDC Mode on TX endpoint 4 11: Generic RNDIS Mode on TX endpoint 4                        |
| 7-6   | TX4_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 3 01: RNDIS Mode on TX endpoint 3 10: CDC Mode on TX endpoint 3 11: Generic RNDIS Mode on TX endpoint 3                        |
| 5-4   | TX3_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 2 01: RNDIS Mode on TX endpoint 2 10: CDC Mode on TX endpoint 2 11: Generic RNDIS Mode on TX endpoint 2                        |
| 3-2   | TX2_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 1 01: RNDIS Mode on TX endpoint 1 10: CDC Mode on TX endpoint 1 11: Generic RNDIS Mode on TX endpoint 1                        |
| 1-0   | TX1_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 0 01: RNDIS Mode on TX endpoint 0 10: CDC Mode on TX endpoint 0 11: Generic RNDIS Mode on TX endpoint 0 USB0 Tx Mode Registers |

Universal Serial Bus (USB)

## 16.4.2.14 USB0RXMODE Register (offset = 1074h) [reset = 0h]

USB0RXMODE is shown in Figure 16-77 and described in Table 16-86.

## Figure 16-77. USB0RXMODE Register

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| RESERVED  | RESERVED  | RX15_MODE | RX15_MODE | RX14_MODE | RX14_MODE | RX13_MODE | RX13_MODE |
| R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| RX12_MODE | RX12_MODE | RX11_MODE | RX11_MODE | RX10_MODE | RX10_MODE | RX9_MODE  | RX9_MODE  |
| R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| RX8_MODE  | RX8_MODE  | RX7_MODE  | RX7_MODE  | RX6_MODE  | RX6_MODE  | RX5_MODE  | RX5_MODE  |
| R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| RX4_MODE  | RX4_MODE  | RX3_MODE  | RX3_MODE  | RX2_MODE  | RX2_MODE  | RX1_MODE  | RX1_MODE  |
| R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-86. USB0RXMODE Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                 |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED  | R/W    | 0h      |                                                                                                                                                             |
| 29-28 | RX15_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 14 01: RNDIS Mode on RX endpoint 14 10: CDC Mode on RX endpoint 14 11: Generic RNDIS or Infinite Mode on RX endpoint 14 |
| 27-26 | RX14_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 13 01: RNDIS Mode on RX endpoint 13 10: CDC Mode on RX endpoint 13 11: Generic RNDIS or Infinite Mode on RX endpoint 13 |
| 25-24 | RX13_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 12 01: RNDIS Mode on RX endpoint 12 10: CDC Mode on RX endpoint 12 11: Generic RNDIS or Infinite Mode on RX endpoint 12 |
| 23-22 | RX12_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 11 01: RNDIS Mode on RX endpoint 11 10: CDC Mode on RX endpoint 11 11: Generic RNDIS or Infinite Mode on RX endpoint 11 |
| 21-20 | RX11_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 10 01: RNDIS Mode on RX endpoint 10 10: CDC Mode on RX endpoint 10 11: Generic RNDIS or Infinite Mode on RX endpoint 10 |
| 19-18 | RX10_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 9 01: RNDIS Mode on RX endpoint 9 10: CDC Mode on RX endpoint 9 11: Generic RNDIS or Infinite Mode on RX endpoint 9     |
| 17-16 | RX9_MODE  | R/W    | 0h      | 00: Transparent Mode on RX endpoint 8 01: RNDIS Mode on RX endpoint 8 10: CDC Mode on RX endpoint 8 11: Generic RNDIS Mode on RX endpoint 8                 |
| 15-14 | RX8_MODE  | R/W    | 0h      | 00: Transparent Mode on RX endpoint 7 01: RNDIS Mode on RX endpoint 7 10: CDC Mode on RX endpoint 7 11: Generic RNDIS or Infinite Mode on RX endpoint 7     |
| 13-12 | RX7_MODE  | R/W    | 0h      | 00: Transparent Mode on RX endpoint 6 01: RNDIS Mode on RX endpoint 6 10: CDC Mode on RX endpoint 6 11: Generic RNDIS or Infinite Mode on RX endpoint 6     |

<!-- image -->

<!-- image -->

## Table 16-86. USB0RXMODE Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 11-10 | RX6_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 5 01: RNDIS Mode on RX endpoint 5 10: CDC Mode on RX endpoint 5 11: Generic RNDIS or Infinite Mode on RX endpoint 5 |
| 9-8   | RX5_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 4 01: RNDIS Mode on RX endpoint 4 10: CDC Mode on RX endpoint 4 11: Generic RNDIS or Infinite Mode on RX endpoint 4 |
| 7-6   | RX4_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 3 01: RNDIS Mode on RX endpoint 3 10: CDC Mode on RX endpoint 3 11: Generic RNDIS or Infinite Mode on RX endpoint 3 |
| 5-4   | RX3_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 2 01: RNDIS Mode on RX endpoint 2 10: CDC Mode on RX endpoint 2 11: Generic RNDIS or Infinite Mode on RX endpoint 2 |
| 3-2   | RX2_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 1 01: RNDIS Mode on RX endpoint 1 10: CDC Mode on RX endpoint 1 11: Generic RNDIS or Infinite Mode on RX endpoint 1 |

Universal Serial Bus (USB)

<!-- image -->

## Table 16-86. USB0RXMODE Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                           |
|-------|----------|--------|---------|---------------------------------------|
| 1-0   | RX1_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 0 |

- 01: RNDIS Mode on RX endpoint 0
- 10: CDC Mode on RX endpoint 0
- 11: Generic RNDIS or Infinite Mode on RX endpoint 0 Each RX endpoint can be configured into 1 of 5 packet termination modes. Transparent mode (b00) * Supports USB endpoint sizes of o FS : 8,

16, 32, 64, and 1023 o HS : 64, 128, 512, and 1024 * Mentor Controller's RXMAXP/TXMAXP must be a valid USB endpoint size.

* With autoreq=3 XDMA will always generate a ReqPkt's at the end of the packet.

* With autoreq=1 XDMA will never generatate a ReqPkt at the end of the packet.

* Each USB packet is equivalent to a single CPPI DMA packet.

* Each received CPPI packet will be no larger than the USB max packet size (1023 bytes for FS, 1024 bytes for HS) and will be both

a SOP and EOP.

* Transmitted CPPI packets can be no larger than the USB max packet size.

* Primarily used for interrupt or isochronous endpoints, as CPU will receive an interrupt for every USB packet (if enabled). RNDIS mode (b01) * Supports USB endpoint sizes of o FS : 64 o HS : 64, 128, 512, and 1024 * Mentor controller's

RXMAXP/TXMAXP must be an integer multiple of the USB endpoint size.

* With autoreq=3 XDMA will always generate a ReqPkt's at the end of the packet.
* With autoreq=1 XDMA will continue the generation of ReqPkt's to the Mentor controller until a short packet is received.
* Supports transmission of CPPI packets larger than the USB max packet size.
* The end of a CPPI packet is defined by a USB short packet (a USB packet less than the USB max packet size).
* In the case where the CPPI packet is an exact multiple of the USB max packet size, a zero length terminating packet is used (XDMA recognizes this terminating packet on reception, and generates it on transmission).
* Designed for use in an RNDIS compliant networking type of USB device and bulk endpoints Linux CDC mode (b10) * Same as RNDIS mode, except terminating packet has
- 1-byte of 0 data.
* Designed for use with a Linux OS and USB driver stack and bulk endpoints.

Generic RNDIS mode (b11 and Generic RNDIS EP N Size register is greater than 0) * Same as RNDIS mode, except the end of a CPPI packet is determined by a USB short packet or when the value in the GENERIC RNDIS EPn SIZE Register is reached (Rx mode only)(i.e. Tx mode does not use this register).

The CPU configures this register with a value that is a multiple of the corresponding endpoint size.

* No terminating packet is used.
* Designed for general bulk endpoint use where specific packet terminations are not required.
* Transmit mode transfers only support FS or HS EP sizes through the XDMA and Mentor controller.
- The CPPI DMA size can be of any legal size as defined by the CPPI 4.1 specification.

Infinite mode (b11 and Generic RNDIS EP N Size register equal to 0) * Same as RNDIS mode, except the end of a CPPI packet is determined by a USB short packet or when the CPPI DMA closes up the packet after a defined number of buffers have been filled. This is defined in Rx Channel N Global Configuration Register bits 28:26 rx\_max\_buffer\_cnt.

* The CPPI DMA will ignore SOPs generated by the XDMA.
* The XDMA packet is assumed to be infinite.
* The XDMA starts the packet with a SOP (ignored by the CPPI DMA).
* The XDMA ends the packet when a short packet occurs.
* Short packets are defined when RXMAXP (0x14) is not equal to RXCOUNT (0x18).

<!-- image -->

## Table 16-86. USB0RXMODE Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|       |         |        |         | RXMAXP and RXCOUNT are both registers within the Mentor controller. * The XDMA will continue to request RX packets from the Mentor controller until a short packet is received. * When the CPPI is configured for chaining mode, the Buffer Descriptor sizes must be integer multiples of the RXMAXP size. * Transmit mode is not supported. * USB0 or USB1 Auto Req register should be set to AUTO REQ ALWAYS. |

## 16.4.2.15 USB0GENRNDISEP1 Register (offset = 1080h) [reset = 0h]

USB0GENRNDISEP1 is shown in Figure 16-78 and described in Table 16-87.

## Figure 16-78. USB0GENRNDISEP1 Register

| 31 30    | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|----------|---------------------------------------------------------------------------------|
| RESERVED | EP1_SIZE                                                                        |
| R/W-0h   | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-87. USB0GENRNDISEP1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP1_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.2.16 USB0GENRNDISEP2 Register (offset = 1084h) [reset = 0h]

USB0GENRNDISEP2 is shown in Figure 16-79 and described in Table 16-88.

## Figure 16-79. USB0GENRNDISEP2 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP2_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-88. USB0GENRNDISEP2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP2_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.2.17 USB0GENRNDISEP3 Register (offset = 1088h) [reset = 0h]

USB0GENRNDISEP3 is shown in Figure 16-80 and described in Table 16-89.

## Figure 16-80. USB0GENRNDISEP3 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP3_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-89. USB0GENRNDISEP3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP3_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.2.18 USB0GENRNDISEP4 Register (offset = 108Ch) [reset = 0h]

USB0GENRNDISEP4 is shown in Figure 16-81 and described in Table 16-90.

## Figure 16-81. USB0GENRNDISEP4 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP4_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-90. USB0GENRNDISEP4 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP4_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.2.19 USB0GENRNDISEP5 Register (offset = 1090h) [reset = 0h]

USB0GENRNDISEP5 is shown in Figure 16-82 and described in Table 16-91.

## Figure 16-82. USB0GENRNDISEP5 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP5_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-91. USB0GENRNDISEP5 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP5_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.2.20 USB0GENRNDISEP6 Register (offset = 1094h) [reset = 0h]

USB0GENRNDISEP6 is shown in Figure 16-83 and described in Table 16-92.

## Figure 16-83. USB0GENRNDISEP6 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP6_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-92. USB0GENRNDISEP6 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP6_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.2.21 USB0GENRNDISEP7 Register (offset = 1098h) [reset = 0h]

USB0GENRNDISEP7 is shown in Figure 16-84 and described in Table 16-93.

## Figure 16-84. USB0GENRNDISEP7 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP7_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-93. USB0GENRNDISEP7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP7_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.2.22 USB0GENRNDISEP8 Register (offset = 109Ch) [reset = 0h]

USB0GENRNDISEP8 is shown in Figure 16-85 and described in Table 16-94.

## Figure 16-85. USB0GENRNDISEP8 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP8_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-94. USB0GENRNDISEP8 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP8_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.2.23 USB0GENRNDISEP9 Register (offset = 10A0h) [reset = 0h]

USB0GENRNDISEP9 is shown in Figure 16-86 and described in Table 16-95.

## Figure 16-86. USB0GENRNDISEP9 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP9_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-95. USB0GENRNDISEP9 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP9_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.2.24 USB0GENRNDISEP10 Register (offset = 10A4h) [reset = 0h]

USB0GENRNDISEP10 is shown in Figure 16-87 and described in Table 16-96.

## Figure 16-87. USB0GENRNDISEP10 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP10_SIZE                                                                             |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-96. USB0GENRNDISEP10 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP10_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.2.25 USB0GENRNDISEP11 Register (offset = 10A8h) [reset = 0h]

USB0GENRNDISEP11 is shown in Figure 16-88 and described in Table 16-97.

## Figure 16-88. USB0GENRNDISEP11 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP11_SIZE                                                                             |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-97. USB0GENRNDISEP11 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP11_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.2.26 USB0GENRNDISEP12 Register (offset = 10ACh) [reset = 0h]

USB0GENRNDISEP12 is shown in Figure 16-89 and described in Table 16-98.

## Figure 16-89. USB0GENRNDISEP12 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP12_SIZE                                                                             |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-98. USB0GENRNDISEP12 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP12_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.2.27 USB0GENRNDISEP13 Register (offset = 10B0h) [reset = 0h]

USB0GENRNDISEP13 is shown in Figure 16-90 and described in Table 16-99.

## Figure 16-90. USB0GENRNDISEP13 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP13_SIZE                                                                             |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-99. USB0GENRNDISEP13 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP13_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.2.28 USB0GENRNDISEP14 Register (offset = 10B4h) [reset = 0h]

USB0GENRNDISEP14 is shown in Figure 16-91 and described in Table 16-100.

## Figure 16-91. USB0GENRNDISEP14 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   |
|-------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|
| RESERVED                                                                            | EP14_SIZE                                                                           |
| R/W-0h                                                                              | R/W-0h                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-100. USB0GENRNDISEP14 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP14_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

## 16.4.2.29 USB0GENRNDISEP15 Register (offset = 10B8h) [reset = 0h]

USB0GENRNDISEP15 is shown in Figure 16-92 and described in Table 16-101.

## Figure 16-92. USB0GENRNDISEP15 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP15_SIZE                                                                             |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-101. USB0GENRNDISEP15 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP15_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB0 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.2.30 USB0AUTOREQ Register (offset = 10D0h) [reset = 0h]

USB0AUTOREQ is shown in Figure 16-93 and described in Table 16-102.

## Figure 16-93. USB0AUTOREQ Register

| 31           | 30           | 29           | 28           | 27           | 26           | 25           | 24           |
|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| RESERVED     | RESERVED     | RX15_AUTOREQ | RX15_AUTOREQ | RX14_AUTOREQ | RX14_AUTOREQ | RX13_AUTOREQ | RX13_AUTOREQ |
| R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       |
| 23           | 22           | 21           | 20           | 19           | 18           | 17           | 16           |
| RX12_AUTOREQ | RX12_AUTOREQ | RX11_AUTOREQ | RX11_AUTOREQ | RX10_AUTOREQ | RX10_AUTOREQ | RX9_AUTOREQ  | RX9_AUTOREQ  |
| R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       |
| 15           | 14           | 13           | 12           | 11           | 10           | 9            | 8            |
| RX8_AUTOREQ  | RX8_AUTOREQ  | RX7_AUTOREQ  | RX7_AUTOREQ  | RX6_AUTOREQ  | RX6_AUTOREQ  | RX5_AUTOREQ  | RX5_AUTOREQ  |
| R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       |
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
| RX4_AUTOREQ  | RX4_AUTOREQ  | RX3_AUTOREQ  | RX3_AUTOREQ  | RX2_AUTOREQ  | RX2_AUTOREQ  | RX1_AUTOREQ  | RX1_AUTOREQ  |
| R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-102. USB0AUTOREQ Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                     |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED     | R/W    | 0h      |                                                                                                                 |
| 29-28 | RX15_AUTOREQ | R/W    | 0h      | RX endpoint 14 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always |
| 27-26 | RX14_AUTOREQ | R/W    | 0h      | RX endpoint 13 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always |
| 25-24 | RX13_AUTOREQ | R/W    | 0h      | RX endpoint 12 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always |
| 23-22 | RX12_AUTOREQ | R/W    | 0h      | RX endpoint 11 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always |
| 21-20 | RX11_AUTOREQ | R/W    | 0h      | RX endpoint 10 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always |
| 19-18 | RX10_AUTOREQ | R/W    | 0h      | RX endpoint 9 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always  |
| 17-16 | RX9_AUTOREQ  | R/W    | 0h      | RX endpoint 8 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always  |

Universal Serial Bus (USB)

<!-- image -->

## Table 16-102. USB0AUTOREQ Register Field Descriptions (continued)

| Bit   | Field       | Type   | Reset   | Description                                                                                                                            |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX8_AUTOREQ | R/W    | 0h      | RX endpoint 7 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 13-12 | RX7_AUTOREQ | R/W    | 0h      | RX endpoint 6 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 11-10 | RX6_AUTOREQ | R/W    | 0h      | RX endpoint 5 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 9-8   | RX5_AUTOREQ | R/W    | 0h      | RX endpoint 4 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 7-6   | RX4_AUTOREQ | R/W    | 0h      | RX endpoint 3 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 5-4   | RX3_AUTOREQ | R/W    | 0h      | RX endpoint 2 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 3-2   | RX2_AUTOREQ | R/W    | 0h      | RX endpoint 1 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 1-0   | RX1_AUTOREQ | R/W    | 0h      | RX endpoint 0 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always USB0 Auto Req Registers |

<!-- image -->

www.ti.com

## 16.4.2.31 USB0SRPFIXTIME Register (offset = 10D4h) [reset = 280DE80h]

USB0SRPFIXTIME is shown in Figure 16-94 and described in Table 16-103.

## Figure 16-94. USB0SRPFIXTIME Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SRPFIXTIME   |
|------|--------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-103. USB0SRPFIXTIME Register Field Descriptions

| Bit   | Field      | Type   | Reset    | Description                                                                          |
|-------|------------|--------|----------|--------------------------------------------------------------------------------------|
| 31-0  | SRPFIXTIME | R/W    | 280DE80h | SRP Fix maximum time in 60 MHz cycles. Default is 700 ms. USB0 SRP Fix Time Register |

Universal Serial Bus (USB)

## 16.4.2.32 USB0\_TDOWN Register (offset = 10D8h) [reset = 0h]

USB0\_TDOWN is shown in Figure 16-95 and described in Table 16-104.

## Figure 16-95. USB0\_TDOWN Register

<!-- image -->

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-104. USB0\_TDOWN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------|
| 31-17 | TX_TDOWN | R/W    | 0h      | Tx Endpoint Teardown. Write '1' to corresponding bit to set. Read as '0'. Bit 31 = Endpoint 15 ... Bit 17 = Endpoint 1 |
| 16    | RESERVED | R/W    | 0h      |                                                                                                                        |
| 15-1  | RX_TDOWN | R/W    | 0h      | RX Endpoint Teardown. Write '1' to corresponding bit to set. Read as '0'. Bit 15 = Endpoint 15 ... Bit 1 = Endpoint 1  |
| 0     | RESERVED | R/W    | 0h      |                                                                                                                        |

<!-- image -->

<!-- image -->

## 16.4.2.33 USB0UTMI Register (offset = 10E0h) [reset = 200002h]

USB0UTMI is shown in Figure 16-96 and described in Table 16-105.

## Figure 16-96. USB0UTMI Register

| 31            | 30             | 29         | 28             | 27         | 26             | 25           | 24       |
|---------------|----------------|------------|----------------|------------|----------------|--------------|----------|
| RESERVED      | RESERVED       | RESERVED   | RESERVED       | RESERVED   | RESERVED       | RESERVED     | RESERVED |
| R/W-0h        | R/W-0h         | R/W-0h     | R/W-0h         | R/W-0h     | R/W-0h         | R/W-0h       | R/W-0h   |
| 23            | 22             | 21         | 20             | 19         | 18             | 17           | 16       |
| TXBITSTUFFE N | TXBITSTUFFE NH | OTGDISABLE | VBUSVLDEXT SEL | VBUSVLDEXT | TXENABLEN      | FSXCVROWN ER | TXVALIDH |
| R/W-0h        | R/W-0h         | R/W-1h     | R/W-0h         | R/W-0h     | R/W-0h         | R/W-0h       | R/W-0h   |
| 15            | 14             | 13         | 12             | 11         | 10             | 9            | 8        |
| DATAINH       | DATAINH        | DATAINH    | DATAINH        | DATAINH    | DATAINH        | DATAINH      | DATAINH  |
| R/W-0h        | R/W-0h         | R/W-0h     | R/W-0h         | R/W-0h     | R/W-0h         | R/W-0h       | R/W-0h   |
| 7             | 6              | 5          | 4              | 3          | 2              | 1            | 0        |
|               |                | RESERVED   |                |            | WORDINTERF ACE | FSDATAEXT    | FSSE0EXT |
|               |                | R/W-0h     |                |            | R/W-0h         | R/W-1h       | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-105. USB0UTMI Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                               |
|-------|---------------|--------|---------|-----------------------------------------------------------|
| 31-24 | RESERVED      | R/W    | 0h      |                                                           |
| 23    | TXBITSTUFFEN  | R/W    | 0h      | PHY UTMI input for signal txbitstuffen                    |
| 22    | TXBITSTUFFENH | R/W    | 0h      | PHY UTMI input for signal txbitstuffenh                   |
| 21    | OTGDISABLE    | R/W    | 1h      | PHY UTMI input for signal otgdisable                      |
| 20    | VBUSVLDEXTSEL | R/W    | 0h      | PHY UTMI input for signal vbusvldextsel                   |
| 19    | VBUSVLDEXT    | R/W    | 0h      | PHY UTMI input for signal vbusvldext                      |
| 18    | TXENABLEN     | R/W    | 0h      | PHY UTMI input for signal txenablen                       |
| 17    | FSXCVROWNER   | R/W    | 0h      | PHY UTMI input for signal fsxcvrowner                     |
| 16    | TXVALIDH      | R/W    | 0h      | PHY UTMI input for signal txvalidh                        |
| 15-8  | DATAINH       | R/W    | 0h      | PHY UTMI input for signal datainh                         |
| 7-3   | RESERVED      | R/W    | 0h      |                                                           |
| 2     | WORDINTERFACE | R/W    | 0h      | PHY UTMI input for signal wordinterface                   |
| 1     | FSDATAEXT     | R/W    | 1h      | PHY UTMI input for signal fsdataext                       |
| 0     | FSSE0EXT      | R/W    | 0h      | PHY UTMI input for signal fsse0ext USB0 PHY UTMI Register |

Universal Serial Bus (USB)

## 16.4.2.34 USB0MGCUTMILB Register (offset = 10E4h) [reset = 82h]

USB0MGCUTMILB is shown in Figure 16-97 and described in Table 16-106.

## Figure 16-97. USB0MGCUTMILB Register

| 31        | 30       | 29       | 28       | 27           | 26         | 25          | 24       |
|-----------|----------|----------|----------|--------------|------------|-------------|----------|
|           | RESERVED |          | SUSPENDM | OPMODE       | OPMODE     | TXVALID     | XCVRSEL  |
|           | R/W-0h   |          | R-0h     | R-0h         | R-0h       | R-0h        | R-0h     |
| 23        | 22       | 21       | 20       | 19           | 18         | 17          | 16       |
| XCVRSEL   | TERMSEL  | DRVVBUS  | CHRGVBUS | DISCHRGVBU S | DPPULLDOWN | DMPULLDOW N | IDPULLUP |
| R-0h      | R-0h     | R-0h     | R-0h     | R-0h         | R-0h       | R-0h        | R-0h     |
| 15        | 14       | 13       | 12       | 11           | 10         | 9           | 8        |
| RESERVED  | RESERVED | RESERVED |          | IDDIG        | HOSTDISCON | SESSEND     | AVALID   |
|           | R/W-0h   |          |          | R/W-0h       | R/W-0h     | R/W-0h      | R/W-0h   |
| 7         | 6        | 5        | 4        | 3            | 2          | 1           | 0        |
| VBUSVALID | RXERROR  | RESERVED | RESERVED | LINESTATE    | LINESTATE  | RESERVED    | RESERVED |
| R/W-1h    | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h       | R/W-0h     | R/W-2h      | R/W-2h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-106. USB0MGCUTMILB Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                  |
|-------|-------------|--------|---------|----------------------------------------------|
| 31-29 | RESERVED    | R/W    | 0h      |                                              |
| 28    | SUSPENDM    | R      | 0h      | loopback test observed value for suspendm    |
| 27-26 | OPMODE      | R      | 0h      | loopback test observed value for opmode      |
| 25    | TXVALID     | R      | 0h      | loopback test observed value for txvalid     |
| 24-23 | XCVRSEL     | R      | 0h      | loopback test observed value for xcvrsel     |
| 22    | TERMSEL     | R      | 0h      | loopback test observed value for termsel     |
| 21    | DRVVBUS     | R      | 0h      | loopback test observed value for drvvbus     |
| 20    | CHRGVBUS    | R      | 0h      | loopback test observed value for chrgvbus    |
| 19    | DISCHRGVBUS | R      | 0h      | loopback test observed value for dischrgvbus |
| 18    | DPPULLDOWN  | R      | 0h      | loopback test observed value for dppulldown  |
| 17    | DMPULLDOWN  | R      | 0h      | loopback test observed value for dmpulldown  |
| 16    | IDPULLUP    | R      | 0h      | loopback test observed value for idpullup    |
| 15-12 | RESERVED    | R/W    | 0h      |                                              |
| 11    | IDDIG       | R/W    | 0h      | loopback test value for iddig                |
| 10    | HOSTDISCON  | R/W    | 0h      | loopback test value for hostdiscon           |
| 9     | SESSEND     | R/W    | 0h      | loopback test value for sessend              |
| 8     | AVALID      | R/W    | 0h      | loopback test value for avalid               |
| 7     | VBUSVALID   | R/W    | 1h      | loopback test value for vbusvalid            |
| 6     | RXERROR     | R/W    | 0h      | loopback test value for rxerror              |
| 5-4   | RESERVED    | R/W    | 0h      |                                              |
| 3-2   | LINESTATE   | R/W    | 0h      | loopback test value for linestate            |
| 1-0   | RESERVED    | R/W    | 2h      |                                              |

<!-- image -->