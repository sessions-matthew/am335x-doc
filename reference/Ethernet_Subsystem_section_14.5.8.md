## 14.5.7.11 TX\_GAP Register (offset = 28h) [reset = Ch]

Register mask: FFFFFFFFh

TX\_GAP is shown in Figure 14-183 and described in Table 14-198.

TRANSMIT INTER-PACKET GAP REGISTER

## Figure 14-183. TX\_GAP Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7   | 6 5 4 3 2 1   |
|---------------------------------------------------------------------------|---------------|
| RESERVED                                                                  | TX_GAP        |
| Rreturns0s-0h                                                             | R/W-Ch        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-198. TX\_GAP Register Field Descriptions

| Bit   | Field    | Type       | Reset   | Description               |
|-------|----------|------------|---------|---------------------------|
| 31-9  | RESERVED | Rreturns0s | 0h      |                           |
| 8-0   | TX_GAP   | R/W        | Ch      | Transmit Inter-Packet Gap |

## 14.5.8 CPSW\_SS Registers

Table 14-199 lists the memory-mapped registers for the CPSW\_SS. All register offset addresses not listed in Table 14-199 should be considered as reserved locations and the register contents should not be modified.

## Table 14-199. CPSW\_SS REGISTERS

| Offset   | Acronym      | Register Name                        | Section           |
|----------|--------------|--------------------------------------|-------------------|
| 0h       | ID_VER       | ID VERSION REGISTER                  | Section 14.5.8.1  |
| 4h       | CONTROL      | SWITCH CONTROL REGISTER              | Section 14.5.8.2  |
| 8h       | SOFT_RESET   | SOFT RESET REGISTER                  | Section 14.5.8.3  |
| Ch       | STAT_PORT_EN | STATISTICS PORT ENABLE REGISTER      | Section 14.5.8.4  |
| 10h      | PTYPE        | TRANSMIT PRIORITY TYPE REGISTER      | Section 14.5.8.5  |
| 14h      | SOFT_IDLE    | SOFTWARE IDLE                        | Section 14.5.8.6  |
| 18h      | THRU_RATE    | THROUGHPUT RATE                      | Section 14.5.8.7  |
| 1Ch      | GAP_THRESH   | CPGMAC_SL SHORT GAP THRESHOLD        | Section 14.5.8.8  |
| 20h      | TX_START_WDS | TRANSMIT START WORDS                 | Section 14.5.8.9  |
| 24h      | FLOW_CONTROL | FLOW CONTROL                         | Section 14.5.8.10 |
| 28h      | VLAN_LTYPE   | LTYPE1 AND LTYPE 2 REGISTER          | Section 14.5.8.11 |
| 2Ch      | TS_LTYPE     | VLAN_LTYPE1 AND VLAN_LTYPE2 REGISTER | Section 14.5.8.12 |
| 30h      | DLR_LTYPE    | DLR LTYPE REGISTER                   | Section 14.5.8.13 |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.8.1 ID\_VER Register (offset = 0h) [reset = 190112h]

ID\_VER is shown in Figure 14-184 and described in Table 14-200. ID VERSION REGISTER

| Figure 14-184. ID_VER Register   | Figure 14-184. ID_VER Register   | Figure 14-184. ID_VER Register   | Figure 14-184. ID_VER Register   | Figure 14-184. ID_VER Register   | Figure 14-184. ID_VER Register   | Figure 14-184. ID_VER Register   | Figure 14-184. ID_VER Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    |
| R-0                              | R-0                              | R-0                              | R-0                              | R-0                              | R-0                              | R-0                              | R-0                              |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    | CPSW_3G_IDENT                    |
| R-0                              | R-0                              | R-0                              | R-0                              | R-0                              | R-0                              | R-0                              | R-0                              |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| CPSW_3G_RTL_VER                  | CPSW_3G_RTL_VER                  | CPSW_3G_RTL_VER                  | CPSW_3G_RTL_VER                  | CPSW_3G_RTL_VER                  | CPSW_3G_MAJ_VER                  | CPSW_3G_MAJ_VER                  | CPSW_3G_MAJ_VER                  |
| R-0                              | R-0                              | R-0                              | R-0                              | R-0                              | R-0                              | R-0                              | R-0                              |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| CPSW_3G_MINOR_VER                | CPSW_3G_MINOR_VER                | CPSW_3G_MINOR_VER                | CPSW_3G_MINOR_VER                | CPSW_3G_MINOR_VER                | CPSW_3G_MINOR_VER                | CPSW_3G_MINOR_VER                | CPSW_3G_MINOR_VER                |

