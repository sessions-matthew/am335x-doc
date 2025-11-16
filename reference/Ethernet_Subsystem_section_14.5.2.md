<!-- image -->

www.ti.com

## 14.5.1.14 PORTCTL5 Register (offset = 54h) [reset = 0h]

PORTCTL5 is shown in Figure 14-28 and described in Table 14-37. ADDRESS LOOKUP ENGINE PORT 5 CONTROL REGISTER

| Figure 14-28. PORTCTL5 Register   | Figure 14-28. PORTCTL5 Register   | Figure 14-28. PORTCTL5 Register   | Figure 14-28. PORTCTL5 Register   | Figure 14-28. PORTCTL5 Register   | Figure 14-28. PORTCTL5 Register   | Figure 14-28. PORTCTL5 Register   | Figure 14-28. PORTCTL5 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | NO_SA_UPDA TE                     | NO_LEARN                          | VID_INGRESS _CHECK                | DROP_UNTAG GED                    | PORT_STATE                        | PORT_STATE                        |
|                                   |                                   | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-37. PORTCTL5 Register Field Descriptions

| Bit   | Field             | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | BCAST_LIMIT       | R/W-0  |       0 | Broadcast Packet Rate Limit - Each prescale pulse loads this field into the port broadcast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Broadcast rate limiting is enabled by a non-zero value in this field  |
| 23-16 | MCAST_LIMIT       | R/W-0  |       0 | Multicast Packet Rate Limit - Each prescale pulse loads this field into the port multicast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Multicast rate limiting is enabled by a non-zero value in this field. |
| 5     | NO_SA_UPDATE      | R/W-0  |       0 | No Souce Address Update - When set the port is disabled from updating the source port number in an ALE table entry.                                                                                                                                                                                                                                                                                                           |
| 4     | NO_LEARN          | R/W-0  |       0 | No Learn Mode - When set the port is disabled from learning an address.                                                                                                                                                                                                                                                                                                                                                       |
| 3     | VID_INGRESS_CHECK | R/W-0  |       0 | VLAN ID Ingress Check - If VLAN not found then drop the packet. Packets with an unknown (default) VLAN will be dropped.                                                                                                                                                                                                                                                                                                       |
| 2     | DROP_UNTAGGED     | R/W-0  |       0 | Drop Untagged Packets - Drop non-VLAN tagged ingress packets.                                                                                                                                                                                                                                                                                                                                                                 |
| 1-0   | PORT_STATE        | R/W-0  |       0 | Port State 0 - Disabled 1 - Blocked 2 - Learn                                                                                                                                                                                                                                                                                                                                                                                 |

## 14.5.2 CPSW\_CPDMA Registers

Table 14-38 lists the memory-mapped registers for the CPSW\_CPDMA. All register offset addresses not listed in Table 14-38 should be considered as reserved locations and the register contents should not be modified.

## Table 14-38. CPSW\_CPDMA REGISTERS

| Offset   | Acronym            | Register Name                                          | Section           |
|----------|--------------------|--------------------------------------------------------|-------------------|
| 0h       | TX_IDVER           | CPDMA_REGS TX IDENTIFICATION AND VERSION REGISTER      | Section 14.5.2.1  |
| 4h       | TX_CONTROL         | CPDMA_REGS TX CONTROL REGISTER                         | Section 14.5.2.2  |
| 8h       | TX_TEARDOWN        | CPDMA_REGS TX TEARDOWN REGISTER                        | Section 14.5.2.3  |
| 10h      | RX_IDVER           | CPDMA_REGS RX IDENTIFICATION AND VERSION REGISTER      | Section 14.5.2.4  |
| 14h      | RX_CONTROL         | CPDMA_REGS RX CONTROL REGISTER                         | Section 14.5.2.5  |
| 18h      | RX_TEARDOWN        | CPDMA_REGS RX TEARDOWN REGISTER                        | Section 14.5.2.6  |
| 1Ch      | CPDMA_SOFT_RESET   | CPDMA_REGS SOFT RESET REGISTER                         | Section 14.5.2.7  |
| 20h      | DMACONTROL         | CPDMA_REGS CPDMA CONTROL REGISTER                      | Section 14.5.2.8  |
| 24h      | DMASTATUS          | CPDMA_REGS CPDMA STATUS REGISTER                       | Section 14.5.2.9  |
| 28h      | RX_BUFFER_OFFSET   | CPDMA_REGS RECEIVE BUFFER OFFSET                       | Section 14.5.2.10 |
| 2Ch      | EMCONTROL          | CPDMA_REGS EMULATION CONTROL                           | Section 14.5.2.11 |
| 30h      | TX_PRI0_RATE       | CPDMA_REGS TRANSMIT (INGRESS) PRIORITY 0 RATE          | Section 14.5.2.12 |
| 34h      | TX_PRI1_RATE       | CPDMA_REGS TRANSMIT (INGRESS) PRIORITY 1 RATE          | Section 14.5.2.13 |
| 38h      | TX_PRI2_RATE       | CPDMA_REGS TRANSMIT (INGRESS) PRIORITY 2 RATE          | Section 14.5.2.14 |
| 3Ch      | TX_PRI3_RATE       | CPDMA_REGS TRANSMIT (INGRESS) PRIORITY 3 RATE          | Section 14.5.2.15 |
| 40h      | TX_PRI4_RATE       | CPDMA_REGS TRANSMIT (INGRESS) PRIORITY 4 RATE          | Section 14.5.2.16 |
| 44h      | TX_PRI5_RATE       | CPDMA_REGS TRANSMIT (INGRESS) PRIORITY 5 RATE          | Section 14.5.2.17 |
| 48h      | TX_PRI6_RATE       | CPDMA_REGS TRANSMIT (INGRESS) PRIORITY 6 RATE          | Section 14.5.2.18 |
| 4Ch      | TX_PRI7_RATE       | CPDMA_REGS TRANSMIT (INGRESS) PRIORITY 7 RATE          | Section 14.5.2.19 |
| 80h      | TX_INTSTAT_RAW     | CPDMA_INT TX INTERRUPT STATUS REGISTER (RAW VALUE)     | Section 14.5.2.20 |
| 84h      | TX_INTSTAT_MASKED  | CPDMA_INT TX INTERRUPT STATUS REGISTER (MASKED VALUE)  | Section 14.5.2.21 |
| 88h      | TX_INTMASK_SET     | CPDMA_INT TX INTERRUPT MASK SET REGISTER               | Section 14.5.2.22 |
| 8Ch      | TX_INTMASK_CLEAR   | CPDMA_INT TX INTERRUPT MASK CLEAR REGISTER             | Section 14.5.2.23 |
| 90h      | CPDMA_IN_VECTOR    | CPDMA_INT INPUT VECTOR (READ ONLY)                     | Section 14.5.2.24 |
| 94h      | CPDMA_EOI_VECTOR   | CPDMA_INT END OF INTERRUPT VECTOR                      | Section 14.5.2.25 |
| A0h      | RX_INTSTAT_RAW     | CPDMA_INT RX INTERRUPT STATUS REGISTER (RAW VALUE)     | Section 14.5.2.26 |
| A4h      | RX_INTSTAT_MASKED  | CPDMA_INT RX INTERRUPT STATUS REGISTER (MASKED VALUE)  | Section 14.5.2.27 |
| A8h      | RX_INTMASK_SET     | CPDMA_INT RX INTERRUPT MASK SET REGISTER               | Section 14.5.2.28 |
| ACh      | RX_INTMASK_CLEAR   | CPDMA_INT RX INTERRUPT MASK CLEAR REGISTER             | Section 14.5.2.29 |
| B0h      | DMA_INTSTAT_RAW    | CPDMA_INT DMA INTERRUPT STATUS REGISTER (RAW VALUE)    | Section 14.5.2.30 |
| B4h      | DMA_INTSTAT_MASKED | CPDMA_INT DMA INTERRUPT STATUS REGISTER (MASKED VALUE) | Section 14.5.2.31 |
| B8h      | DMA_INTMASK_SET    | CPDMA_INT DMA INTERRUPT MASK SET REGISTER              | Section 14.5.2.32 |
| BCh      | DMA_INTMASK_CLEAR  | CPDMA_INT DMA INTERRUPT MASK CLEAR REGISTER            | Section 14.5.2.33 |
| C0h      | RX0_PENDTHRESH     | CPDMA_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 0 | Section 14.5.2.34 |

<!-- image -->

<!-- image -->

Table 14-38. CPSW\_CPDMA REGISTERS (continued)

| Offset   | Acronym        | Register Name                                          | Section           |
|----------|----------------|--------------------------------------------------------|-------------------|
| C4h      | RX1_PENDTHRESH | CPDMA_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 1 | Section 14.5.2.35 |
| C8h      | RX2_PENDTHRESH | CPDMA_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 2 | Section 14.5.2.36 |
| CCh      | RX3_PENDTHRESH | CPDMA_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 3 | Section 14.5.2.37 |
| D0h      | RX4_PENDTHRESH | CPDMA_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 4 | Section 14.5.2.38 |
| D4h      | RX5_PENDTHRESH | CPDMA_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 5 | Section 14.5.2.39 |
| D8h      | RX6_PENDTHRESH | CPDMA_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 6 | Section 14.5.2.40 |
| DCh      | RX7_PENDTHRESH | CPDMA_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 7 | Section 14.5.2.41 |
| E0h      | RX0_FREEBUFFER | CPDMA_INT RECEIVE FREE BUFFER REGISTER CHANNEL 0       | Section 14.5.2.42 |
| E4h      | RX1_FREEBUFFER | CPDMA_INT RECEIVE FREE BUFFER REGISTER CHANNEL 1       | Section 14.5.2.43 |
| E8h      | RX2_FREEBUFFER | CPDMA_INT RECEIVE FREE BUFFER REGISTER CHANNEL 2       | Section 14.5.2.44 |
| ECh      | RX3_FREEBUFFER | CPDMA_INT RECEIVE FREE BUFFER REGISTER CHANNEL 3       | Section 14.5.2.45 |
| F0h      | RX4_FREEBUFFER | CPDMA_INT RECEIVE FREE BUFFER REGISTER CHANNEL 4       | Section 14.5.2.46 |
| F4h      | RX5_FREEBUFFER | CPDMA_INT RECEIVE FREE BUFFER REGISTER CHANNEL 5       | Section 14.5.2.47 |
| F8h      | RX6_FREEBUFFER | CPDMA_INT RECEIVE FREE BUFFER REGISTER CHANNEL 6       | Section 14.5.2.48 |
| FCh      | RX7_FREEBUFFER | CPDMA_INT RECEIVE FREE BUFFER REGISTER CHANNEL 7       | Section 14.5.2.49 |

