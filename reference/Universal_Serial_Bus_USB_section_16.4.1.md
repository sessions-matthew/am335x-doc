## 16.4 USB Registers

## 16.4.1 USBSS Registers

Table 16-29 lists the memory-mapped registers for the USBSS. All register offset addresses not listed in Table 16-29 should be considered as reserved locations and the register contents should not be modified.

Table 16-29. USBSS Registers

| Offset   | Acronym           | Section           |
|----------|-------------------|-------------------|
| 0h       | REVREG            | Section 16.4.1.1  |
| 10h      | SYSCONFIG         | Section 16.4.1.2  |
| 24h      | IRQSTATRAW        | Section 16.4.1.3  |
| 28h      | IRQSTAT           | Section 16.4.1.4  |
| 2Ch      | IRQENABLER        | Section 16.4.1.5  |
| 30h      | IRQCLEARR         | Section 16.4.1.6  |
| 100h     | IRQDMATHOLDTX00   | Section 16.4.1.7  |
| 104h     | IRQDMATHOLDTX01   | Section 16.4.1.8  |
| 108h     | IRQDMATHOLDTX02   | Section 16.4.1.9  |
| 10Ch     | IRQDMATHOLDTX03   | Section 16.4.1.10 |
| 110h     | IRQDMATHOLDRX00   | Section 16.4.1.11 |
| 114h     | IRQDMATHOLDRX01   | Section 16.4.1.12 |
| 118h     | IRQDMATHOLDRX02   | Section 16.4.1.13 |
| 11Ch     | IRQDMATHOLDRX03   | Section 16.4.1.14 |
| 120h     | IRQDMATHOLDTX10   | Section 16.4.1.15 |
| 124h     | IRQDMATHOLDTX11   | Section 16.4.1.16 |
| 128h     | IRQDMATHOLDTX12   | Section 16.4.1.17 |
| 12Ch     | IRQDMATHOLDTX13   | Section 16.4.1.18 |
| 130h     | IRQDMATHOLDRX10   | Section 16.4.1.19 |
| 134h     | IRQDMATHOLDRX11   | Section 16.4.1.20 |
| 138h     | IRQDMATHOLDRX12   | Section 16.4.1.21 |
| 13Ch     | IRQDMATHOLDRX13   | Section 16.4.1.22 |
| 140h     | IRQDMAENABLE0     | Section 16.4.1.23 |
| 144h     | IRQDMAENABLE1     | Section 16.4.1.24 |
| 200h     | IRQFRAMETHOLDTX00 | Section 16.4.1.25 |
| 204h     | IRQFRAMETHOLDTX01 | Section 16.4.1.26 |
| 208h     | IRQFRAMETHOLDTX02 | Section 16.4.1.27 |
| 20Ch     | IRQFRAMETHOLDTX03 | Section 16.4.1.28 |
| 210h     | IRQFRAMETHOLDRX00 | Section 16.4.1.29 |
| 214h     | IRQFRAMETHOLDRX01 | Section 16.4.1.30 |
| 218h     | IRQFRAMETHOLDRX02 | Section 16.4.1.31 |
| 21Ch     | IRQFRAMETHOLDRX03 | Section 16.4.1.32 |
| 220h     | IRQFRAMETHOLDTX10 | Section 16.4.1.33 |
| 224h     | IRQFRAMETHOLDTX11 | Section 16.4.1.34 |
| 228h     | IRQFRAMETHOLDTX12 | Section 16.4.1.35 |
| 22Ch     | IRQFRAMETHOLDTX13 | Section 16.4.1.36 |
| 230h     | IRQFRAMETHOLDRX10 | Section 16.4.1.37 |
| 234h     | IRQFRAMETHOLDRX11 | Section 16.4.1.38 |
| 238h     | IRQFRAMETHOLDRX12 | Section 16.4.1.39 |
| 23Ch     | IRQFRAMETHOLDRX13 | Section 16.4.1.40 |
| 240h     | IRQFRAMEENABLE0   | Section 16.4.1.41 |
| 244h     | IRQFRAMEENABLE1   | Section 16.4.1.42 |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.1 REVREG Register (offset = 0h) [reset = 4EA20800h]

REVREG is shown in Figure 16-22 and described in Table 16-30.

## Figure 16-22. REVREG Register

| 31     | 30     | 29       | 28       | 27     | 26      | 25      | 24      | 23     | 22     | 21     | 20     | 19     | 18     | 17     | 16     |        |
|--------|--------|----------|----------|--------|---------|---------|---------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
| SCHEME | SCHEME | RESERVED | RESERVED | FUNC   | FUNC    | FUNC    | FUNC    | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   | FUNC   |
| R-1h   | R-1h   | R-       | R-       | R-EA2h | R-EA2h  | R-EA2h  | R-EA2h  | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h | R-EA2h |
| 15     | 14     | 13       | 12       | 11     | 10      | 9       | 8       | 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |        |
|        |        | R_RTL    | R_RTL    |        | X_MAJOR | X_MAJOR | X_MAJOR | CUSTOM | CUSTOM |        |        |        |        |        |        |        |
|        |        | R-1h     | R-1h     |        | R-0h    | R-0h    | R-0h    | R-0h   | R-0h   |        |        |        |        |        |        |        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-30. REVREG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                             |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------|
| 31-30 | SCHEME   | R      | 1h      | Used to distinguish between legacy interface scheme and current. 0 = Legacy 1 = Current |
| 29-28 | RESERVED | R      |         |                                                                                         |
| 27-16 | FUNC     | R      | EA2h    | Function indicates a software compatible module family.                                 |
| 15-11 | R_RTL    | R      | 1h      | RTL revision. Will vary depending on release.                                           |
| 10-8  | X_MAJOR  | R      | 0h      | Major revision.                                                                         |
| 7-6   | CUSTOM   | R      | 0h      | Custom revision                                                                         |
| 5-0   | Y_MINOR  | R      | 0h      | Minor revision. USBSS Revision Register                                                 |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.2 SYSCONFIG Register (offset = 10h) [reset = 28h]

SYSCONFIG is shown in Figure 16-23 and described in Table 16-31.

## Figure 16-23. SYSCONFIG Register

| 31       | 30       | 29           | 28           | 27             | 26              | 25             | 24              |
|----------|----------|--------------|--------------|----------------|-----------------|----------------|-----------------|
| RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED       | RESERVED        | RESERVED       | RESERVED        |
| R/W-0h   | R/W-0h   | R/W-0h       | R/W-0h       | R/W-0h         | R/W-0h          | R/W-0h         | R/W-0h          |
| 23       | 22       | 21           | 20           | 19             | 18              | 17             | 16              |
| RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED       | RESERVED        | RESERVED       | RESERVED        |
| R/W-0h   | R/W-0h   | R/W-0h       | R/W-0h       | R/W-0h         | R/W-0h          | R/W-0h         | R/W-0h          |
| 15       | 14       | 13           | 12           | 11             | 10              | 9              | 8               |
|          | RESERVED |              |              | USB0_OCP_E N_N | PHY0_UTMI_E N_N | USB1_OCP_E N_N | PHY1_UTMI_E N_N |
| R/W-0h   | R/W-0h   | R/W-0h       |              | R/W-0h         | R/W-0h          | R/W-0h         | R/W-0h          |
| 7        | 6        | 5            | 4            | 3              | 2               | 1              | 0               |
| RESERVED | RESERVED | STANDBY_MODE | STANDBY_MODE | IDLEMODE       | IDLEMODE        | FREEEMU        | SOFT_RESET      |
| R/W-0h   | R/W-0h   | R/W-2h       | R/W-2h       | R/W-2h         | R/W-2h          | R/W-0h         | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-31. SYSCONFIG Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                        |
|-------|----------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED       | R/W    | 0h      |                                                                                                                                                                                    |
| 11    | USB0_OCP_EN_N  | R/W    | 0h      | Active low clock enable for usb0_ocp_clk 0 = enable 1 = disable                                                                                                                    |
| 10    | PHY0_UTMI_EN_N | R/W    | 0h      | Active low clock enable for phy0_utmi_clk 0 = enable 1 = disable                                                                                                                   |
| 9     | USB1_OCP_EN_N  | R/W    | 0h      | Active low clock enable for usb1_ocp_clk 0 = enable 1 = disable                                                                                                                    |
| 8     | PHY1_UTMI_EN_N | R/W    | 0h      | Active low clock enable for phy1_utmi_clk 0 = enable 1 = disable                                                                                                                   |
| 7-6   | RESERVED       | R/W    | 0h      |                                                                                                                                                                                    |
| 5-4   | STANDBY_MODE   | R/W    | 2h      | Configuration of the local initiator state management mode. 0 = force-standby mode. 1 = no-standby mode. 2 = smart-standby mode. 3 = Reserved.                                     |
| 3-2   | IDLEMODE       | R/W    | 2h      | Configuration of the local target state management mode. 0 = force-idle mode. 1 = no-idle mode. 2 = smart-idle mode. 3 = smart-idle with wakeup.                                   |
| 1     | FREEEMU        | R/W    | 0h      | Sensitivity to emulation (debug) suspend input signal. 0 = sensitive to emulation suspend event from Debug Subsystem. 1 = NOT sensitive to emulation suspend from Debug Subsystem. |
| 0     | SOFT_RESET     | R/W    | 0h      | Software reset of USBSS, USB0, and USB1 modules Write 0 = No action. Write 1 = Initiate software reset. Read 0 = Reset done, no action. Read 1 = Reset ongoing.                    |

Universal Serial Bus (USB)

## 16.4.1.3 IRQSTATRAW Register (offset = 24h) [reset = 0h]

IRQSTATRAW is shown in Figure 16-24 and described in Table 16-32.

## Figure 16-24. IRQSTATRAW Register

