<!-- image -->

## 16.4.2.35 USB0MODE Register (offset = 10E8h) [reset = 100h]

USB0MODE is shown in Figure 16-98 and described in Table 16-107.

## Figure 16-98. USB0MODE Register

| 31        | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|-----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h    | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23        | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h    | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15        | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | IDDIG    |
| R/W-0h    | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-1h   |
| 7         | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| IDDIG_MUX |          |          | RESERVED |          |          | PHY_TEST | LOOPBACK |
| R/W-0h    |          |          | R/W-0h   |          |          | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-107. USB0MODE Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                      |
|-------|-----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED  | R/W    | 0h      |                                                                                                                                                  |
| 8     | IDDIG     | R/W    | 1h      | MGC input value for iddig 0=A type 1=B type                                                                                                      |
| 7     | IDDIG_MUX | R/W    | 0h      | Multiplexer control for IDDIG signal going to the controller. 0 = IDDIG is from PHY0. 1 = IDDIG is from bit 8 (IDDIG) of this USB0MODE register. |
| 6-2   | RESERVED  | R/W    | 0h      |                                                                                                                                                  |
| 1     | PHY_TEST  | R/W    | 0h      | PHY test 0 = Normal mode 1 = PHY test mode                                                                                                       |
| 0     | LOOPBACK  | R/W    | 0h      | Loopback test mode 0 = Normal mode 1 = Loopback test mode USB0 Mode Register                                                                     |

## 16.4.3 USB1\_CTRL Registers

Table 16-108 lists the memory-mapped registers for the USB1\_CTRL. All register offset addresses not listed in Table 16-108 should be considered as reserved locations and the register contents should not be modified.

## Table 16-108. USB1\_CTRL Registers

| Offset   | Acronym           | Register Name Section   |
|----------|-------------------|-------------------------|
| 1800h    | USB1REV           | Section 16.4.3.1        |
| 1814h    | USB1CTRL          | Section 16.4.3.2        |
| 1818h    | USB1STAT          | Section 16.4.3.3        |
| 1820h    | USB1IRQMSTAT      | Section 16.4.3.4        |
| 1828h    | USB1IRQSTATRAW0   | Section 16.4.3.5        |
| 182Ch    | USB1IRQSTATRAW1   | Section 16.4.3.6        |
| 1830h    | USB1IRQSTAT0      | Section 16.4.3.7        |
| 1834h    | USB1IRQSTAT1      | Section 16.4.3.8        |
| 1838h    | USB1IRQENABLESET0 | Section 16.4.3.9        |
| 183Ch    | USB1IRQENABLESET1 | Section 16.4.3.10       |

Table 16-108. USB1\_CTRL Registers (continued)

| Offset   | Acronym           | Register Name Section   |
|----------|-------------------|-------------------------|
| 1840h    | USB1IRQENABLECLR0 | Section 16.4.3.11       |
| 1844h    | USB1IRQENABLECLR1 | Section 16.4.3.12       |
| 1870h    | USB1TXMODE        | Section 16.4.3.13       |
| 1874h    | USB1RXMODE        | Section 16.4.3.14       |
| 1880h    | USB1GENRNDISEP1   | Section 16.4.3.15       |
| 1884h    | USB1GENRNDISEP2   | Section 16.4.3.16       |
| 1888h    | USB1GENRNDISEP3   | Section 16.4.3.17       |
| 188Ch    | USB1GENRNDISEP4   | Section 16.4.3.18       |
| 1890h    | USB1GENRNDISEP5   | Section 16.4.3.19       |
| 1894h    | USB1GENRNDISEP6   | Section 16.4.3.20       |
| 1898h    | USB1GENRNDISEP7   | Section 16.4.3.21       |
| 189Ch    | USB1GENRNDISEP8   | Section 16.4.3.22       |
| 18A0h    | USB1GENRNDISEP9   | Section 16.4.3.23       |
| 18A4h    | USB1GENRNDISEP10  | Section 16.4.3.24       |
| 18A8h    | USB1GENRNDISEP11  | Section 16.4.3.25       |
| 18ACh    | USB1GENRNDISEP12  | Section 16.4.3.26       |
| 18B0h    | USB1GENRNDISEP13  | Section 16.4.3.27       |
| 18B4h    | USB1GENRNDISEP14  | Section 16.4.3.28       |
| 18B8h    | USB1GENRNDISEP15  | Section 16.4.3.29       |
| 18D0h    | USB1AUTOREQ       | Section 16.4.3.30       |
| 18D4h    | USB1SRPFIXTIME    | Section 16.4.3.31       |
| 18D8h    | USB1TDOWN         | Section 16.4.3.32       |
| 18E0h    | USB1UTMI          | Section 16.4.3.33       |
| 18E4h    | USB1UTMILB        | Section 16.4.3.34       |
| 18E8h    | USB1MODE          | Section 16.4.3.35       |

<!-- image -->

<!-- image -->

## 16.4.3.1 USB1REV Register (offset = 1800h) [reset = 4EA20800h]

USB1REV is shown in Figure 16-99 and described in Table 16-109.

## Figure 16-99. USB1REV Register