## 14.5.2.1 TX\_IDVER Register (offset = 0h) [reset = 180108h]

TX\_IDVER is shown in Figure 14-29 and described in Table 14-39. CPDMA\_REGS TX IDENTIFICATION AND VERSION REGISTER

## Figure 14-29. TX\_IDVER Register

R-8h

| 31           | 30           | 29           | 28           | 27           | 26           | 25           | 24           |
|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| TX_IDENT     | TX_IDENT     | TX_IDENT     | TX_IDENT     | TX_IDENT     | TX_IDENT     | TX_IDENT     | TX_IDENT     |
| R-18h        | R-18h        | R-18h        | R-18h        | R-18h        | R-18h        | R-18h        | R-18h        |
| 23           | 22           | 21           | 20           | 19           | 18           | 17           | 16           |
| TX_IDENT     | TX_IDENT     | TX_IDENT     | TX_IDENT     | TX_IDENT     | TX_IDENT     | TX_IDENT     | TX_IDENT     |
| R-18h        | R-18h        | R-18h        | R-18h        | R-18h        | R-18h        | R-18h        | R-18h        |
| 15           | 14           | 13           | 12           | 11           | 10           | 9            | 8            |
| TX_MAJOR_VER | TX_MAJOR_VER | TX_MAJOR_VER | TX_MAJOR_VER | TX_MAJOR_VER | TX_MAJOR_VER | TX_MAJOR_VER | TX_MAJOR_VER |
| R-1h         | R-1h         | R-1h         | R-1h         | R-1h         | R-1h         | R-1h         | R-1h         |
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
| TX_MINOR_VER | TX_MINOR_VER | TX_MINOR_VER | TX_MINOR_VER | TX_MINOR_VER | TX_MINOR_VER | TX_MINOR_VER | TX_MINOR_VER |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-39. TX\_IDVER Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                         |
|-------|--------------|--------|---------|---------------------------------------------------------------------|
| 31-16 | TX_IDENT     | R      | 18h     | TX Identification Value                                             |
| 15-8  | TX_MAJOR_VER | R      | 1h      | TX Major Version Value - The value read is the major version number |
| 7-0   | TX_MINOR_VER | R      | 8h      | TX Minor Version Value - The value read is the minor version number |

<!-- image -->

<!-- image -->

## 14.5.2.2 TX\_CONTROL Register (offset = 4h) [reset = 0h]

TX\_CONTROL is shown in Figure 14-30 and described in Table 14-40. CPDMA\_REGS TX CONTROL REGISTER

| Figure 14-30. TX_CONTROL Register   | Figure 14-30. TX_CONTROL Register   | Figure 14-30. TX_CONTROL Register   | Figure 14-30. TX_CONTROL Register   | Figure 14-30. TX_CONTROL Register   | Figure 14-30. TX_CONTROL Register   | Figure 14-30. TX_CONTROL Register   | Figure 14-30. TX_CONTROL Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | TX_EN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-40. TX\_CONTROL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                        |
|-------|----------|--------|---------|------------------------------------|
| 31-1  | Reserved | R      | 0h      |                                    |
| 0     | TX_EN    | R/W    | 0h      | TX Enable 0 - Disabled 1 - Enabled |

R/W-0h

## 14.5.2.3 TX\_TEARDOWN Register (offset = 8h) [reset = 0h]

TX\_TEARDOWN is shown in Figure 14-31 and described in Table 14-41. CPDMA\_REGS TX TEARDOWN REGISTER

| Figure 14-31. TX_TEARDOWN Register   | Figure 14-31. TX_TEARDOWN Register   | Figure 14-31. TX_TEARDOWN Register   | Figure 14-31. TX_TEARDOWN Register   | Figure 14-31. TX_TEARDOWN Register   | Figure 14-31. TX_TEARDOWN Register   | Figure 14-31. TX_TEARDOWN Register   | Figure 14-31. TX_TEARDOWN Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| TX_TDN_RDY                           |                                      |                                      |                                      | Reserved                             |                                      |                                      |                                      |
| R-0h                                 |                                      |                                      |                                      | R-0h                                 |                                      |                                      |                                      |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved TX_TDN_CH                   | Reserved TX_TDN_CH                   | Reserved TX_TDN_CH                   | Reserved TX_TDN_CH                   | Reserved TX_TDN_CH                   | Reserved TX_TDN_CH                   | Reserved TX_TDN_CH                   | Reserved TX_TDN_CH                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-41. TX\_TEARDOWN Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                       |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_TDN_RDY | R      | 0h      | Tx Teardown Ready - read as zero, but is always assumed to be one (unused).                                                                                                                                                                       |
| 30-3  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                   |
| 2-0   | TX_TDN_CH  | R/W    | 0h      | Tx Teardown Channel - Transmit channel teardown is commanded by writing the encoded value of the transmit channel to be torn down. The teardown register is read as zero. 000 - teardown transmit channel 0 ... 111 - teardown transmit channel 7 |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 14.5.2.4 RX\_IDVER Register (offset = 10h) [reset = C0107h]

RX\_IDVER is shown in Figure 14-32 and described in Table 14-42. CPDMA\_REGS RX IDENTIFICATION AND VERSION REGISTER

## Figure 14-32. RX\_IDVER Register

| 31           | 30           | 29           | 28           | 27           | 26           | 25           | 24           |
|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| RX_IDENT     | RX_IDENT     | RX_IDENT     | RX_IDENT     | RX_IDENT     | RX_IDENT     | RX_IDENT     | RX_IDENT     |
| R-Ch         | R-Ch         | R-Ch         | R-Ch         | R-Ch         | R-Ch         | R-Ch         | R-Ch         |
| 23           | 22           | 21           | 20           | 19           | 18           | 17           | 16           |
| RX_IDENT     | RX_IDENT     | RX_IDENT     | RX_IDENT     | RX_IDENT     | RX_IDENT     | RX_IDENT     | RX_IDENT     |
| R-Ch         | R-Ch         | R-Ch         | R-Ch         | R-Ch         | R-Ch         | R-Ch         | R-Ch         |
| 15           | 14           | 13           | 12           | 11           | 10           | 9            | 8            |
| RX_MAJOR_VER | RX_MAJOR_VER | RX_MAJOR_VER | RX_MAJOR_VER | RX_MAJOR_VER | RX_MAJOR_VER | RX_MAJOR_VER | RX_MAJOR_VER |
| R-1h         | R-1h         | R-1h         | R-1h         | R-1h         | R-1h         | R-1h         | R-1h         |
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
| RX_MINOR_VER | RX_MINOR_VER | RX_MINOR_VER | RX_MINOR_VER | RX_MINOR_VER | RX_MINOR_VER | RX_MINOR_VER | RX_MINOR_VER |

R-7h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-42. RX\_IDVER Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description             |
|-------|--------------|--------|---------|-------------------------|
| 31-16 | RX_IDENT     | R      | Ch      | RX Identification Value |
| 15-8  | RX_MAJOR_VER | R      | 1h      | RX Major Version Value  |
| 7-0   | RX_MINOR_VER | R      | 7h      | RX Minor Version Value  |

## 14.5.2.5 RX\_CONTROL Register (offset = 14h) [reset = 0h]

RX\_CONTROL is shown in Figure 14-33 and described in Table 14-43. CPDMA\_REGS RX CONTROL REGISTER

| Figure 14-33. RX_CONTROL Register   | Figure 14-33. RX_CONTROL Register   | Figure 14-33. RX_CONTROL Register   | Figure 14-33. RX_CONTROL Register   | Figure 14-33. RX_CONTROL Register   | Figure 14-33. RX_CONTROL Register   | Figure 14-33. RX_CONTROL Register   | Figure 14-33. RX_CONTROL Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | RX_EN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-43. RX\_CONTROL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                            |
|-------|----------|--------|---------|----------------------------------------|
| 31-1  | Reserved | R      | 0h      |                                        |
| 0     | RX_EN    | R/W    | 0h      | RX DMA Enable 0 - Disabled 1 - Enabled |

<!-- image -->

R/W-0h

<!-- image -->

## 14.5.2.6 RX\_TEARDOWN Register (offset = 18h) [reset = 0h]

RX\_TEARDOWN is shown in Figure 14-34 and described in Table 14-44. CPDMA\_REGS RX TEARDOWN REGISTER

## Figure 14-34. RX\_TEARDOWN Register

| 31                 | 30                 | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_TDN_RDY         |                    |                    |                    | Reserved           |                    |                    |                    |
| R-0h               |                    |                    |                    | R-0h               |                    |                    |                    |
| 23                 | 22                 | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| Reserved           | Reserved           | Reserved           | Reserved           | Reserved           | Reserved           | Reserved           | Reserved           |
| R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               |
| 15                 | 14                 | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| Reserved           | Reserved           | Reserved           | Reserved           | Reserved           | Reserved           | Reserved           | Reserved           |
| R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               |
| 7                  | 6                  | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| Reserved RX_TDN_CH | Reserved RX_TDN_CH | Reserved RX_TDN_CH | Reserved RX_TDN_CH | Reserved RX_TDN_CH | Reserved RX_TDN_CH | Reserved RX_TDN_CH | Reserved RX_TDN_CH |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-44. RX\_TEARDOWN Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                  |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_TDN_RDY | R      | 0h      | Teardown Ready - read as zero, but is always assumed to be one (unused).                                                                                                                                                                     |
| 30-3  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                              |
| 2-0   | RX_TDN_CH  | R/W    | 0h      | Rx Teardown Channel -Receive channel teardown is commanded by writing the encoded value of the receive channel to be torn down. The teardown register is read as zero. 000 - teardown receive channel 0 ... 111 - teardown receive channel 7 |

R/W-0h