| 31       | 30       | 29       | 28       | 27            | 26            | 25                 | 24                 |
|----------|----------|----------|----------|---------------|---------------|--------------------|--------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED           | RESERVED           |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 23       | 22       | 21       | 20       | 19            | 18            | 17                 | 16                 |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED           | RESERVED           |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 15       | 14       | 13       | 12       | 11            | 10            | 9                  | 8                  |
|          | RESERVED |          |          | RX_PKT_CMP _1 | TX_PKT_CMP_ 1 | RX_PKT_CMP _0      | TX_PKT_CMP_ 0      |
| R/W-0h   | R/W-0h   | R/W-0h   |          | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 7        | 6        | 5        | 4        | 3             | 2             | 1                  | 0                  |
|          |          | RESERVED |          |               | PD_CMP_FLA G  | RX_MOP_STA RVATION | RX_SOP_STA RVATION |
|          |          | R/W-0h   |          |               | R/W-0h        | R/W-0h             | R/W-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-32. IRQSTATRAW Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED          | R/W    | 0h      |                                                                                                                                   |
| 11    | RX_PKT_CMP_1      | R/W    | 0h      | Interrupt status for USB1 Rx CPPI DMA packet completion status                                                                    |
| 10    | TX_PKT_CMP_1      | R/W    | 0h      | Interrupt status for USB1 Tx CPPI DMA packet completion status                                                                    |
| 9     | RX_PKT_CMP_0      | R/W    | 0h      | Interrupt status for USB0 Rx CPPI DMA packet completion status                                                                    |
| 8     | TX_PKT_CMP_0      | R/W    | 0h      | Interrupt status for USB0 Tx CPPI DMA packet completion status                                                                    |
| 7-3   | RESERVED          | R/W    | 0h      |                                                                                                                                   |
| 2     | PD_CMP_FLAG       | R/W    | 0h      | Interrupt status when the packet is completed, the differ bits is set, and the Packet Descriptor is pushed into the queue manager |
| 1     | RX_MOP_STARVATION | R/W    | 0h      | Interrupt status when queue manager cannot allocate an Rx buffer in the middle of a packet.                                       |
| 0     | RX_SOP_STARVATION | R/W    | 0h      | Interrupt status when queue manager cannot allocate an Rx buffer at the start of a packet. USBSS IRQ_STATUS_RAW Register          |

<!-- image -->

<!-- image -->

## 16.4.1.4 IRQSTAT Register (offset = 28h) [reset = 0h]

IRQSTAT is shown in Figure 16-25 and described in Table 16-33.

## Figure 16-25. IRQSTAT Register

| 31       | 30       | 29       | 28       | 27            | 26            | 25                 | 24                 |
|----------|----------|----------|----------|---------------|---------------|--------------------|--------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED           | RESERVED           |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 23       | 22       | 21       | 20       | 19            | 18            | 17                 | 16                 |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED           | RESERVED           |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 15       | 14       | 13       | 12       | 11            | 10            | 9                  | 8                  |
|          | RESERVED |          |          | RX_PKT_CMP _1 | TX_PKT_CMP_ 1 | RX_PKT_CMP _0      | TX_PKT_CMP_ 0      |
| R/W-0h   | R/W-0h   | R/W-0h   |          | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 7        | 6        | 5        | 4        | 3             | 2             | 1                  | 0                  |
|          |          | RESERVED |          |               | PD_CMP_FLA G  | RX_MOP_STA RVATION | RX_SOP_STA RVATION |
|          |          | R/W-0h   |          |               | R/W-0h        | R/W-0h             | R/W-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-33. IRQSTAT Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED          | R/W    | 0h      |                                                                                                                                   |
| 11    | RX_PKT_CMP_1      | R/W    | 0h      | Interrupt status for USB1 Rx CPPI DMA packet completion status                                                                    |
| 10    | TX_PKT_CMP_1      | R/W    | 0h      | Interrupt status for USB1 Tx CPPI DMA packet completion status                                                                    |
| 9     | RX_PKT_CMP_0      | R/W    | 0h      | Interrupt status for USB0 Rx CPPI DMA packet completion status                                                                    |
| 8     | TX_PKT_CMP_0      | R/W    | 0h      | Interrupt status for USB0 Tx CPPI DMA packet completion status                                                                    |
| 7-3   | RESERVED          | R/W    | 0h      |                                                                                                                                   |
| 2     | PD_CMP_FLAG       | R/W    | 0h      | Interrupt status when the packet is completed, the differ bits is set, and the Packet Descriptor is pushed into the queue manager |
| 1     | RX_MOP_STARVATION | R/W    | 0h      | Interrupt status when queue manager cannot allocate an Rx buffer in the middle of a packet.                                       |
| 0     | RX_SOP_STARVATION | R/W    | 0h      | Interrupt status when queue manager cannot allocate an Rx buffer at the start of a packet. USBSS IRQ_STATUS Register              |

Universal Serial Bus (USB)

## 16.4.1.5 IRQENABLER Register (offset = 2Ch) [reset = 0h]

IRQENABLER is shown in Figure 16-26 and described in Table 16-34.

## Figure 16-26. IRQENABLER Register

| 31       | 30       | 29       | 28       | 27            | 26            | 25                 | 24                 |
|----------|----------|----------|----------|---------------|---------------|--------------------|--------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED           | RESERVED           |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 23       | 22       | 21       | 20       | 19            | 18            | 17                 | 16                 |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED           | RESERVED           |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 15       | 14       | 13       | 12       | 11            | 10            | 9                  | 8                  |
|          | RESERVED |          |          | RX_PKT_CMP _1 | TX_PKT_CMP_ 1 | RX_PKT_CMP _0      | TX_PKT_CMP_ 0      |
| R/W-0h   | R/W-0h   | R/W-0h   |          | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 7        | 6        | 5        | 4        | 3             | 2             | 1                  | 0                  |
|          |          | RESERVED |          |               | PD_CMP_FLA G  | RX_MOP_STA RVATION | RX_SOP_STA RVATION |
|          |          | R/W-0h   |          |               | R/W-0h        | R/W-0h             | R/W-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-34. IRQENABLER Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED          | R/W    | 0h      |                                                                                                                                   |
| 11    | RX_PKT_CMP_1      | R/W    | 0h      | Interrupt enable for USB1 Rx CPPI DMA packet completion status                                                                    |
| 10    | TX_PKT_CMP_1      | R/W    | 0h      | Interrupt enable for USB1 Tx CPPI DMA packet completion status                                                                    |
| 9     | RX_PKT_CMP_0      | R/W    | 0h      | Interrupt enable for USB0 Rx CPPI DMA packet completion status                                                                    |
| 8     | TX_PKT_CMP_0      | R/W    | 0h      | Interrupt enable for USB0 Tx CPPI DMA packet completion status                                                                    |
| 7-3   | RESERVED          | R/W    | 0h      |                                                                                                                                   |
| 2     | PD_CMP_FLAG       | R/W    | 0h      | Interrupt enable when the packet is completed, the differ bits is set, and the Packet Descriptor is pushed into the queue manager |
| 1     | RX_MOP_STARVATION | R/W    | 0h      | Interrupt enable when queue manager cannot allocate an Rx buffer in the middle of a packet.                                       |
| 0     | RX_SOP_STARVATION | R/W    | 0h      | Interrupt enable when queue manager cannot allocate an Rx buffer at the start of a packet. USBSS IRQ_ENABLE_SET Register          |

<!-- image -->

<!-- image -->

## 16.4.1.6

## IRQCLEARR Register (offset = 30h) [reset = 0h]

IRQCLEARR is shown in Figure 16-27 and described in Table 16-35.

## Figure 16-27. IRQCLEARR Register

| 31       | 30       | 29       | 28       | 27            | 26            | 25                 | 24                 |
|----------|----------|----------|----------|---------------|---------------|--------------------|--------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED           | RESERVED           |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 23       | 22       | 21       | 20       | 19            | 18            | 17                 | 16                 |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED           | RESERVED           |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 15       | 14       | 13       | 12       | 11            | 10            | 9                  | 8                  |
|          | RESERVED |          |          | RX_PKT_CMP _1 | TX_PKT_CMP_ 1 | RX_PKT_CMP _0      | TX_PKT_CMP_ 0      |
| R/W-0h   | R/W-0h   | R/W-0h   |          | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             |
| 7        | 6        | 5        | 4        | 3             | 2             | 1                  | 0                  |
|          |          | RESERVED |          |               | PD_CMP_FLA G  | RX_MOP_STA RVATION | RX_SOP_STA RVATION |
|          |          | R/W-0h   |          |               | R/W-0h        | R/W-0h             | R/W-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-35. IRQCLEARR Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED          | R/W    | 0h      |                                                                                                                                   |
| 11    | RX_PKT_CMP_1      | R/W    | 0h      | Interrupt enable for USB1 Rx CPPI DMA packet completion status                                                                    |
| 10    | TX_PKT_CMP_1      | R/W    | 0h      | Interrupt enable for USB1 Tx CPPI DMA packet completion status                                                                    |
| 9     | RX_PKT_CMP_0      | R/W    | 0h      | Interrupt enable for USB0 Rx CPPI DMA packet completion status                                                                    |
| 8     | TX_PKT_CMP_0      | R/W    | 0h      | Interrupt enable for USB0 Tx CPPI DMA packet completion status                                                                    |
| 7-3   | RESERVED          | R/W    | 0h      |                                                                                                                                   |
| 2     | PD_CMP_FLAG       | R/W    | 0h      | Interrupt enable when the packet is completed, the differ bits is set, and the Packet Descriptor is pushed into the queue manager |
| 1     | RX_MOP_STARVATION | R/W    | 0h      | Interrupt enable when queue manager cannot allocate an Rx buffer in the middle of a packet.                                       |
| 0     | RX_SOP_STARVATION | R/W    | 0h      | Interrupt enable when queue manager cannot allocate an Rx buffer at the start of a packet. USBSS IRQ_ENABLE_CLR Register          |

Universal Serial Bus (USB)

## 16.4.1.7 IRQDMATHOLDTX00 Register (offset = 100h) [reset = 0h]

IRQDMATHOLDTX00 is shown in Figure 16-28 and described in Table 16-36.