R-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-200. ID\_VER Register Field Descriptions

| Bit   | Field             | Type   |   Reset | Description             |
|-------|-------------------|--------|---------|-------------------------|
| 31-16 | CPSW_3G_IDENT     | R-0    |       0 | 3G Identification Value |
| 15-11 | CPSW_3G_RTL_VER   | R-0    |       0 | 3G RTL Version Value    |
| 10-8  | CPSW_3G_MAJ_VER   | R-0    |       0 | 3G Major Version Value  |
| 7-0   | CPSW_3G_MINOR_VER | R-0    |       0 | 3G Minor Version Value  |

## 14.5.8.2 CONTROL Register (offset = 4h) [reset = 0h]

CONTROL is shown in Figure 14-185 and described in Table 14-201. SWITCH CONTROL REGISTER

| Figure 14-185. CONTROL Register   | Figure 14-185. CONTROL Register   | Figure 14-185. CONTROL Register   | Figure 14-185. CONTROL Register   | Figure 14-185. CONTROL Register   | Figure 14-185. CONTROL Register   | Figure 14-185. CONTROL Register   | Figure 14-185. CONTROL Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | Reserved                          |                                   | DLR_EN                            | RX_VLAN_EN CAP                    | VLAN_AWARE                        | FIFO_LOOPBA CK                    |
|                                   |                                   |                                   |                                   | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-201. CONTROL Register Field Descriptions

|   Bit | Field         | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | DLR_EN        | R/W-0  |       0 | DLR enable 0 - DLR is disabled. DLR packets will not be moved to queue priority 3 and will not be separated out onto dlr_cpdma_ch. 1 - DLR is disabled. DLR packets be moved to destination port transmit queue priority 3 and will be separated out onto dlr_cpdma_ch when packet is to egress on port 0. |
|     2 | RX_VLAN_ENCAP | R/W-0  |       0 | Port 0 VLAN Encapsulation (egress): 0 - Port 0 receive packets (from 3G) are not VLAN encapsulated. 1 - Port 0 receive packets (from 3G) are VLAN encapsulated.                                                                                                                                            |
|     1 | VLAN_AWARE    | R/W-0  |       0 | VLAN Aware Mode: 0 - 3G is in the VLAN unaware mode. 1 - 3G is in the VLAN aware mode.                                                                                                                                                                                                                     |
|     0 | FIFO_LOOPBACK | R/W-0  |       0 | FIFO Loopback Mode 0 - Loopback is disabled 1 - FIFO Loopback mode enabled. Each packet received is turned around and sent out on the same port's transmit path. Port 2 receive is fixed on channel zero. The RXSOFOVERRUN statistic will increment for every packet sent in FIFO loopback mode.           |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.8.3 SOFT\_RESET Register (offset = 8h) [reset = 0h]

SOFT\_RESET is shown in Figure 14-186 and described in Table 14-202. SOFT RESET REGISTER

## Figure 14-186. SOFT\_RESET Register

<!-- image -->

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-202. SOFT\_RESET Register Field Descriptions

|   Bit | Field      | Type   |   Reset | Description                                                                                                                                                                                                                                                        |
|-------|------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     0 | SOFT_RESET | R/W-0  |       0 | Software reset - Writing a one to this bit causes the 3G logic to be reset. After writing a one to this bit, it may be polled to determine if the reset has occurred. If a one is read, the reset has not yet occurred. If a zero is read then reset has occurred. |

## 14.5.8.4 STAT\_PORT\_EN Register (offset = Ch) [reset = 0h]

STAT\_PORT\_EN is shown in Figure 14-187 and described in Table 14-203. STATISTICS PORT ENABLE REGISTER

## Figure 14-187. STAT\_PORT\_EN Register

| 31       | 30       | 29       | 28       | 27       | 26         | 25         | 24         |
|----------|----------|----------|----------|----------|------------|------------|------------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   | Reserved   |
| 23       | 22       | 21       | 20       | 19       | 18         | 17         | 16         |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   | Reserved   |
| 15       | 14       | 13       | 12       | 11       | 10         | 9          | 8          |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved   | Reserved   | Reserved   |
| 7        | 6        | 5        | 4        | 3        | 2          | 1          | 0          |
|          |          | Reserved |          |          | P2_STAT_EN | P1_STAT_EN | P0_STAT_EN |
|          |          |          |          |          | R/W-0      | R/W-0      | R/W-0      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-203. STAT\_PORT\_EN Register Field Descriptions