## 14.5.2.7 CPDMA\_SOFT\_RESET Register (offset = 1Ch) [reset = 0h]

CPDMA\_SOFT\_RESET is shown in Figure 14-35 and described in Table 14-45. CPDMA\_REGS SOFT RESET REGISTER

| Figure 14-35. CPDMA_SOFT_RESET Register   | Figure 14-35. CPDMA_SOFT_RESET Register   | Figure 14-35. CPDMA_SOFT_RESET Register   | Figure 14-35. CPDMA_SOFT_RESET Register   | Figure 14-35. CPDMA_SOFT_RESET Register   | Figure 14-35. CPDMA_SOFT_RESET Register   | Figure 14-35. CPDMA_SOFT_RESET Register   | Figure 14-35. CPDMA_SOFT_RESET Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | SOFT_RESET                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-45. CPDMA\_SOFT\_RESET Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                            |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                        |
| 0     | SOFT_RESET | R/W    | 0h      | Software reset - Writing a one to this bit causes the CPDMA logic to be reset. Software reset occurs when the RX and TX DMA Controllers are in an idle state to avoid locking up the VBUSP bus. After writing a one to this bit, it may be polled to determine if the reset has occurred. If a one is read, the reset has not yet occurred. If a zero is read then reset has occurred. |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 14.5.2.8 DMACONTROL Register (offset = 20h) [reset = 0h]

DMACONTROL is shown in Figure 14-36 and described in Table 14-46. CPDMA\_REGS CPDMA CONTROL REGISTER

| Figure 14-36. DMACONTROL Register   | Figure 14-36. DMACONTROL Register   | Figure 14-36. DMACONTROL Register   | Figure 14-36. DMACONTROL Register   | Figure 14-36. DMACONTROL Register   | Figure 14-36. DMACONTROL Register   | Figure 14-36. DMACONTROL Register   | Figure 14-36. DMACONTROL Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| TX_RLIM                             | TX_RLIM                             | TX_RLIM                             | TX_RLIM                             | TX_RLIM                             | TX_RLIM                             | TX_RLIM                             | TX_RLIM                             |
| R/W-0h                              | R/W-0h                              | R/W-0h                              | R/W-0h                              | R/W-0h                              | R/W-0h                              | R/W-0h                              | R/W-0h                              |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
|                                     | Reserved                            |                                     | RX_CEF                              | CMD_IDLE                            | RX_OFFLEN_B LOCK                    | RX_OWNERS HIP                       | TX_PTYPE                            |
|                                     | R-0h                                |                                     | R/W-0h                              | R/W-0h                              | R/W-0h                              | R/W-0h                              | R/W-0h                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-46. DMACONTROL Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved        | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 15-8  | TX_RLIM         | R/W    | 0h      | Transmit Rate Limit Channel Bus 00000000 - no rate-limited channels 10000000 - channel 7 is rate-limited 11000000 - channels 7 downto 6 are rate-limited 11100000 - channels 7 downto 5 are rate-limited 11110000 - channels 7 downto 4 are rate-limited 11111000 - channels 7 downto 3 are rate-limited 11111100 - channels 7 downto 2 are rate-limited 11111110 - channels 7 downto 1 are rate-limited 11111111 - channels 7 downto 0 are rate-limited all others invalid - this bus must be set msb towards lsb. tx_ptype must be set if any tx_rlim bit is set for fixed priority. |
| 7-5   | Reserved        | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 4     | RX_CEF          | R/W    | 0h      | RX Copy Error Frames Enable - Enables DMA overrun frames to be transferred to memory (up to the point of overrun). The overrun error bit will be set in the frame EOP buffer descriptor. Overrun frame data will be filtered when rx_cef is not set. Frames coming from the receive FIFO with other error bits set are not effected by this bit. 0 - Frames containing overrun errors are filtered. 1 - Frames containing overrun errors are transferred to memory.                                                                                                                    |
| 3     | CMD_IDLE        | R/W    | 0h      | Command Idle 0 - Idle not commanded 1 - Idle Commanded (read idle in DMAStatus)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 2     | RX_OFFLEN_BLOCK | R/W    | 0h      | Receive Offset/Length word write block. 0 - Do not block the DMA writes to the receive buffer descriptor offset/buffer length word. The offset/buffer length word is written as specified in CPPI 3.0. 1 - Block all CPDMA DMA controller writes to the receive buffer descriptor offset/buffer length words during CPPI packet processing. when this bit is set, the CPDMA will never write the third word to any receive buffer descriptor.                                                                                                                                          |

<!-- image -->

## Table 14-46. DMACONTROL Register Field Descriptions (continued)

|   Bit | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | RX_OWNERSHIP | R/W    | 0h      | Receive Ownership Write Bit Value. 0 - The CPDMA writes the receive ownership bit to zero at the end of packet processing as specified in CPPI 3.0. 1 - The CPDMA writes the receive ownership bit to one at the end of packet processing. Users who do not use the ownership mechanism can use this mode to preclude the necessity of software having to set this bit each time the buffer descriptor is used. |
|     0 | TX_PTYPE     | R/W    | 0h      | Transmit Queue Priority Type 0 - The queue uses a round robin scheme to select the next channel for transmission. 1 - The queue uses a fixed (channel 7 highest priority) priority scheme to select the next channel for transmission                                                                                                                                                                           |

<!-- image -->

www.ti.com

## 14.5.2.9 DMASTATUS Register (offset = 24h) [reset = 0h]

DMASTATUS is shown in Figure 14-37 and described in Table 14-47. CPDMA\_REGS CPDMA STATUS REGISTER

## Figure 14-37. DMASTATUS Register

R-0h

| 31       | 30               | 29               | 28       | 27       | 26       | 25        | 24       |
|----------|------------------|------------------|----------|----------|----------|-----------|----------|
| IDLE     |                  |                  |          | Reserved |          |           |          |
| R-0h     |                  |                  |          | R-0h     |          |           |          |
| 23       | 22               | 21               | 20       | 19       | 18       | 17        | 16       |
|          | TX_HOST_ERR_CODE |                  |          | Reserved |          | TX_ERR_CH |          |
|          | R-0h             | R-0h             |          | R-0h     |          | R-0h      |          |
| 15       | 14               | 13               | 12       | 11       | 10       | 9         | 8        |
|          | RX_HOST_ERR_CODE | RX_HOST_ERR_CODE |          | Reserved |          | RX_ERR_CH |          |
|          | R-0h             | R-0h             |          | R-0h     |          | R-0h      |          |
| 7        | 6                | 5                | 4        | 3        | 2        | 1         | 0        |
| Reserved | Reserved         | Reserved         | Reserved | Reserved | Reserved | Reserved  | Reserved |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-47. DMASTATUS Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | IDLE             | R      | 0h      | Idle Status Bit - Indicates when set that the CPDMA is not transferring a packet on transmit or receive.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 30-24 | Reserved         | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 23-20 | TX_HOST_ERR_CODE | R      | 0h      | TX Host Error Code - This field is set to indicate CPDMA detected TX DMA related host errors. The host should read this field after a HOST_ERR_INT to determine the error. Host error Interrupts require hardware reset in order to recover. A zero packet length is an error, but it is not detected. 0000 - No error 0001 - SOP error. 0010 - Ownership bit not set in SOP buffer. 0011 - Zero Next Buffer Descriptor Pointer Without EOP 0100 - Zero Buffer Pointer. 0101 - Zero Buffer Length 0110 - Packet Length Error (sum of buffers is less than packet length) 0111 - reserved ... 1111 - reserved |
| 19    | Reserved         | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 18-16 | TX_ERR_CH        | R      | 0h      | TX Host Error Channel - This field indicates which TX channel (if applicable) the host error occurred on. This field is cleared to zero on a host read. 000 - The host error occurred on TX channel 0 ... 111 - The host error occurred on TX channel 7                                                                                                                                                                                                                                                                                                                                                      |
| 15-12 | RX_HOST_ERR_CODE | R      | 0h      | RX Host Error Code - This field is set to indicate CPDMA detected RX DMA related host errors. The host should read this field after a HOST_ERR_INT to determine the error. Host error Interrupts require hardware reset in order to recover. 0000 - No error 0001 - reserved 0010 - Ownership bit not set in input buffer. 0011 - reserved 0100 - Zero Buffer Pointer. 0101 - Zero buffer length on non-SOP descriptor 0110 - SOP buffer length not greater than offset ... 1111 - reserved                                                                                                                  |

## Table 14-47. DMASTATUS Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                             |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 11    | Reserved  | R      | 0h      |                                                                                                                                                                                                                                         |
| 10-8  | RX_ERR_CH | R      | 0h      | RX Host Error Channel - This field indicates which RX channel the host error occurred on. This field is cleared to zero on a host read. 000 - The host error occurred on RX channel 0 ... 111 - The host error occurred on RX channel 7 |
| 7-0   | Reserved  | R      | 0h      |                                                                                                                                                                                                                                         |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.10 RX\_BUFFER\_OFFSET Register (offset = 28h) [reset = 0h]

RX\_BUFFER\_OFFSET is shown in Figure 14-38 and described in Table 14-48. CPDMA\_REGS RECEIVE BUFFER OFFSET

| Figure 14-38. RX_BUFFER_OFFSET Register   | Figure 14-38. RX_BUFFER_OFFSET Register   | Figure 14-38. RX_BUFFER_OFFSET Register   | Figure 14-38. RX_BUFFER_OFFSET Register   | Figure 14-38. RX_BUFFER_OFFSET Register   | Figure 14-38. RX_BUFFER_OFFSET Register   | Figure 14-38. RX_BUFFER_OFFSET Register   | Figure 14-38. RX_BUFFER_OFFSET Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          | RX_BUFFER_OFFSET                          |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-48. RX\_BUFFER\_OFFSET Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved         | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 15-0  | RX_BUFFER_OFFSET | R/W    | 0h      | Receive Buffer Offset Value - The rx_buffer_offset will be written by the port into each frame SOP buffer descriptor buffer_offset field. The frame data will begin after the rx_buffer_offset value of bytes. A value of 0x0000 indicates that there are no unused bytes at the beginning of the data and that valid data begins on the first byte of the buffer. A value of 0x000F (decimal 15) indicates that the first 15 bytes of the buffer are to be ignored by the port and that valid buffer data starts on byte 16 of the buffer. This value is used for all channels. |