## Figure 16-28. IRQDMATHOLDTX00 Register

| 31   | 30   | 29   | 28   | 27   |    | 26   | 25   | 24   | 23   | 22   | 21              | 20              | 19              | 18              | 17   | 16   |
|------|------|------|------|------|----|------|------|------|------|------|-----------------|-----------------|-----------------|-----------------|------|------|
|      |      |      |      |      |    |      |      |      |      |      | DMA_THRES_TX0_2 | DMA_THRES_TX0_2 | DMA_THRES_TX0_2 | DMA_THRES_TX0_2 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 | 9    |      | 8    | 7    | 6    | 5               | 4               | 3               | 2               | 1    | 0    |
|      |      |      |      |      |    |      |      |      |      |      | RESERVED        | RESERVED        | RESERVED        | RESERVED        |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-36. IRQDMATHOLDTX00 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                               |
|-------|-----------------|--------|---------|-----------------------------------------------------------|
| 31-24 | DMA_THRES_TX0_3 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 3. |
| 23-16 | DMA_THRES_TX0_2 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 2. |
| 15-8  | DMA_THRES_TX0_1 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 1. |
| 7-0   | RESERVED        | R/W    | 0h      |                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.8 IRQDMATHOLDTX01 Register (offset = 104h) [reset = 0h]

IRQDMATHOLDTX01 is shown in Figure 16-29 and described in Table 16-37.

## Figure 16-29. IRQDMATHOLDTX01 Register

| 31   | 30   | 29   | 28              | 27   | 26   | 25   | 24   | 23   | 22   | 21 20 19        | 18   | 17   | 16   |
|------|------|------|-----------------|------|------|------|------|------|------|-----------------|------|------|------|
|      |      |      | DMA_THRES_TX0_7 |      |      |      |      |      |      | DMA_THRES_TX0_6 |      |      |      |
|      |      |      | R/W-0h          |      |      |      |      |      |      | R/W-0h          |      |      |      |
| 15   | 14   | 13   | 12 11           | 10   | 9    | 8    |      | 7    | 6    | 5 4 3           | 2    | 1    | 0    |
|      |      |      | DMA_THRES_TX0_5 |      |      |      |      |      |      | DMA_THRES_TX0_4 |      |      |      |
|      |      |      | R/W-0h          |      |      |      |      |      |      | R/W-0h          |      |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-37. IRQDMATHOLDTX01 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                     |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_TX0_7 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 7.                                       |
| 23-16 | DMA_THRES_TX0_6 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 6.                                       |
| 15-8  | DMA_THRES_TX0_5 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 5.                                       |
| 7-0   | DMA_THRES_TX0_4 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 4. USBSS IRQ_DMA_THRSHOLD_TX0_1 Register |

Universal Serial Bus (USB)

## 16.4.1.9 IRQDMATHOLDTX02 Register (offset = 108h) [reset = 0h]

IRQDMATHOLDTX02 is shown in Figure 16-30 and described in Table 16-38.

## Figure 16-30. IRQDMATHOLDTX02 Register

| 31   | 30   | 29   | 28   | 27   |    | 26   | 25   | 24   | 23   | 22   | 21               | 20               | 19               | 18               | 17   | 16   |
|------|------|------|------|------|----|------|------|------|------|------|------------------|------------------|------------------|------------------|------|------|
|      |      |      |      |      |    |      |      |      |      |      | DMA_THRES_TX0_10 | DMA_THRES_TX0_10 | DMA_THRES_TX0_10 | DMA_THRES_TX0_10 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 | 9    | 8    |      | 7    | 6    | 5                | 4                | 3                | 2                | 1    | 0    |
|      |      |      |      |      |    |      |      |      |      |      | DMA_THRES_TX0_8  | DMA_THRES_TX0_8  | DMA_THRES_TX0_8  | DMA_THRES_TX0_8  |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-38. IRQDMATHOLDTX02 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                     |
|-------|------------------|--------|---------|-------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_TX0_11 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 11.                                      |
| 23-16 | DMA_THRES_TX0_10 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 10.                                      |
| 15-8  | DMA_THRES_TX0_9  | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 9.                                       |
| 7-0   | DMA_THRES_TX0_8  | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 8. USBSS IRQ_DMA_THRSHOLD_TX0_2 Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.10 IRQDMATHOLDTX03 Register (offset = 10Ch) [reset = 0h]

IRQDMATHOLDTX03 is shown in Figure 16-31 and described in Table 16-39.

## Figure 16-31. IRQDMATHOLDTX03 Register

| 31   | 30   | 29   | 28   | 27   | 26   |    | 25   | 24   | 23   | 22   | 21               | 20               | 19               | 18               | 17   | 16   |
|------|------|------|------|------|------|----|------|------|------|------|------------------|------------------|------------------|------------------|------|------|
|      |      |      |      |      |      |    |      |      |      |      | DMA_THRES_TX0_14 | DMA_THRES_TX0_14 | DMA_THRES_TX0_14 | DMA_THRES_TX0_14 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |
| 15   | 14   | 13   | 12   | 11   | 10   | 9  | 8    |      | 7    | 6    | 5                | 4                | 3                | 2                | 1    | 0    |
|      |      |      |      |      |      |    |      |      |      |      | DMA_THRES_TX0_12 | DMA_THRES_TX0_12 | DMA_THRES_TX0_12 | DMA_THRES_TX0_12 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-39. IRQDMATHOLDTX03 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                      |
|-------|------------------|--------|---------|--------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_TX0_15 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 15.                                       |
| 23-16 | DMA_THRES_TX0_14 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 14.                                       |
| 15-8  | DMA_THRES_TX0_13 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 13.                                       |
| 7-0   | DMA_THRES_TX0_12 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB0 Endpoint 12. USBSS IRQ_DMA_THRSHOLD_TX0_3 Register |

Universal Serial Bus (USB)

## 16.4.1.11 IRQDMATHOLDRX00 Register (offset = 110h) [reset = 0h]

IRQDMATHOLDRX00 is shown in Figure 16-32 and described in Table 16-40.

## Figure 16-32. IRQDMATHOLDRX00 Register

| 31              | 30              | 29              | 28              | 27              | 26              |                 | 25              | 24              | 23              | 22              | 21              | 20              | 19              | 18              | 17              | 16              |
|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|
| DMA_THRES_RX0_3 | DMA_THRES_RX0_3 | DMA_THRES_RX0_3 | DMA_THRES_RX0_3 | DMA_THRES_RX0_3 | DMA_THRES_RX0_3 | DMA_THRES_RX0_3 | DMA_THRES_RX0_3 | DMA_THRES_RX0_3 | DMA_THRES_RX0_2 | DMA_THRES_RX0_2 | DMA_THRES_RX0_2 | DMA_THRES_RX0_2 | DMA_THRES_RX0_2 | DMA_THRES_RX0_2 | DMA_THRES_RX0_2 | DMA_THRES_RX0_2 |
| R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   |
| 15              | 14              | 13              | 12              | 11              | 10              | 9               | 8               |                 | 7               | 6               | 5               | 4               | 3               | 2               | 1               | 0               |
| DMA_THRES_RX0_1 | DMA_THRES_RX0_1 | DMA_THRES_RX0_1 | DMA_THRES_RX0_1 | DMA_THRES_RX0_1 | DMA_THRES_RX0_1 | DMA_THRES_RX0_1 | DMA_THRES_RX0_1 | DMA_THRES_RX0_1 | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        |
| R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-40. IRQDMATHOLDRX00 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                               |
|-------|-----------------|--------|---------|-----------------------------------------------------------|
| 31-24 | DMA_THRES_RX0_3 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 3. |
| 23-16 | DMA_THRES_RX0_2 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 2. |
| 15-8  | DMA_THRES_RX0_1 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 1. |
| 7-0   | RESERVED        | R/W    | 0h      |                                                           |

<!-- image -->

<!-- image -->

## 16.4.1.12 IRQDMATHOLDRX01 Register (offset = 114h) [reset = 0h]

IRQDMATHOLDRX01 is shown in Figure 16-33 and described in Table 16-41.

## Figure 16-33. IRQDMATHOLDRX01 Register

| 31              | 30              | 29              | 28              | 27              |                 | 26              | 25   | 24   | 23   | 22   | 21              | 20              | 19              | 18              | 17   | 16   |
|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------|------|------|------|-----------------|-----------------|-----------------|-----------------|------|------|
|                 |                 |                 |                 |                 |                 |                 |      |      |      |      | DMA_THRES_RX0_6 | DMA_THRES_RX0_6 | DMA_THRES_RX0_6 | DMA_THRES_RX0_6 |      |      |
|                 |                 |                 |                 |                 |                 |                 |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |
| 15              | 14              | 13              | 12              | 11              | 10              | 9               |      | 8    | 7    | 6    | 5               | 4               | 3               | 2               | 1    | 0    |
| DMA_THRES_RX0_5 | DMA_THRES_RX0_5 | DMA_THRES_RX0_5 | DMA_THRES_RX0_5 | DMA_THRES_RX0_5 | DMA_THRES_RX0_5 | DMA_THRES_RX0_5 |      |      |      |      | DMA_THRES_RX0_4 | DMA_THRES_RX0_4 | DMA_THRES_RX0_4 | DMA_THRES_RX0_4 |      |      |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-41. IRQDMATHOLDRX01 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                     |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_RX0_7 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 7.                                       |
| 23-16 | DMA_THRES_RX0_6 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 6.                                       |
| 15-8  | DMA_THRES_RX0_5 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 5.                                       |
| 7-0   | DMA_THRES_RX0_4 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 4. USBSS IRQ_DMA_THRSHOLD_RX0_1 Register |

Universal Serial Bus (USB)

## 16.4.1.13 IRQDMATHOLDRX02 Register (offset = 118h) [reset = 0h]

IRQDMATHOLDRX02 is shown in Figure 16-34 and described in Table 16-42.

## Figure 16-34. IRQDMATHOLDRX02 Register