|   Bit | Field      | Type   |   Reset | Description                                                                                                                                                                               |
|-------|------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     2 | P2_STAT_EN | R/W-0  |       0 | Port 2 (GMII2 and Port 2 FIFO) Statistics Enable 0 - Port 2 statistics are not enabled. 1 - Port 2 statistics are enabled.                                                                |
|     1 | P1_STAT_EN | R/W-0  |       0 | Port 1 (GMII1 and Port 1 FIFO) Statistics Enable 0 - Port 1 statistics are not enabled. 1 - Port 1 statistics are enabled.                                                                |
|     0 | P0_STAT_EN | R/W-0  |       0 | Port 0 Statistics Enable 0 - Port 0 statistics are not enabled 1 - Port 0 statistics are enabled. FIFO overruns (SOFOVERRUNS) are the only port 0 statistics that are enabled to be kept. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.8.5 PTYPE Register (offset = 10h) [reset = 0h]

PTYPE is shown in Figure 14-188 and described in Table 14-204. TRANSMIT PRIORITY TYPE REGISTER

## Figure 14-188. PTYPE Register

| 31       | 30       | 29                | 28                | 27                | 26                | 25                | 24                |
|----------|----------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved | Reserved | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          | Reserved          |
| 23       | 22       | 21                | 20                | 19                | 18                | 17                | 16                |
| Reserved | Reserved | P2_PRI3_SHA PE_EN | P2_PRI2_SHA PE_EN | P2_PRI1_SHA PE_EN | P1_PRI3_SHA PE_EN | P1_PRI2_SHA PE_EN | P1_PRI1_SHA PE_EN |
|          |          | R/W-0             | R/W-0             | R/W-0             | R/W-0             | R/W-0             | R/W-0             |
| 15       | 14       | 13                | 12                | 11                | 10                | 9                 | 8                 |
|          |          | Reserved          |                   |                   | P2_PTYPE_ES C     | P1_PTYPE_ES C     | P0_PTYPE_ES C     |
|          |          |                   |                   |                   | R/W-0             | R/W-0             | R/W-0             |
| 7        | 6        | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| Reserved | Reserved | Reserved          | ESC_PRI_LD_VAL    | ESC_PRI_LD_VAL    | ESC_PRI_LD_VAL    | ESC_PRI_LD_VAL    | ESC_PRI_LD_VAL    |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-204. PTYPE Register Field Descriptions

| Bit   | Field            | Type   |   Reset | Description                                                                                                                                                                                                                                                                                       |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 21    | P2_PRI3_SHAPE_EN | R/W-0  |       0 | Port 2 Queue Priority 3 Transmit Shape Enable - If there is only one shaping queue then it must be priority 3.                                                                                                                                                                                    |
| 20    | P2_PRI2_SHAPE_EN | R/W-0  |       0 | Port 2 Queue Priority 2 Transmit Shape Enable - If there are two shaping queues then they must be priorities 3 and 2.                                                                                                                                                                             |
| 19    | P2_PRI1_SHAPE_EN | R/W-0  |       0 | Port 2 Queue Priority 1 Transmit Shape Enable - If there are three shaping queues all three bits should be set.                                                                                                                                                                                   |
| 18    | P1_PRI3_SHAPE_EN | R/W-0  |       0 | Port 1 Queue Priority 3 Transmit Shape Enable - If there is only one shaping queue then it must be priority 3.                                                                                                                                                                                    |
| 17    | P1_PRI2_SHAPE_EN | R/W-0  |       0 | Port 1 Queue Priority 2 Transmit Shape Enable- If there are two shaping queues then they must be priorities 3 and 2.                                                                                                                                                                              |
| 16    | P1_PRI1_SHAPE_EN | R/W-0  |       0 | Port 1 Queue Priority 1 Transmit Shape Enable- If there are three shaping queues all three bits should be set.                                                                                                                                                                                    |
| 10    | P2_PTYPE_ESC     | R/W-0  |       0 | Port 2 Priority Type Escalate - 0 - Port 2 priority type fixed 1 - Port 2 priority type escalate Escalate should not be used with queue shaping.                                                                                                                                                  |
| 9     | P1_PTYPE_ESC     | R/W-0  |       0 | Port 1 Priority Type Escalate - 0 - Port 1 priority type fixed 1 - Port 1 priority type escalate Escalate should not be used with queue shaping.                                                                                                                                                  |
| 8     | P0_PTYPE_ESC     | R/W-0  |       0 | Port 0 Priority Type Escalate - 0 - Port 0 priority type fixed 1 - Port 0 priority type escalate Escalate should not be used with queue shaping.                                                                                                                                                  |
| 4-0   | ESC_PRI_LD_VAL   | R/W-0  |       0 | Escalate Priority Load Value When a port is in escalate priority, this is the number of higher priority packets sent before the next lower priority is allowed to send a packet. Escalate priority allows lower priority packets to be sent at a fixed rate relative to the next higher priority. |