| 31     | 30     | 29       | 28       | 27     | 26      | 25      | 24      | 23     | 22     | 21     | 20     | 19     | 18     | 17     | 16     |        |
|--------|--------|----------|----------|--------|---------|---------|---------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
| SCHEME | SCHEME | RESERVED | RESERVED | FUNC   | FUNC    | FUNC    | FUNC    | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   |
| R-1h   | R-1h   | R-0h     | R-0h     | R-EA2h | R-EA2h  | R-EA2h  | R-EA2h  | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h |
| 15     | 14     | 13       | 12       | 11     | 10      | 9       | 8       | 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |        |
|        |        | R_RTL    | R_RTL    |        | X_MAJOR | X_MAJOR | X_MAJOR | CUSTOM | CUSTOM |        |        |        |        |        |        |        |
|        |        | R-1h     | R-1h     |        | R-0h    | R-0h    | R-0h    | R-0h   | R-0h   |        |        |        |        |        |        |        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-109. USB1REV Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                             |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------|
| 31-30 | SCHEME   | R      | 1h      | Used to distinguish between legacy interface scheme and current. 0 = Legacy 1 = Current |
| 29-28 | RESERVED | R      | 0h      |                                                                                         |
| 27-16 | FUNC     | R      | EA2h    | Function indicates a software compatible module family.                                 |
| 15-11 | R_RTL    | R      | 1h      | RTL revision. Will vary depending on release.                                           |
| 10-8  | X_MAJOR  | R      | 0h      | Major revision.                                                                         |
| 7-6   | CUSTOM   | R      | 0h      | Custom revision                                                                         |
| 5-0   | Y_MINOR  | R      | 0h      | Minor revision. USB1 Revision Register                                                  |

## 16.4.3.2 USB1CTRL Register (offset = 1814h) [reset = 0h]

USB1CTRL is shown in Figure 16-100 and described in Table 16-110.

## Figure 16-100. USB1CTRL Register

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

Table 16-110. USB1CTRL Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|-----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | DIS_DEB               | R/W    | 0h      | Disable the VBUS debouncer circuit fix                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 30    | DIS_SRP               | R/W    | 0h      | Disable the OTG Session Request Protocol (SRP) AVALID circuit fix. When enabled (=0) this allows additional time for the VBUS signal to be measured against the VBUS thresholds. The time is specified in the USB0 SRP Fix Time Register.                                                                                                                                                                                                                                                                                                           |
| 29-6  | RESERVED              | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 5     | SOFT_RESET_ISOLATIO N | R/W    | 0h      | Soft reset isolation. When high this bit forces all USB1 signals that connect to the USBSS to known values during a soft reset via bit 0 of this register. This bit should be set high prior to setting bit 0 and cleared after bit 0 is cleared.                                                                                                                                                                                                                                                                                                   |
| 4     | RNDIS                 | R/W    | 0h      | Global RNDIS mode enable for all endpoints.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 3     | UINT                  | R/W    | 0h      | USB interrupt enable 1 = Legacy 0 = Current (recommended setting) If uint is set high, then the mentor controller generic interrupt for USB[9] will be generated (if enabled). This requires S/W to read the mentor controller's registers to determine which interrupt from USB[0] to USB[7] that occurred. If uint is set low, then the usb20otg_f module will automatically read the mentor controller's registers and set the appropriate interrupt from USB[0] to USB[7] (if enabled). The generic interrupt for USB[9] will not be generated. |
| 2     | RESERVED              | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 1     | CLKFACK               | R/W    | 0h      | Clock stop fast ack enable.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |

<!-- image -->

<!-- image -->

## Table 16-110. USB1CTRL Register Field Descriptions (continued)

|   Bit | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     0 | SOFT_RESET | R/W    | 0h      | Software reset of USB1. Write 0 = no action Write 1 = Initiate software reset Read 0 = Reset done, no action Read 1 = Reset ongoing Both the soft_reset and soft_reset_isolation bits should be asserted simultaneously. This will cause the following sequence of actions to occur over multiple cycles: - All USB0 output signals will go to a known constant value via multiplexers. This removes the possibility of timing errors due to the asynchronous resets. - All USB0 registers will be reset. - The USB0 resets will be de-asserted. - The reset isolation multiplexer inputs will be de-selected. - Both the soft_reset and soft_reset_isolation bits will be automatically cleared. Setting only the soft_reset_isolation bit will cause all USB0 output signals to go to a known constant value via multiplexers. This will prevent future access to USB0. To clear this condition the USBSS must be reset via a hard or soft reset. |

Universal Serial Bus (USB)

## 16.4.3.3 USB1STAT Register (offset = 1818h) [reset = 0h]

USB1STAT is shown in Figure 16-101 and described in Table 16-111.

## Figure 16-101. USB1STAT Register

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

## Table 16-111. USB1STAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                |
|-------|----------|--------|---------|--------------------------------------------|
| 31-1  | RESERVED | R      | 0h      |                                            |
| 0     | DRVVBUS  | R      | 0h      | Current DRVVBUS value USB1 Status Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.3.4 USB1IRQMSTAT Register (offset = 1820h) [reset = 0h]