| 31   | 30   | 29   | 28   | 27   | 26   | 25   |    | 24   | 23   | 22   | 21               | 20               | 19               | 18               | 17   | 16   |
|------|------|------|------|------|------|------|----|------|------|------|------------------|------------------|------------------|------------------|------|------|
|      |      |      |      |      |      |      |    |      |      |      | DMA_THRES_RX0_10 | DMA_THRES_RX0_10 | DMA_THRES_RX0_10 | DMA_THRES_RX0_10 |      |      |
|      |      |      |      |      |      |      |    |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |
| 15   | 14   | 13   | 12   | 11   | 10   | 9    | 8  |      | 7    | 6    | 5                | 4                | 3                | 2                | 1    | 0    |
|      |      |      |      |      |      |      |    |      |      |      | DMA_THRES_RX0_8  | DMA_THRES_RX0_8  | DMA_THRES_RX0_8  | DMA_THRES_RX0_8  |      |      |
|      |      |      |      |      |      |      |    |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-42. IRQDMATHOLDRX02 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                     |
|-------|------------------|--------|---------|-------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_RX0_11 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 11.                                      |
| 23-16 | DMA_THRES_RX0_10 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 10.                                      |
| 15-8  | DMA_THRES_RX0_9  | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 9.                                       |
| 7-0   | DMA_THRES_RX0_8  | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 8. USBSS IRQ_DMA_THRSHOLD_RX0_2 Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.14 IRQDMATHOLDRX03 Register (offset = 11Ch) [reset = 0h]

IRQDMATHOLDRX03 is shown in Figure 16-35 and described in Table 16-43.

## Figure 16-35. IRQDMATHOLDRX03 Register

| 31   | 30   | 29   | 28   | 27   | 26   | 25   |    | 24   | 23   | 22   | 21               | 20               | 19               | 18               | 17   | 16   |
|------|------|------|------|------|------|------|----|------|------|------|------------------|------------------|------------------|------------------|------|------|
|      |      |      |      |      |      |      |    |      |      |      | DMA_THRES_RX0_14 | DMA_THRES_RX0_14 | DMA_THRES_RX0_14 | DMA_THRES_RX0_14 |      |      |
|      |      |      |      |      |      |      |    |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |
| 15   | 14   | 13   | 12   | 11   | 10   | 9    | 8  | 7    | 6    |      | 5                | 4                | 3                | 2                | 1    | 0    |
|      |      |      |      |      |      |      |    |      |      |      | DMA_THRES_RX0_12 | DMA_THRES_RX0_12 | DMA_THRES_RX0_12 | DMA_THRES_RX0_12 |      |      |
|      |      |      |      |      |      |      |    |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-43. IRQDMATHOLDRX03 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                      |
|-------|------------------|--------|---------|--------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_RX0_15 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 15.                                       |
| 23-16 | DMA_THRES_RX0_14 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 14.                                       |
| 15-8  | DMA_THRES_RX0_13 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 13.                                       |
| 7-0   | DMA_THRES_RX0_12 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB0 Endpoint 12. USBSS IRQ_DMA_THRSHOLD_RX0_3 Register |

Universal Serial Bus (USB)

## 16.4.1.15 IRQDMATHOLDTX10 Register (offset = 120h) [reset = 0h]

IRQDMATHOLDTX10 is shown in Figure 16-36 and described in Table 16-44.

## Figure 16-36. IRQDMATHOLDTX10 Register

| 31   | 30   | 29   | 28   | 27   |    | 26   | 25   | 24   | 23   | 22   | 21              | 20              | 19              | 18              | 17   | 16   |
|------|------|------|------|------|----|------|------|------|------|------|-----------------|-----------------|-----------------|-----------------|------|------|
|      |      |      |      |      |    |      |      |      |      |      | DMA_THRES_TX1_2 | DMA_THRES_TX1_2 | DMA_THRES_TX1_2 | DMA_THRES_TX1_2 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 | 9    |      | 8    | 7    | 6    | 5               | 4               | 3               | 2               | 1    | 0    |
|      |      |      |      |      |    |      |      |      |      |      | RESERVED        | RESERVED        | RESERVED        | RESERVED        |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-44. IRQDMATHOLDTX10 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                               |
|-------|-----------------|--------|---------|-----------------------------------------------------------|
| 31-24 | DMA_THRES_TX1_3 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 3. |
| 23-16 | DMA_THRES_TX1_2 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 2. |
| 15-8  | DMA_THRES_TX1_1 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 1. |
| 7-0   | RESERVED        | R/W    | 0h      |                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.16 IRQDMATHOLDTX11 Register (offset = 124h) [reset = 0h]

IRQDMATHOLDTX11 is shown in Figure 16-37 and described in Table 16-45.

## Figure 16-37. IRQDMATHOLDTX11 Register

| 31   | 30   | 29   | 28   | 27   |    | 26   | 25   | 24   | 23   | 22   | 21              | 20              | 19              | 18              | 17   | 16   |
|------|------|------|------|------|----|------|------|------|------|------|-----------------|-----------------|-----------------|-----------------|------|------|
|      |      |      |      |      |    |      |      |      |      |      | DMA_THRES_TX1_6 | DMA_THRES_TX1_6 | DMA_THRES_TX1_6 | DMA_THRES_TX1_6 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 |      | 9    | 8    | 7    | 6    | 5               | 4               | 3               | 2               | 1    | 0    |
|      |      |      |      |      |    |      |      |      |      |      | DMA_THRES_TX1_4 | DMA_THRES_TX1_4 | DMA_THRES_TX1_4 | DMA_THRES_TX1_4 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-45. IRQDMATHOLDTX11 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                     |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_TX1_7 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 7.                                       |
| 23-16 | DMA_THRES_TX1_6 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 6.                                       |
| 15-8  | DMA_THRES_TX1_5 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 5.                                       |
| 7-0   | DMA_THRES_TX1_4 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 4. USBSS IRQ_DMA_THRSHOLD_TX1_1 Register |

Universal Serial Bus (USB)

## 16.4.1.17 IRQDMATHOLDTX12 Register (offset = 128h) [reset = 0h]

IRQDMATHOLDTX12 is shown in Figure 16-38 and described in Table 16-46.

## Figure 16-38. IRQDMATHOLDTX12 Register

| 31   | 30   | 29   | 28   | 27   | 26   |    | 25   | 24   | 23   | 22   | 21               | 20               | 19               | 18               | 17   | 16   |
|------|------|------|------|------|------|----|------|------|------|------|------------------|------------------|------------------|------------------|------|------|
|      |      |      |      |      |      |    |      |      |      |      | DMA_THRES_TX1_10 | DMA_THRES_TX1_10 | DMA_THRES_TX1_10 | DMA_THRES_TX1_10 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |
| 15   | 14   | 13   | 12   | 11   | 10   | 9  | 8    |      | 7    | 6    | 5                | 4                | 3                | 2                | 1    | 0    |
|      |      |      |      |      |      |    |      |      |      |      | DMA_THRES_TX1_8  | DMA_THRES_TX1_8  | DMA_THRES_TX1_8  | DMA_THRES_TX1_8  |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-46. IRQDMATHOLDTX12 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                     |
|-------|------------------|--------|---------|-------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_TX1_11 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 11.                                      |
| 23-16 | DMA_THRES_TX1_10 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 10.                                      |
| 15-8  | DMA_THRES_TX1_9  | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 9.                                       |
| 7-0   | DMA_THRES_TX1_8  | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 8. USBSS IRQ_DMA_THRSHOLD_TX1_2 Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.18 IRQDMATHOLDTX13 Register (offset = 12Ch) [reset = 0h]

IRQDMATHOLDTX13 is shown in Figure 16-39 and described in Table 16-47.

## Figure 16-39. IRQDMATHOLDTX13 Register

| 31   | 30   | 29   | 28   | 27   | 26   |    | 25   | 24   | 23   | 22   | 21               | 20               | 19               | 18               | 17   | 16   |
|------|------|------|------|------|------|----|------|------|------|------|------------------|------------------|------------------|------------------|------|------|
|      |      |      |      |      |      |    |      |      |      |      | DMA_THRES_TX1_14 | DMA_THRES_TX1_14 | DMA_THRES_TX1_14 | DMA_THRES_TX1_14 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |
| 15   | 14   | 13   | 12   | 11   | 10   | 9  | 8    |      | 7    | 6    | 5                | 4                | 3                | 2                | 1    | 0    |
|      |      |      |      |      |      |    |      |      |      |      | DMA_THRES_TX1_12 | DMA_THRES_TX1_12 | DMA_THRES_TX1_12 | DMA_THRES_TX1_12 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-47. IRQDMATHOLDTX13 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                      |
|-------|------------------|--------|---------|--------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_TX1_15 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 15.                                       |
| 23-16 | DMA_THRES_TX1_14 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 14.                                       |
| 15-8  | DMA_THRES_TX1_13 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 13.                                       |
| 7-0   | DMA_THRES_TX1_12 | R/W    | 0h      | DMA threshold value for tx_pkt_cmp_0 for USB1 Endpoint 12. USBSS IRQ_DMA_THRSHOLD_TX1_3 Register |

Universal Serial Bus (USB)

## 16.4.1.19 IRQDMATHOLDRX10 Register (offset = 130h) [reset = 0h]

IRQDMATHOLDRX10 is shown in Figure 16-40 and described in Table 16-48.

## Figure 16-40. IRQDMATHOLDRX10 Register

