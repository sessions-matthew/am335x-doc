<!-- image -->

www.ti.com

## 14.5.4 CPSW\_STATS Registers

For a full description of the CPSW\_STATS registers, see Section 14.3.2.20, CPSW\_3G Network Statistics . The registers are summarized in Table 14-100.

Table 14-100. CPSW\_STATS REGISTERS

| Offset   | Acronym   | Register Name                 | Section                |
|----------|-----------|-------------------------------|------------------------|
| 00h      |           | Good Rx Frames                | Section 14.3.2.20.1.1  |
| 04h      |           | Broadcast Rx Frames           | Section 14.3.2.20.1.2  |
| 08h      |           | Multicast Rx Frames           | Section 14.3.2.20.1.3  |
| 0Ch      |           | Pause Rx Frames               | Section 14.3.2.20.1.4  |
| 10h      |           | Rx CRC Errors                 | Section 14.3.2.20.1.5  |
| 14h      |           | Rx Align/Code Errors          | Section 14.3.2.20.1.6  |
| 18h      |           | Oversize Rx Frames            | Section 14.3.2.20.1.7  |
| 1Ch      |           | Rx Jabbers                    | Section 14.3.2.20.1.8  |
| 20h      |           | Undersize (Short) Rx Frames   | Section 14.3.2.20.1.9  |
| 24h      |           | Rx Fragments                  | Section 14.3.2.20.1.10 |
| 30h      |           | Rx Octets                     | Section 14.3.2.20.1.14 |
| 34h      |           | Good Tx Frames                | Section 14.3.2.20.2.1  |
| 38h      |           | Broadcast Tx Frames           | Section 14.3.2.20.2.2  |
| 3Ch      |           | Multicast Tx Frames           | Section 14.3.2.20.2.3  |
| 40h      |           | Pause Tx Frames               | Section 14.3.2.20.2.4  |
| 44h      |           | Deferred Tx Frames            | Section 14.3.2.20.2.11 |
| 48h      |           | Collisions                    | Section 14.3.2.20.2.5  |
| 4Ch      |           | Single Collision Tx Frames    | Section 14.3.2.20.2.6  |
| 50h      |           | Multiple Collision Tx Frames  | Section 14.3.2.20.2.7  |
| 54h      |           | Excessive Collisions          | Section 14.3.2.20.2.8  |
| 58h      |           | Late Collisions               | Section 14.3.2.20.2.9  |
| 5Ch      |           | Tx Underrun                   | Section 14.3.2.20.2.10 |
| 60h      |           | Carrier Sense Errors          | Section 14.3.2.20.2.12 |
| 64h      |           | Tx Octets                     | Section 14.3.2.20.2.13 |
| 68h      |           | Rx + Tx 64 Octet Frames       | Section 14.3.2.20.3.1  |
| 6Ch      |           | Rx + Tx 65-127 Octet Frames   | Section 14.3.2.20.3.2  |
| 70h      |           | Rx + Tx 128-255 Octet Frames  | Section 14.3.2.20.3.3  |
| 74h      |           | Rx + Tx 256-511 Octet Frames  | Section 14.3.2.20.3.4  |
| 78h      |           | Rx + Tx 512-1023 Octet Frames | Section 14.3.2.20.3.5  |
| 7Ch      |           | Rx + Tx 1024_Up Octet Frames  | Section 14.3.2.20.3.6  |
| 80h      |           | Net Octets                    | Section 14.3.2.20.1.15 |
| 84h      |           | Rx Start of Frame Overruns    | Section 14.3.2.20.1.11 |
| 88h      |           | Rx Middle of Frame Overruns   | Section 14.3.2.20.1.12 |
| 8Ch      |           | Rx DMA Overruns               | Section 14.3.2.20.1.13 |

## 14.5.5 CPDMA\_STATERAM Registers

Table 14-101 lists the memory-mapped registers for the CPSW\_CPDMA. All register offset addresses not listed in Table 14-101 should be considered as reserved locations and the register contents should not be modified.

## Table 14-101. CPDMA\_STATERAM REGISTERS

<!-- image -->