USB1IRQMSTAT is shown in Figure 16-102 and described in Table 16-112.

## Figure 16-102. USB1IRQMSTAT Register

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

## Table 16-112. USB1IRQMSTAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                               |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED | R      | 0h      |                                                                                                                           |
| 1     | BANK1    | R      | 0h      | 0: No events pending from IRQ_STATUS_1 1: At least one event is pending from IRQ_STATUS_1                                 |
| 0     | BANK0    | R      | 0h      | 0: No events pending from IRQ_STATUS_0 1: At least one event is pending from IRQ_STATUS_0 USB1 IRQ_MERGED_STATUS Register |

## 16.4.3.5 USB1IRQSTATRAW0 Register (offset = 1828h) [reset = 0h]

USB1IRQSTATRAW0 is shown in Figure 16-103 and described in Table 16-113.

## Figure 16-103. USB1IRQSTATRAW0 Register

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

## Table 16-113. USB1IRQSTATRAW0 Register Field Descriptions

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

## Table 16-113. USB1IRQSTATRAW0 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                       |
|-------|---------|--------|---------|-------------------------------------------------------------------|
|     5 | TX_EP_5 | R/W    | 0h      | Interrupt status for TX endpoint 5                                |
|     4 | TX_EP_4 | R/W    | 0h      | Interrupt status for TX endpoint 4                                |
|     3 | TX_EP_3 | R/W    | 0h      | Interrupt status for TX endpoint 3                                |
|     2 | TX_EP_2 | R/W    | 0h      | Interrupt status for TX endpoint 2                                |
|     1 | TX_EP_1 | R/W    | 0h      | Interrupt status for TX endpoint 1                                |
|     0 | TX_EP_0 | R/W    | 0h      | Interrupt status for TX endpoint 0 USB1 IRQ_STATUS_RAW_0 Register |

Universal Serial Bus (USB)

## 16.4.3.6 USB1IRQSTATRAW1 Register (offset = 182Ch) [reset = 0h]

USB1IRQSTATRAW1 is shown in Figure 16-104 and described in Table 16-114.

## Figure 16-104. USB1IRQSTATRAW1 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25        | 24        |
|------------|------------|------------|------------|------------|------------|-----------|-----------|
| TX_FIFO_15 | TX_FIFO_14 | TX_FIFO_13 | TX_FIFO_12 | TX_FIFO_11 | TX_FIFO_10 | TX_FIFO_9 | TX_FIFO_8 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 23         | 22         | 21         | 20         | 19         | 18         | 17        | 16        |
| TX_FIFO_7  | TX_FIFO_6  | TX_FIFO_5  | TX_FIFO_4  | TX_FIFO_3  | TX_FIFO_2  | TX_FIFO_1 | RESERVED  |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 15         | 14         | 13         | 12         | 11         | 10         | 9         | 8         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | USB_9     | USB_8     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
| USB_7      | USB_6      | USB_5      | USB_4      | USB_3      | USB_2      | USB_1     | USB_0     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-114. USB1IRQSTATRAW1 Register Field Descriptions

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
| 16-10 | RESERVED   | R/W    | 0h      |                                                                                             |
| 9     | USB_9      | R/W    | 0h      | Interrupt status for Mentor controller USB_INT generic interrupt                            |
| 8     | USB_8      | R/W    | 0h      | Interrupt status for DRVVBUS level change                                                   |
| 7     | USB_7      | R/W    | 0h      | Interrupt status for VBUS < VBUS valid threshold                                            |
| 6     | USB_6      | R/W    | 0h      | Interrupt status for SRP detected                                                           |
| 5     | USB_5      | R/W    | 0h      | Interrupt status for device disconnected (host mode)                                        |
| 4     | USB_4      | R/W    | 0h      | Interrupt status for device connected (host mode)                                           |
| 3     | USB_3      | R/W    | 0h      | Interrupt status for SOF started                                                            |
| 2     | USB_2      | R/W    | 0h      | Interrupt status for Reset signaling detected (peripheral mode) Babble detected (host mode) |
| 1     | USB_1      | R/W    | 0h      | Interrupt status for Resume signaling detected                                              |

<!-- image -->

<!-- image -->

## Table 16-114. USB1IRQSTATRAW1 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                    |
|-------|---------|--------|---------|--------------------------------------------------------------------------------|
|     0 | USB_0   | R/W    | 0h      | Interrupt status for Suspend signaling detected USB1 IRQ_STATUS_RAW_1 Register |

Universal Serial Bus (USB)

## 16.4.3.7 USB1IRQSTAT0 Register (offset = 1830h) [reset = 0h]

USB1IRQSTAT0 is shown in Figure 16-105 and described in Table 16-115.

## Figure 16-105. USB1IRQSTAT0 Register

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

## Table 16-115. USB1IRQSTAT0 Register Field Descriptions

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