| 31   | 30   | 29   | 28   | 27   |    | 26   | 25   | 24   | 23   | 22   | 21              | 20              | 19              | 18              | 17   | 16   |
|------|------|------|------|------|----|------|------|------|------|------|-----------------|-----------------|-----------------|-----------------|------|------|
|      |      |      |      |      |    |      |      |      |      |      | DMA_THRES_RX1_2 | DMA_THRES_RX1_2 | DMA_THRES_RX1_2 | DMA_THRES_RX1_2 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 | 9    |      | 8    | 7    | 6    | 5               | 4               | 3               | 2               | 1    | 0    |
|      |      |      |      |      |    |      |      |      |      |      | RESERVED        | RESERVED        | RESERVED        | RESERVED        |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-48. IRQDMATHOLDRX10 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                               |
|-------|-----------------|--------|---------|-----------------------------------------------------------|
| 31-24 | DMA_THRES_RX1_3 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 3. |
| 23-16 | DMA_THRES_RX1_2 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 2. |
| 15-8  | DMA_THRES_RX1_1 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 1. |
| 7-0   | RESERVED        | R/W    | 0h      |                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.20 IRQDMATHOLDRX11 Register (offset = 134h) [reset = 0h]

IRQDMATHOLDRX11 is shown in Figure 16-41 and described in Table 16-49.

## Figure 16-41. IRQDMATHOLDRX11 Register

| 31              | 30              | 29              | 28              | 27              |                 | 26              | 25   | 24   | 23   | 22   | 21              | 20              | 19              | 18              | 17   | 16   |
|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------|------|------|------|-----------------|-----------------|-----------------|-----------------|------|------|
|                 |                 |                 |                 |                 |                 |                 |      |      |      |      | DMA_THRES_RX1_6 | DMA_THRES_RX1_6 | DMA_THRES_RX1_6 | DMA_THRES_RX1_6 |      |      |
|                 |                 |                 |                 |                 |                 |                 |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |
| 15              | 14              | 13              | 12              | 11              | 10              | 9               |      | 8    | 7    | 6    | 5               | 4               | 3               | 2               | 1    | 0    |
| DMA_THRES_RX1_5 | DMA_THRES_RX1_5 | DMA_THRES_RX1_5 | DMA_THRES_RX1_5 | DMA_THRES_RX1_5 | DMA_THRES_RX1_5 | DMA_THRES_RX1_5 |      |      |      |      | DMA_THRES_RX1_4 | DMA_THRES_RX1_4 | DMA_THRES_RX1_4 | DMA_THRES_RX1_4 |      |      |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-49. IRQDMATHOLDRX11 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                     |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_RX1_7 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 7.                                       |
| 23-16 | DMA_THRES_RX1_6 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 6.                                       |
| 15-8  | DMA_THRES_RX1_5 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 5.                                       |
| 7-0   | DMA_THRES_RX1_4 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 4. USBSS IRQ_DMA_THRSHOLD_RX1_1 Register |

Universal Serial Bus (USB)

## 16.4.1.21 IRQDMATHOLDRX12 Register (offset = 138h) [reset = 0h]

IRQDMATHOLDRX12 is shown in Figure 16-42 and described in Table 16-50.

## Figure 16-42. IRQDMATHOLDRX12 Register

| 31   | 30   | 29   | 28   | 27   | 26   |    | 25   | 24   | 23   | 22   | 21               | 20               | 19               | 18               | 17   | 16   |
|------|------|------|------|------|------|----|------|------|------|------|------------------|------------------|------------------|------------------|------|------|
|      |      |      |      |      |      |    |      |      |      |      | DMA_THRES_RX1_10 | DMA_THRES_RX1_10 | DMA_THRES_RX1_10 | DMA_THRES_RX1_10 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |
| 15   | 14   | 13   | 12   | 11   | 10   | 9  | 8    |      | 7    | 6    | 5                | 4                | 3                | 2                | 1    | 0    |
|      |      |      |      |      |      |    |      |      |      |      | DMA_THRES_RX1_8  | DMA_THRES_RX1_8  | DMA_THRES_RX1_8  | DMA_THRES_RX1_8  |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-50. IRQDMATHOLDRX12 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                     |
|-------|------------------|--------|---------|-------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_RX1_11 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 11.                                      |
| 23-16 | DMA_THRES_RX1_10 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 10.                                      |
| 15-8  | DMA_THRES_RX1_9  | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 9.                                       |
| 7-0   | DMA_THRES_RX1_8  | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 8. USBSS IRQ_DMA_THRSHOLD_RX1_2 Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.22 IRQDMATHOLDRX13 Register (offset = 13Ch) [reset = 0h]

IRQDMATHOLDRX13 is shown in Figure 16-43 and described in Table 16-51.

## Figure 16-43. IRQDMATHOLDRX13 Register

| 31   | 30   | 29   | 28   | 27   | 26   |    | 25   | 24   | 23   | 22   | 21               | 20               | 19               | 18               | 17   | 16   |
|------|------|------|------|------|------|----|------|------|------|------|------------------|------------------|------------------|------------------|------|------|
|      |      |      |      |      |      |    |      |      |      |      | DMA_THRES_RX1_14 | DMA_THRES_RX1_14 | DMA_THRES_RX1_14 | DMA_THRES_RX1_14 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |
| 15   | 14   | 13   | 12   | 11   | 10   | 9  | 8    | 7    | 6    |      | 5                | 4                | 3                | 2                | 1    | 0    |
|      |      |      |      |      |      |    |      |      |      |      | DMA_THRES_RX1_12 | DMA_THRES_RX1_12 | DMA_THRES_RX1_12 | DMA_THRES_RX1_12 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-51. IRQDMATHOLDRX13 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                      |
|-------|------------------|--------|---------|--------------------------------------------------------------------------------------------------|
| 31-24 | DMA_THRES_RX1_15 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 15.                                       |
| 23-16 | DMA_THRES_RX1_14 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 14.                                       |
| 15-8  | DMA_THRES_RX1_13 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 13.                                       |
| 7-0   | DMA_THRES_RX1_12 | R/W    | 0h      | DMA threshold value for rx_pkt_cmp_0 for USB1 Endpoint 12. USBSS IRQ_DMA_THRSHOLD_RX1_3 Register |

Universal Serial Bus (USB)

## 16.4.1.23 IRQDMAENABLE0 Register (offset = 140h) [reset = 0h]

IRQDMAENABLE0 is shown in Figure 16-44 and described in Table 16-52.

## Figure 16-44. IRQDMAENABLE0 Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25            | 24            |
|----------------|----------------|----------------|----------------|----------------|----------------|---------------|---------------|
| DMA_EN_RX0 _15 | DMA_EN_RX0 _14 | DMA_EN_RX0 _13 | DMA_EN_RX0 _12 | DMA_EN_RX0 _11 | DMA_EN_RX0 _10 | DMA_EN_RX0 _9 | DMA_EN_RX0 _8 |
| R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        |
| 23             | 22             | 21             | 20             | 19             | 18             | 17            | 16            |
| DMA_EN_RX0 _7  | DMA_EN_RX0 _6  | DMA_EN_RX0 _5  | DMA_EN_RX0 _4  | DMA_EN_RX0 _3  | DMA_EN_RX0 _2  | DMA_EN_RX0 _1 | RESERVED      |
| R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        |
| 15             | 14             | 13             | 12             | 11             | 10             | 9             | 8             |
| DMA_EN_TX0_ 15 | DMA_EN_TX0_ 14 | DMA_EN_TX0_ 13 | DMA_EN_TX0_ 12 | DMA_EN_TX0_ 11 | DMA_EN_TX0_ 10 | DMA_EN_TX0_ 9 | DMA_EN_TX0_ 8 |
| R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        |
| 7              | 6              | 5              | 4              | 3              | 2              | 1             | 0             |
| DMA_EN_TX0_ 7  | DMA_EN_TX0_ 6  | DMA_EN_TX0_ 5  | DMA_EN_TX0_ 4  | DMA_EN_TX0_ 3  | DMA_EN_TX0_ 2  | DMA_EN_TX0_ 1 | RESERVED      |
| R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-52. IRQDMAENABLE0 Register Field Descriptions

|   Bit | Field         | Type   | Reset   | Description                                                       |
|-------|---------------|--------|---------|-------------------------------------------------------------------|
|    31 | DMA_EN_RX0_15 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 15. |
|    30 | DMA_EN_RX0_14 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 14. |
|    29 | DMA_EN_RX0_13 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 13. |
|    28 | DMA_EN_RX0_12 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 12. |
|    27 | DMA_EN_RX0_11 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 11. |
|    26 | DMA_EN_RX0_10 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 10. |
|    25 | DMA_EN_RX0_9  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 9.  |
|    24 | DMA_EN_RX0_8  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 8.  |
|    23 | DMA_EN_RX0_7  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 7.  |
|    22 | DMA_EN_RX0_6  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 6.  |
|    21 | DMA_EN_RX0_5  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 5.  |
|    20 | DMA_EN_RX0_4  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 4.  |
|    19 | DMA_EN_RX0_3  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 3.  |
|    18 | DMA_EN_RX0_2  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 2.  |
|    17 | DMA_EN_RX0_1  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 1.  |
|    16 | RESERVED      | R/W    | 0h      |                                                                   |
|    15 | DMA_EN_TX0_15 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 15. |
|    14 | DMA_EN_TX0_14 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 14. |

<!-- image -->

<!-- image -->

## Table 16-52. IRQDMAENABLE0 Register Field Descriptions (continued)

|   Bit | Field         | Type   | Reset   | Description                                                       |
|-------|---------------|--------|---------|-------------------------------------------------------------------|
|    13 | DMA_EN_TX0_13 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 13. |
|    12 | DMA_EN_TX0_12 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 12. |
|    11 | DMA_EN_TX0_11 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 11. |
|    10 | DMA_EN_TX0_10 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 10. |
|     9 | DMA_EN_TX0_9  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 9.  |
|     8 | DMA_EN_TX0_8  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 8.  |
|     7 | DMA_EN_TX0_7  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 7.  |
|     6 | DMA_EN_TX0_6  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 6.  |
|     5 | DMA_EN_TX0_5  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 5.  |
|     4 | DMA_EN_TX0_4  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 4.  |
|     3 | DMA_EN_TX0_3  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 3.  |
|     2 | DMA_EN_TX0_2  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 2.  |
|     1 | DMA_EN_TX0_1  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 1.  |
|     0 | RESERVED      | R/W    | 0h      |                                                                   |