| Offset   | Acronym   | Register Name                                             | Section           |
|----------|-----------|-----------------------------------------------------------|-------------------|
| 00h      | TX0_HDP   | CPDMA_STATERAM TX CHANNEL 0 HEAD DESC POINTER *           | Section 14.5.5.1  |
| 04h      | TX1_HDP   | CPDMA_STATERAM TX CHANNEL 1 HEAD DESC POINTER *           | Section 14.5.5.2  |
| 08h      | TX2_HDP   | CPDMA_STATERAM TX CHANNEL 2 HEAD DESC POINTER *           | Section 14.5.5.3  |
| 0Ch      | TX3_HDP   | CPDMA_STATERAM TX CHANNEL 3 HEAD DESC POINTER *           | Section 14.5.5.4  |
| 10h      | TX4_HDP   | CPDMA_STATERAM TX CHANNEL 4 HEAD DESC POINTER *           | Section 14.5.5.5  |
| 14h      | TX5_HDP   | CPDMA_STATERAM TX CHANNEL 5 HEAD DESC POINTER *           | Section 14.5.5.6  |
| 18h      | TX6_HDP   | CPDMA_STATERAM TX CHANNEL 6 HEAD DESC POINTER *           | Section 14.5.5.7  |
| 1Ch      | TX7_HDP   | CPDMA_STATERAM TX CHANNEL 7 HEAD DESC POINTER *           | Section 14.5.5.8  |
| 20h      | RX0_HDP   | CPDMA_STATERAM RX 0 CHANNEL 0 HEAD DESC POINTER *         | Section 14.5.5.9  |
| 24h      | RX1_HDP   | CPDMA_STATERAM RX 1 CHANNEL 1 HEAD DESC POINTER *         | Section 14.5.5.10 |
| 28h      | RX2_HDP   | CPDMA_STATERAM RX 2 CHANNEL 2 HEAD DESC POINTER *         | Section 14.5.5.11 |
| 2Ch      | RX3_HDP   | CPDMA_STATERAM RX 3 CHANNEL 3 HEAD DESC POINTER *         | Section 14.5.5.12 |
| 30h      | RX4_HDP   | CPDMA_STATERAM RX 4 CHANNEL 4 HEAD DESC POINTER *         | Section 14.5.5.13 |
| 34h      | RX5_HDP   | CPDMA_STATERAM RX 5 CHANNEL 5 HEAD DESC POINTER *         | Section 14.5.5.14 |
| 38h      | RX6_HDP   | CPDMA_STATERAM RX 6 CHANNEL 6 HEAD DESC POINTER *         | Section 14.5.5.15 |
| 3Ch      | RX7_HDP   | CPDMA_STATERAM RX 7 CHANNEL 7 HEAD DESC POINTER *         | Section 14.5.5.16 |
| 40h      | TX0_CP    | CPDMA_STATERAM TX CHANNEL 0 COMPLETION POINTER REGISTER   | Section 14.5.5.17 |
| 44h      | TX1_CP    | CPDMA_STATERAM TX CHANNEL 1 COMPLETION POINTER REGISTER * | Section 14.5.5.18 |
| 48h      | TX2_CP    | CPDMA_STATERAM TX CHANNEL 2 COMPLETION POINTER REGISTER * | Section 14.5.5.19 |
| 4Ch      | TX3_CP    | CPDMA_STATERAM TX CHANNEL 3 COMPLETION POINTER REGISTER * | Section 14.5.5.20 |
| 50h      | TX4_CP    | CPDMA_STATERAM TX CHANNEL 4 COMPLETION POINTER REGISTER * | Section 14.5.5.21 |
| 54h      | TX5_CP    | CPDMA_STATERAM TX CHANNEL 5 COMPLETION POINTER REGISTER * | Section 14.5.5.22 |
| 58h      | TX6_CP    | CPDMA_STATERAM TX CHANNEL 6 COMPLETION POINTER REGISTER * | Section 14.5.5.23 |
| 5Ch      | TX7_CP    | CPDMA_STATERAM TX CHANNEL 7 COMPLETION POINTER REGISTER * | Section 14.5.5.24 |
| 60h      | RX0_CP    | CPDMA_STATERAM RX CHANNEL 0 COMPLETION POINTER REGISTER * | Section 14.5.5.25 |
| 64h      | RX1_CP    | CPDMA_STATERAM RX CHANNEL 1 COMPLETION POINTER REGISTER * | Section 14.5.5.26 |
| 68h      | RX2_CP    | CPDMA_STATERAM RX CHANNEL 2 COMPLETION POINTER REGISTER * | Section 14.5.5.27 |
| 6Ch      | RX3_CP    | CPDMA_STATERAM RX CHANNEL 3 COMPLETION POINTER REGISTER * | Section 14.5.5.28 |

