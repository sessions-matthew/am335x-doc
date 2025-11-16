<!-- image -->

www.ti.com

## 14.5.8.13 DLR\_LTYPE Register (offset = 30h) [reset = 80E1h]

DLR\_LTYPE is shown in Figure 14-196 and described in Table 14-212. DLR LTYPE REGISTER

## Figure 14-196. DLR\_LTYPE Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

DLR\_LTYPE

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-212. DLR\_LTYPE Register Field Descriptions

| Bit   | Field     | Type   |   Reset | Description   |
|-------|-----------|--------|---------|---------------|
| 15-0  | DLR_LTYPE | R/W-0  |       0 | DLR LTYPE     |

## 14.5.9 CPSW\_WR Registers

Table 14-213 lists the memory-mapped registers for the CPSW\_WR. All register offset addresses not listed in Table 14-213 should be considered as reserved locations and the register contents should not be modified.

Table 14-213. CPSW\_WR REGISTERS

| Offset   | Acronym           | Register Name   | Section           |
|----------|-------------------|-----------------|-------------------|
| 0h       | IDVER             |                 | Section 14.5.9.1  |
| 4h       | SOFT_RESET        |                 | Section 14.5.9.2  |
| 8h       | CONTROL           |                 | Section 14.5.9.3  |
| Ch       | INT_CONTROL       |                 | Section 14.5.9.4  |
| 10h      | C0_RX_THRESH_EN   |                 | Section 14.5.9.5  |
| 14h      | C0_RX_EN          |                 | Section 14.5.9.6  |
| 18h      | C0_TX_EN          |                 | Section 14.5.9.7  |
| 1Ch      | C0_MISC_EN        |                 | Section 14.5.9.8  |
| 20h      | C1_RX_THRESH_EN   |                 | Section 14.5.9.9  |
| 24h      | C1_RX_EN          |                 | Section 14.5.9.10 |
| 28h      | C1_TX_EN          |                 | Section 14.5.9.11 |
| 2Ch      | C1_MISC_EN        |                 | Section 14.5.9.12 |
| 30h      | C2_RX_THRESH_EN   |                 | Section 14.5.9.13 |
| 34h      | C2_RX_EN          |                 | Section 14.5.9.14 |
| 38h      | C2_TX_EN          |                 | Section 14.5.9.15 |
| 3Ch      | C2_MISC_EN        |                 | Section 14.5.9.16 |
| 40h      | C0_RX_THRESH_STAT |                 | Section 14.5.9.17 |
| 44h      | C0_RX_STAT        |                 | Section 14.5.9.18 |
| 48h      | C0_TX_STAT        |                 | Section 14.5.9.19 |
| 4Ch      | C0_MISC_STAT      |                 | Section 14.5.9.20 |
| 50h      | C1_RX_THRESH_STAT |                 | Section 14.5.9.21 |
| 54h      | C1_RX_STAT        |                 | Section 14.5.9.22 |
| 58h      | C1_TX_STAT        |                 | Section 14.5.9.23 |
| 5Ch      | C1_MISC_STAT      |                 | Section 14.5.9.24 |
| 60h      | C2_RX_THRESH_STAT |                 | Section 14.5.9.25 |
| 64h      | C2_RX_STAT        |                 | Section 14.5.9.26 |
| 68h      | C2_TX_STAT        |                 | Section 14.5.9.27 |
| 6Ch      | C2_MISC_STAT      |                 | Section 14.5.9.28 |

## Table 14-213. CPSW\_WR REGISTERS (continued)

| Offset   | Acronym    | Register Name   | Section           |
|----------|------------|-----------------|-------------------|
| 70h      | C0_RX_IMAX |                 | Section 14.5.9.29 |
| 74h      | C0_TX_IMAX |                 | Section 14.5.9.30 |
| 78h      | C1_RX_IMAX |                 | Section 14.5.9.31 |
| 7Ch      | C1_TX_IMAX |                 | Section 14.5.9.32 |
| 80h      | C2_RX_IMAX |                 | Section 14.5.9.33 |
| 84h      | C2_TX_IMAX |                 | Section 14.5.9.34 |
| 88h      | RGMII_CTL  |                 | Section 14.5.9.35 |

<!-- image -->

<!-- image -->

## 14.5.9.1 IDVER Register (offset = 0h) [reset = 4EDB0100h]

IDVER is shown in Figure 14-197 and described in Table 14-214. SUBSYSTEM ID VERSION REGISTER

## Figure 14-197. IDVER Register

R-0h

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| SCHEME    | SCHEME    | Reserved  | Reserved  | FUNCTION  | FUNCTION  | FUNCTION  | FUNCTION  |
| R-1h      | R-1h      | R-0h      | R-0h      | R-EDBh    | R-EDBh    | R-EDBh    | R-EDBh    |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| FUNCTION  | FUNCTION  | FUNCTION  | FUNCTION  | FUNCTION  | FUNCTION  | FUNCTION  | FUNCTION  |
| R-EDBh    | R-EDBh    | R-EDBh    | R-EDBh    | R-EDBh    | R-EDBh    | R-EDBh    | R-EDBh    |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| RTL       | RTL       | RTL       | RTL       | RTL       | MAJOR     | MAJOR     | MAJOR     |
| R-0h R-1h | R-0h R-1h | R-0h R-1h | R-0h R-1h | R-0h R-1h | R-0h R-1h | R-0h R-1h | R-0h R-1h |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| CUSTOM    | CUSTOM    | MINOR     | MINOR     | MINOR     | MINOR     | MINOR     | MINOR     |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-214. IDVER Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description    |
|-------|----------|--------|---------|----------------|
| 31-30 | SCHEME   | R      | 1h      | Scheme value   |
| 29-28 | Reserved | R      | 0h      |                |
| 27-16 | FUNCTION | R      | EDBh    | function value |
| 15-11 | RTL      | R      | 0h      | rtl version    |
| 10-8  | MAJOR    | R      | 1h      | major version  |
| 7-6   | CUSTOM   | R      | 0h      | custom version |
| 5-0   | MINOR    | R      | 0h      | minor version  |