## Table 16-115. USB1IRQSTAT0 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                   |
|-------|---------|--------|---------|---------------------------------------------------------------|
|     5 | TX_EP_5 | R/W    | 0h      | Interrupt status for TX endpoint 5                            |
|     4 | TX_EP_4 | R/W    | 0h      | Interrupt status for TX endpoint 4                            |
|     3 | TX_EP_3 | R/W    | 0h      | Interrupt status for TX endpoint 3                            |
|     2 | TX_EP_2 | R/W    | 0h      | Interrupt status for TX endpoint 2                            |
|     1 | TX_EP_1 | R/W    | 0h      | Interrupt status for TX endpoint 1                            |
|     0 | TX_EP_0 | R/W    | 0h      | Interrupt status for TX endpoint 0 USB1 IRQ_STATUS_0 Register |

Universal Serial Bus (USB)

## 16.4.3.8 USB1IRQSTAT1 Register (offset = 1834h) [reset = 0h]

USB1IRQSTAT1 is shown in Figure 16-106 and described in Table 16-116.

## Figure 16-106. USB1IRQSTAT1 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25        | 24        |
|------------|------------|------------|------------|------------|------------|-----------|-----------|
| TX_FIFO_15 | TX_FIFO_14 | TX_FIFO_13 | TX_FIFO_12 | TX_FIFO_11 | TX_FIFO_10 | TX_FIFO_9 | TX_FIFO_8 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 23         | 22         | 21         | 20         | 19         | 18         | 17        | 16        |
| TX_FIFO_7  | TX_FIFO_6  | TX_FIFO_5  | TX_FIFO_4  | TX_FIFO_3  | TX_FIFO_2  | TX_FIFO_1 | RESERVED  |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 15         | 14         | 13         | 12         | 11         | 10         | 9         | 8         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | USB_9     | USB_8     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
| USB_7      | USB_6      | USB_5      | USB_4      | USB_3      | USB_2      | USB_1     | USB_0     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-116. USB1IRQSTAT1 Register Field Descriptions

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
| 16-10 | RESERVED   | R/W    | 0h      |                                                                                             |
| 9     | USB_9      | R/W    | 0h      | Interrupt status for Mentor controller USB_INT generic interrupt                            |
| 8     | USB_8      | R/W    | 0h      | Interrupt status for DRVVBUS level change                                                   |
| 7     | USB_7      | R/W    | 0h      | Interrupt status for VBUS < VBUS valid threshold                                            |
| 6     | USB_6      | R/W    | 0h      | Interrupt status for SRP detected                                                           |
| 5     | USB_5      | R/W    | 0h      | Interrupt status for device disconnected (host mode)                                        |
| 4     | USB_4      | R/W    | 0h      | Interrupt status for device connected (host mode)                                           |
| 3     | USB_3      | R/W    | 0h      | Interrupt status for SOF started                                                            |
| 2     | USB_2      | R/W    | 0h      | Interrupt status for Reset signaling detected (peripheral mode) Babble detected (host mode) |
| 1     | USB_1      | R/W    | 0h      | Interrupt status for Resume signaling detected                                              |

<!-- image -->

<!-- image -->

## Table 16-116. USB1IRQSTAT1 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                |
|-------|---------|--------|---------|----------------------------------------------------------------------------|
|     0 | USB_0   | R/W    | 0h      | Interrupt status for Suspend signaling detected USB1 IRQ_STATUS_1 Register |

Universal Serial Bus (USB)

## 16.4.3.9 USB1IRQENABLESET0 Register (offset = 1838h) [reset = 0h]

USB1IRQENABLESET0 is shown in Figure 16-107 and described in Table 16-117.

## Figure 16-107. USB1IRQENABLESET0 Register

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

## Table 16-117. USB1IRQENABLESET0 Register Field Descriptions

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

## Table 16-117. USB1IRQENABLESET0 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                       |
|-------|---------|--------|---------|-------------------------------------------------------------------|
|     5 | TX_EP_5 | R/W    | 0h      | Interrupt enable for TX endpoint 5                                |
|     4 | TX_EP_4 | R/W    | 0h      | Interrupt enable for TX endpoint 4                                |
|     3 | TX_EP_3 | R/W    | 0h      | Interrupt enable for TX endpoint 3                                |
|     2 | TX_EP_2 | R/W    | 0h      | Interrupt enable for TX endpoint 2                                |
|     1 | TX_EP_1 | R/W    | 0h      | Interrupt enable for TX endpoint 1                                |
|     0 | TX_EP_0 | R/W    | 0h      | Interrupt enable for TX endpoint 0 USB1 IRQ_ENABLE_SET_0 Register |

Universal Serial Bus (USB)

## 16.4.3.10 USB1IRQENABLESET1 Register (offset = 183Ch) [reset = 0h]

USB1IRQENABLESET1 is shown in Figure 16-108 and described in Table 16-118.