<!-- image -->

## Table 14-101. CPDMA\_STATERAM REGISTERS (continued)

| Offset   | Acronym   | Register Name                                             | Section           |
|----------|-----------|-----------------------------------------------------------|-------------------|
| 70h      | RX4_CP    | CPDMA_STATERAM RX CHANNEL 4 COMPLETION POINTER REGISTER * | Section 14.5.5.29 |
| 74h      | RX5_CP    | CPDMA_STATERAM RX CHANNEL 5 COMPLETION POINTER REGISTER * | Section 14.5.5.30 |
| 78h      | RX6_CP    | CPDMA_STATERAM RX CHANNEL 6 COMPLETION POINTER REGISTER * | Section 14.5.5.31 |
| 7Ch      | RX7_CP    | CPDMA_STATERAM RX CHANNEL 7 COMPLETION POINTER REGISTER * | Section 14.5.5.32 |

## 14.5.5.1 TX0\_HDP Register (offset = A00h) [reset = 0h]

TX0\_HDP is shown in Figure 14-89 and described in Table 14-102. CPDMA\_STATERAM TX CHANNEL 0 HEAD DESC POINTER *

## Figure 14-89. TX0\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-102. TX0\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                               |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_HDP  | R/W    | 0h      | TX Channel (0..7) DMA Head Descriptor Pointer - Writing a TX DMA Buffer Descriptor address to a head pointer location initiates TX DMA operations in the queue for the selected channel. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.2 TX1\_HDP Register (offset = A04h) [reset = 0h]

TX1\_HDP is shown in Figure 14-90 and described in Table 14-103. CPDMA\_STATERAM TX CHANNEL 1 HEAD DESC POINTER *

## Figure 14-90. TX1\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-103. TX1\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                               |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_HDP  | R/W    | 0h      | TX Channel (0..7) DMA Head Descriptor Pointer - Writing a TX DMA Buffer Descriptor address to a head pointer location initiates TX DMA operations in the queue for the selected channel. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

## 14.5.5.3 TX2\_HDP Register (offset = A08h) [reset = 0h]

TX2\_HDP is shown in Figure 14-91 and described in Table 14-104. CPDMA\_STATERAM TX CHANNEL 2 HEAD DESC POINTER *

## Figure 14-91. TX2\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-104. TX2\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                               |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_HDP  | R/W    | 0h      | TX Channel (0..7) DMA Head Descriptor Pointer - Writing a TX DMA Buffer Descriptor address to a head pointer location initiates TX DMA operations in the queue for the selected channel. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.4 TX3\_HDP Register (offset = A0Ch) [reset = 0h]

TX3\_HDP is shown in Figure 14-92 and described in Table 14-105. CPDMA\_STATERAM TX CHANNEL 3 HEAD DESC POINTER *

## Figure 14-92. TX3\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-105. TX3\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                               |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_HDP  | R/W    | 0h      | TX Channel (0..7) DMA Head Descriptor Pointer - Writing a TX DMA Buffer Descriptor address to a head pointer location initiates TX DMA operations in the queue for the selected channel. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

## 14.5.5.5 TX4\_HDP Register (offset = A10h) [reset = 0h]

TX4\_HDP is shown in Figure 14-93 and described in Table 14-106. CPDMA\_STATERAM TX CHANNEL 4 HEAD DESC POINTER *

## Figure 14-93. TX4\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-106. TX4\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                               |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_HDP  | R/W    | 0h      | TX Channel (0..7) DMA Head Descriptor Pointer - Writing a TX DMA Buffer Descriptor address to a head pointer location initiates TX DMA operations in the queue for the selected channel. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.6 TX5\_HDP Register (offset = A14h) [reset = 0h]

TX5\_HDP is shown in Figure 14-94 and described in Table 14-107. CPDMA\_STATERAM TX CHANNEL 5 HEAD DESC POINTER *

## Figure 14-94. TX5\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-107. TX5\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                               |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_HDP  | R/W    | 0h      | TX Channel (0..7) DMA Head Descriptor Pointer - Writing a TX DMA Buffer Descriptor address to a head pointer location initiates TX DMA operations in the queue for the selected channel. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