## 14.5.9.2 SOFT\_RESET Register (offset = 4h) [reset = 0h]

SOFT\_RESET is shown in Figure 14-198 and described in Table 14-215. SUBSYSTEM SOFT RESET REGISTER

| Figure 14-198. SOFT_RESET Register   | Figure 14-198. SOFT_RESET Register   | Figure 14-198. SOFT_RESET Register   | Figure 14-198. SOFT_RESET Register   | Figure 14-198. SOFT_RESET Register   | Figure 14-198. SOFT_RESET Register   | Figure 14-198. SOFT_RESET Register   | Figure 14-198. SOFT_RESET Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | SOFT_RESET                           |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-215. SOFT\_RESET Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved   | R      | 0h      |                                                                                                                                                                            |
| 0     | SOFT_RESET | R/W    | 0h      | Software reset - Writing a one to this bit causes the CPGMACSS_R logic to be reset (INT, REGS, CPPI). Software reset occurs on the clock following the register bit write. |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 14.5.9.3 CONTROL Register (offset = 8h) [reset = 0h]

CONTROL is shown in Figure 14-199 and described in Table 14-216. SUBSYSTEM CONTROL REGISTER

|   Figure 14-199. CONTROL Register | Figure 14-199. CONTROL Register   | Figure 14-199. CONTROL Register   | Figure 14-199. CONTROL Register   | Figure 14-199. CONTROL Register   | Figure 14-199. CONTROL Register   | Figure 14-199. CONTROL Register   | Figure 14-199. CONTROL Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
|                                30 | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                | Reserved                          |
|                                22 | 22                                | 22                                | 22                                | 22                                | 22                                | 22                                | 22                                |
|                                21 | 21                                | 21                                | 21                                | 21                                | 21                                | 21                                | 21                                |
|                                20 | 19 R-0h                           | 18                                | 17                                | 16                                | Reserved                          | 14                                | 13                                |
|                                12 | 12                                | 12                                | 12                                | 12                                | 12                                | 12                                | 12                                |
|                                11 | 11                                | 11                                | 11                                | 11                                | 11                                | 11                                | 11                                |
|                                10 | 9 R-0h                            | 8                                 | Reserved                          | 6                                 | 5                                 | 4                                 | 3                                 |
|                                 2 | 2                                 | 2                                 | 2                                 | 2                                 | 2                                 | 2                                 | 2                                 |
|                                 1 | 1                                 | 1                                 | 1                                 | 1                                 | 1                                 | 1                                 | 1                                 |
|                                 0 | Reserved                          | MMR_IDLEMODE                      | MMR_STDBYMODE                     |                                   |                                   |                                   |                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-216. CONTROL Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                           |
|-------|---------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                       |
| 3-2   | MMR_STDBYMODE | R/W    | 0h      | Configuration of the local initiator state management mode. By definition, initiator may generate read/write transaction as long as it is out of STANDBY state. 0x0 = Force-standby mode : Local initiator is unconditionally placed in standbystate. 0x1 = No-standby mode : Local initiator is unconditionally placed out of standby state. 0x2 = Reserved : Reserved.              |
| 1-0   | MMR_IDLEMODE  | R/W    | 0h      | Configuration of the local initiator state management mode. By definition, initiator may generate read/write transaction as long as it is out of IDLE state. 0x0 = Force-idle mode : Local initiator is unconditionally placed in idle state. 0x1 = No-idle mode : Local initiator is unconditionally placed out of idle state. 0x2 = Reserved : Reserved. 0x3 = Reserved : Reserved. |

## 14.5.9.4 INT\_CONTROL Register (offset = Ch) [reset = 0h]

INT\_CONTROL is shown in Figure 14-200 and described in Table 14-217. SUBSYSTEM INTERRUPT CONTROL

## Figure 14-200. INT\_CONTROL Register

R-0h

| 31           | 30           | 29           | 28           | 27           | 26           | 25           | 24           |
|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| INT_TEST     |              |              |              | Reserved     |              |              |              |
| R/W-0h       |              |              |              | R-0h         |              |              |              |
| 23           | 22           | 21           | 20           | 19           | 18           | 17           | 16           |
| Reserved     | Reserved     |              |              | INT_PACE_EN  | INT_PACE_EN  |              |              |
| R-0h         | R-0h         |              |              | R/W-0h       | R/W-0h       |              |              |
| 15           | 14           | 13           | 12           | 11           | 10           | 9            | 8            |
| Reserved     | Reserved     |              |              | INT_PRESCALE | INT_PRESCALE | INT_PRESCALE |              |
| R-0h         | R-0h         |              |              | R-0h         | R-0h         | R-0h         |              |
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
| INT_PRESCALE | INT_PRESCALE | INT_PRESCALE | INT_PRESCALE | INT_PRESCALE | INT_PRESCALE | INT_PRESCALE | INT_PRESCALE |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-217. INT\_CONTROL Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | INT_TEST     | R/W    | 0h      | Interrupt Test - Test bit to the interrupt pacing blocks                                                                                                                                                                                                                                                                                                                                                                          |
| 30-22 | Reserved     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 21-16 | INT_PACE_EN  | R/W    | 0h      | Interrupt Pacing Enable Bus int_pace_en[0] - Enables C0_Rx_Pulse Pacing (0 is pacing bypass) int_pace_en[1] - Enables C0_Tx_Pulse Pacing (0 is pacing bypass) int_pace_en[2] - Enables C1_Rx_Pulse Pacing (0 is pacing bypass) int_pace_en[3] - Enables C1_Tx_Pulse Pacing (0 is pacing bypass) int_pace_en[4] - Enables C2_Rx_Pulse Pacing (0 is pacing bypass) int_pace_en[5] - Enables C2_Tx_Pulse Pacing (0 is pacing bypass) |
| 15-12 | Reserved     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 11-0  | INT_PRESCALE | R      | 0h      | Interrupt Counter Prescaler - The number of MAIN_CLK periods in 4us.                                                                                                                                                                                                                                                                                                                                                              |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.5 C0\_RX\_THRESH\_EN Register (offset = 10h) [reset = 0h]