## Figure 16-108. USB1IRQENABLESET1 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25        | 24        |
|------------|------------|------------|------------|------------|------------|-----------|-----------|
| TX_FIFO_15 | TX_FIFO_14 | TX_FIFO_13 | TX_FIFO_12 | TX_FIFO_11 | TX_FIFO_10 | TX_FIFO_9 | TX_FIFO_8 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 23         | 22         | 21         | 20         | 19         | 18         | 17        | 16        |
| TX_FIFO_7  | TX_FIFO_6  | TX_FIFO_5  | TX_FIFO_4  | TX_FIFO_3  | TX_FIFO_2  | TX_FIFO_1 | RESERVED  |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 15         | 14         | 13         | 12         | 11         | 10         | 9         | 8         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | USB_9     | USB_8     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
| USB_7      | USB_6      | USB_5      | USB_4      | USB_3      | USB_2      | USB_1     | USB_0     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-118. USB1IRQENABLESET1 Register Field Descriptions

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
| 16-10 | RESERVED   | R/W    | 0h      |                                                                                             |
| 9     | USB_9      | R/W    | 0h      | Interrupt enable for Mentor controller USB_INT generic interrupt                            |
| 8     | USB_8      | R/W    | 0h      | Interrupt enable for DRVVBUS level change                                                   |
| 7     | USB_7      | R/W    | 0h      | Interrupt enable for VBUS < VBUS valid threshold                                            |
| 6     | USB_6      | R/W    | 0h      | Interrupt enable for SRP detected                                                           |
| 5     | USB_5      | R/W    | 0h      | Interrupt enable for device disconnected (host mode)                                        |
| 4     | USB_4      | R/W    | 0h      | Interrupt enable for device connected (host mode)                                           |
| 3     | USB_3      | R/W    | 0h      | Interrupt enable for SOF started                                                            |
| 2     | USB_2      | R/W    | 0h      | Interrupt enable for Reset signaling detected (peripheral mode) Babble detected (host mode) |
| 1     | USB_1      | R/W    | 0h      | Interrupt enable for Resume signaling detected                                              |

<!-- image -->

<!-- image -->

## Table 16-118. USB1IRQENABLESET1 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                    |
|-------|---------|--------|---------|--------------------------------------------------------------------------------|
|     0 | USB_0   | R/W    | 0h      | Interrupt enable for Suspend signaling detected USB1 IRQ_ENABLE_SET_1 Register |

Universal Serial Bus (USB)

## 16.4.3.11 USB1IRQENABLECLR0 Register (offset = 1840h) [reset = 0h]

USB1IRQENABLECLR0 is shown in Figure 16-109 and described in Table 16-119.

## Figure 16-109. USB1IRQENABLECLR0 Register

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

## Table 16-119. USB1IRQENABLECLR0 Register Field Descriptions

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

## Table 16-119. USB1IRQENABLECLR0 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                       |
|-------|---------|--------|---------|-------------------------------------------------------------------|
|     5 | TX_EP_5 | R/W    | 0h      | Interrupt enable for TX endpoint 5                                |
|     4 | TX_EP_4 | R/W    | 0h      | Interrupt enable for TX endpoint 4                                |
|     3 | TX_EP_3 | R/W    | 0h      | Interrupt enable for TX endpoint 3                                |
|     2 | TX_EP_2 | R/W    | 0h      | Interrupt enable for TX endpoint 2                                |
|     1 | TX_EP_1 | R/W    | 0h      | Interrupt enable for TX endpoint 1                                |
|     0 | TX_EP_0 | R/W    | 0h      | Interrupt enable for TX endpoint 0 USB1 IRQ_ENABLE_CLR_0 Register |

Universal Serial Bus (USB)

## 16.4.3.12 USB1IRQENABLECLR1 Register (offset = 1844h) [reset = 0h]

USB1IRQENABLECLR1 is shown in Figure 16-110 and described in Table 16-120.

## Figure 16-110. USB1IRQENABLECLR1 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25        | 24        |
|------------|------------|------------|------------|------------|------------|-----------|-----------|
| TX_FIFO_15 | TX_FIFO_14 | TX_FIFO_13 | TX_FIFO_12 | TX_FIFO_11 | TX_FIFO_10 | TX_FIFO_9 | TX_FIFO_8 |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 23         | 22         | 21         | 20         | 19         | 18         | 17        | 16        |
| TX_FIFO_7  | TX_FIFO_6  | TX_FIFO_5  | TX_FIFO_4  | TX_FIFO_3  | TX_FIFO_2  | TX_FIFO_1 | RESERVED  |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 15         | 14         | 13         | 12         | 11         | 10         | 9         | 8         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | USB_9     | USB_8     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
| USB_7      | USB_6      | USB_5      | USB_4      | USB_3      | USB_2      | USB_1     | USB_0     |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-120. USB1IRQENABLECLR1 Register Field Descriptions

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
| 16-10 | RESERVED   | R/W    | 0h      |                                                                                             |
| 9     | USB_9      | R/W    | 0h      | Interrupt enable for Mentor controller USB_INT generic interrupt                            |
| 8     | USB_8      | R/W    | 0h      | Interrupt enable for DRVVBUS level change                                                   |
| 7     | USB_7      | R/W    | 0h      | Interrupt enable for VBUS < VBUS valid threshold                                            |
| 6     | USB_6      | R/W    | 0h      | Interrupt enable for SRP detected                                                           |
| 5     | USB_5      | R/W    | 0h      | Interrupt enable for device disconnected (host mode)                                        |
| 4     | USB_4      | R/W    | 0h      | Interrupt enable for device connected (host mode)                                           |
| 3     | USB_3      | R/W    | 0h      | Interrupt enable for SOF started                                                            |
| 2     | USB_2      | R/W    | 0h      | Interrupt enable for Reset signaling detected (peripheral mode) Babble detected (host mode) |
| 1     | USB_1      | R/W    | 0h      | Interrupt enable for Resume signaling detected                                              |

