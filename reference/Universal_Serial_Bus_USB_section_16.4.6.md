## 16.4.5.123 RXHPCRB29 Register (offset = BB0h) [reset = 0h]

RXHPCRB29 is shown in Figure 16-274 and described in Table 16-286.

| Figure 16-274. RXHPCRB29 Register   | Figure 16-274. RXHPCRB29 Register   | Figure 16-274. RXHPCRB29 Register   | Figure 16-274. RXHPCRB29 Register   | Figure 16-274. RXHPCRB29 Register   | Figure 16-274. RXHPCRB29 Register   | Figure 16-274. RXHPCRB29 Register   | Figure 16-274. RXHPCRB29 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-286. RXHPCRB29 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

## 16.4.6 CPPI\_DMA\_SCHEDULER Registers

Table 16-287 lists the memory-mapped registers for the CPPI\_DMA\_SCHEDULER. All register offset addresses not listed in Table 16-287 should be considered as reserved locations and the register contents should not be modified.

Table 16-287. CPPI\_DMA\_SCHEDULER Registers

| Offset         | Acronym           | Register Name   | Section          |
|----------------|-------------------|-----------------|------------------|
| 3000h          | DMA_SCHED_CTRL    |                 | Section 16.4.6.1 |
| 3800h to 38FCh | WORD_0 to WORD_63 |                 | Section 16.4.6.2 |

<!-- image -->

<!-- image -->

## 16.4.6.1 DMA\_SCHED\_CTRL Register (offset = 3000h) [reset = 0h]

DMA\_SCHED\_CTRL is shown in Figure 16-275 and described in Table 16-288.

## Figure 16-275. DMA\_SCHED\_CTRL Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| ENABLE     | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| LAST_ENTRY | LAST_ENTRY | LAST_ENTRY | LAST_ENTRY | LAST_ENTRY | LAST_ENTRY | LAST_ENTRY | LAST_ENTRY |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-288. DMA\_SCHED\_CTRL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                           |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | ENABLE     | R/W    | 0h      | This is the enable bit for the scheduler and is encoded as follows: 0 = scheduler is disabled and will no longer fetch entries from the scheduler table or pass credits to the DMA controller 1 = scheduler is enabled This bit should only be set after the table has been initialized.                                                                                              |
| 30-8  | RESERVED   | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                       |
| 7-0   | LAST_ENTRY | R/W    | 0h      | This field indicates the last valid entry in the scheduler table. There are 64 words in the table and there are 4 entries in each word. The table can be programmed with any integer number of entries from 1 to 256. The corresponding encoding for this field is as follows: 0 = 1 entry 1 = 2 entries ... 254 = 255 entries 255 = 256 entries CPPI DMA Scheduler Control Registers |

Universal Serial Bus (USB)

## 16.4.6.2 WORD\_0 to WORD\_63 Register (offset = 3800h to 38FCh) [reset = 0h]

WORD\_0 to WORD\_63 is shown in Figure 16-276 and described in Table 16-289.

## Figure 16-276. WORD\_0 to WORD\_63 Register

| 31           | 30       | 29   | 28   | 27   | 26             | 25   | 24   |
|--------------|----------|------|------|------|----------------|------|------|
| ENTRY3_RXT X | RESERVED |      |      |      | ENTRY3_CHANNEL |      |      |
| W-0h         | W-       |      |      |      | R/W-           |      |      |
| 23           | 22       | 21   | 20   | 19   | 18             | 17   | 16   |
| ENTRY2_RXT X | RESERVED |      |      |      | ENTRY2_CHANNEL |      |      |
| W-0h         | W-       |      |      |      | R/W-           |      |      |
| 15           | 14       | 13   | 12   | 11   | 10             | 9    | 8    |
| ENTRY1_RXT X | RESERVED |      |      |      | ENTRY1_CHANNEL |      |      |
| W-0h         | W-       |      |      |      | R/W-           |      |      |
| 7            | 6        | 5    | 4    | 3    | 2              | 1    | 0    |
| ENTRY0_RXT X | RESERVED |      |      |      | ENTRY0_CHANNEL |      |      |
| W-0h         | W-       |      |      |      | R/W-           |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-289. WORD\_0 to WORD\_63 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | ENTRY3_RXTX    | W      | 0h      | This bit indicates if this entry is for a Tx or an Rx channel and is encoded as follows: 0 = Tx Channel 1 = Rx Channel                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 30-29 | RESERVED       | W      |         |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 28-24 | ENTRY3_CHANNEL | R/W    |         | This field indicates the channel number that is to be given an opportunity to transfer data. If this is a Tx entry, the DMA will be presented with a scheduling credit for that exact Tx channel. If this is an Rx entry, the DMA will be presented with a scheduling credit for the Rx FIFO that is associated with this channel. For Rx FIFOs which carry traffic for more than 1 Rx DMA channel, the exact channel number that is given in the Rx credit will actually be the channel number which is currently on the head element of that Rx FIFO, which is not necessarily the channel number given in the scheduler table entry. |
| 23    | ENTRY2_RXTX    | W      | 0h      | This bit indicates if this entry is for a Tx or an Rx channel and is encoded as follows: 0 = Tx Channel 1 = Rx Channel                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 22-21 | RESERVED       | W      |         |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 20-16 | ENTRY2_CHANNEL | R/W    |         | This field indicates the channel number that is to be given an opportunity to transfer data. If this is a Tx entry, the DMA will be presented with a scheduling credit for that exact Tx channel. If this is an Rx entry, the DMA will be presented with a scheduling credit for the Rx FIFO that is associated with this channel. For Rx FIFOs which carry traffic for more than 1 Rx DMA channel, the exact channel number that is given in the Rx credit will actually be the channel number which is currently on the head element of that Rx FIFO, which is not necessarily the channel number given in the scheduler table entry. |
| 15    | ENTRY1_RXTX    | W      | 0h      | This bit indicates if this entry is for a Tx or an Rx channel and is encoded as follows: 0 = Tx Channel 1 = Rx Channel                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |

<!-- image -->