C0\_RX\_THRESH\_EN is shown in Figure 14-201 and described in Table 14-218. SUBSYSTEM CORE 0 RECEIVE THRESHOLD INT ENABLE REGISTER

## Figure 14-201. C0\_RX\_THRESH\_EN Register

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
| C0_RX_THRESH_EN | C0_RX_THRESH_EN | C0_RX_THRESH_EN | C0_RX_THRESH_EN | C0_RX_THRESH_EN | C0_RX_THRESH_EN | C0_RX_THRESH_EN | C0_RX_THRESH_EN |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-218. C0\_RX\_THRESH\_EN Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                           |
|-------|-----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved        | R      | 0h      |                                                                                                                                                                                       |
| 7-0   | C0_RX_THRESH_EN | R/W    | 0h      | Core 0 Receive Threshold Enable - Each bit in this register corresponds to the bit in the receive threshold interrupt that is enabled to generate an interrupt on C0_RX_THRESH_PULSE. |

## 14.5.9.6 C0\_RX\_EN Register (offset = 14h) [reset = 0h]

C0\_RX\_EN is shown in Figure 14-202 and described in Table 14-219. SUBSYSTEM CORE 0 RECEIVE INTERRUPT ENABLE REGISTER

## Figure 14-202. C0\_RX\_EN Register

R/W-0h

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
| C0_RX_EN | C0_RX_EN | C0_RX_EN | C0_RX_EN | C0_RX_EN | C0_RX_EN | C0_RX_EN | C0_RX_EN |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-219. C0\_RX\_EN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                           |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | R      | 0h      |                                                                                                                                                       |
| 7-0   | C0_RX_EN | R/W    | 0h      | Core 0 Receive Enable - Each bit in this register corresponds to the bit in the rx interrupt that is enabled to generate an interrupt on C0_RX_PULSE. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.7 C0\_TX\_EN Register (offset = 18h) [reset = 0h]

C0\_TX\_EN is shown in Figure 14-203 and described in Table 14-220. SUBSYSTEM CORE 0 TRANSMIT INTERRUPT ENABLE REGISTER

## Figure 14-203. C0\_TX\_EN Register

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
| C0_TX_EN | C0_TX_EN | C0_TX_EN | C0_TX_EN | C0_TX_EN | C0_TX_EN | C0_TX_EN | C0_TX_EN |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-220. C0\_TX\_EN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                            |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | R      | 0h      |                                                                                                                                                        |
| 7-0   | C0_TX_EN | R/W    | 0h      | Core 0 Transmit Enable - Each bit in this register corresponds to the bit in the tx interrupt that is enabled to generate an interrupt on C0_TX_PULSE. |

## 14.5.9.8 C0\_MISC\_EN Register (offset = 1Ch) [reset = 0h]

C0\_MISC\_EN is shown in Figure 14-204 and described in Table 14-221. SUBSYSTEM CORE 0 MISC INTERRUPT ENABLE REGISTER

| Figure 14-204. C0_MISC_EN Register   | Figure 14-204. C0_MISC_EN Register   | Figure 14-204. C0_MISC_EN Register   | Figure 14-204. C0_MISC_EN Register   | Figure 14-204. C0_MISC_EN Register   | Figure 14-204. C0_MISC_EN Register   | Figure 14-204. C0_MISC_EN Register   | Figure 14-204. C0_MISC_EN Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | C0_MISC_EN                           | C0_MISC_EN                           | C0_MISC_EN                           | C0_MISC_EN                           | C0_MISC_EN                           |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-221. C0\_MISC\_EN Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                        |
|-------|------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                    |
| 4-0   | C0_MISC_EN | R/W    | 0h      | Core 0 Misc Enable - Each bit in this register corresponds to the miscellaneous interrupt (evnt_pend, stat_pend, host_pend, mdio_linkint, mdio_userint) that is enabled to generate an interrupt on C0_Misc_PULSE. Bit 4 = evnt_pend Bit 3 = stat_pend Bit 2 = host_pend Bit 1 = mdio_linkint Bit 0 = mdio_userint |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.9 C1\_RX\_THRESH\_EN Register (offset = 20h) [reset = 0h]

C1\_RX\_THRESH\_EN is shown in Figure 14-205 and described in Table 14-222. SUBSYSTEM CORE 1 RECEIVE THRESHOLD INT ENABLE REGISTER

## Figure 14-205. C1\_RX\_THRESH\_EN Register

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
| C1_RX_THRESH_EN | C1_RX_THRESH_EN | C1_RX_THRESH_EN | C1_RX_THRESH_EN | C1_RX_THRESH_EN | C1_RX_THRESH_EN | C1_RX_THRESH_EN | C1_RX_THRESH_EN |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-222. C1\_RX\_THRESH\_EN Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                           |
|-------|-----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved        | R      | 0h      |                                                                                                                                                                                       |
| 7-0   | C1_RX_THRESH_EN | R/W    | 0h      | Core 1 Receive Threshold Enable - Each bit in this register corresponds to the bit in the receive threshold interrupt that is enabled to generate an interrupt on C1_RX_THRESH_PULSE. |

## 14.5.9.10 C1\_RX\_EN Register (offset = 24h) [reset = 0h]

C1\_RX\_EN is shown in Figure 14-206 and described in Table 14-223. SUBSYSTEM CORE 1 RECEIVE INTERRUPT ENABLE REGISTER