<!-- image -->

<!-- image -->

## Table 16-120. USB1IRQENABLECLR1 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                    |
|-------|---------|--------|---------|--------------------------------------------------------------------------------|
|     0 | USB_0   | R/W    | 0h      | Interrupt enable for Suspend signaling detected USB1 IRQ_ENABLE_CLR_1 Register |

## 16.4.3.13 USB1TXMODE Register (offset = 1870h) [reset = 0h]

USB1TXMODE is shown in Figure 16-111 and described in Table 16-121.

## Figure 16-111. USB1TXMODE Register

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

## Table 16-121. USB1TXMODE Register Field Descriptions

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

## Table 16-121. USB1TXMODE Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                        |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 11-10 | TX6_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 5 01: RNDIS Mode on TX endpoint 5 10: CDC Mode on TX endpoint 5 11: Generic RNDIS Mode on TX endpoint 5                        |
| 9-8   | TX5_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 4 01: RNDIS Mode on TX endpoint 4 10: CDC Mode on TX endpoint 4 11: Generic RNDIS Mode on TX endpoint 4                        |
| 7-6   | TX4_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 3 01: RNDIS Mode on TX endpoint 3 10: CDC Mode on TX endpoint 3 11: Generic RNDIS Mode on TX endpoint 3                        |
| 5-4   | TX3_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 2 01: RNDIS Mode on TX endpoint 2 10: CDC Mode on TX endpoint 2 11: Generic RNDIS Mode on TX endpoint 2                        |
| 3-2   | TX2_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 1 01: RNDIS Mode on TX endpoint 1 10: CDC Mode on TX endpoint 1 11: Generic RNDIS Mode on TX endpoint 1                        |
| 1-0   | TX1_MODE | R/W    | 0h      | 00: Transparent Mode on TX endpoint 0 01: RNDIS Mode on TX endpoint 0 10: CDC Mode on TX endpoint 0 11: Generic RNDIS Mode on TX endpoint 0 USB1 Tx Mode Registers |

Universal Serial Bus (USB)

## 16.4.3.14 USB1RXMODE Register (offset = 1874h) [reset = 0h]

USB1RXMODE is shown in Figure 16-112 and described in Table 16-122.

## Figure 16-112. USB1RXMODE Register

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

## Table 16-122. USB1RXMODE Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                 |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED  | R/W    | 0h      |                                                                                                                                                             |
| 29-28 | RX15_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 14 01: RNDIS Mode on RX endpoint 14 10: CDC Mode on RX endpoint 14 11: Generic RNDIS or Infinite Mode on RX endpoint 14 |
| 27-26 | RX14_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 13 01: RNDIS Mode on RX endpoint 13 10: CDC Mode on RX endpoint 13 11: Generic RNDIS or Infinite Mode on RX endpoint 13 |
| 25-24 | RX13_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 12 01: RNDIS Mode on RX endpoint 12 10: CDC Mode on RX endpoint 12 11: Generic RNDIS or Infinite Mode on RX endpoint 12 |
| 23-22 | RX12_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 11 01: RNDIS Mode on RX endpoint 11 10: CDC Mode on RX endpoint 11 11: Generic RNDIS or Infinite Mode on RX endpoint 11 |
| 21-20 | RX11_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 10 01: RNDIS Mode on RX endpoint 10 10: CDC Mode on RX endpoint 10 11: Generic RNDIS or Infinite Mode on RX endpoint 10 |
| 19-18 | RX10_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 9 01: RNDIS Mode on RX endpoint 9 10: CDC Mode on RX endpoint 9 11: Generic RNDIS or Infinite Mode on RX endpoint 9     |
| 17-16 | RX9_MODE  | R/W    | 0h      | 00: Transparent Mode on RX endpoint 8 01: RNDIS Mode on RX endpoint 8 10: CDC Mode on RX endpoint 8 11: Generic RNDIS or Infinite Mode on RX endpoint 8     |
| 15-14 | RX8_MODE  | R/W    | 0h      | 00: Transparent Mode on RX endpoint 7 01: RNDIS Mode on RX endpoint 7 10: CDC Mode on RX endpoint 7 11: Generic RNDIS or Infinite Mode on RX endpoint 7     |
| 13-12 | RX7_MODE  | R/W    | 0h      | 00: Transparent Mode on RX endpoint 6 01: RNDIS Mode on RX endpoint 6 10: CDC Mode on RX endpoint 6 11: Generic RNDIS or Infinite Mode on RX endpoint 6     |

<!-- image -->

<!-- image -->