## 14.5.8.6 SOFT\_IDLE Register (offset = 14h) [reset = 0h]

SOFT\_IDLE is shown in Figure 14-189 and described in Table 14-205. SOFTWARE IDLE

## Figure 14-189. SOFT\_IDLE Register

<!-- image -->

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-205. SOFT\_IDLE Register Field Descriptions

|   Bit | Field     | Type   |   Reset | Description                                                                                                       |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------|
|     0 | SOFT_IDLE | R/W-0  |       0 | Software Idle - Setting this bit causes the switch fabric to stop forwarding packets at the next start of packet. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.8.7 THRU\_RATE Register (offset = 18h) [reset = 3003h]

THRU\_RATE is shown in Figure 14-190 and described in Table 14-206. THROUGHPUT RATE

| Figure 14-190. THRU_RATE Register   | Figure 14-190. THRU_RATE Register   | Figure 14-190. THRU_RATE Register   | Figure 14-190. THRU_RATE Register   | Figure 14-190. THRU_RATE Register   | Figure 14-190. THRU_RATE Register   | Figure 14-190. THRU_RATE Register   | Figure 14-190. THRU_RATE Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| SL_RX_THRU_RATE                     | SL_RX_THRU_RATE                     | SL_RX_THRU_RATE                     | SL_RX_THRU_RATE                     | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R/W-0                               | R/W-0                               | R/W-0                               | R/W-0                               |                                     |                                     |                                     |                                     |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | CPDMA_THRU_RATE                     | CPDMA_THRU_RATE                     | CPDMA_THRU_RATE                     | CPDMA_THRU_RATE                     |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-206. THRU\_RATE Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                                                                                          |
|-------|-----------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-12 | SL_RX_THRU_RATE | R/W-0  |       0 | CPGMAC_SL Switch FIFO receive through rate. This register value is the maximum throughput of the ethernet ports to the crossbar SCR. The default is one 8-byte word for every 3 CLK periods maximum. |
| 3-0   | CPDMA_THRU_RATE | R/W-0  |       0 | CPDMA Switch FIFO receive through rate. This register value is the maximum throughput of the CPDMA host port to the crossbar SCR. The default is one 8-byte word for every 3 CLK periods maximum.    |

## 14.5.8.8 GAP\_THRESH Register (offset = 1Ch) [reset = Bh]

GAP\_THRESH is shown in Figure 14-191 and described in Table 14-207. CPGMAC\_SL SHORT GAP THRESHOLD

## Figure 14-191. GAP\_THRESH Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-207. GAP\_THRESH Register Field Descriptions

| Bit   | Field      | Type   |   Reset | Description                                                                                                                   |
|-------|------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------|
| 4-0   | GAP_THRESH | R/W-0  |       0 | CPGMAC_SL Short Gap Threshold - This is the CPGMAC_SL associated FIFO transmit block usage value for triggering TX_SHORT_GAP. |

GAP\_THRESH

R/W-0

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.8.9 TX\_START\_WDS Register (offset = 20h) [reset = 20h]

TX\_START\_WDS is shown in Figure 14-192 and described in Table 14-208. TRANSMIT START WORDS

## Figure 14-192. TX\_START\_WDS Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

TX\_START\_WDS

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-208. TX\_START\_WDS Register Field Descriptions

| Bit   | Field        | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                |
|-------|--------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 10-0  | TX_START_WDS | R/W-0  |       0 | FIFO Packet Transmit (egress) Start Words. This value is the number of required packet words in the transmit FIFO before the packet egress will begin. This value is non-zero to preclude underrun. Decimal 32 is the recommended value. It should not be increased unnecessairly to prevent adding to the switch latency. |

## 14.5.8.10 FLOW\_CONTROL Register (offset = 24h) [reset = 1h]

FLOW\_CONTROL is shown in Figure 14-193 and described in Table 14-209. FLOW CONTROL