## Figure 14-206. C1\_RX\_EN Register

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
| C1_RX_EN | C1_RX_EN | C1_RX_EN | C1_RX_EN | C1_RX_EN | C1_RX_EN | C1_RX_EN | C1_RX_EN |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-223. C1\_RX\_EN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                           |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | R      | 0h      |                                                                                                                                                       |
| 7-0   | C1_RX_EN | R/W    | 0h      | Core 1 Receive Enable - Each bit in this register corresponds to the bit in the rx interrupt that is enabled to generate an interrupt on C1_RX_PULSE. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.11 C1\_TX\_EN Register (offset = 28h) [reset = 0h]

C1\_TX\_EN is shown in Figure 14-207 and described in Table 14-224. SUBSYSTEM CORE 1 TRANSMIT INTERRUPT ENABLE REGISTER

## Figure 14-207. C1\_TX\_EN Register

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
| C1_TX_EN | C1_TX_EN | C1_TX_EN | C1_TX_EN | C1_TX_EN | C1_TX_EN | C1_TX_EN | C1_TX_EN |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-224. C1\_TX\_EN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                            |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | R      | 0h      |                                                                                                                                                        |
| 7-0   | C1_TX_EN | R/W    | 0h      | Core 1 Transmit Enable - Each bit in this register corresponds to the bit in the tx interrupt that is enabled to generate an interrupt on C1_TX_PULSE. |

## 14.5.9.12 C1\_MISC\_EN Register (offset = 2Ch) [reset = 0h]

C1\_MISC\_EN is shown in Figure 14-208 and described in Table 14-225. SUBSYSTEM CORE 1 MISC INTERRUPT ENABLE REGISTER

| Figure 14-208. C1_MISC_EN Register   | Figure 14-208. C1_MISC_EN Register   | Figure 14-208. C1_MISC_EN Register   | Figure 14-208. C1_MISC_EN Register   | Figure 14-208. C1_MISC_EN Register   | Figure 14-208. C1_MISC_EN Register   | Figure 14-208. C1_MISC_EN Register   | Figure 14-208. C1_MISC_EN Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | C1_MISC_EN                           | C1_MISC_EN                           | C1_MISC_EN                           | C1_MISC_EN                           | C1_MISC_EN                           |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-225. C1\_MISC\_EN Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                        |
|-------|------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                    |
| 4-0   | C1_MISC_EN | R/W    | 0h      | Core 1 Misc Enable - Each bit in this register corresponds to the miscellaneous interrupt (evnt_pend, stat_pend, host_pend, mdio_linkint, mdio_userint) that is enabled to generate an interrupt on C1_Misc_PULSE. Bit 4 = evnt_pend Bit 3 = stat_pend Bit 2 = host_pend Bit 1 = mdio_linkint Bit 0 = mdio_userint |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.13 C2\_RX\_THRESH\_EN Register (offset = 30h) [reset = 0h]

C2\_RX\_THRESH\_EN is shown in Figure 14-209 and described in Table 14-226. SUBSYSTEM CORE 2 RECEIVE THRESHOLD INT ENABLE REGISTER

## Figure 14-209. C2\_RX\_THRESH\_EN Register

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
| C2_RX_THRESH_EN | C2_RX_THRESH_EN | C2_RX_THRESH_EN | C2_RX_THRESH_EN | C2_RX_THRESH_EN | C2_RX_THRESH_EN | C2_RX_THRESH_EN | C2_RX_THRESH_EN |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-226. C2\_RX\_THRESH\_EN Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                           |
|-------|-----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved        | R      | 0h      |                                                                                                                                                                                       |
| 7-0   | C2_RX_THRESH_EN | R/W    | 0h      | Core 2 Receive Threshold Enable - Each bit in this register corresponds to the bit in the receive threshold interrupt that is enabled to generate an interrupt on C2_RX_THRESH_PULSE. |

## 14.5.9.14 C2\_RX\_EN Register (offset = 34h) [reset = 0h]

C2\_RX\_EN is shown in Figure 14-210 and described in Table 14-227. SUBSYSTEM CORE 2 RECEIVE INTERRUPT ENABLE REGISTER

## Figure 14-210. C2\_RX\_EN Register

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
| C2_RX_EN | C2_RX_EN | C2_RX_EN | C2_RX_EN | C2_RX_EN | C2_RX_EN | C2_RX_EN | C2_RX_EN |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-227. C2\_RX\_EN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                           |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | R      | 0h      |                                                                                                                                                       |
| 7-0   | C2_RX_EN | R/W    | 0h      | Core 2 Receive Enable - Each bit in this register corresponds to the bit in the rx interrupt that is enabled to generate an interrupt on C2_RX_PULSE. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.15 C2\_TX\_EN Register (offset = 38h) [reset = 0h]

C2\_TX\_EN is shown in Figure 14-211 and described in Table 14-228. SUBSYSTEM CORE 2 TRANSMIT INTERRUPT ENABLE REGISTER

## Figure 14-211. C2\_TX\_EN Register

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
| C2_TX_EN | C2_TX_EN | C2_TX_EN | C2_TX_EN | C2_TX_EN | C2_TX_EN | C2_TX_EN | C2_TX_EN |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-228. C2\_TX\_EN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                            |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | R      | 0h      |                                                                                                                                                        |
| 7-0   | C2_TX_EN | R/W    | 0h      | Core 2 Transmit Enable - Each bit in this register corresponds to the bit in the tx interrupt that is enabled to generate an interrupt on C2_TX_PULSE. |

## 14.5.9.16 C2\_MISC\_EN Register (offset = 3Ch) [reset = 0h]

C2\_MISC\_EN is shown in Figure 14-212 and described in Table 14-229. SUBSYSTEM CORE 2 MISC INTERRUPT ENABLE REGISTER

## Figure 14-212. C2\_MISC\_EN Register

R/W-0h