## Table 16-122. USB1RXMODE Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 11-10 | RX6_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 5 01: RNDIS Mode on RX endpoint 5 10: CDC Mode on RX endpoint 5 11: Generic RNDIS or Infinite Mode on RX endpoint 5                        |
| 9-8   | RX5_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 4 01: RNDIS Mode on RX endpoint 4 10: CDC Mode on RX endpoint 4 11: Generic RNDIS or Infinite Mode on RX endpoint 4                        |
| 7-6   | RX4_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 3 01: RNDIS Mode on RX endpoint 3 10: CDC Mode on RX endpoint 3 11: Generic RNDIS or Infinite Mode on RX endpoint 3                        |
| 5-4   | RX3_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 2 01: RNDIS Mode on RX endpoint 2 10: CDC Mode on RX endpoint 2 11: Generic RNDIS or Infinite Mode on RX endpoint 2                        |
| 3-2   | RX2_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 1 01: RNDIS Mode on RX endpoint 1 10: CDC Mode on RX endpoint 1 11: Generic RNDIS or Infinite Mode on RX endpoint 1                        |
| 1-0   | RX1_MODE | R/W    | 0h      | 00: Transparent Mode on RX endpoint 0 01: RNDIS Mode on RX endpoint 0 10: CDC Mode on RX endpoint 0 11: Generic RNDIS or Infinite Mode on RX endpoint 0 USB1 Rx Mode Registers |

Universal Serial Bus (USB)

## 16.4.3.15 USB1GENRNDISEP1 Register (offset = 1880h) [reset = 0h]

USB1GENRNDISEP1 is shown in Figure 16-113 and described in Table 16-123.

## Figure 16-113. USB1GENRNDISEP1 Register

| 31 30    | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|----------|---------------------------------------------------------------------------------|
| RESERVED | EP1_SIZE                                                                        |
| R/W-0h   | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-123. USB1GENRNDISEP1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP1_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.3.16 USB1GENRNDISEP2 Register (offset = 1884h) [reset = 0h]

USB1GENRNDISEP2 is shown in Figure 16-114 and described in Table 16-124.

## Figure 16-114. USB1GENRNDISEP2 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP2_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-124. USB1GENRNDISEP2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP2_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.3.17 USB1GENRNDISEP3 Register (offset = 1888h) [reset = 0h]

USB1GENRNDISEP3 is shown in Figure 16-115 and described in Table 16-125.

## Figure 16-115. USB1GENRNDISEP3 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP3_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-125. USB1GENRNDISEP3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP3_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.3.18 USB1GENRNDISEP4 Register (offset = 188Ch) [reset = 0h]

USB1GENRNDISEP4 is shown in Figure 16-116 and described in Table 16-126.

## Figure 16-116. USB1GENRNDISEP4 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP4_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-126. USB1GENRNDISEP4 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP4_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.3.19 USB1GENRNDISEP5 Register (offset = 1890h) [reset = 0h]

USB1GENRNDISEP5 is shown in Figure 16-117 and described in Table 16-127.

## Figure 16-117. USB1GENRNDISEP5 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP5_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-127. USB1GENRNDISEP5 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP5_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.3.20 USB1GENRNDISEP6 Register (offset = 1894h) [reset = 0h]

USB1GENRNDISEP6 is shown in Figure 16-118 and described in Table 16-128.

## Figure 16-118. USB1GENRNDISEP6 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP6_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-128. USB1GENRNDISEP6 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP6_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

## 16.4.3.21 USB1GENRNDISEP7 Register (offset = 1898h) [reset = 0h]

USB1GENRNDISEP7 is shown in Figure 16-119 and described in Table 16-129.

## Figure 16-119. USB1GENRNDISEP7 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP7_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-129. USB1GENRNDISEP7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP7_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.3.22 USB1GENRNDISEP8 Register (offset = 189Ch) [reset = 0h]

USB1GENRNDISEP8 is shown in Figure 16-120 and described in Table 16-130.

## Figure 16-120. USB1GENRNDISEP8 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP8_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-130. USB1GENRNDISEP8 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP8_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.3.23 USB1GENRNDISEP9 Register (offset = 18A0h) [reset = 0h]

USB1GENRNDISEP9 is shown in Figure 16-121 and described in Table 16-131.

## Figure 16-121. USB1GENRNDISEP9 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP9_SIZE                                                                              |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-131. USB1GENRNDISEP9 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED | R/W    | 0h      |                                                                  |
| 16-0  | EP9_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.3.24 USB1GENRNDISEP10 Register (offset = 18A4h) [reset = 0h]

USB1GENRNDISEP10 is shown in Figure 16-122 and described in Table 16-132.

## Figure 16-122. USB1GENRNDISEP10 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP10_SIZE                                                                             |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-132. USB1GENRNDISEP10 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP10_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.3.25 USB1GENRNDISEP11 Register (offset = 18A8h) [reset = 0h]

USB1GENRNDISEP11 is shown in Figure 16-123 and described in Table 16-133.

## Figure 16-123. USB1GENRNDISEP11 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP11_SIZE                                                                             |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-133. USB1GENRNDISEP11 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP11_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.3.26 USB1GENRNDISEP12 Register (offset = 18ACh) [reset = 0h]

USB1GENRNDISEP12 is shown in Figure 16-124 and described in Table 16-134.

## Figure 16-124. USB1GENRNDISEP12 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   |
|-------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|
| RESERVED                                                                            | EP12_SIZE                                                                           |
| R/W-0h                                                                              | R/W-0h                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-134. USB1GENRNDISEP12 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP12_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.3.27 USB1GENRNDISEP13 Register (offset = 18B0h) [reset = 0h]