## 14.5.2.11 EMCONTROL Register (offset = 2Ch) [reset = 0h]

EMCONTROL is shown in Figure 14-39 and described in Table 14-49. CPDMA\_REGS EMULATION CONTROL

| Figure 14-39. EMCONTROL Register   | Figure 14-39. EMCONTROL Register   | Figure 14-39. EMCONTROL Register   | Figure 14-39. EMCONTROL Register   | Figure 14-39. EMCONTROL Register   | Figure 14-39. EMCONTROL Register   | Figure 14-39. EMCONTROL Register   | Figure 14-39. EMCONTROL Register   |
|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|
| 31                                 | 30                                 | 29                                 | 28                                 | 27                                 | 26                                 | 25                                 | 24                                 |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 23                                 | 22                                 | 21                                 | 20                                 | 19                                 | 18                                 | 17                                 | 16                                 |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 15                                 | 14                                 | 13                                 | 12                                 | 11                                 | 10                                 | 9                                  | 8                                  |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 7                                  | 6                                  | 5                                  | 4                                  | 3                                  | 2                                  | 1                                  | 0                                  |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | SOFT                               | FREE                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-49. EMCONTROL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description        |
|-------|----------|--------|---------|--------------------|
| 31-2  | Reserved | R      | 0h      |                    |
| 1     | SOFT     | R/W    | 0h      | Emulation Soft Bit |
| 0     | FREE     | R/W    | 0h      | Emulation Free Bit |

<!-- image -->

R/W-0h

R/W-0h

<!-- image -->

## 14.5.2.12 TX\_PRI0\_RATE Register (offset = 30h) [reset = 0h]

TX\_PRI0\_RATE is shown in Figure 14-40 and described in Table 14-50. CPDMA\_REGS TRANSMIT (INGRESS) PRIORITY 0 RATE

## Figure 14-40. TX\_PRI0\_RATE Register

| 31                     | 30                     | 29                     | 28                     | 27                     | 26                     | 25                     | 24                     |
|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|
| Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 23                     | 22                     | 21                     | 20                     | 19                     | 18                     | 17                     | 16                     |
| PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          |
| R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 |
| 15                     | 14                     | 13                     | 12                     | 11                     | 10                     | 9                      | 8                      |
| Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 7                      | 6                      | 5                      | 4                      | 3                      | 2                      | 1                      | 0                      |
| PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-50. TX\_PRI0\_RATE Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                |
|-------|---------------|--------|---------|----------------------------|
| 31-30 | Reserved      | R      | 0h      |                            |
| 29-16 | PRIN_IDLE_CNT | R/W    | 0h      | Priority ( 7:0) idle count |
| 15-14 | Reserved      | R      | 0h      |                            |
| 13-0  | PRIN_SEND_CNT | R/W    | 0h      | Priority ( 7:0) send count |

## 14.5.2.13 TX\_PRI1\_RATE Register (offset = 34h) [reset = 0h]

TX\_PRI1\_RATE is shown in Figure 14-41 and described in Table 14-51. CPDMA\_REGS TRANSMIT (INGRESS) PRIORITY 1 RATE

## Figure 14-41. TX\_PRI1\_RATE Register

| 31                     | 30                     | 29                     | 28                     | 27                     | 26                     | 25                     | 24                     |
|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|
| Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 23                     | 22                     | 21                     | 20                     | 19                     | 18                     | 17                     | 16                     |
| PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          |
| R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 |
| 15                     | 14                     | 13                     | 12                     | 11                     | 10                     | 9                      | 8                      |
| Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 7                      | 6                      | 5                      | 4                      | 3                      | 2                      | 1                      | 0                      |
| PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-51. TX\_PRI1\_RATE Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                |
|-------|---------------|--------|---------|----------------------------|
| 31-30 | Reserved      | R      | 0h      |                            |
| 29-16 | PRIN_IDLE_CNT | R/W    | 0h      | Priority ( 7:0) idle count |
| 15-14 | Reserved      | R      | 0h      |                            |
| 13-0  | PRIN_SEND_CNT | R/W    | 0h      | Priority ( 7:0) send count |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.14 TX\_PRI2\_RATE Register (offset = 38h) [reset = 0h]

TX\_PRI2\_RATE is shown in Figure 14-42 and described in Table 14-52. CPDMA\_REGS TRANSMIT (INGRESS) PRIORITY 2 RATE

## Figure 14-42. TX\_PRI2\_RATE Register

| 31                     | 30                     | 29                     | 28                     | 27                     | 26                     | 25                     | 24                     |
|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|
| Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 23                     | 22                     | 21                     | 20                     | 19                     | 18                     | 17                     | 16                     |
| PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          |
| R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 |
| 15                     | 14                     | 13                     | 12                     | 11                     | 10                     | 9                      | 8                      |
| Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 7                      | 6                      | 5                      | 4                      | 3                      | 2                      | 1                      | 0                      |
| PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-52. TX\_PRI2\_RATE Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                |
|-------|---------------|--------|---------|----------------------------|
| 31-30 | Reserved      | R      | 0h      |                            |
| 29-16 | PRIN_IDLE_CNT | R/W    | 0h      | Priority ( 7:0) idle count |
| 15-14 | Reserved      | R      | 0h      |                            |
| 13-0  | PRIN_SEND_CNT | R/W    | 0h      | Priority ( 7:0) send count |

## 14.5.2.15 TX\_PRI3\_RATE Register (offset = 3Ch) [reset = 0h]

TX\_PRI3\_RATE is shown in Figure 14-43 and described in Table 14-53. CPDMA\_REGS TRANSMIT (INGRESS) PRIORITY 3 RATE

## Figure 14-43. TX\_PRI3\_RATE Register

| 31                     | 30                     | 29                     | 28                     | 27                     | 26                     | 25                     | 24                     |
|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|
| Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 23                     | 22                     | 21                     | 20                     | 19                     | 18                     | 17                     | 16                     |
| PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          |
| R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 |
| 15                     | 14                     | 13                     | 12                     | 11                     | 10                     | 9                      | 8                      |
| Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 7                      | 6                      | 5                      | 4                      | 3                      | 2                      | 1                      | 0                      |
| PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-53. TX\_PRI3\_RATE Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                |
|-------|---------------|--------|---------|----------------------------|
| 31-30 | Reserved      | R      | 0h      |                            |
| 29-16 | PRIN_IDLE_CNT | R/W    | 0h      | Priority ( 7:0) idle count |
| 15-14 | Reserved      | R      | 0h      |                            |
| 13-0  | PRIN_SEND_CNT | R/W    | 0h      | Priority ( 7:0) send count |

<!-- image -->

<!-- image -->

## 14.5.2.16 TX\_PRI4\_RATE Register (offset = 40h) [reset = 0h]

TX\_PRI4\_RATE is shown in Figure 14-44 and described in Table 14-54. CPDMA\_REGS TRANSMIT (INGRESS) PRIORITY 4 RATE

## Figure 14-44. TX\_PRI4\_RATE Register

| 31                     | 30                     | 29                     | 28                     | 27                     | 26                     | 25                     | 24                     |
|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|
| Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 23                     | 22                     | 21                     | 20                     | 19                     | 18                     | 17                     | 16                     |
| PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          |
| R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 |
| 15                     | 14                     | 13                     | 12                     | 11                     | 10                     | 9                      | 8                      |
| Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 7                      | 6                      | 5                      | 4                      | 3                      | 2                      | 1                      | 0                      |
| PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-54. TX\_PRI4\_RATE Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                |
|-------|---------------|--------|---------|----------------------------|
| 31-30 | Reserved      | R      | 0h      |                            |
| 29-16 | PRIN_IDLE_CNT | R/W    | 0h      | Priority ( 7:0) idle count |
| 15-14 | Reserved      | R      | 0h      |                            |
| 13-0  | PRIN_SEND_CNT | R/W    | 0h      | Priority ( 7:0) send count |

## 14.5.2.17 TX\_PRI5\_RATE Register (offset = 44h) [reset = 0h]

TX\_PRI5\_RATE is shown in Figure 14-45 and described in Table 14-55. CPDMA\_REGS TRANSMIT (INGRESS) PRIORITY 5 RATE

## Figure 14-45. TX\_PRI5\_RATE Register

| 31                     | 30                     | 29                     | 28                     | 27                     | 26                     | 25                     | 24                     |
|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|
| Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 23                     | 22                     | 21                     | 20                     | 19                     | 18                     | 17                     | 16                     |
| PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          |
| R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 |
| 15                     | 14                     | 13                     | 12                     | 11                     | 10                     | 9                      | 8                      |
| Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 7                      | 6                      | 5                      | 4                      | 3                      | 2                      | 1                      | 0                      |
| PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-55. TX\_PRI5\_RATE Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                |
|-------|---------------|--------|---------|----------------------------|
| 31-30 | Reserved      | R      | 0h      |                            |
| 29-16 | PRIN_IDLE_CNT | R/W    | 0h      | Priority ( 7:0) idle count |
| 15-14 | Reserved      | R      | 0h      |                            |
| 13-0  | PRIN_SEND_CNT | R/W    | 0h      | Priority ( 7:0) send count |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.18 TX\_PRI6\_RATE Register (offset = 48h) [reset = 0h]

TX\_PRI6\_RATE is shown in Figure 14-46 and described in Table 14-56. CPDMA\_REGS TRANSMIT (INGRESS) PRIORITY 6 RATE

## Figure 14-46. TX\_PRI6\_RATE Register

| 31                     | 30                     | 29                     | 28                     | 27                     | 26                     | 25                     | 24                     |
|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|
| Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT | Reserved PRIN_IDLE_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 23                     | 22                     | 21                     | 20                     | 19                     | 18                     | 17                     | 16                     |
| PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          | PRIN_IDLE_CNT          |
| R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 |
| 15                     | 14                     | 13                     | 12                     | 11                     | 10                     | 9                      | 8                      |
| Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT | Reserved PRIN_SEND_CNT |
| R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            | R-0h R/W-0h            |
| 7                      | 6                      | 5                      | 4                      | 3                      | 2                      | 1                      | 0                      |
| PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          | PRIN_SEND_CNT          |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-56. TX\_PRI6\_RATE Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                |
|-------|---------------|--------|---------|----------------------------|
| 31-30 | Reserved      | R      | 0h      |                            |
| 29-16 | PRIN_IDLE_CNT | R/W    | 0h      | Priority ( 7:0) idle count |
| 15-14 | Reserved      | R      | 0h      |                            |
| 13-0  | PRIN_SEND_CNT | R/W    | 0h      | Priority ( 7:0) send count |