| 31       | 30       | 29       | 28         | 27         | 26         | 25         | 24         |
|----------|----------|----------|------------|------------|------------|------------|------------|
| Reserved | Reserved | Reserved | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23       | 22       | 21       | 20         | 19         | 18         | 17         | 16         |
| Reserved | Reserved | Reserved | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15       | 14       | 13       | 12         | 11         | 10         | 9          | 8          |
| Reserved | Reserved | Reserved | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h     | R-0h     | R-0h     | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7        | 6        | 5        | 4          | 3          | 2          | 1          | 0          |
| Reserved | Reserved | Reserved | C2_MISC_EN | C2_MISC_EN | C2_MISC_EN | C2_MISC_EN | C2_MISC_EN |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-229. C2\_MISC\_EN Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                        |
|-------|------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                    |
| 4-0   | C2_MISC_EN | R/W    | 0h      | Core 2 Misc Enable - Each bit in this register corresponds to the miscellaneous interrupt (evnt_pend, stat_pend, host_pend, mdio_linkint, mdio_userint) that is enabled to generate an interrupt on C2_Misc_PULSE. Bit 4 = evnt_pend Bit 3 = stat_pend Bit 2 = host_pend Bit 1 = mdio_linkint Bit 0 = mdio_userint |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.17 C0\_RX\_THRESH\_STAT Register (offset = 40h) [reset = 0h]

C0\_RX\_THRESH\_STAT is shown in Figure 14-213 and described in Table 14-230. SUBSYSTEM CORE 0 RX THRESHOLD MASKED INT STATUS REGISTER

## Figure 14-213. C0\_RX\_THRESH\_STAT Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          |
| R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          |
| R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          |
| R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| C0_RX_THRESH_STAT | C0_RX_THRESH_STAT | C0_RX_THRESH_STAT | C0_RX_THRESH_STAT | C0_RX_THRESH_STAT | C0_RX_THRESH_STAT | C0_RX_THRESH_STAT | C0_RX_THRESH_STAT |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-230. C0\_RX\_THRESH\_STAT Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                         |
|-------|-------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved          | R      | 0h      |                                                                                                                                                                                                                     |
| 7-0   | C0_RX_THRESH_STAT | R      | 0h      | Core 0 Receive Threshold Masked Interrupt Status - Each bit in this read only register corresponds to the bit in the receive threshold interrupt that is enabled and generating an interrupt on C0_RX_THRESH_PULSE. |

## 14.5.9.18 C0\_RX\_STAT Register (offset = 44h) [reset = 0h]

C0\_RX\_STAT is shown in Figure 14-214 and described in Table 14-231. SUBSYSTEM CORE 0 RX INTERRUPT MASKED INT STATUS REGISTER

## Figure 14-214. C0\_RX\_STAT Register

R-0h

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| C0_RX_STAT | C0_RX_STAT | C0_RX_STAT | C0_RX_STAT | C0_RX_STAT | C0_RX_STAT | C0_RX_STAT | C0_RX_STAT |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-231. C0\_RX\_STAT Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                         |
|-------|------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved   | R      | 0h      |                                                                                                                                                                                     |
| 7-0   | C0_RX_STAT | R      | 0h      | Core 0 Receive Masked Interrupt Status - Each bit in this read only register corresponds to the bit in the Rx interrupt that is enabled and generating an interrupt on C0_RX_PULSE. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.19 C0\_TX\_STAT Register (offset = 48h) [reset = 0h]

C0\_TX\_STAT is shown in Figure 14-215 and described in Table 14-232. SUBSYSTEM CORE 0 TX INTERRUPT MASKED INT STATUS REGISTER

## Figure 14-215. C0\_TX\_STAT Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| C0_TX_STAT | C0_TX_STAT | C0_TX_STAT | C0_TX_STAT | C0_TX_STAT | C0_TX_STAT | C0_TX_STAT | C0_TX_STAT |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-232. C0\_TX\_STAT Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                           |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved   | R      | 0h      |                                                                                                                                                                                       |
| 7-0   | C0_TX_STAT | R      | 0h      | Core 0 Transmit Masked Interrupt Status - Each bit in this read only register corresponds to the bit in the Tx interrupt that is enabled and generating an interrupt on C0_TX_PULSE . |

## 14.5.9.20 C0\_MISC\_STAT Register (offset = 4Ch) [reset = 0h]

C0\_MISC\_STAT is shown in Figure 14-216 and described in Table 14-233. SUBSYSTEM CORE 0 MISC INTERRUPT MASKED INT STATUS REGISTER

## Figure 14-216. C0\_MISC\_STAT Register

R-0h

| 31       | 30       | 29       | 28           | 27           | 26           | 25           | 24           |
|----------|----------|----------|--------------|--------------|--------------|--------------|--------------|
| Reserved | Reserved | Reserved | Reserved     | Reserved     | Reserved     | Reserved     | Reserved     |
| R-0h     | R-0h     | R-0h     | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 23       | 22       | 21       | 20           | 19           | 18           | 17           | 16           |
| Reserved | Reserved | Reserved | Reserved     | Reserved     | Reserved     | Reserved     | Reserved     |
| R-0h     | R-0h     | R-0h     | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 15       | 14       | 13       | 12           | 11           | 10           | 9            | 8            |
| Reserved | Reserved | Reserved | Reserved     | Reserved     | Reserved     | Reserved     | Reserved     |
| R-0h     | R-0h     | R-0h     | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 7        | 6        | 5        | 4            | 3            | 2            | 1            | 0            |
| Reserved | Reserved | Reserved | C0_MISC_STAT | C0_MISC_STAT | C0_MISC_STAT | C0_MISC_STAT | C0_MISC_STAT |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-233. C0\_MISC\_STAT Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                            |
|-------|--------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | Reserved     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                        |
| 4-0   | C0_MISC_STAT | R      | 0h      | Core 0 Misc Masked Interrupt Status - Each bit in this register corresponds to the miscellaneous interrupt (evnt_pend, stat_pend, host_pend, mdio_linkint, mdio_userint) that is enabled and generating an interrupt on C0_MISC_PULSE. Bit 4 = evnt_pend Bit 3 = stat_pend Bit 2 = host_pend Bit 1 = mdio_linkint Bit 0 = mdio_userint |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.21 C1\_RX\_THRESH\_STAT Register (offset = 50h) [reset = 0h]