## 14.5.5.7 TX6\_HDP Register (offset = A18h) [reset = 0h]

TX6\_HDP is shown in Figure 14-95 and described in Table 14-108. CPDMA\_STATERAM TX CHANNEL 6 HEAD DESC POINTER *

## Figure 14-95. TX6\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-108. TX6\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                               |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_HDP  | R/W    | 0h      | TX Channel (0..7) DMA Head Descriptor Pointer - Writing a TX DMA Buffer Descriptor address to a head pointer location initiates TX DMA operations in the queue for the selected channel. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.8 TX7\_HDP Register (offset = A1Ch) [reset = 0h]

TX7\_HDP is shown in Figure 14-96 and described in Table 14-109. CPDMA\_STATERAM TX CHANNEL 7 HEAD DESC POINTER *

## Figure 14-96. TX7\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-109. TX7\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                               |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_HDP  | R/W    | 0h      | TX Channel (0..7) DMA Head Descriptor Pointer - Writing a TX DMA Buffer Descriptor address to a head pointer location initiates TX DMA operations in the queue for the selected channel. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

## 14.5.5.9 RX0\_HDP Register (offset = A20h) [reset = 0h]

RX0\_HDP is shown in Figure 14-97 and described in Table 14-110.

CPDMA\_STATERAM RX 0 CHANNEL 0 HEAD DESC POINTER *

## Figure 14-97. RX0\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-110. RX0\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_HDP  | R/W    | 0h      | RX DMA Head Descriptor Pointer - Writing an RX DMA Buffer Descriptor address to this location allows RX DMA operations in the selected channel when a channel frame is received. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.10 RX1\_HDP Register (offset = A24h) [reset = 0h]

RX1\_HDP is shown in Figure 14-98 and described in Table 14-111. CPDMA\_STATERAM RX 1 CHANNEL 1 HEAD DESC POINTER *

## Figure 14-98. RX1\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-111. RX1\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_HDP  | R/W    | 0h      | RX DMA Head Descriptor Pointer - Writing an RX DMA Buffer Descriptor address to this location allows RX DMA operations in the selected channel when a channel frame is received. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

## 14.5.5.11 RX2\_HDP Register (offset = A28h) [reset = 0h]

RX2\_HDP is shown in Figure 14-99 and described in Table 14-112.

CPDMA\_STATERAM RX 2 CHANNEL 2 HEAD DESC POINTER *

## Figure 14-99. RX2\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-112. RX2\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_HDP  | R/W    | 0h      | RX DMA Head Descriptor Pointer - Writing an RX DMA Buffer Descriptor address to this location allows RX DMA operations in the selected channel when a channel frame is received. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.12 RX3\_HDP Register (offset = A2Ch) [reset = 0h]

RX3\_HDP is shown in Figure 14-100 and described in Table 14-113. CPDMA\_STATERAM RX 3 CHANNEL 3 HEAD DESC POINTER *

## Figure 14-100. RX3\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-113. RX3\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_HDP  | R/W    | 0h      | RX DMA Head Descriptor Pointer - Writing an RX DMA Buffer Descriptor address to this location allows RX DMA operations in the selected channel when a channel frame is received. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

## 14.5.5.13 RX4\_HDP Register (offset = A30h) [reset = 0h]

RX4\_HDP is shown in Figure 14-101 and described in Table 14-114.

CPDMA\_STATERAM RX 4 CHANNEL 4 HEAD DESC POINTER *

## Figure 14-101. RX4\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-114. RX4\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_HDP  | R/W    | 0h      | RX DMA Head Descriptor Pointer - Writing an RX DMA Buffer Descriptor address to this location allows RX DMA operations in the selected channel when a channel frame is received. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.14 RX5\_HDP Register (offset = A34h) [reset = 0h]

RX5\_HDP is shown in Figure 14-102 and described in Table 14-115. CPDMA\_STATERAM RX 5 CHANNEL 5 HEAD DESC POINTER *

## Figure 14-102. RX5\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-115. RX5\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_HDP  | R/W    | 0h      | RX DMA Head Descriptor Pointer - Writing an RX DMA Buffer Descriptor address to this location allows RX DMA operations in the selected channel when a channel frame is received. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