## 14.5.2.19 TX\_PRI7\_RATE Register (offset = 4Ch) [reset = 0h]

TX\_PRI7\_RATE is shown in Figure 14-47 and described in Table 14-57. CPDMA\_REGS TRANSMIT (INGRESS) PRIORITY 7 RATE

## Figure 14-47. TX\_PRI7\_RATE Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | PRIN_IDLE_CNT | PRIN_IDLE_CNT | PRIN_IDLE_CNT | PRIN_IDLE_CNT | PRIN_IDLE_CNT | PRIN_IDLE_CNT |
| R-0h          | R-0h          | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| PRIN_IDLE_CNT | PRIN_IDLE_CNT | PRIN_IDLE_CNT | PRIN_IDLE_CNT | PRIN_IDLE_CNT | PRIN_IDLE_CNT | PRIN_IDLE_CNT | PRIN_IDLE_CNT |
| R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| Reserved      | Reserved      | PRIN_SEND_CNT | PRIN_SEND_CNT | PRIN_SEND_CNT | PRIN_SEND_CNT | PRIN_SEND_CNT | PRIN_SEND_CNT |
| R-0h          | R-0h          | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| PRIN_SEND_CNT | PRIN_SEND_CNT | PRIN_SEND_CNT | PRIN_SEND_CNT | PRIN_SEND_CNT | PRIN_SEND_CNT | PRIN_SEND_CNT | PRIN_SEND_CNT |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-57. TX\_PRI7\_RATE Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                |
|-------|---------------|--------|---------|----------------------------|
| 31-30 | Reserved      | R      | 0h      |                            |
| 29-16 | PRIN_IDLE_CNT | R/W    | 0h      | Priority ( 7:0) idle count |
| 15-14 | Reserved      | R      | 0h      |                            |
| 13-0  | PRIN_SEND_CNT | R/W    | 0h      | Priority ( 7:0) send count |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.20 TX\_INTSTAT\_RAW Register (offset = 80h) [reset = 0h]

TX\_INTSTAT\_RAW is shown in Figure 14-48 and described in Table 14-58. CPDMA\_INT TX INTERRUPT STATUS REGISTER (RAW VALUE)

## Figure 14-48. TX\_INTSTAT\_RAW Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |

R-0h

| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| TX7_PEND | TX6_PEND | TX5_PEND | TX4_PEND | TX3_PEND | TX2_PEND | TX1_PEND | TX0_PEND |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-58. TX\_INTSTAT\_RAW Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                          |
|-------|----------|--------|---------|--------------------------------------|
| 31-8  | Reserved | R      | 0h      |                                      |
| 7     | TX7_PEND | R      | 0h      | TX7_PEND raw int read (before mask). |
| 6     | TX6_PEND | R      | 0h      | TX6_PEND raw int read (before mask). |
| 5     | TX5_PEND | R      | 0h      | TX5_PEND raw int read (before mask). |
| 4     | TX4_PEND | R      | 0h      | TX4_PEND raw int read (before mask). |
| 3     | TX3_PEND | R      | 0h      | TX3_PEND raw int read (before mask). |
| 2     | TX2_PEND | R      | 0h      | TX2_PEND raw int read (before mask). |
| 1     | TX1_PEND | R      | 0h      | TX1_PEND raw int read (before mask). |
| 0     | TX0_PEND | R      | 0h      | TX0_PEND raw int read (before mask). |

## 14.5.2.21 TX\_INTSTAT\_MASKED Register (offset = 84h) [reset = 0h]

TX\_INTSTAT\_MASKED is shown in Figure 14-49 and described in Table 14-59. CPDMA\_INT TX INTERRUPT STATUS REGISTER (MASKED VALUE)

## Figure 14-49. TX\_INTSTAT\_MASKED Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |

R-0h

| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| TX7_PEND | TX6_PEND | TX5_PEND | TX4_PEND | TX3_PEND | TX2_PEND | TX1_PEND | TX0_PEND |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-59. TX\_INTSTAT\_MASKED Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                     |
|-------|----------|--------|---------|---------------------------------|
| 31-8  | Reserved | R      | 0h      |                                 |
| 7     | TX7_PEND | R      | 0h      | TX7_PEND masked interrupt read. |
| 6     | TX6_PEND | R      | 0h      | TX6_PEND masked interrupt read. |
| 5     | TX5_PEND | R      | 0h      | TX5_PEND masked interrupt read. |
| 4     | TX4_PEND | R      | 0h      | TX4_PEND masked interrupt read. |
| 3     | TX3_PEND | R      | 0h      | TX3_PEND masked interrupt read. |
| 2     | TX2_PEND | R      | 0h      | TX2_PEND masked interrupt read. |
| 1     | TX1_PEND | R      | 0h      | TX1_PEND masked interrupt read. |
| 0     | TX0_PEND | R      | 0h      | TX0_PEND masked interrupt read. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.22 TX\_INTMASK\_SET Register (offset = 88h) [reset = 0h]

TX\_INTMASK\_SET is shown in Figure 14-50 and described in Table 14-60. CPDMA\_INT TX INTERRUPT MASK SET REGISTER

| Figure 14-50. TX_INTMASK_SET Register   | Figure 14-50. TX_INTMASK_SET Register   | Figure 14-50. TX_INTMASK_SET Register   | Figure 14-50. TX_INTMASK_SET Register   | Figure 14-50. TX_INTMASK_SET Register   | Figure 14-50. TX_INTMASK_SET Register   | Figure 14-50. TX_INTMASK_SET Register   | Figure 14-50. TX_INTMASK_SET Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| TX7_MASK                                | TX6_MASK                                | TX5_MASK                                | TX4_MASK                                | TX3_MASK                                | TX2_MASK                                | TX1_MASK                                | TX0_MASK                                |
| R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-60. TX\_INTMASK\_SET Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                        |
|-------|----------|--------|---------|----------------------------------------------------|
| 31-8  | Reserved | R      | 0h      |                                                    |
| 7     | TX7_MASK | R/W    | 0h      | TX Channel 7 Mask - Write one to enable interrupt. |
| 6     | TX6_MASK | R/W    | 0h      | TX Channel 6 Mask - Write one to enable interrupt. |
| 5     | TX5_MASK | R/W    | 0h      | TX Channel 5 Mask - Write one to enable interrupt. |
| 4     | TX4_MASK | R/W    | 0h      | TX Channel 4 Mask - Write one to enable interrupt. |
| 3     | TX3_MASK | R/W    | 0h      | TX Channel 3 Mask - Write one to enable interrupt. |
| 2     | TX2_MASK | R/W    | 0h      | TX Channel 2 Mask - Write one to enable interrupt. |
| 1     | TX1_MASK | R/W    | 0h      | TX Channel 1 Mask - Write one to enable interrupt. |
| 0     | TX0_MASK | R/W    | 0h      | TX Channel 0 Mask - Write one to enable interrupt. |

## 14.5.2.23 TX\_INTMASK\_CLEAR Register (offset = 8Ch) [reset = 0h]

TX\_INTMASK\_CLEAR is shown in Figure 14-51 and described in Table 14-61. CPDMA\_INT TX INTERRUPT MASK CLEAR REGISTER

## Figure 14-51. TX\_INTMASK\_CLEAR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |

R-0h

| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| TX7_MASK | TX6_MASK | TX5_MASK | TX4_MASK | TX3_MASK | TX2_MASK | TX1_MASK | TX0_MASK |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-61. TX\_INTMASK\_CLEAR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                         |
|-------|----------|--------|---------|-----------------------------------------------------|
| 31-8  | Reserved | R      | 0h      |                                                     |
| 7     | TX7_MASK | R/W    | 0h      | TX Channel 7 Mask - Write one to disable interrupt. |
| 6     | TX6_MASK | R/W    | 0h      | TX Channel 6 Mask - Write one to disable interrupt. |
| 5     | TX5_MASK | R/W    | 0h      | TX Channel 5 Mask - Write one to disable interrupt. |
| 4     | TX4_MASK | R/W    | 0h      | TX Channel 4 Mask - Write one to disable interrupt. |
| 3     | TX3_MASK | R/W    | 0h      | TX Channel 3 Mask - Write one to disable interrupt. |
| 2     | TX2_MASK | R/W    | 0h      | TX Channel 2 Mask - Write one to disable interrupt. |
| 1     | TX1_MASK | R/W    | 0h      | TX Channel 1 Mask - Write one to disable interrupt. |
| 0     | TX0_MASK | R/W    | 0h      | TX Channel 0 Mask - Write one to disable interrupt. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.24 CPDMA\_IN\_VECTOR Register (offset = 90h) [reset = 0h]

CPDMA\_IN\_VECTOR is shown in Figure 14-52 and described in Table 14-62. CPDMA\_INT INPUT VECTOR (READ ONLY)

## Figure 14-52. CPDMA\_IN\_VECTOR Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

DMA\_IN\_VECTOR

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-62. CPDMA\_IN\_VECTOR Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                              |
|-------|---------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DMA_IN_VECTOR | R      | 0h      | DMA Input Vector - The value of DMA_In_Vector is reset to zero, but will change to the IN_VECTOR bus value one clock after reset is deasserted. Thereafter, this value will change to a new IN_VECTOR value one clock after the IN_VECTOR value changes. |

## 14.5.2.25 CPDMA\_EOI\_VECTOR Register (offset = 94h) [reset = 0h]

CPDMA\_EOI\_VECTOR is shown in Figure 14-53 and described in Table 14-63. CPDMA\_INT END OF INTERRUPT VECTOR