C1\_RX\_THRESH\_STAT is shown in Figure 14-217 and described in Table 14-234. SUBSYSTEM CORE 1 RX THRESHOLD MASKED INT STATUS REGISTER

## Figure 14-217. C1\_RX\_THRESH\_STAT Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          |
| R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          |
| R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          |
| R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| C1_RX_THRESH_STAT | C1_RX_THRESH_STAT | C1_RX_THRESH_STAT | C1_RX_THRESH_STAT | C1_RX_THRESH_STAT | C1_RX_THRESH_STAT | C1_RX_THRESH_STAT | C1_RX_THRESH_STAT |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-234. C1\_RX\_THRESH\_STAT Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                               |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved          | R      | 0h      |                                                                                                                                                                                                           |
| 7-0   | C1_RX_THRESH_STAT | R      | 0h      | Core 1 Receive Threshold Masked Interrupt Status - Each bit in this register corresponds to the bit in the receive threshold interrupt that is enabled and generating an interrupt on C1_RX_THRESH_PULSE. |

## 14.5.9.22 C1\_RX\_STAT Register (offset = 54h) [reset = 0h]

C1\_RX\_STAT is shown in Figure 14-218 and described in Table 14-235. SUBSYSTEM CORE 1 RECEIVE MASKED INTERRUPT STATUS REGISTER

## Figure 14-218. C1\_RX\_STAT Register

R-0h

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| C1_RX_STAT | C1_RX_STAT | C1_RX_STAT | C1_RX_STAT | C1_RX_STAT | C1_RX_STAT | C1_RX_STAT | C1_RX_STAT |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-235. C1\_RX\_STAT Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                               |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved   | R      | 0h      |                                                                                                                                                                           |
| 7-0   | C1_RX_STAT | R      | 0h      | Core 1 Receive Masked Interrupt Status - Each bit in this register corresponds to the bit in the Rx interrupt that is enabled and generating an interrupt on C1_RX_PULSE. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.23 C1\_TX\_STAT Register (offset = 58h) [reset = 0h]

C1\_TX\_STAT is shown in Figure 14-219 and described in Table 14-236. SUBSYSTEM CORE 1 TRANSMIT MASKED INTERRUPT STATUS REGISTER

## Figure 14-219. C1\_TX\_STAT Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| C1_TX_STAT | C1_TX_STAT | C1_TX_STAT | C1_TX_STAT | C1_TX_STAT | C1_TX_STAT | C1_TX_STAT | C1_TX_STAT |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-236. C1\_TX\_STAT Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved   | R      | 0h      |                                                                                                                                                                            |
| 7-0   | C1_TX_STAT | R      | 0h      | Core 1 Transmit Masked Interrupt Status - Each bit in this register corresponds to the bit in the Tx interrupt that is enabled and generating an interrupt on C1_TX_PULSE. |

## 14.5.9.24 C1\_MISC\_STAT Register (offset = 5Ch) [reset = 0h]

C1\_MISC\_STAT is shown in Figure 14-220 and described in Table 14-237. SUBSYSTEM CORE 1 MISC MASKED INTERRUPT STATUS REGISTER

| Figure 14-220. C1_MISC_STAT Register   | Figure 14-220. C1_MISC_STAT Register   | Figure 14-220. C1_MISC_STAT Register   | Figure 14-220. C1_MISC_STAT Register   | Figure 14-220. C1_MISC_STAT Register   | Figure 14-220. C1_MISC_STAT Register   | Figure 14-220. C1_MISC_STAT Register   | Figure 14-220. C1_MISC_STAT Register   |
|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|
| 31                                     | 30                                     | 29                                     | 28                                     | 27                                     | 26                                     | 25                                     | 24                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 23                                     | 22                                     | 21                                     | 20                                     | 19                                     | 18                                     | 17                                     | 16                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 15                                     | 14                                     | 13                                     | 12                                     | 11                                     | 10                                     | 9                                      | 8                                      |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 7                                      | 6                                      | 5                                      | 4                                      | 3                                      | 2                                      | 1                                      | 0                                      |
| Reserved                               | Reserved                               | Reserved                               | C1_MISC_STAT                           | C1_MISC_STAT                           | C1_MISC_STAT                           | C1_MISC_STAT                           | C1_MISC_STAT                           |

R-0h

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-237. C1\_MISC\_STAT Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                            |
|-------|--------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | Reserved     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                        |
| 4-0   | C1_MISC_STAT | R      | 0h      | Core 1 Misc Masked Interrupt Status - Each bit in this register corresponds to the miscellaneous interrupt (evnt_pend, stat_pend, host_pend, mdio_linkint, mdio_userint) that is enabled and generating an interrupt on C1_MISC_PULSE. Bit 4 = evnt_pend Bit 3 = stat_pend Bit 2 = host_pend Bit 1 = mdio_linkint Bit 0 = mdio_userint |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.25 C2\_RX\_THRESH\_STAT Register (offset = 60h) [reset = 0h]

C2\_RX\_THRESH\_STAT is shown in Figure 14-221 and described in Table 14-238. SUBSYSTEM CORE 2 RX THRESHOLD MASKED INT STATUS REGISTER

## Figure 14-221. C2\_RX\_THRESH\_STAT Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          |
| R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          |
| R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          |
| R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| C2_RX_THRESH_STAT | C2_RX_THRESH_STAT | C2_RX_THRESH_STAT | C2_RX_THRESH_STAT | C2_RX_THRESH_STAT | C2_RX_THRESH_STAT | C2_RX_THRESH_STAT | C2_RX_THRESH_STAT |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-238. C2\_RX\_THRESH\_STAT Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                               |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved          | R      | 0h      |                                                                                                                                                                                                           |
| 7-0   | C2_RX_THRESH_STAT | R      | 0h      | Core 2 Receive Threshold Masked Interrupt Status - Each bit in this register corresponds to the bit in the receive threshold interrupt that is enabled and generating an interrupt on C2_RX_THRESH_PULSE. |