## 14.5.5.15 RX6\_HDP Register (offset = A38h) [reset = 0h]

RX6\_HDP is shown in Figure 14-103 and described in Table 14-116.

CPDMA\_STATERAM RX 6 CHANNEL 6 HEAD DESC POINTER *

## Figure 14-103. RX6\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-116. RX6\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_HDP  | R/W    | 0h      | RX DMA Head Descriptor Pointer - Writing an RX DMA Buffer Descriptor address to this location allows RX DMA operations in the selected channel when a channel frame is received. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.16 RX7\_HDP Register (offset = A3Ch) [reset = 0h]

RX7\_HDP is shown in Figure 14-104 and described in Table 14-117. CPDMA\_STATERAM RX 7 CHANNEL 7 HEAD DESC POINTER *

## Figure 14-104. RX7\_HDP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_HDP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-117. RX7\_HDP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_HDP  | R/W    | 0h      | RX DMA Head Descriptor Pointer - Writing an RX DMA Buffer Descriptor address to this location allows RX DMA operations in the selected channel when a channel frame is received. Writing to these locations when they are non-zero is an error (except at reset). Host software must initialize these locations to zero on reset. |

## 14.5.5.17 TX0\_CP Register (offset = A40h) [reset = 0h]

TX0\_CP is shown in Figure 14-105 and described in Table 14-118.

CPDMA\_STATERAM TX CHANNEL 0 COMPLETION POINTER REGISTER

## Figure 14-105. TX0\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-118. TX0\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_CP   | R/W    | 0h      | Tx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.18 TX1\_CP Register (offset = A44h) [reset = 0h]

TX1\_CP is shown in Figure 14-106 and described in Table 14-119. CPDMA\_STATERAM TX CHANNEL 1 COMPLETION POINTER REGISTER *

## Figure 14-106. TX1\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-119. TX1\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_CP   | R/W    | 0h      | Tx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. |

## 14.5.5.19 TX2\_CP Register (offset = A48h) [reset = 0h]

TX2\_CP is shown in Figure 14-107 and described in Table 14-120. CPDMA\_STATERAM TX CHANNEL 2 COMPLETION POINTER REGISTER *

## Figure 14-107. TX2\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-120. TX2\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_CP   | R/W    | 0h      | Tx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.20 TX3\_CP Register (offset = A4Ch) [reset = 0h]

TX3\_CP is shown in Figure 14-108 and described in Table 14-121. CPDMA\_STATERAM TX CHANNEL 3 COMPLETION POINTER REGISTER *

## Figure 14-108. TX3\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-121. TX3\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_CP   | R/W    | 0h      | Tx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. |

## 14.5.5.21 TX4\_CP Register (offset = A50h) [reset = 0h]

TX4\_CP is shown in Figure 14-109 and described in Table 14-122. CPDMA\_STATERAM TX CHANNEL 4 COMPLETION POINTER REGISTER *

## Figure 14-109. TX4\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-122. TX4\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_CP   | R/W    | 0h      | Tx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.22 TX5\_CP Register (offset = A54h) [reset = 0h]

TX5\_CP is shown in Figure 14-110 and described in Table 14-123. CPDMA\_STATERAM TX CHANNEL 5 COMPLETION POINTER REGISTER *

## Figure 14-110. TX5\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-123. TX5\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_CP   | R/W    | 0h      | Tx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. |

## 14.5.5.23 TX6\_CP Register (offset = A58h) [reset = 0h]

TX6\_CP is shown in Figure 14-111 and described in Table 14-124. CPDMA\_STATERAM TX CHANNEL 6 COMPLETION POINTER REGISTER *

## Figure 14-111. TX6\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-124. TX6\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_CP   | R/W    | 0h      | Tx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.24 TX7\_CP Register (offset = A5Ch) [reset = 0h]

TX7\_CP is shown in Figure 14-112 and described in Table 14-125. CPDMA\_STATERAM TX CHANNEL 7 COMPLETION POINTER REGISTER *

## Figure 14-112. TX7\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-125. TX7\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_CP   | R/W    | 0h      | Tx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. |

## 14.5.5.25 RX0\_CP Register (offset = A60h) [reset = 0h]

RX0\_CP is shown in Figure 14-113 and described in Table 14-126. CPDMA\_STATERAM RX CHANNEL 0 COMPLETION POINTER REGISTER *