Universal Serial Bus (USB)

## 16.4.1.24 IRQDMAENABLE1 Register (offset = 144h) [reset = 0h]

IRQDMAENABLE1 is shown in Figure 16-45 and described in Table 16-53.

## Figure 16-45. IRQDMAENABLE1 Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25            | 24            |
|----------------|----------------|----------------|----------------|----------------|----------------|---------------|---------------|
| DMA_EN_RX1 _15 | DMA_EN_RX1 _14 | DMA_EN_RX1 _13 | DMA_EN_RX1 _12 | DMA_EN_RX1 _11 | DMA_EN_RX1 _10 | DMA_EN_RX1 _9 | DMA_EN_RX1 _8 |
| R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        |
| 23             | 22             | 21             | 20             | 19             | 18             | 17            | 16            |
| DMA_EN_RX1 _7  | DMA_EN_RX1 _6  | DMA_EN_RX1 _5  | DMA_EN_RX1 _4  | DMA_EN_RX1 _3  | DMA_EN_RX1 _2  | DMA_EN_RX1 _1 | RESERVED      |
| R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        |
| 15             | 14             | 13             | 12             | 11             | 10             | 9             | 8             |
| DMA_EN_TX1_ 15 | DMA_EN_TX1_ 14 | DMA_EN_TX1_ 13 | DMA_EN_TX1_ 12 | DMA_EN_TX1_ 11 | DMA_EN_TX1_ 10 | DMA_EN_TX1_ 9 | DMA_EN_TX1_ 8 |
| R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        |
| 7              | 6              | 5              | 4              | 3              | 2              | 1             | 0             |
| DMA_EN_TX1_ 7  | DMA_EN_TX1_ 6  | DMA_EN_TX1_ 5  | DMA_EN_TX1_ 4  | DMA_EN_TX1_ 3  | DMA_EN_TX1_ 2  | DMA_EN_TX1_ 1 | RESERVED      |
| R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-53. IRQDMAENABLE1 Register Field Descriptions

|   Bit | Field         | Type   | Reset   | Description                                                       |
|-------|---------------|--------|---------|-------------------------------------------------------------------|
|    31 | DMA_EN_RX1_15 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 15. |
|    30 | DMA_EN_RX1_14 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 14. |
|    29 | DMA_EN_RX1_13 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 13. |
|    28 | DMA_EN_RX1_12 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 12. |
|    27 | DMA_EN_RX1_11 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 11. |
|    26 | DMA_EN_RX1_10 | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 10. |
|    25 | DMA_EN_RX1_9  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 9.  |
|    24 | DMA_EN_RX1_8  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 8.  |
|    23 | DMA_EN_RX1_7  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 7.  |
|    22 | DMA_EN_RX1_6  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 6.  |
|    21 | DMA_EN_RX1_5  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 5.  |
|    20 | DMA_EN_RX1_4  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 4.  |
|    19 | DMA_EN_RX1_3  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 3.  |
|    18 | DMA_EN_RX1_2  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 2.  |
|    17 | DMA_EN_RX1_1  | R/W    | 0h      | DMA threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 1.  |
|    16 | RESERVED      | R/W    | 0h      |                                                                   |
|    15 | DMA_EN_TX1_15 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 15. |
|    14 | DMA_EN_TX1_14 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 14. |

<!-- image -->

<!-- image -->

Table 16-53. IRQDMAENABLE1 Register Field Descriptions (continued)

|   Bit | Field         | Type   | Reset   | Description                                                       |
|-------|---------------|--------|---------|-------------------------------------------------------------------|
|    13 | DMA_EN_TX1_13 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 13. |
|    12 | DMA_EN_TX1_12 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 12. |
|    11 | DMA_EN_TX1_11 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 11. |
|    10 | DMA_EN_TX1_10 | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 10. |
|     9 | DMA_EN_TX1_9  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 9.  |
|     8 | DMA_EN_TX1_8  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 8.  |
|     7 | DMA_EN_TX1_7  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 7.  |
|     6 | DMA_EN_TX1_6  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 6.  |
|     5 | DMA_EN_TX1_5  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 5.  |
|     4 | DMA_EN_TX1_4  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 4.  |
|     3 | DMA_EN_TX1_3  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 3.  |
|     2 | DMA_EN_TX1_2  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 2.  |
|     1 | DMA_EN_TX1_1  | R/W    | 0h      | DMA threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 1.  |
|     0 | RESERVED      | R/W    | 0h      |                                                                   |

Universal Serial Bus (USB)

## 16.4.1.25 IRQFRAMETHOLDTX00 Register (offset = 200h) [reset = 0h]

IRQFRAMETHOLDTX00 is shown in Figure 16-46 and described in Table 16-54.

## Figure 16-46. IRQFRAMETHOLDTX00 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                | 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 | 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-54. IRQFRAMETHOLDTX00 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                 |
|-------|-------------------|--------|---------|-------------------------------------------------------------|
| 31-24 | FRAME_THRES_TX1_3 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 3. |
| 23-16 | FRAME_THRES_TX1_2 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 2. |
| 15-8  | FRAME_THRES_TX1_1 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 1. |
| 7-0   | RESERVED          | R/W    | 0h      |                                                             |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.26 IRQFRAMETHOLDTX01 Register (offset = 204h) [reset = 0h]

IRQFRAMETHOLDTX01 is shown in Figure 16-47 and described in Table 16-55.

## Figure 16-47. IRQFRAMETHOLDTX01 Register

| 31   | 30   | 29   | 28   | 27   |    | 26 25   | 24   |    | 23   | 22                | 21                | 20                | 19                | 18                | 17   | 16   |
|------|------|------|------|------|----|---------|------|----|------|-------------------|-------------------|-------------------|-------------------|-------------------|------|------|
|      |      |      |      |      |    |         |      |    |      | FRAME_THRES_TX1_6 | FRAME_THRES_TX1_6 | FRAME_THRES_TX1_6 | FRAME_THRES_TX1_6 | FRAME_THRES_TX1_6 |      |      |
|      |      |      |      |      |    |         |      |    |      | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 | 9       | 8    | 7  | 6    | 5                 | 4                 |                   | 3                 | 2                 | 1    | 0    |
|      |      |      |      |      |    |         |      |    |      | FRAME_THRES_TX1_4 | FRAME_THRES_TX1_4 | FRAME_THRES_TX1_4 | FRAME_THRES_TX1_4 | FRAME_THRES_TX1_4 |      |      |
|      |      |      |      |      |    |         |      |    |      | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-55. IRQFRAMETHOLDTX01 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                         |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_TX1_7 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 7.                                         |
| 23-16 | FRAME_THRES_TX1_6 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 6.                                         |
| 15-8  | FRAME_THRES_TX1_5 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 5.                                         |
| 7-0   | FRAME_THRES_TX1_4 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 4. USBSS IRQ_FRAME_THRSHOLD_TX0_1 Register |

Universal Serial Bus (USB)

## 16.4.1.27 IRQFRAMETHOLDTX02 Register (offset = 208h) [reset = 0h]

IRQFRAMETHOLDTX02 is shown in Figure 16-48 and described in Table 16-56.

## Figure 16-48. IRQFRAMETHOLDTX02 Register

| 31   | 30   | 29   | 28   | 27   |    | 26   | 25   | 24   | 23   | 22   | 21                 | 20                 | 19                 | 18                 | 17   | 16   |
|------|------|------|------|------|----|------|------|------|------|------|--------------------|--------------------|--------------------|--------------------|------|------|
|      |      |      |      |      |    |      |      |      |      |      | FRAME_THRES_TX1_10 | FRAME_THRES_TX1_10 | FRAME_THRES_TX1_10 | FRAME_THRES_TX1_10 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 | 9    | 8    |      | 7    | 6    | 5                  | 4                  | 3                  | 2                  | 1    | 0    |
|      |      |      |      |      |    |      |      |      |      |      | FRAME_THRES_TX1_8  | FRAME_THRES_TX1_8  | FRAME_THRES_TX1_8  | FRAME_THRES_TX1_8  |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-56. IRQFRAMETHOLDTX02 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                         |
|-------|--------------------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_TX1_11 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 11.                                        |
| 23-16 | FRAME_THRES_TX1_10 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 10.                                        |
| 15-8  | FRAME_THRES_TX1_9  | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 9.                                         |
| 7-0   | FRAME_THRES_TX1_8  | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 8. USBSS IRQ_FRAME_THRSHOLD_TX0_2 Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.28 IRQFRAMETHOLDTX03 Register (offset = 20Ch) [reset = 0h]

IRQFRAMETHOLDTX03 is shown in Figure 16-49 and described in Table 16-57.

## Figure 16-49. IRQFRAMETHOLDTX03 Register

| 31   | 30   | 29   | 28   | 27   | 26   |    | 25   | 24   | 23   | 22   | 21                 | 20                 | 19                 | 18                 | 17   | 16   |
|------|------|------|------|------|------|----|------|------|------|------|--------------------|--------------------|--------------------|--------------------|------|------|
|      |      |      |      |      |      |    |      |      |      |      | FRAME_THRES_TX1_14 | FRAME_THRES_TX1_14 | FRAME_THRES_TX1_14 | FRAME_THRES_TX1_14 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |
| 15   | 14   | 13   | 12   | 11   | 10   | 9  | 8    |      | 7    | 6    | 5                  | 4                  | 3                  | 2                  | 1    | 0    |
|      |      |      |      |      |      |    |      |      |      |      | FRAME_THRES_TX1_12 | FRAME_THRES_TX1_12 | FRAME_THRES_TX1_12 | FRAME_THRES_TX1_12 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-57. IRQFRAMETHOLDTX03 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                          |
|-------|--------------------|--------|---------|------------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_TX1_15 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 15.                                         |
| 23-16 | FRAME_THRES_TX1_14 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 14.                                         |
| 15-8  | FRAME_THRES_TX1_13 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 13.                                         |
| 7-0   | FRAME_THRES_TX1_12 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB0 Endpoint 12. USBSS IRQ_FRAME_THRSHOLD_TX0_3 Register |