USB1GENRNDISEP13 is shown in Figure 16-125 and described in Table 16-135.

## Figure 16-125. USB1GENRNDISEP13 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP13_SIZE                                                                             |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-135. USB1GENRNDISEP13 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP13_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.3.28 USB1GENRNDISEP14 Register (offset = 18B4h) [reset = 0h]

USB1GENRNDISEP14 is shown in Figure 16-126 and described in Table 16-136.

## Figure 16-126. USB1GENRNDISEP14 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP14_SIZE                                                                             |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-136. USB1GENRNDISEP14 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP14_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

Universal Serial Bus (USB)

## 16.4.3.29 USB1GENRNDISEP15 Register (offset = 18B8h) [reset = 0h]

USB1GENRNDISEP15 is shown in Figure 16-127 and described in Table 16-137.

## Figure 16-127. USB1GENRNDISEP15 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EP15_SIZE                                                                             |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-137. USB1GENRNDISEP15 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
| 31-17 | RESERVED  | R/W    | 0h      |                                                                  |
| 16-0  | EP15_SIZE | R/W    | 0h      | Generic RNDIS packet size. USB1 Generic RNDIS EP N Size Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.3.30 USB1AUTOREQ Register (offset = 18D0h) [reset = 0h]

USB1AUTOREQ is shown in Figure 16-128 and described in Table 16-138.

## Figure 16-128. USB1AUTOREQ Register

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

## Table 16-138. USB1AUTOREQ Register Field Descriptions

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

## Table 16-138. USB1AUTOREQ Register Field Descriptions (continued)

| Bit   | Field       | Type   | Reset   | Description                                                                                                                            |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX8_AUTOREQ | R/W    | 0h      | RX endpoint 7 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 13-12 | RX7_AUTOREQ | R/W    | 0h      | RX endpoint 6 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 11-10 | RX6_AUTOREQ | R/W    | 0h      | RX endpoint 5 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 9-8   | RX5_AUTOREQ | R/W    | 0h      | RX endpoint 4 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 7-6   | RX4_AUTOREQ | R/W    | 0h      | RX endpoint 3 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 5-4   | RX3_AUTOREQ | R/W    | 0h      | RX endpoint 2 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 3-2   | RX2_AUTOREQ | R/W    | 0h      | RX endpoint 1 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always                         |
| 1-0   | RX1_AUTOREQ | R/W    | 0h      | RX endpoint 0 Auto Req enable 00 = no auto req 01 = auto req on all but EOP 10 = reserved 11 = auto req always USB1 Auto Req Registers |

<!-- image -->

www.ti.com

## 16.4.3.31 USB1SRPFIXTIME Register (offset = 18D4h) [reset = 280DE80h]

USB1SRPFIXTIME is shown in Figure 16-129 and described in Table 16-139.

## Figure 16-129. USB1SRPFIXTIME Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SRPFIXTIME   |
|------|--------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-139. USB1SRPFIXTIME Register Field Descriptions

| Bit   | Field      | Type   | Reset    | Description                                                                          |
|-------|------------|--------|----------|--------------------------------------------------------------------------------------|
| 31-0  | SRPFIXTIME | R/W    | 280DE80h | SRP Fix maximum time in 60 MHz cycles. Default is 700 ms. USB1 SRP Fix Time Register |

Universal Serial Bus (USB)

## 16.4.3.32 USB1TDOWN Register (offset = 18D8h) [reset = 0h]

USB1TDOWN is shown in Figure 16-130 and described in Table 16-140.

## Figure 16-130. USB1TDOWN Register

<!-- image -->

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-140. USB1TDOWN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------|
| 31-17 | TX_TDOWN | R/W    | 0h      | Tx Endpoint Teardown. Write '1' to corresponding bit to set. Read as '0'. Bit 31 = Endpoint 15 ... Bit 17 = Endpoint 1 |
| 16    | RESERVED | R/W    | 0h      |                                                                                                                        |
| 15-1  | RX_TDOWN | R/W    | 0h      | RX Endpoint Teardown. Write '1' to corresponding bit to set. Read as '0'. Bit 15 = Endpoint 15 ... Bit 1 = Endpoint 1  |
| 0     | RESERVED | R/W    | 0h      |                                                                                                                        |

<!-- image -->

<!-- image -->

## 16.4.3.33 USB1UTMI Register (offset = 18E0h) [reset = 200002h]

USB1UTMI is shown in Figure 16-131 and described in Table 16-141.

## Figure 16-131. USB1UTMI Register

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

## Table 16-141. USB1UTMI Register Field Descriptions

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
| 0     | FSSE0EXT      | R/W    | 0h      | PHY UTMI input for signal fsse0ext USB1 PHY UTMI Register |

## 16.4.3.34 USB1UTMILB Register (offset = 18E4h) [reset = 82h]

USB1UTMILB is shown in Figure 16-132 and described in Table 16-142.

## Figure 16-132. USB1UTMILB Register

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

## Table 16-142. USB1UTMILB Register Field Descriptions

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