| Figure 14-53. CPDMA_EOI_VECTOR Register   | Figure 14-53. CPDMA_EOI_VECTOR Register   | Figure 14-53. CPDMA_EOI_VECTOR Register   | Figure 14-53. CPDMA_EOI_VECTOR Register   | Figure 14-53. CPDMA_EOI_VECTOR Register   | Figure 14-53. CPDMA_EOI_VECTOR Register   | Figure 14-53. CPDMA_EOI_VECTOR Register   | Figure 14-53. CPDMA_EOI_VECTOR Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| Reserved                                  | Reserved                                  | Reserved                                  | DMA_EOI_VECTOR                            | DMA_EOI_VECTOR                            | DMA_EOI_VECTOR                            | DMA_EOI_VECTOR                            | DMA_EOI_VECTOR                            |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-63. CPDMA\_EOI\_VECTOR Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                           |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | Reserved       | R      | 0h      |                                                                                                                                                                                                                                                                                       |
| 4-0   | DMA_EOI_VECTOR | R/W    | 0h      | DMA End of Interrupt Vector - The EOI_VECTOR( 4:0) pins reflect the value written to this location one CLK cycle after a write to this location. The EOI_WR signal is asserted for a single clock cycle after a latency of two CLK cycles when a write is performed to this location. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.26 RX\_INTSTAT\_RAW Register (offset = A0h) [reset = 0h]

RX\_INTSTAT\_RAW is shown in Figure 14-54 and described in Table 14-64. CPDMA\_INT RX INTERRUPT STATUS REGISTER (RAW VALUE)

## Figure 14-54. RX\_INTSTAT\_RAW Register

28

20

27

19

26

18

31

23

30

22

29

21

Reserved

R-0h

Reserved

R-0h

| 15               | 14               | 13               | 12               | 11               | 10               | 9                | 8                |
|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|
| RX7_THRESH _PEND | RX6_THRESH _PEND | RX5_THRESH _PEND | RX4_THRESH _PEND | RX3_THRESH _PEND | RX2_THRESH _PEND | RX1_THRESH _PEND | RX0_THRESH _PEND |
| R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             |
| 7                | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
| RX7_PEND         | RX6_PEND         | RX5_PEND         | RX4_PEND         | RX3_PEND         | RX2_PEND         | RX1_PEND         | RX0_PEND         |
| R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-64. RX\_INTSTAT\_RAW Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                 |
|-------|-----------------|--------|---------|---------------------------------------------|
| 31-16 | Reserved        | R      | 0h      |                                             |
| 15    | RX7_THRESH_PEND | R      | 0h      | RX7_THRESH_PEND raw int read (before mask). |
| 14    | RX6_THRESH_PEND | R      | 0h      | RX6_THRESH_PEND raw int read (before mask). |
| 13    | RX5_THRESH_PEND | R      | 0h      | RX5_THRESH_PEND raw int read (before mask). |
| 12    | RX4_THRESH_PEND | R      | 0h      | RX4_THRESH_PEND raw int read (before mask). |
| 11    | RX3_THRESH_PEND | R      | 0h      | RX3_THRESH_PEND raw int read (before mask). |
| 10    | RX2_THRESH_PEND | R      | 0h      | RX2_THRESH_PEND raw int read (before mask). |
| 9     | RX1_THRESH_PEND | R      | 0h      | RX1_THRESH_PEND raw int read (before mask). |
| 8     | RX0_THRESH_PEND | R      | 0h      | RX0_THRESH_PEND raw int read (before mask). |
| 7     | RX7_PEND        | R      | 0h      | RX7_PEND raw int read (before mask).        |
| 6     | RX6_PEND        | R      | 0h      | RX6_PEND raw int read (before mask).        |
| 5     | RX5_PEND        | R      | 0h      | RX5_PEND raw int read (before mask).        |
| 4     | RX4_PEND        | R      | 0h      | RX4_PEND raw int read (before mask).        |
| 3     | RX3_PEND        | R      | 0h      | RX3_PEND raw int read (before mask).        |
| 2     | RX2_PEND        | R      | 0h      | RX2_PEND raw int read (before mask).        |
| 1     | RX1_PEND        | R      | 0h      | RX1_PEND raw int read (before mask).        |
| 0     | RX0_PEND        | R      | 0h      | RX0_PEND raw int read (before mask).        |

25

17

24

16

## 14.5.2.27 RX\_INTSTAT\_MASKED Register (offset = A4h) [reset = 0h]

RX\_INTSTAT\_MASKED is shown in Figure 14-55 and described in Table 14-65. CPDMA\_INT RX INTERRUPT STATUS REGISTER (MASKED VALUE)

## Figure 14-55. RX\_INTSTAT\_MASKED Register

29

21

28

20

27

19

26

18

31

23

30

22

Reserved

R-0h

Reserved

R-0h

| 15               | 14               | 13               | 12               | 11               | 10               | 9                | 8                |
|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|
| RX7_THRESH _PEND | RX6_THRESH _PEND | RX5_THRESH _PEND | RX4_THRESH _PEND | RX3_THRESH _PEND | RX2_THRESH _PEND | RX1_THRESH _PEND | RX0_THRESH _PEND |
| R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             |
| 7                | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
| RX7_PEND         | RX6_PEND         | RX5_PEND         | RX4_PEND         | RX3_PEND         | RX2_PEND         | RX1_PEND         | RX0_PEND         |
| R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-65. RX\_INTSTAT\_MASKED Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                      |
|-------|-----------------|--------|---------|----------------------------------|
| 31-16 | Reserved        | R      | 0h      |                                  |
| 15    | RX7_THRESH_PEND | R      | 0h      | RX7_THRESH_PEND masked int read. |
| 14    | RX6_THRESH_PEND | R      | 0h      | RX6_THRESH_PEND masked int read. |
| 13    | RX5_THRESH_PEND | R      | 0h      | RX5_THRESH_PEND masked int read. |
| 12    | RX4_THRESH_PEND | R      | 0h      | RX4_THRESH_PEND masked int read. |
| 11    | RX3_THRESH_PEND | R      | 0h      | RX3_THRESH_PEND masked int read. |
| 10    | RX2_THRESH_PEND | R      | 0h      | RX2_THRESH_PEND masked int read. |
| 9     | RX1_THRESH_PEND | R      | 0h      | RX1_THRESH_PEND masked int read. |
| 8     | RX0_THRESH_PEND | R      | 0h      | RX0_THRESH_PEND masked int read. |
| 7     | RX7_PEND        | R      | 0h      | RX7_PEND masked int read.        |
| 6     | RX6_PEND        | R      | 0h      | RX6_PEND masked int read.        |
| 5     | RX5_PEND        | R      | 0h      | RX5_PEND masked int read.        |
| 4     | RX4_PEND        | R      | 0h      | RX4_PEND masked int read.        |
| 3     | RX3_PEND        | R      | 0h      | RX3_PEND masked int read.        |
| 2     | RX2_PEND        | R      | 0h      | RX2_PEND masked int read.        |
| 1     | RX1_PEND        | R      | 0h      | RX1_PEND masked int read.        |
| 0     | RX0_PEND        | R      | 0h      | RX0_PEND masked int read.        |

<!-- image -->

25

24

17

16

<!-- image -->

www.ti.com

## 14.5.2.28 RX\_INTMASK\_SET Register (offset = A8h) [reset = 0h]

RX\_INTMASK\_SET is shown in Figure 14-56 and described in Table 14-66. CPDMA\_INT RX INTERRUPT MASK SET REGISTER

## Figure 14-56. RX\_INTMASK\_SET Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |

R-0h

| 15                    | 14                    | 13                    | 12                    | 11                    | 10                    | 9                     | 8                     |
|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|
| RX7_THRESH _PEND_MASK | RX6_THRESH _PEND_MASK | RX5_THRESH _PEND_MASK | RX4_THRESH _PEND_MASK | RX3_THRESH _PEND_MASK | RX2_THRESH _PEND_MASK | RX1_THRESH _PEND_MASK | RX0_THRESH _PEND_MASK |
| R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                |
| 7                     | 6                     | 5                     | 4                     | 3                     | 2                     | 1                     | 0                     |
| RX7_PEND_M ASK        | RX6_PEND_M ASK        | RX5_PEND_M ASK        | RX4_PEND_M ASK        | RX3_PEND_M ASK        | RX2_PEND_M ASK        | RX1_PEND_M ASK        | RX0_PEND_M ASK        |
| R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-66. RX\_INTMASK\_SET Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                         |
|-------|-----------------------|--------|---------|---------------------------------------------------------------------|
| 31-16 | Reserved              | R      | 0h      |                                                                     |
| 15    | RX7_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 7 Threshold Pending Int. Mask - Write one to enable Int. |
| 14    | RX6_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 6 Threshold Pending Int. Mask - Write one to enable Int. |
| 13    | RX5_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 5 Threshold Pending Int. Mask - Write one to enable Int. |
| 12    | RX4_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 4 Threshold Pending Int. Mask - Write one to enable Int. |
| 11    | RX3_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 3 Threshold Pending Int. Mask - Write one to enable Int. |
| 10    | RX2_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 2 Threshold Pending Int. Mask - Write one to enable Int. |
| 9     | RX1_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 1 Threshold Pending Int. Mask - Write one to enable Int. |
| 8     | RX0_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 0 Threshold Pending Int. Mask - Write one to enable Int. |
| 7     | RX7_PEND_MASK         | R/W    | 0h      | RX Channel 7 Pending Int. Mask - Write one to enable Int.           |
| 6     | RX6_PEND_MASK         | R/W    | 0h      | RX Channel 6 Pending Int. Mask - Write one to enable Int.           |
| 5     | RX5_PEND_MASK         | R/W    | 0h      | RX Channel 5 Pending Int. Mask - Write one to enable Int.           |
| 4     | RX4_PEND_MASK         | R/W    | 0h      | RX Channel 4 Pending Int. Mask - Write one to enable Int.           |
| 3     | RX3_PEND_MASK         | R/W    | 0h      | RX Channel 3 Pending Int. Mask - Write one to enable Int.           |
| 2     | RX2_PEND_MASK         | R/W    | 0h      | RX Channel 2 Pending Int. Mask - Write one to enable Int.           |
| 1     | RX1_PEND_MASK         | R/W    | 0h      | RX Channel 1 Pending Int. Mask - Write one to enable Int.           |

<!-- image -->