Universal Serial Bus (USB)

## 16.4.1.29 IRQFRAMETHOLDRX00 Register (offset = 210h) [reset = 0h]

IRQFRAMETHOLDRX00 is shown in Figure 16-50 and described in Table 16-58.

## Figure 16-50. IRQFRAMETHOLDRX00 Register

| 31                | 30                | 29                | 28                | 27                | 26                |                   | 25                | 24                | 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |                   | 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-58. IRQFRAMETHOLDRX00 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                 |
|-------|-------------------|--------|---------|-------------------------------------------------------------|
| 31-24 | FRAME_THRES_RX1_3 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 3. |
| 23-16 | FRAME_THRES_RX1_2 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 2. |
| 15-8  | FRAME_THRES_RX1_1 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 1. |
| 7-0   | RESERVED          | R/W    | 0h      |                                                             |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.30 IRQFRAMETHOLDRX01 Register (offset = 214h) [reset = 0h]

IRQFRAMETHOLDRX01 is shown in Figure 16-51 and described in Table 16-59.

## Figure 16-51. IRQFRAMETHOLDRX01 Register

| 31   | 30   | 29   | 28   | 27   |    | 26   | 25   | 24   | 23   | 22   | 21                | 20                | 19                | 18                | 17   | 16   |
|------|------|------|------|------|----|------|------|------|------|------|-------------------|-------------------|-------------------|-------------------|------|------|
|      |      |      |      |      |    |      |      |      |      |      | FRAME_THRES_RX1_6 | FRAME_THRES_RX1_6 | FRAME_THRES_RX1_6 | FRAME_THRES_RX1_6 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 | 9    | 8    |      | 7    | 6    | 5                 | 4                 | 3                 | 2                 | 1    | 0    |
|      |      |      |      |      |    |      |      |      |      |      | FRAME_THRES_RX1_4 | FRAME_THRES_RX1_4 | FRAME_THRES_RX1_4 | FRAME_THRES_RX1_4 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-59. IRQFRAMETHOLDRX01 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                         |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_RX1_7 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 7.                                         |
| 23-16 | FRAME_THRES_RX1_6 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 6.                                         |
| 15-8  | FRAME_THRES_RX1_5 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 5.                                         |
| 7-0   | FRAME_THRES_RX1_4 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 4. USBSS IRQ_FRAME_THRSHOLD_RX0_1 Register |

Universal Serial Bus (USB)

## 16.4.1.31 IRQFRAMETHOLDRX02 Register (offset = 218h) [reset = 0h]

IRQFRAMETHOLDRX02 is shown in Figure 16-52 and described in Table 16-60.

## Figure 16-52. IRQFRAMETHOLDRX02 Register

| 31                | 30                | 29                | 28                | 27                |                   | 26                | 25   | 24   | 23   | 22   | 21                 | 20                 | 19                 | 18                 | 17   | 16   |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|------|------|------|------|--------------------|--------------------|--------------------|--------------------|------|------|
|                   |                   |                   |                   |                   |                   |                   |      |      |      |      | FRAME_THRES_RX1_10 | FRAME_THRES_RX1_10 | FRAME_THRES_RX1_10 | FRAME_THRES_RX1_10 |      |      |
|                   |                   |                   |                   |                   |                   |                   |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 |      | 8    | 7    | 6    | 5                  | 4                  | 3                  | 2                  | 1    | 0    |
| FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 |      |      |      |      | FRAME_THRES_RX1_8  | FRAME_THRES_RX1_8  | FRAME_THRES_RX1_8  | FRAME_THRES_RX1_8  |      |      |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-60. IRQFRAMETHOLDRX02 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                         |
|-------|--------------------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_RX1_11 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 11.                                        |
| 23-16 | FRAME_THRES_RX1_10 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 10.                                        |
| 15-8  | FRAME_THRES_RX1_9  | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 9.                                         |
| 7-0   | FRAME_THRES_RX1_8  | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 8. USBSS IRQ_FRAME_THRSHOLD_RX0_2 Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.32 IRQFRAMETHOLDRX03 Register (offset = 21Ch) [reset = 0h]

IRQFRAMETHOLDRX03 is shown in Figure 16-53 and described in Table 16-61.

## Figure 16-53. IRQFRAMETHOLDRX03 Register

| 31   | 30   | 29   | 28   | 27   |    | 26   | 25   | 24   | 23   | 22   | 21                 | 20                 | 19                 | 18                 | 17   | 16   |
|------|------|------|------|------|----|------|------|------|------|------|--------------------|--------------------|--------------------|--------------------|------|------|
|      |      |      |      |      |    |      |      |      |      |      | FRAME_THRES_RX1_14 | FRAME_THRES_RX1_14 | FRAME_THRES_RX1_14 | FRAME_THRES_RX1_14 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 | 9    | 8    |      | 7    | 6    | 5                  | 4                  | 3                  | 2                  | 1    | 0    |
|      |      |      |      |      |    |      |      |      |      |      | FRAME_THRES_RX1_12 | FRAME_THRES_RX1_12 | FRAME_THRES_RX1_12 | FRAME_THRES_RX1_12 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-61. IRQFRAMETHOLDRX03 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                          |
|-------|--------------------|--------|---------|------------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_RX1_15 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 15.                                         |
| 23-16 | FRAME_THRES_RX1_14 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 14.                                         |
| 15-8  | FRAME_THRES_RX1_13 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 13.                                         |
| 7-0   | FRAME_THRES_RX1_12 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB0 Endpoint 12. USBSS IRQ_FRAME_THRSHOLD_RX0_3 Register |

Universal Serial Bus (USB)

## 16.4.1.33 IRQFRAMETHOLDTX10 Register (offset = 220h) [reset = 0h]

IRQFRAMETHOLDTX10 is shown in Figure 16-54 and described in Table 16-62.

## Figure 16-54. IRQFRAMETHOLDTX10 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                | 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_3 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 | FRAME_THRES_TX1_2 |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 | 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | FRAME_THRES_TX1_1 | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-62. IRQFRAMETHOLDTX10 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                 |
|-------|-------------------|--------|---------|-------------------------------------------------------------|
| 31-24 | FRAME_THRES_TX1_3 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 3. |
| 23-16 | FRAME_THRES_TX1_2 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 2. |
| 15-8  | FRAME_THRES_TX1_1 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 1. |
| 7-0   | RESERVED          | R/W    | 0h      |                                                             |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.34 IRQFRAMETHOLDTX11 Register (offset = 224h) [reset = 0h]

IRQFRAMETHOLDTX11 is shown in Figure 16-55 and described in Table 16-63.

## Figure 16-55. IRQFRAMETHOLDTX11 Register

| 31   | 30   | 29   | 28   | 27   |    | 26 25   | 24   |    | 23   | 22                | 21                | 20                | 19                | 18                | 17   | 16   |
|------|------|------|------|------|----|---------|------|----|------|-------------------|-------------------|-------------------|-------------------|-------------------|------|------|
|      |      |      |      |      |    |         |      |    |      | FRAME_THRES_TX1_6 | FRAME_THRES_TX1_6 | FRAME_THRES_TX1_6 | FRAME_THRES_TX1_6 | FRAME_THRES_TX1_6 |      |      |
|      |      |      |      |      |    |         |      |    |      | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 | 9       | 8    | 7  | 6    | 5                 | 4                 |                   | 3                 | 2                 | 1    | 0    |
|      |      |      |      |      |    |         |      |    |      | FRAME_THRES_TX1_4 | FRAME_THRES_TX1_4 | FRAME_THRES_TX1_4 | FRAME_THRES_TX1_4 | FRAME_THRES_TX1_4 |      |      |
|      |      |      |      |      |    |         |      |    |      | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-63. IRQFRAMETHOLDTX11 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                         |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_TX1_7 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 7.                                         |
| 23-16 | FRAME_THRES_TX1_6 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 6.                                         |
| 15-8  | FRAME_THRES_TX1_5 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 5.                                         |
| 7-0   | FRAME_THRES_TX1_4 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 4. USBSS IRQ_FRAME_THRSHOLD_TX1_1 Register |

Universal Serial Bus (USB)

## 16.4.1.35 IRQFRAMETHOLDTX12 Register (offset = 228h) [reset = 0h]

IRQFRAMETHOLDTX12 is shown in Figure 16-56 and described in Table 16-64.

## Figure 16-56. IRQFRAMETHOLDTX12 Register

| 31   | 30   | 29   | 28   | 27   | 26   |    | 25   | 24   | 23   | 22                 | 21                 | 20                 | 19                 | 18                 | 17                 | 16   |
|------|------|------|------|------|------|----|------|------|------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|------|
|      |      |      |      |      |      |    |      |      |      | FRAME_THRES_TX1_10 | FRAME_THRES_TX1_10 | FRAME_THRES_TX1_10 | FRAME_THRES_TX1_10 | FRAME_THRES_TX1_10 | FRAME_THRES_TX1_10 |      |
|      |      |      |      |      |      |    |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |
| 15   | 14   | 13   | 12   | 11   | 10   | 9  | 8    | 7    | 6    | 5                  | 4                  |                    | 3                  | 2                  | 1                  | 0    |
|      |      |      |      |      |      |    |      |      |      | FRAME_THRES_TX1_8  | FRAME_THRES_TX1_8  | FRAME_THRES_TX1_8  | FRAME_THRES_TX1_8  | FRAME_THRES_TX1_8  | FRAME_THRES_TX1_8  |      |
|      |      |      |      |      |      |    |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-64. IRQFRAMETHOLDTX12 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                         |
|-------|--------------------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_TX1_11 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 11.                                        |
| 23-16 | FRAME_THRES_TX1_10 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 10.                                        |
| 15-8  | FRAME_THRES_TX1_9  | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 9.                                         |
| 7-0   | FRAME_THRES_TX1_8  | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 8. USBSS IRQ_FRAME_THRSHOLD_TX1_2 Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.36 IRQFRAMETHOLDTX13 Register (offset = 22Ch) [reset = 0h]