## 14.5.9.26 C2\_RX\_STAT Register (offset = 64h) [reset = 0h]

C2\_RX\_STAT is shown in Figure 14-222 and described in Table 14-239. SUBSYSTEM CORE 2 RECEIVE MASKED INTERRUPT STATUS REGISTER

## Figure 14-222. C2\_RX\_STAT Register

R-0h

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| C2_RX_STAT | C2_RX_STAT | C2_RX_STAT | C2_RX_STAT | C2_RX_STAT | C2_RX_STAT | C2_RX_STAT | C2_RX_STAT |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-239. C2\_RX\_STAT Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                               |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved   | R      | 0h      |                                                                                                                                                                           |
| 7-0   | C2_RX_STAT | R      | 0h      | Core 2 Receive Masked Interrupt Status - Each bit in this register corresponds to the bit in the Rx interrupt that is enabled and generating an interrupt on C2_RX_PULSE. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.27 C2\_TX\_STAT Register (offset = 68h) [reset = 0h]

C2\_TX\_STAT is shown in Figure 14-223 and described in Table 14-240. SUBSYSTEM CORE 2 TRANSMIT MASKED INTERRUPT STATUS REGISTER

## Figure 14-223. C2\_TX\_STAT Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| C2_TX_STAT | C2_TX_STAT | C2_TX_STAT | C2_TX_STAT | C2_TX_STAT | C2_TX_STAT | C2_TX_STAT | C2_TX_STAT |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-240. C2\_TX\_STAT Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved   | R      | 0h      |                                                                                                                                                                            |
| 7-0   | C2_TX_STAT | R      | 0h      | Core 2 Transmit Masked Interrupt Status - Each bit in this register corresponds to the bit in the Tx interrupt that is enabled and generating an interrupt on C2_TX_PULSE. |

## 14.5.9.28 C2\_MISC\_STAT Register (offset = 6Ch) [reset = 0h]

C2\_MISC\_STAT is shown in Figure 14-224 and described in Table 14-241. SUBSYSTEM CORE 2 MISC MASKED INTERRUPT STATUS REGISTER

| Figure 14-224. C2_MISC_STAT Register   | Figure 14-224. C2_MISC_STAT Register   | Figure 14-224. C2_MISC_STAT Register   | Figure 14-224. C2_MISC_STAT Register   | Figure 14-224. C2_MISC_STAT Register   | Figure 14-224. C2_MISC_STAT Register   | Figure 14-224. C2_MISC_STAT Register   | Figure 14-224. C2_MISC_STAT Register   |
|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|
| 31                                     | 30                                     | 29                                     | 28                                     | 27                                     | 26                                     | 25                                     | 24                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 23                                     | 22                                     | 21                                     | 20                                     | 19                                     | 18                                     | 17                                     | 16                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 15                                     | 14                                     | 13                                     | 12                                     | 11                                     | 10                                     | 9                                      | 8                                      |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 7                                      | 6                                      | 5                                      | 4                                      | 3                                      | 2                                      | 1                                      | 0                                      |
| Reserved                               | Reserved                               | Reserved                               | C2_MISC_STAT                           | C2_MISC_STAT                           | C2_MISC_STAT                           | C2_MISC_STAT                           | C2_MISC_STAT                           |

R-0h

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-241. C2\_MISC\_STAT Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                            |
|-------|--------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | Reserved     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                        |
| 4-0   | C2_MISC_STAT | R      | 0h      | Core 2 Misc Masked Interrupt Status - Each bit in this register corresponds to the miscellaneous interrupt (evnt_pend, stat_pend, host_pend, mdio_linkint, mdio_userint) that is enabled and generating an interrupt on C2_MISC_PULSE. Bit 4 = evnt_pend Bit 3 = stat_pend Bit 2 = host_pend Bit 1 = mdio_linkint Bit 0 = mdio_userint |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.29 C0\_RX\_IMAX Register (offset = 70h) [reset = 0h]

C0\_RX\_IMAX is shown in Figure 14-225 and described in Table 14-242. SUBSYSTEM CORE 0 RECEIVE INTERRUPTS PER MILLISECOND

## Figure 14-225. C0\_RX\_IMAX Register

R/W-0h

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| Reserved C0_RX_IMAX | Reserved C0_RX_IMAX | Reserved C0_RX_IMAX | Reserved C0_RX_IMAX | Reserved C0_RX_IMAX | Reserved C0_RX_IMAX | Reserved C0_RX_IMAX | Reserved C0_RX_IMAX |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-242. C0\_RX\_IMAX Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                    |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | Reserved   | R      | 0h      |                                                                                                                                                                |
| 5-0   | C0_RX_IMAX | R/W    | 0h      | Core 0 Receive Interrupts per Millisecond - The maximum number of interrupts per millisecond generated on C0_RX_PULSE if pacing is enabled for this interrupt. |

## 14.5.9.30 C0\_TX\_IMAX Register (offset = 74h) [reset = 0h]

C0\_TX\_IMAX is shown in Figure 14-226 and described in Table 14-243. SUBSYSTEM CORE 0 TRANSMIT INTERRUPTS PER MILLISECOND