## Table 14-66. RX\_INTMASK\_SET Register Field Descriptions (continued)

|   Bit | Field         | Type   | Reset   | Description                                               |
|-------|---------------|--------|---------|-----------------------------------------------------------|
|     0 | RX0_PEND_MASK | R/W    | 0h      | RX Channel 0 Pending Int. Mask - Write one to enable Int. |

<!-- image -->

www.ti.com

## 14.5.2.29 RX\_INTMASK\_CLEAR Register (offset = ACh) [reset = 0h]

RX\_INTMASK\_CLEAR is shown in Figure 14-57 and described in Table 14-67. CPDMA\_INT RX INTERRUPT MASK CLEAR REGISTER

## Figure 14-57. RX\_INTMASK\_CLEAR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |

R-0h

| 15                    | 14                    | 13                    | 12                    | 11                    | 10                    | 9                     | 8                     |
|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|
| RX7_THRESH _PEND_MASK | RX6_THRESH _PEND_MASK | RX5_THRESH _PEND_MASK | RX4_THRESH _PEND_MASK | RX3_THRESH _PEND_MASK | RX2_THRESH _PEND_MASK | RX1_THRESH _PEND_MASK | RX0_THRESH _PEND_MASK |
| R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                |
| 7                     | 6                     | 5                     | 4                     | 3                     | 2                     | 1                     | 0                     |
| RX7_PEND_M ASK        | RX6_PEND_M ASK        | RX5_PEND_M ASK        | RX4_PEND_M ASK        | RX3_PEND_M ASK        | RX2_PEND_M ASK        | RX1_PEND_M ASK        | RX0_PEND_M ASK        |
| R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                | R/W-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-67. RX\_INTMASK\_CLEAR Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                          |
|-------|-----------------------|--------|---------|----------------------------------------------------------------------|
| 31-16 | Reserved              | R      | 0h      |                                                                      |
| 15    | RX7_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 7 Threshold Pending Int. Mask - Write one to disable Int. |
| 14    | RX6_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 6 Threshold Pending Int. Mask - Write one to disable Int. |
| 13    | RX5_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 5 Threshold Pending Int. Mask - Write one to disable Int. |
| 12    | RX4_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 4 Threshold Pending Int. Mask - Write one to disable Int. |
| 11    | RX3_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 3 Threshold Pending Int. Mask - Write one to disable Int. |
| 10    | RX2_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 2 Threshold Pending Int. Mask - Write one to disable Int. |
| 9     | RX1_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 1 Threshold Pending Int. Mask - Write one to disable Int. |
| 8     | RX0_THRESH_PEND_M ASK | R/W    | 0h      | RX Channel 0 Threshold Pending Int. Mask - Write one to disable Int. |
| 7     | RX7_PEND_MASK         | R/W    | 0h      | RX Channel 7 Pending Int. Mask - Write one to disable Int.           |
| 6     | RX6_PEND_MASK         | R/W    | 0h      | RX Channel 6 Pending Int. Mask - Write one to disable Int.           |
| 5     | RX5_PEND_MASK         | R/W    | 0h      | RX Channel 5 Pending Int. Mask - Write one to disable Int.           |
| 4     | RX4_PEND_MASK         | R/W    | 0h      | RX Channel 4 Pending Int. Mask - Write one to disable Int.           |
| 3     | RX3_PEND_MASK         | R/W    | 0h      | RX Channel 3 Pending Int. Mask - Write one to disable Int.           |
| 2     | RX2_PEND_MASK         | R/W    | 0h      | RX Channel 2 Pending Int. Mask - Write one to disable Int.           |
| 1     | RX1_PEND_MASK         | R/W    | 0h      | RX Channel 1 Pending Int. Mask - Write one to disable Int.           |

<!-- image -->

## Table 14-67. RX\_INTMASK\_CLEAR Register Field Descriptions (continued)

|   Bit | Field         | Type   | Reset   | Description                                                |
|-------|---------------|--------|---------|------------------------------------------------------------|
|     0 | RX0_PEND_MASK | R/W    | 0h      | RX Channel 0 Pending Int. Mask - Write one to disable Int. |

<!-- image -->

www.ti.com

## 14.5.2.30 DMA\_INTSTAT\_RAW Register (offset = B0h) [reset = 0h]

DMA\_INTSTAT\_RAW is shown in Figure 14-58 and described in Table 14-68. CPDMA\_INT DMA INTERRUPT STATUS REGISTER (RAW VALUE)

## Figure 14-58. DMA\_INTSTAT\_RAW Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25        | 24        |
|----------|----------|----------|----------|----------|----------|-----------|-----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 23       | 22       | 21       | 20       | 19       | 18       | 17        | 16        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 15       | 14       | 13       | 12       | 11       | 10       | 9         | 8         |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 7        | 6        | 5        | 4        | 3        | 2        | 1         | 0         |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | HOST_PEND | STAT_PEND |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-68. DMA\_INTSTAT\_RAW Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                |
|-------|-----------|--------|---------|------------------------------------------------------------|
| 31-2  | Reserved  | R      | 0h      |                                                            |
| 1     | HOST_PEND | R      | 0h      | Host Pending Interrupt - raw int read (before mask).       |
| 0     | STAT_PEND | R      | 0h      | Statistics Pending Interrupt - raw int read (before mask). |

R-0h

R-0h

## 14.5.2.31 DMA\_INTSTAT\_MASKED Register (offset = B4h) [reset = 0h]

DMA\_INTSTAT\_MASKED is shown in Figure 14-59 and described in Table 14-69. CPDMA\_INT DMA INTERRUPT STATUS REGISTER (MASKED VALUE)

## Figure 14-59. DMA\_INTSTAT\_MASKED Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25        | 24        |
|----------|----------|----------|----------|----------|----------|-----------|-----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 23       | 22       | 21       | 20       | 19       | 18       | 17        | 16        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 15       | 14       | 13       | 12       | 11       | 10       | 9         | 8         |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved  | Reserved  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 7        | 6        | 5        | 4        | 3        | 2        | 1         | 0         |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | HOST_PEND | STAT_PEND |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-69. DMA\_INTSTAT\_MASKED Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                           |
|-------|-----------|--------|---------|-------------------------------------------------------|
| 31-2  | Reserved  | R      | 0h      |                                                       |
| 1     | HOST_PEND | R      | 0h      | Host Pending Interrupt - masked interrupt read.       |
| 0     | STAT_PEND | R      | 0h      | Statistics Pending Interrupt - masked interrupt read. |

<!-- image -->

R-0h

R-0h

<!-- image -->

www.ti.com

## 14.5.2.32 DMA\_INTMASK\_SET Register (offset = B8h) [reset = 0h]

DMA\_INTMASK\_SET is shown in Figure 14-60 and described in Table 14-70. CPDMA\_INT DMA INTERRUPT MASK SET REGISTER

## Figure 14-60. DMA\_INTMASK\_SET Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25                 | 24             |
|----------|----------|----------|----------|----------|----------|--------------------|----------------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved           | Reserved       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h               | R-0h           |
| 23       | 22       | 21       | 20       | 19       | 18       | 17                 | 16             |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved           | Reserved       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h               | R-0h           |
| 15       | 14       | 13       | 12       | 11       | 10       | 9                  | 8              |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved           | Reserved       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h               | R-0h           |
| 7        | 6        | 5        | 4        | 3        | 2        | 1                  | 0              |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | HOST_ERR_IN T_MASK | STAT_INT_MA SK |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-70. DMA\_INTMASK\_SET Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                |
|-------|-------------------|--------|---------|------------------------------------------------------------|
| 31-2  | Reserved          | R      | 0h      |                                                            |
| 1     | HOST_ERR_INT_MASK | R/W    | 0h      | Host Error Interrupt Mask - Write one to enable interrupt. |
| 0     | STAT_INT_MASK     | R/W    | 0h      | Statistics Interrupt Mask - Write one to enable interrupt. |

R/W-0h

R/W-0h

## 14.5.2.33 DMA\_INTMASK\_CLEAR Register (offset = BCh) [reset = 0h]

DMA\_INTMASK\_CLEAR is shown in Figure 14-61 and described in Table 14-71. CPDMA\_INT DMA INTERRUPT MASK CLEAR REGISTER

## Figure 14-61. DMA\_INTMASK\_CLEAR Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25                 | 24             |
|----------|----------|----------|----------|----------|----------|--------------------|----------------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved           | Reserved       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h               | R-0h           |
| 23       | 22       | 21       | 20       | 19       | 18       | 17                 | 16             |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved           | Reserved       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h               | R-0h           |
| 15       | 14       | 13       | 12       | 11       | 10       | 9                  | 8              |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved           | Reserved       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h               | R-0h           |
| 7        | 6        | 5        | 4        | 3        | 2        | 1                  | 0              |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | HOST_ERR_IN T_MASK | STAT_INT_MA SK |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-71. DMA\_INTMASK\_CLEAR Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                 |
|-------|-------------------|--------|---------|-------------------------------------------------------------|
| 31-2  | Reserved          | R      | 0h      |                                                             |
| 1     | HOST_ERR_INT_MASK | R/W    | 0h      | Host Error Interrupt Mask - Write one to disable interrupt. |
| 0     | STAT_INT_MASK     | R/W    | 0h      | Statistics Interrupt Mask - Write one to disable interrupt. |

<!-- image -->

R/W-0h

R/W-0h

<!-- image -->

www.ti.com

## 14.5.2.34 RX0\_PENDTHRESH Register (offset = C0h) [reset = 0h]

RX0\_PENDTHRESH is shown in Figure 14-62 and described in Table 14-72. CPDMA\_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 0

## Figure 14-62. RX0\_PENDTHRESH Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-72. RX0\_PENDTHRESH Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                  |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved      | R      | 0h      |                                                                                                                              |
| 7-0   | RX_PENDTHRESH | R/W    | 0h      | Rx Flow Threshold - This field contains the threshold value for issuing receive threshold pending interrupts (when enabled). |

## 14.5.2.35 RX1\_PENDTHRESH Register (offset = C4h) [reset = 0h]

RX1\_PENDTHRESH is shown in Figure 14-63 and described in Table 14-73. CPDMA\_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 1