| Figure 14-193. FLOW_CONTROL Register   | Figure 14-193. FLOW_CONTROL Register   | Figure 14-193. FLOW_CONTROL Register   | Figure 14-193. FLOW_CONTROL Register   | Figure 14-193. FLOW_CONTROL Register   | Figure 14-193. FLOW_CONTROL Register   | Figure 14-193. FLOW_CONTROL Register   | Figure 14-193. FLOW_CONTROL Register   |
|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|
| 31                                     | 30                                     | 29                                     | 28                                     | 27                                     | 26                                     | 25                                     | 24                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| 23                                     | 22                                     | 21                                     | 20                                     | 19                                     | 18                                     | 17                                     | 16                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| 15                                     | 14                                     | 13                                     | 12                                     | 11                                     | 10                                     | 9                                      | 8                                      |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| 7                                      | 6                                      | 5                                      | 4                                      | 3                                      | 2                                      | 1                                      | 0                                      |
|                                        |                                        | Reserved                               |                                        |                                        | P2_FLOW_EN                             | P1_FLOW_EN                             | P0_FLOW_EN                             |
|                                        |                                        |                                        |                                        |                                        | R/W-0                                  | R/W-0                                  | R/W-0                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-209. FLOW\_CONTROL Register Field Descriptions

|   Bit | Field      | Type   |   Reset | Description                        |
|-------|------------|--------|---------|------------------------------------|
|     2 | P2_FLOW_EN | R/W-0  |       0 | Port 2 Receive flow control enable |
|     1 | P1_FLOW_EN | R/W-0  |       0 | Port 1 Receive flow control enable |
|     0 | P0_FLOW_EN | R/W-0  |       0 | Port 0 Receive flow control enable |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.8.11 VLAN\_LTYPE Register (offset = 28h) [reset = 81008100h]

VLAN\_LTYPE is shown in Figure 14-194 and described in Table 14-210. LTYPE1 AND LTYPE 2 REGISTER

| Figure 14-194. VLAN_LTYPE Register   | Figure 14-194. VLAN_LTYPE Register   | Figure 14-194. VLAN_LTYPE Register   | Figure 14-194. VLAN_LTYPE Register   | Figure 14-194. VLAN_LTYPE Register   | Figure 14-194. VLAN_LTYPE Register   | Figure 14-194. VLAN_LTYPE Register   | Figure 14-194. VLAN_LTYPE Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          |
| R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          | VLAN_LTYPE2                          |
| R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          |
| R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                | R/W-0                                |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          | VLAN_LTYPE1                          |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-210. VLAN\_LTYPE Register Field Descriptions

| Bit   | Field       | Type   |   Reset | Description                                                                                                    |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
| 31-16 | VLAN_LTYPE2 | R/W-0  |       0 | Time Sync VLAN LTYPE2 This VLAN LTYPE value is used for tx and rx. This is the inner VLAN if both are present. |
| 15-0  | VLAN_LTYPE1 | R/W-0  |       0 | Time Sync VLAN LTYPE1 This VLAN LTYPE value is used for tx and rx. This is the outer VLAN if both are present. |

## 14.5.8.12 TS\_LTYPE Register (offset = 2Ch) [reset = 0h]

TS\_LTYPE is shown in Figure 14-195 and described in Table 14-211. VLAN\_LTYPE1 AND VLAN\_LTYPE2 REGISTER

## Figure 14-195. TS\_LTYPE Register

| 31                 | 30                 | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| Reserved           | Reserved           | Reserved           | Reserved           | Reserved           | Reserved           | Reserved           | Reserved           |
| 23                 | 22                 | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| Reserved TS_LTYPE2 | Reserved TS_LTYPE2 | Reserved TS_LTYPE2 | Reserved TS_LTYPE2 | Reserved TS_LTYPE2 | Reserved TS_LTYPE2 | Reserved TS_LTYPE2 | Reserved TS_LTYPE2 |
| R/W-0              | R/W-0              | R/W-0              | R/W-0              | R/W-0              | R/W-0              | R/W-0              | R/W-0              |
| 15                 | 14                 | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          |
| R/W-0              | R/W-0              | R/W-0              | R/W-0              | R/W-0              | R/W-0              | R/W-0              | R/W-0              |
| 7                  | 6                  | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          | TS_LTYPE1          |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-211. TS\_LTYPE Register Field Descriptions

| Bit   | Field     | Type   |   Reset | Description                                                                           |
|-------|-----------|--------|---------|---------------------------------------------------------------------------------------|
| 21-16 | TS_LTYPE2 | R/W-0  |       0 | Time Sync LTYPE2 This is an Ethertype value to match for tx and rx time sync packets. |
| 15-0  | TS_LTYPE1 | R/W-0  |       0 | Time Sync LTYPE1 This is an ethertype value to match for tx and rx time sync packets. |

<!-- image -->