| Figure 14-226. C0_TX_IMAX Register   | Figure 14-226. C0_TX_IMAX Register   | Figure 14-226. C0_TX_IMAX Register   | Figure 14-226. C0_TX_IMAX Register   | Figure 14-226. C0_TX_IMAX Register   | Figure 14-226. C0_TX_IMAX Register   | Figure 14-226. C0_TX_IMAX Register   | Figure 14-226. C0_TX_IMAX Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved C0_TX_IMAX                  | Reserved C0_TX_IMAX                  | Reserved C0_TX_IMAX                  | Reserved C0_TX_IMAX                  | Reserved C0_TX_IMAX                  | Reserved C0_TX_IMAX                  | Reserved C0_TX_IMAX                  | Reserved C0_TX_IMAX                  |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-243. C0\_TX\_IMAX Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                     |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | Reserved   | R      | 0h      |                                                                                                                                                                 |
| 5-0   | C0_TX_IMAX | R/W    | 0h      | Core 0 Transmit Interrupts per Millisecond - The maximum number of interrupts per millisecond generated on C0_TX_PULSE if pacing is enabled for this interrupt. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.31 C1\_RX\_IMAX Register (offset = 78h) [reset = 0h]

C1\_RX\_IMAX is shown in Figure 14-227 and described in Table 14-244. SUBSYSTEM CORE 1 RECEIVE INTERRUPTS PER MILLISECOND

| Figure 14-227. C1_RX_IMAX Register   | Figure 14-227. C1_RX_IMAX Register   | Figure 14-227. C1_RX_IMAX Register   | Figure 14-227. C1_RX_IMAX Register   | Figure 14-227. C1_RX_IMAX Register   | Figure 14-227. C1_RX_IMAX Register   | Figure 14-227. C1_RX_IMAX Register   | Figure 14-227. C1_RX_IMAX Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved C1_RX_IMAX                  | Reserved C1_RX_IMAX                  | Reserved C1_RX_IMAX                  | Reserved C1_RX_IMAX                  | Reserved C1_RX_IMAX                  | Reserved C1_RX_IMAX                  | Reserved C1_RX_IMAX                  | Reserved C1_RX_IMAX                  |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-244. C1\_RX\_IMAX Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                    |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | Reserved   | R      | 0h      |                                                                                                                                                                |
| 5-0   | C1_RX_IMAX | R/W    | 0h      | Core 1 Receive Interrupts per Millisecond - The maximum number of interrupts per millisecond generated on C1_RX_PULSE if pacing is enabled for this interrupt. |

## 14.5.9.32 C1\_TX\_IMAX Register (offset = 7Ch) [reset = 0h]

C1\_TX\_IMAX is shown in Figure 14-228 and described in Table 14-245. SUBSYSTEM CORE 1 TRANSMIT INTERRUPTS PER MILLISECOND

| Figure 14-228. C1_TX_IMAX Register   | Figure 14-228. C1_TX_IMAX Register   | Figure 14-228. C1_TX_IMAX Register   | Figure 14-228. C1_TX_IMAX Register   | Figure 14-228. C1_TX_IMAX Register   | Figure 14-228. C1_TX_IMAX Register   | Figure 14-228. C1_TX_IMAX Register   | Figure 14-228. C1_TX_IMAX Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved C1_TX_IMAX                  | Reserved C1_TX_IMAX                  | Reserved C1_TX_IMAX                  | Reserved C1_TX_IMAX                  | Reserved C1_TX_IMAX                  | Reserved C1_TX_IMAX                  | Reserved C1_TX_IMAX                  | Reserved C1_TX_IMAX                  |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-245. C1\_TX\_IMAX Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                     |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | Reserved   | R      | 0h      |                                                                                                                                                                 |
| 5-0   | C1_TX_IMAX | R/W    | 0h      | Core 1 Transmit Interrupts per Millisecond - The maximum number of interrupts per millisecond generated on C1_TX_PULSE if pacing is enabled for this interrupt. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.9.33 C2\_RX\_IMAX Register (offset = 80h) [reset = 0h]

C2\_RX\_IMAX is shown in Figure 14-229 and described in Table 14-246. SUBSYSTEM CORE 2 RECEIVE INTERRUPTS PER MILLISECOND

## Figure 14-229. C2\_RX\_IMAX Register

R/W-0h

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            | Reserved            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| Reserved C2_RX_IMAX | Reserved C2_RX_IMAX | Reserved C2_RX_IMAX | Reserved C2_RX_IMAX | Reserved C2_RX_IMAX | Reserved C2_RX_IMAX | Reserved C2_RX_IMAX | Reserved C2_RX_IMAX |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-246. C2\_RX\_IMAX Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                    |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | Reserved   | R      | 0h      |                                                                                                                                                                |
| 5-0   | C2_RX_IMAX | R/W    | 0h      | Core 2 Receive Interrupts per Millisecond - The maximum number of interrupts per millisecond generated on C2_RX_PULSE if pacing is enabled for this interrupt. |

## 14.5.9.34 C2\_TX\_IMAX Register (offset = 84h) [reset = 0h]

C2\_TX\_IMAX is shown in Figure 14-230 and described in Table 14-247. SUBSYSTEM CORE 2 TRANSMIT INTERRUPTS PER MILLISECOND

| Figure 14-230. C2_TX_IMAX Register   | Figure 14-230. C2_TX_IMAX Register   | Figure 14-230. C2_TX_IMAX Register   | Figure 14-230. C2_TX_IMAX Register   | Figure 14-230. C2_TX_IMAX Register   | Figure 14-230. C2_TX_IMAX Register   | Figure 14-230. C2_TX_IMAX Register   | Figure 14-230. C2_TX_IMAX Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved C2_TX_IMAX                  | Reserved C2_TX_IMAX                  | Reserved C2_TX_IMAX                  | Reserved C2_TX_IMAX                  | Reserved C2_TX_IMAX                  | Reserved C2_TX_IMAX                  | Reserved C2_TX_IMAX                  | Reserved C2_TX_IMAX                  |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-247. C2\_TX\_IMAX Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                     |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | Reserved   | R      | 0h      |                                                                                                                                                                 |
| 5-0   | C2_TX_IMAX | R/W    | 0h      | Core 2 Transmit Interrupts per Millisecond - The maximum number of interrupts per millisecond generated on C2_TX_PULSE if pacing is enabled for this interrupt. |

<!-- image -->