## Figure 14-63. RX1\_PENDTHRESH Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-73. RX1\_PENDTHRESH Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                  |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved      | R      | 0h      |                                                                                                                              |
| 7-0   | RX_PENDTHRESH | R/W    | 0h      | Rx Flow Threshold - This field contains the threshold value for issuing receive threshold pending interrupts (when enabled). |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.36 RX2\_PENDTHRESH Register (offset = C8h) [reset = 0h]

RX2\_PENDTHRESH is shown in Figure 14-64 and described in Table 14-74. CPDMA\_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 2

## Figure 14-64. RX2\_PENDTHRESH Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-74. RX2\_PENDTHRESH Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                  |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved      | R      | 0h      |                                                                                                                              |
| 7-0   | RX_PENDTHRESH | R/W    | 0h      | Rx Flow Threshold - This field contains the threshold value for issuing receive threshold pending interrupts (when enabled). |

## 14.5.2.37 RX3\_PENDTHRESH Register (offset = CCh) [reset = 0h]

RX3\_PENDTHRESH is shown in Figure 14-65 and described in Table 14-75. CPDMA\_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 3

## Figure 14-65. RX3\_PENDTHRESH Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-75. RX3\_PENDTHRESH Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                  |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved      | R      | 0h      |                                                                                                                              |
| 7-0   | RX_PENDTHRESH | R/W    | 0h      | Rx Flow Threshold - This field contains the threshold value for issuing receive threshold pending interrupts (when enabled). |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.38 RX4\_PENDTHRESH Register (offset = D0h) [reset = 0h]

RX4\_PENDTHRESH is shown in Figure 14-66 and described in Table 14-76. CPDMA\_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 4

## Figure 14-66. RX4\_PENDTHRESH Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-76. RX4\_PENDTHRESH Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                  |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved      | R      | 0h      |                                                                                                                              |
| 7-0   | RX_PENDTHRESH | R/W    | 0h      | Rx Flow Threshold - This field contains the threshold value for issuing receive threshold pending interrupts (when enabled). |

## 14.5.2.39 RX5\_PENDTHRESH Register (offset = D4h) [reset = 0h]

RX5\_PENDTHRESH is shown in Figure 14-67 and described in Table 14-77. CPDMA\_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 5

## Figure 14-67. RX5\_PENDTHRESH Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-77. RX5\_PENDTHRESH Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                  |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved      | R      | 0h      |                                                                                                                              |
| 7-0   | RX_PENDTHRESH | R/W    | 0h      | Rx Flow Threshold - This field contains the threshold value for issuing receive threshold pending interrupts (when enabled). |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.40 RX6\_PENDTHRESH Register (offset = D8h) [reset = 0h]

RX6\_PENDTHRESH is shown in Figure 14-68 and described in Table 14-78. CPDMA\_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 6

## Figure 14-68. RX6\_PENDTHRESH Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-78. RX6\_PENDTHRESH Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                  |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved      | R      | 0h      |                                                                                                                              |
| 7-0   | RX_PENDTHRESH | R/W    | 0h      | Rx Flow Threshold - This field contains the threshold value for issuing receive threshold pending interrupts (when enabled). |

## 14.5.2.41 RX7\_PENDTHRESH Register (offset = DCh) [reset = 0h]

RX7\_PENDTHRESH is shown in Figure 14-69 and described in Table 14-79. CPDMA\_INT RECEIVE THRESHOLD PENDING REGISTER CHANNEL 7

## Figure 14-69. RX7\_PENDTHRESH Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH | RX_PENDTHRESH |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-79. RX7\_PENDTHRESH Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                  |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved      | R      | 0h      |                                                                                                                              |
| 7-0   | RX_PENDTHRESH | R/W    | 0h      | Rx Flow Threshold - This field contains the threshold value for issuing receive threshold pending interrupts (when enabled). |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.42 RX0\_FREEBUFFER Register (offset = E0h) [reset = 0h]

RX0\_FREEBUFFER is shown in Figure 14-70 and described in Table 14-80. CPDMA\_INT RECEIVE FREE BUFFER REGISTER CHANNEL 0

## Figure 14-70. RX0\_FREEBUFFER Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |
| W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-80. RX0\_FREEBUFFER Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 15-0  | RX_FREEBUFFER | W      | 0h      | Rx Free Buffer Count - This field contains the count of free buffers available. The rx_pendthresh value is compared with this field to determine if the receive threshold pending interrupt should be asseted (if enabled). This is a write to increment field. This field rolls over to zero on overflow. If receive threshold pending interrupts are used, the host must initialize this field to the number of available buffers (one register per channel). The port decrements (by the number of buffers in the received frame) the associated channel register for each received frame. This is a write to increment field. The host must write this field with the number of buffers that have been freed due to host processing. |

## 14.5.2.43 RX1\_FREEBUFFER Register (offset = E4h) [reset = 0h]

RX1\_FREEBUFFER is shown in Figure 14-71 and described in Table 14-81. CPDMA\_INT RECEIVE FREE BUFFER REGISTER CHANNEL 1

## Figure 14-71. RX1\_FREEBUFFER Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |
| W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-81. RX1\_FREEBUFFER Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 15-0  | RX_FREEBUFFER | W      | 0h      | Rx Free Buffer Count - This field contains the count of free buffers available. The rx_pendthresh value is compared with this field to determine if the receive threshold pending interrupt should be asseted (if enabled). This is a write to increment field. This field rolls over to zero on overflow. If receive threshold pending interrupts are used, the host must initialize this field to the number of available buffers (one register per channel). The port decrements (by the number of buffers in the received frame) the associated channel register for each received frame. This is a write to increment field. The host must write this field with the number of buffers that have been freed due to host processing. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.44 RX2\_FREEBUFFER Register (offset = E8h) [reset = 0h]

RX2\_FREEBUFFER is shown in Figure 14-72 and described in Table 14-82. CPDMA\_INT RECEIVE FREE BUFFER REGISTER CHANNEL 2

## Figure 14-72. RX2\_FREEBUFFER Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |
| W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-82. RX2\_FREEBUFFER Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 15-0  | RX_FREEBUFFER | W      | 0h      | Rx Free Buffer Count - This field contains the count of free buffers available. The rx_pendthresh value is compared with this field to determine if the receive threshold pending interrupt should be asseted (if enabled). This is a write to increment field. This field rolls over to zero on overflow. If receive threshold pending interrupts are used, the host must initialize this field to the number of available buffers (one register per channel). The port decrements (by the number of buffers in the received frame) the associated channel register for each received frame. This is a write to increment field. The host must write this field with the number of buffers that have been freed due to host processing. |

## 14.5.2.45 RX3\_FREEBUFFER Register (offset = ECh) [reset = 0h]

RX3\_FREEBUFFER is shown in Figure 14-73 and described in Table 14-83. CPDMA\_INT RECEIVE FREE BUFFER REGISTER CHANNEL 3

## Figure 14-73. RX3\_FREEBUFFER Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |
| W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-83. RX3\_FREEBUFFER Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 15-0  | RX_FREEBUFFER | W      | 0h      | Rx Free Buffer Count - This field contains the count of free buffers available. The rx_pendthresh value is compared with this field to determine if the receive threshold pending interrupt should be asseted (if enabled). This is a write to increment field. This field rolls over to zero on overflow. If receive threshold pending interrupts are used, the host must initialize this field to the number of available buffers (one register per channel). The port decrements (by the number of buffers in the received frame) the associated channel register for each received frame. This is a write to increment field. The host must write this field with the number of buffers that have been freed due to host processing. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.46 RX4\_FREEBUFFER Register (offset = F0h) [reset = 0h]

RX4\_FREEBUFFER is shown in Figure 14-74 and described in Table 14-84. CPDMA\_INT RECEIVE FREE BUFFER REGISTER CHANNEL 4

## Figure 14-74. RX4\_FREEBUFFER Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |
| W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-84. RX4\_FREEBUFFER Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 15-0  | RX_FREEBUFFER | W      | 0h      | Rx Free Buffer Count - This field contains the count of free buffers available. The rx_pendthresh value is compared with this field to determine if the receive threshold pending interrupt should be asseted (if enabled). This is a write to increment field. This field rolls over to zero on overflow. If receive threshold pending interrupts are used, the host must initialize this field to the number of available buffers (one register per channel). The port decrements (by the number of buffers in the received frame) the associated channel register for each received frame. This is a write to increment field. The host must write this field with the number of buffers that have been freed due to host processing. |

## 14.5.2.47 RX5\_FREEBUFFER Register (offset = F4h) [reset = 0h]

RX5\_FREEBUFFER is shown in Figure 14-75 and described in Table 14-85. CPDMA\_INT RECEIVE FREE BUFFER REGISTER CHANNEL 5

## Figure 14-75. RX5\_FREEBUFFER Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |
| W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-85. RX5\_FREEBUFFER Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 15-0  | RX_FREEBUFFER | W      | 0h      | Rx Free Buffer Count - This field contains the count of free buffers available. The rx_pendthresh value is compared with this field to determine if the receive threshold pending interrupt should be asseted (if enabled). This is a write to increment field. This field rolls over to zero on overflow. If receive threshold pending interrupts are used, the host must initialize this field to the number of available buffers (one register per channel). The port decrements (by the number of buffers in the received frame) the associated channel register for each received frame. This is a write to increment field. The host must write this field with the number of buffers that have been freed due to host processing. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.2.48 RX6\_FREEBUFFER Register (offset = F8h) [reset = 0h]

RX6\_FREEBUFFER is shown in Figure 14-76 and described in Table 14-86. CPDMA\_INT RECEIVE FREE BUFFER REGISTER CHANNEL 6

## Figure 14-76. RX6\_FREEBUFFER Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |
| W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-86. RX6\_FREEBUFFER Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 15-0  | RX_FREEBUFFER | W      | 0h      | Rx Free Buffer Count - This field contains the count of free buffers available. The rx_pendthresh value is compared with this field to determine if the receive threshold pending interrupt should be asseted (if enabled). This is a write to increment field. This field rolls over to zero on overflow. If receive threshold pending interrupts are used, the host must initialize this field to the number of available buffers (one register per channel). The port decrements (by the number of buffers in the received frame) the associated channel register for each received frame. This is a write to increment field. The host must write this field with the number of buffers that have been freed due to host processing. |