IRQFRAMETHOLDTX13 is shown in Figure 16-57 and described in Table 16-65.

## Figure 16-57. IRQFRAMETHOLDTX13 Register

| 31   | 30   | 29   | 28   | 27   | 26   |    | 25   | 24   | 23   | 22   | 21                 | 20                 | 19                 | 18                 | 17   | 16   |
|------|------|------|------|------|------|----|------|------|------|------|--------------------|--------------------|--------------------|--------------------|------|------|
|      |      |      |      |      |      |    |      |      |      |      | FRAME_THRES_TX1_14 | FRAME_THRES_TX1_14 | FRAME_THRES_TX1_14 | FRAME_THRES_TX1_14 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |
| 15   | 14   | 13   | 12   | 11   | 10   | 9  | 8    |      | 7    | 6    | 5                  | 4                  | 3                  | 2                  | 1    | 0    |
|      |      |      |      |      |      |    |      |      |      |      | FRAME_THRES_TX1_12 | FRAME_THRES_TX1_12 | FRAME_THRES_TX1_12 | FRAME_THRES_TX1_12 |      |      |
|      |      |      |      |      |      |    |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-65. IRQFRAMETHOLDTX13 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                          |
|-------|--------------------|--------|---------|------------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_TX1_15 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 15.                                         |
| 23-16 | FRAME_THRES_TX1_14 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 14.                                         |
| 15-8  | FRAME_THRES_TX1_13 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 13.                                         |
| 7-0   | FRAME_THRES_TX1_12 | R/W    | 0h      | FRAME threshold value for tx_pkt_cmp_0 for USB1 Endpoint 12. USBSS IRQ_FRAME_THRSHOLD_TX1_3 Register |

Universal Serial Bus (USB)

## 16.4.1.37 IRQFRAMETHOLDRX10 Register (offset = 230h) [reset = 0h]

IRQFRAMETHOLDRX10 is shown in Figure 16-58 and described in Table 16-66.

## Figure 16-58. IRQFRAMETHOLDRX10 Register

| 31                | 30                | 29                | 28                | 27                | 26                |                   | 25                | 24                | 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_3 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 | FRAME_THRES_RX1_2 |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |                   | 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | FRAME_THRES_RX1_1 | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-66. IRQFRAMETHOLDRX10 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                 |
|-------|-------------------|--------|---------|-------------------------------------------------------------|
| 31-24 | FRAME_THRES_RX1_3 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 3. |
| 23-16 | FRAME_THRES_RX1_2 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 2. |
| 15-8  | FRAME_THRES_RX1_1 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 1. |
| 7-0   | RESERVED          | R/W    | 0h      |                                                             |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.38 IRQFRAMETHOLDRX11 Register (offset = 234h) [reset = 0h]

IRQFRAMETHOLDRX11 is shown in Figure 16-59 and described in Table 16-67.

## Figure 16-59. IRQFRAMETHOLDRX11 Register

| 31   | 30   | 29   | 28   | 27   |    | 26   | 25   | 24   | 23   | 22   | 21                | 20                | 19                | 18                | 17   | 16   |
|------|------|------|------|------|----|------|------|------|------|------|-------------------|-------------------|-------------------|-------------------|------|------|
|      |      |      |      |      |    |      |      |      |      |      | FRAME_THRES_RX1_6 | FRAME_THRES_RX1_6 | FRAME_THRES_RX1_6 | FRAME_THRES_RX1_6 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 | 9    | 8    |      | 7    | 6    | 5                 | 4                 | 3                 | 2                 | 1    | 0    |
|      |      |      |      |      |    |      |      |      |      |      | FRAME_THRES_RX1_4 | FRAME_THRES_RX1_4 | FRAME_THRES_RX1_4 | FRAME_THRES_RX1_4 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-67. IRQFRAMETHOLDRX11 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                         |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_RX1_7 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 7.                                         |
| 23-16 | FRAME_THRES_RX1_6 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 6.                                         |
| 15-8  | FRAME_THRES_RX1_5 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 5.                                         |
| 7-0   | FRAME_THRES_RX1_4 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 4. USBSS IRQ_FRAME_THRSHOLD_RX1_1 Register |

Universal Serial Bus (USB)

## 16.4.1.39 IRQFRAMETHOLDRX12 Register (offset = 238h) [reset = 0h]

IRQFRAMETHOLDRX12 is shown in Figure 16-60 and described in Table 16-68.

## Figure 16-60. IRQFRAMETHOLDRX12 Register

| 31                | 30                | 29                | 28                | 27                |                   | 26                | 25   | 24   | 23   | 22   | 21                 | 20                 | 19                 | 18                 | 17   | 16   |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|------|------|------|------|--------------------|--------------------|--------------------|--------------------|------|------|
|                   |                   |                   |                   |                   |                   |                   |      |      |      |      | FRAME_THRES_RX1_10 | FRAME_THRES_RX1_10 | FRAME_THRES_RX1_10 | FRAME_THRES_RX1_10 |      |      |
|                   |                   |                   |                   |                   |                   |                   |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 |      | 8    | 7    | 6    | 5                  | 4                  | 3                  | 2                  | 1    | 0    |
| FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 | FRAME_THRES_RX1_9 |      |      |      |      | FRAME_THRES_RX1_8  | FRAME_THRES_RX1_8  | FRAME_THRES_RX1_8  | FRAME_THRES_RX1_8  |      |      |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-68. IRQFRAMETHOLDRX12 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                         |
|-------|--------------------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_RX1_11 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 11.                                        |
| 23-16 | FRAME_THRES_RX1_10 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 10.                                        |
| 15-8  | FRAME_THRES_RX1_9  | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 9.                                         |
| 7-0   | FRAME_THRES_RX1_8  | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 8. USBSS IRQ_FRAME_THRSHOLD_RX1_2 Register |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.1.40 IRQFRAMETHOLDRX13 Register (offset = 23Ch) [reset = 0h]

IRQFRAMETHOLDRX13 is shown in Figure 16-61 and described in Table 16-69.

## Figure 16-61. IRQFRAMETHOLDRX13 Register

| 31   | 30   | 29   | 28   | 27   |    | 26   | 25   | 24   | 23   | 22   | 21                 | 20                 | 19                 | 18                 | 17   | 16   |
|------|------|------|------|------|----|------|------|------|------|------|--------------------|--------------------|--------------------|--------------------|------|------|
|      |      |      |      |      |    |      |      |      |      |      | FRAME_THRES_RX1_14 | FRAME_THRES_RX1_14 | FRAME_THRES_RX1_14 | FRAME_THRES_RX1_14 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |
| 15   | 14   | 13   | 12   | 11   | 10 | 9    | 8    |      | 7    | 6    | 5                  | 4                  | 3                  | 2                  | 1    | 0    |
|      |      |      |      |      |    |      |      |      |      |      | FRAME_THRES_RX1_12 | FRAME_THRES_RX1_12 | FRAME_THRES_RX1_12 | FRAME_THRES_RX1_12 |      |      |
|      |      |      |      |      |    |      |      |      |      |      | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-69. IRQFRAMETHOLDRX13 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                          |
|-------|--------------------|--------|---------|------------------------------------------------------------------------------------------------------|
| 31-24 | FRAME_THRES_RX1_15 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 15.                                         |
| 23-16 | FRAME_THRES_RX1_14 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 14.                                         |
| 15-8  | FRAME_THRES_RX1_13 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 13.                                         |
| 7-0   | FRAME_THRES_RX1_12 | R/W    | 0h      | FRAME threshold value for rx_pkt_cmp_0 for USB1 Endpoint 12. USBSS IRQ_FRAME_THRSHOLD_RX1_3 Register |

Universal Serial Bus (USB)

## 16.4.1.41 IRQFRAMEENABLE0 Register (offset = 240h) [reset = 0h]

IRQFRAMEENABLE0 is shown in Figure 16-62 and described in Table 16-70.

## Figure 16-62. IRQFRAMEENABLE0 Register

| 31               | 30       | 29       | 28       | 27       | 26       | 25              | 24       |
|------------------|----------|----------|----------|----------|----------|-----------------|----------|
| FRAME_EN_R X0_15 | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED        | RESERVED |
| R/W-0h           | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h          | R/W-0h   |
| 23               | 22       | 21       | 20       | 19       | 18       | 17              | 16       |
| RESERVED         | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | FRAME_EN_R X0_1 | RESERVED |
| R/W-0h           | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h          | R/W-0h   |
| 15               | 14       | 13       | 12       | 11       | 10       | 9               | 8        |
| FRAME_EN_T X0_15 | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED        | RESERVED |
| R/W-0h           | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h          | R/W-0h   |
| 7                | 6        | 5        | 4        | 3        | 2        | 1               | 0        |
| RESERVED         | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | FRAME_EN_T X0_1 | RESERVED |
| R/W-0h           | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h          | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-70. IRQFRAMEENABLE0 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                             |
|-------|-----------------|--------|---------|-----------------------------------------------------------------------------------------|
| 31    | FRAME_EN_RX0_15 | R/W    | 0h      | FRAME threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 15. ... ... ... ... ... |
| 30-18 | RESERVED        | R/W    | 0h      |                                                                                         |
| 17    | FRAME_EN_RX0_1  | R/W    | 0h      | FRAME threshold enable value for rx_pkt_cmp_0 for USB0 Endpoint 1.                      |
| 16    | RESERVED        | R/W    | 0h      |                                                                                         |
| 15    | FRAME_EN_TX0_15 | R/W    | 0h      | FRAME threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 15. ... ... ... ... ... |
| 14-2  | RESERVED        | R/W    | 0h      |                                                                                         |
| 1     | FRAME_EN_TX0_1  | R/W    | 0h      | FRAME threshold enable value for tx_pkt_cmp_0 for USB0 Endpoint 1.                      |
| 0     | RESERVED        | R/W    | 0h      |                                                                                         |

<!-- image -->