## Figure 14-113. RX0\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-126. RX0\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_CP   | R/W    | 0h      | Rx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. Note: The value read is the completion pointer (interrupt acknowledge) value that was written by the CPDMA DMA controller (port). The value written to this register by the host is compared with the value that the port wrote to determine if the interrupt should remain asserted. The value written is not actually stored in the location. The interrupt is deasserted if the two values are equal. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.26 RX1\_CP Register (offset = A64h) [reset = 0h]

RX1\_CP is shown in Figure 14-114 and described in Table 14-127. CPDMA\_STATERAM RX CHANNEL 1 COMPLETION POINTER REGISTER *

## Figure 14-114. RX1\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-127. RX1\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_CP   | R/W    | 0h      | Rx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. Note: The value read is the completion pointer (interrupt acknowledge) value that was written by the CPDMA DMA controller (port). The value written to this register by the host is compared with the value that the port wrote to determine if the interrupt should remain asserted. The value written is not actually stored in the location. The interrupt is deasserted if the two values are equal. |

## 14.5.5.27 RX2\_CP Register (offset = A68h) [reset = 0h]

RX2\_CP is shown in Figure 14-115 and described in Table 14-128. CPDMA\_STATERAM RX CHANNEL 2 COMPLETION POINTER REGISTER *

## Figure 14-115. RX2\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-128. RX2\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_CP   | R/W    | 0h      | Rx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. Note: The value read is the completion pointer (interrupt acknowledge) value that was written by the CPDMA DMA controller (port). The value written to this register by the host is compared with the value that the port wrote to determine if the interrupt should remain asserted. The value written is not actually stored in the location. The interrupt is deasserted if the two values are equal. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.28 RX3\_CP Register (offset = A6Ch) [reset = 0h]

RX3\_CP is shown in Figure 14-116 and described in Table 14-129. CPDMA\_STATERAM RX CHANNEL 3 COMPLETION POINTER REGISTER *

## Figure 14-116. RX3\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-129. RX3\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_CP   | R/W    | 0h      | Rx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. Note: The value read is the completion pointer (interrupt acknowledge) value that was written by the CPDMA DMA controller (port). The value written to this register by the host is compared with the value that the port wrote to determine if the interrupt should remain asserted. The value written is not actually stored in the location. The interrupt is deasserted if the two values are equal. |

## 14.5.5.29 RX4\_CP Register (offset = A70h) [reset = 0h]

RX4\_CP is shown in Figure 14-117 and described in Table 14-130. CPDMA\_STATERAM RX CHANNEL 4 COMPLETION POINTER REGISTER *

## Figure 14-117. RX4\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-130. RX4\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_CP   | R/W    | 0h      | Rx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. Note: The value read is the completion pointer (interrupt acknowledge) value that was written by the CPDMA DMA controller (port). The value written to this register by the host is compared with the value that the port wrote to determine if the interrupt should remain asserted. The value written is not actually stored in the location. The interrupt is deasserted if the two values are equal. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.5.30 RX5\_CP Register (offset = A74h) [reset = 0h]

RX5\_CP is shown in Figure 14-118 and described in Table 14-131. CPDMA\_STATERAM RX CHANNEL 5 COMPLETION POINTER REGISTER *

## Figure 14-118. RX5\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-131. RX5\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_CP   | R/W    | 0h      | Rx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. Note: The value read is the completion pointer (interrupt acknowledge) value that was written by the CPDMA DMA controller (port). The value written to this register by the host is compared with the value that the port wrote to determine if the interrupt should remain asserted. The value written is not actually stored in the location. The interrupt is deasserted if the two values are equal. |

## 14.5.5.31 RX6\_CP Register (offset = A78h) [reset = 0h]

RX6\_CP is shown in Figure 14-119 and described in Table 14-132. CPDMA\_STATERAM RX CHANNEL 6 COMPLETION POINTER REGISTER *

## Figure 14-119. RX6\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-132. RX6\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_CP   | R/W    | 0h      | Rx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. Note: The value read is the completion pointer (interrupt acknowledge) value that was written by the CPDMA DMA controller (port). The value written to this register by the host is compared with the value that the port wrote to determine if the interrupt should remain asserted. The value written is not actually stored in the location. The interrupt is deasserted if the two values are equal. |

<!-- image -->

www.ti.com