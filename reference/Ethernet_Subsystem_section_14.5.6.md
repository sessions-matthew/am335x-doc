<!-- image -->

www.ti.com

## 14.5.5.32 RX7\_CP Register (offset = A7Ch) [reset = 0h]

RX7\_CP is shown in Figure 14-120 and described in Table 14-133. CPDMA\_STATERAM RX CHANNEL 7 COMPLETION POINTER REGISTER *

## Figure 14-120. RX7\_CP Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

RX\_CP

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-133. RX7\_CP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RX_CP   | R/W    | 0h      | Rx Completion Pointer Register - This register is written by the host with the buffer descriptor address for the last buffer processed by the host during interrupt processing. The port uses the value written to determine if the interrupt should be deasserted. Note: The value read is the completion pointer (interrupt acknowledge) value that was written by the CPDMA DMA controller (port). The value written to this register by the host is compared with the value that the port wrote to determine if the interrupt should remain asserted. The value written is not actually stored in the location. The interrupt is deasserted if the two values are equal. |

## 14.5.6 CPSW\_PORT Registers

Table 14-134 lists the memory-mapped registers for the CPSW\_PORT. All register offset addresses not listed in Table 14-134 should be considered as reserved locations and the register contents should not be modified.

## Table 14-134. CPSW\_PORT Registers

| Offset   | Acronym             | Section           |
|----------|---------------------|-------------------|
| 0h       | P0_CONTROL          | Section 14.5.6.1  |
| 8h       | P0_MAX_BLKS         | Section 14.5.6.2  |
| Ch       | P0_BLK_CNT          | Section 14.5.6.3  |
| 10h      | P0_TX_IN_CTL        | Section 14.5.6.4  |
| 14h      | P0_PORT_VLAN        | Section 14.5.6.5  |
| 18h      | P0_TX_PRI_MAP       | Section 14.5.6.6  |
| 1Ch      | P0_CPDMA_TX_PRI_MAP | Section 14.5.6.7  |
| 20h      | P0_CPDMA_RX_CH_MAP  | Section 14.5.6.8  |
| 30h      | P0_RX_DSCP_PRI_MAP0 | Section 14.5.6.9  |
| 34h      | P0_RX_DSCP_PRI_MAP1 | Section 14.5.6.10 |
| 38h      | P0_RX_DSCP_PRI_MAP2 | Section 14.5.6.11 |
| 3Ch      | P0_RX_DSCP_PRI_MAP3 | Section 14.5.6.12 |
| 40h      | P0_RX_DSCP_PRI_MAP4 | Section 14.5.6.13 |
| 44h      | P0_RX_DSCP_PRI_MAP5 | Section 14.5.6.14 |
| 48h      | P0_RX_DSCP_PRI_MAP6 | Section 14.5.6.15 |
| 4Ch      | P0_RX_DSCP_PRI_MAP7 | Section 14.5.6.16 |
| 100h     | P1_CONTROL          | Section 14.5.6.17 |
| 108h     | P1_MAX_BLKS         | Section 14.5.6.18 |
| 10Ch     | P1_BLK_CNT          | Section 14.5.6.19 |
| 110h     | P1_TX_IN_CTL        | Section 14.5.6.20 |

## Table 14-134. CPSW\_PORT Registers (continued)

| Offset   | Acronym             | Section           |
|----------|---------------------|-------------------|
| 114h     | P1_PORT_VLAN        | Section 14.5.6.21 |
| 118h     | P1_TX_PRI_MAP       | Section 14.5.6.22 |
| 11Ch     | P1_TS_SEQ_MTYPE     | Section 14.5.6.23 |
| 120h     | P1_SA_LO            | Section 14.5.6.24 |
| 124h     | P1_SA_HI            | Section 14.5.6.25 |
| 128h     | P1_SEND_PERCENT     | Section 14.5.6.26 |
| 130h     | P1_RX_DSCP_PRI_MAP0 | Section 14.5.6.27 |
| 134h     | P1_RX_DSCP_PRI_MAP1 | Section 14.5.6.28 |
| 138h     | P1_RX_DSCP_PRI_MAP2 | Section 14.5.6.29 |
| 13Ch     | P1_RX_DSCP_PRI_MAP3 | Section 14.5.6.30 |
| 140h     | P1_RX_DSCP_PRI_MAP4 | Section 14.5.6.31 |
| 144h     | P1_RX_DSCP_PRI_MAP5 | Section 14.5.6.32 |
| 148h     | P1_RX_DSCP_PRI_MAP6 | Section 14.5.6.33 |
| 14Ch     | P1_RX_DSCP_PRI_MAP7 | Section 14.5.6.34 |
| 200h     | P2_CONTROL          | Section 14.5.6.35 |
| 208h     | P2_MAX_BLKS         | Section 14.5.6.36 |
| 20Ch     | P2_BLK_CNT          | Section 14.5.6.37 |
| 210h     | P2_TX_IN_CTL        | Section 14.5.6.38 |
| 214h     | P2_PORT_VLAN        | Section 14.5.6.39 |
| 218h     | P2_TX_PRI_MAP       | Section 14.5.6.40 |
| 21Ch     | P2_TS_SEQ_MTYPE     | Section 14.5.6.41 |
| 220h     | P2_SA_LO            | Section 14.5.6.42 |
| 224h     | P2_SA_HI            | Section 14.5.6.43 |
| 228h     | P2_SEND_PERCENT     | Section 14.5.6.44 |
| 230h     | P2_RX_DSCP_PRI_MAP0 | Section 14.5.6.45 |
| 234h     | P2_RX_DSCP_PRI_MAP1 | Section 14.5.6.46 |
| 238h     | P2_RX_DSCP_PRI_MAP2 | Section 14.5.6.47 |
| 23Ch     | P2_RX_DSCP_PRI_MAP3 | Section 14.5.6.48 |
| 240h     | P2_RX_DSCP_PRI_MAP4 | Section 14.5.6.49 |
| 244h     | P2_RX_DSCP_PRI_MAP5 | Section 14.5.6.50 |
| 248h     | P2_RX_DSCP_PRI_MAP6 | Section 14.5.6.51 |
| 24Ch     | P2_RX_DSCP_PRI_MAP7 | Section 14.5.6.52 |

<!-- image -->

<!-- image -->

## 14.5.6.1 P0\_CONTROL Register (offset = 0h) [reset = 0h]

P0\_CONTROL is shown in Figure 14-121 and described in Table 14-135. CPSW PORT 0 CONTROL REGISTER

## Figure 14-121. P0\_CONTROL Register

| 31       | 30              | 29                 | 28                 | 27       | 26       | 25       | 24                  |
|----------|-----------------|--------------------|--------------------|----------|----------|----------|---------------------|
| RESERVED | P0_DLR_CPDMA_CH | P0_DLR_CPDMA_CH    | P0_DLR_CPDMA_CH    | RESERVED | RESERVED | RESERVED | P0_PASS_PRI _TAGGED |
| R/W-0h   | R/W-0h          | R/W-0h             | R/W-0h             | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h              |
| 23       | 22              | 21                 | 20                 | 19       | 18       | 17       | 16                  |
| RESERVED | RESERVED        | P0_VLAN_LTY PE2_EN | P0_VLAN_LTY PE1_EN | RESERVED | RESERVED | RESERVED | P0_DSCP_PRI _EN     |
| R/W-0h   | R/W-0h          | R/W-0h             | R/W-0h             | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h              |
| 15       | 14              | 13                 | 12                 | 11       | 10       | 9        | 8                   |
| RESERVED | RESERVED        | RESERVED           | RESERVED           | RESERVED | RESERVED | RESERVED | RESERVED            |
| R/W-0h   | R/W-0h          | R/W-0h             | R/W-0h             | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h              |
| 7        | 6               | 5                  | 4                  | 3        | 2        | 1        | 0                   |
| RESERVED | RESERVED        | RESERVED           | RESERVED           | RESERVED | RESERVED | RESERVED | RESERVED            |
| R/W-0h   | R/W-0h          | R/W-0h             | R/W-0h             | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-135. P0\_CONTROL Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                                              |
|-------|--------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 30-28 | P0_DLR_CPDMA_CH    | R/W    | 0h      | Port 0 DLR CPDMA Channel This field indicates the CPDMA channel that DLR packets will be received on.                                                                                                                                    |
| 27-25 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 24    | P0_PASS_PRI_TAGGED | R/W    | 0h      | Port 0 Pass Priority Tagged 0 - Priority tagged packets have the zero VID replaced with the input port P0_PORT_VLAN [11:0] 1 - Priority tagged packets are processed unchanged.                                                          |
| 23-22 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 21    | P0_VLAN_LTYPE2_EN  | R/W    | 0h      | Port 0 VLAN LTYPE 2 enable 0 - disabled 1 - enabled                                                                                                                                                                                      |
| 20    | P0_VLAN_LTYPE1_EN  | R/W    | 0h      | Port 0 VLAN LTYPE 1 enable 0 - disabled 1 - enabled                                                                                                                                                                                      |
| 19-17 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 16    | P0_DSCP_PRI_EN     | R/W    | 0h      | Port 0 DSCP Priority Enable 0 - DSCP priority disabled 1 - DSCP priority enabled. All non-tagged IPV4 packets have their received packet priority determined by mapping the 6 TOS bits through the port DSCP priority mapping registers. |
| 15-0  | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |

## 14.5.6.2 P0\_MAX\_BLKS Register (offset = 8h) [reset = 104h]

P0\_MAX\_BLKS is shown in Figure 14-122 and described in Table 14-136. CPSW PORT 0 MAXIMUM FIFO BLOCKS REGISTER

Figure 14-122. P0\_MAX\_BLKS Register

| 31       | 30       | 29             | 28       | 27       | 26                             | 25       | 24       |
|----------|----------|----------------|----------|----------|--------------------------------|----------|----------|
| RESERVED | RESERVED | RESERVED       | RESERVED | RESERVED | RESERVED                       | RESERVED | RESERVED |
| 22       | 22       | 22             | 22       | 22       | 22                             | 22       | 22       |
| 23 21 15 | 20       | 19 R/W-0h      | 18       | 17       | 16                             | RESERVED | 14       |
| 13       | 13       | 13             | 13       | 13       | 13                             | 13       | 13       |
| 12       | 12       | 12             | 12       | 12       | 12                             | 12       | 12       |
| 11       | 10       | 9              | 8        | RESERVED | P0_TX_MAX_B LKS R/W-0h R/W-10h | 6        | 5        |
| 7 4      | 7 4      | 7 4            | 7 4      | 7 4      | 7 4                            | 7 4      | 3        |
| 2        | 2        | 2              | 2        | 2        | 2                              | 2        | 2        |
| 1        | 0        | P0_TX_MAX_BLKS |          |          | P0_RX_MAX_BLKS                 |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-136. P0\_MAX\_BLKS Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                 |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | R/W    | 0h      |                                                                                                                                                                                                                                                                                             |
| 8-4   | P0_TX_MAX_BLKS | R/W    | 10h     | Transmit FIFO Maximum Blocks - This value is the maximum number of 1k memory blocks that may be allocated to the FIFO's logical transmit priority queues. 0x10 is the recommended value of p0_tx_max_blks. Port 0 should remain in flow control mode. 0xe is the minimum value tx max blks. |
| 3-0   | P0_RX_MAX_BLKS | R/W    | 4h      | Receive FIFO Maximum Blocks - This value is the maximum number of 1k memory blocks that may be allocated to the FIFO's logical receive queue. 0x4 is the recommended value. 0x3 is the minimum value rx max blks and 0x6 is the maximum value.                                              |

<!-- image -->

<!-- image -->

## 14.5.6.3 P0\_BLK\_CNT Register (offset = Ch) [reset = 41h]

P0\_BLK\_CNT is shown in Figure 14-123 and described in Table 14-137. CPSW PORT 0 FIFO BLOCK USAGE COUNT (READ ONLY)

## Figure 14-123. P0\_BLK\_CNT Register

| 31       | 30       | 29            | 28                    | 27       | 26       | 25       | 24       |
|----------|----------|---------------|-----------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED      | RESERVED              | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22            | 22                    | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h       | 18                    | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13            | 13                    | 13       | 13       | 13       | 13       |
| 12       | 12       | 12            | 12                    | 12       | 12       | 12       | 12       |
| 11       | 10       | 9             | 8 P0_TX_BLK_C NT R-4h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5             | 5                     | 5        | 5        | 5        | 4        |
| 3        | 3        | 3             | 3                     | 3        | 3        | 3        | 2        |
| 1        | 0        | P0_TX_BLK_CNT | P0_RX_BLK_CNT         |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-137. P0\_BLK\_CNT Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                           |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED      | R      | 0h      |                                                                                                                       |
| 8-4   | P0_TX_BLK_CNT | R      | 4h      | Port 0 Transmit Block Count Usage - This value is the number of blocks allocated to the FIFO logical transmit queues. |
| 3-0   | P0_RX_BLK_CNT | R      | 1h      | Port 0 Receive Block Count Usage - This value is the number of blocks allocated to the FIFO logical receive queues.   |

## 14.5.6.4 P0\_TX\_IN\_CTL Register (offset = 10h) [reset = 40C0h]

P0\_TX\_IN\_CTL is shown in Figure 14-124 and described in Table 14-138. CPSW PORT 0 TRANSMIT FIFO CONTROL

## Figure 14-124. P0\_TX\_IN\_CTL Register

| 31         | 30          | 29          | 28         | 27         | 26         | 25         | 24         |
|------------|-------------|-------------|------------|------------|------------|------------|------------|
| RESERVED   | RESERVED    | RESERVED    | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R/W-       | R/W-        | R/W-        | R/W-       | R/W-       | R/W-       | R/W-       | R/W-       |
| 23         | 22          | 21          | 20         | 19         | 18         | 17         | 16         |
|            | TX_RATE_EN  | TX_RATE_EN  |            | RESERVED   | RESERVED   | TX_IN_SEL  | TX_IN_SEL  |
|            | R/W-0h      | R/W-0h      |            | R/W-       | R/W-       | R/W-0h     | R/W-0h     |
| 15         | 14          | 13          | 12         | 11         | 10         | 9          | 8          |
|            | TX_BLKS_REM | TX_BLKS_REM |            | RESERVED   | RESERVED   | TX_PRI_WDS | TX_PRI_WDS |
|            | R/W-4h      | R/W-4h      |            | R/W-       | R/W-       | R/W-C0h    | R/W-C0h    |
| 7          | 6           | 5           | 4          | 3          | 2          | 1          | 0          |
| TX_PRI_WDS | TX_PRI_WDS  | TX_PRI_WDS  | TX_PRI_WDS | TX_PRI_WDS | TX_PRI_WDS | TX_PRI_WDS | TX_PRI_WDS |
| R/W-C0h    | R/W-C0h     | R/W-C0h     | R/W-C0h    | R/W-C0h    | R/W-C0h    | R/W-C0h    | R/W-C0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-138. P0\_TX\_IN\_CTL Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                  |
|-------|-------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED    | R/W    |         |                                                                                                                                                                                                                                                              |
| 23-20 | TX_RATE_EN  | R/W    | 0h      | Transmit FIFO Input Rate Enable                                                                                                                                                                                                                              |
| 19-18 | RESERVED    | R/W    |         |                                                                                                                                                                                                                                                              |
| 17-16 | TX_IN_SEL   | R/W    | 0h      | Transmit FIFO Input Queue Type Select 00 - Normal priority mode 01 - Dual MAC mode 10 - Rate Limit mode 11 - reserved Note that Dual MAC mode is not compatible with escalation or shaping because dual mac mode forces round robin priority on FIFO egress. |
| 15-12 | TX_BLKS_REM | R/W    | 4h      | Transmit FIFO Input Blocks to subtract in dual mac mode                                                                                                                                                                                                      |
| 11-10 | RESERVED    | R/W    |         |                                                                                                                                                                                                                                                              |
| 9-0   | TX_PRI_WDS  | R/W    | C0h     | Transmit FIFO Words in queue                                                                                                                                                                                                                                 |

<!-- image -->

<!-- image -->

## 14.5.6.5 P0\_PORT\_VLAN Register (offset = 14h) [reset = 0h]

P0\_PORT\_VLAN is shown in Figure 14-125 and described in Table 14-139. CPSW PORT 0 VLAN REGISTER

## Figure 14-125. P0\_PORT\_VLAN Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|          | PORT_PRI |          | PORT_CFI |          | PORT_VID |          |          |
|          | R/W-0h   |          | R/W-0h   |          | R/W-0h   |          |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-139. P0\_PORT\_VLAN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                |
|-------|----------|--------|---------|--------------------------------------------|
| 31-16 | RESERVED | R/W    | 0h      |                                            |
| 15-13 | PORT_PRI | R/W    | 0h      | Port VLAN Priority (7 is highest priority) |
| 12    | PORT_CFI | R/W    | 0h      | Port CFI bit                               |
| 11-0  | PORT_VID | R/W    | 0h      | Port VLAN ID                               |

## 14.5.6.6 P0\_TX\_PRI\_MAP Register (offset = 18h) [reset = 33221001h]

P0\_TX\_PRI\_MAP is shown in Figure 14-126 and described in Table 14-140. CPSW PORT 0 TX HEADER PRI TO SWITCH PRI MAPPING REGISTER

## Figure 14-126. P0\_TX\_PRI\_MAP Register

| 31 30         | 29            | 27 26         | 25            | 24 23    | 22 21    | 20       | 19     | 18       | 17 16   |
|---------------|---------------|---------------|---------------|----------|----------|----------|--------|----------|---------|
| RESERVED PRI7 | RESERVED PRI7 | RESERVED PRI6 | RESERVED PRI6 | RESERVED | RESERVED |          | PRI5   | RESERVED | PRI4    |
| R/W-0h        | R/W-3h        | R/W-0h        | R/W-0h        | R/W-3h   | R/W-3h   | R/W-0h   | R/W-2h | R/W-0h   | R/W-2h  |
| 15 14         | 13            | 11            | 10            | 9        | 8 7      | 6        | 5 4    | 3 2      | 1 0     |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | PRI2     | PRI2     | RESERVED | PRI1   | RESERVED | PRI0    |
| R/W-0h        | R/W-0h        | R/W-1h R/W-0h | R/W-1h R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h   | R/W-1h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-140. P0\_TX\_PRI\_MAP Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------|
| 31-30 | RESERVED | R/W    | 0h      |                                                                              |
| 29-28 | PRI7     | R/W    | 3h      | Priority 7 - A packet header priority of 0x7 is given this switch queue pri. |
| 27-26 | RESERVED | R/W    | 0h      |                                                                              |
| 25-24 | PRI6     | R/W    | 3h      | Priority 6 - A packet header priority of 0x6 is given this switch queue pri. |
| 23-22 | RESERVED | R/W    | 0h      |                                                                              |
| 21-20 | PRI5     | R/W    | 2h      | Priority 5 - A packet header priority of 0x5 is given this switch queue pri. |
| 19-18 | RESERVED | R/W    | 0h      |                                                                              |
| 17-16 | PRI4     | R/W    | 2h      | Priority 4 - A packet header priority of 0x4 is given this switch queue pri. |
| 15-14 | RESERVED | R/W    | 0h      |                                                                              |
| 13-12 | PRI3     | R/W    | 1h      | Priority 3 - A packet header priority of 0x3 is given this switch queue pri. |
| 11-10 | RESERVED | R/W    | 0h      |                                                                              |
| 9-8   | PRI2     | R/W    | 0h      | Priority 2 - A packet header priority of 0x2 is given this switch queue pri. |
| 7-6   | RESERVED | R/W    | 0h      |                                                                              |
| 5-4   | PRI1     | R/W    | 0h      | Priority 1 - A packet header priority of 0x1 is given this switch queue pri. |
| 3-2   | RESERVED | R/W    | 0h      |                                                                              |
| 1-0   | PRI0     | R/W    | 1h      | Priority 0 - A packet header priority of 0x0 is given this switch queue pri. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.6.7 P0\_CPDMA\_TX\_PRI\_MAP Register (offset = 1Ch) [reset = 76543210h]

P0\_CPDMA\_TX\_PRI\_MAP is shown in Figure 14-127 and described in Table 14-141. CPSW CPDMA TX (PORT 0 RX) PKT PRIORITY TO HEADER PRIORITY

## Figure 14-127. P0\_CPDMA\_TX\_PRI\_MAP Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI7   |      | RESE RVED |      | PRI6   |      | RESE RVED |      | PRI5   |      | RESE RVED |      | PRI4   |      |
| R/W- 0h   |      | R/W-7h |      | R/W- 0h   |      | R/W-6h |      | R/W- 0h   |      | R/W-5h |      | R/W- 0h   |      | R/W-4h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI3   |      | RESE RVED |      | PRI2   |      | RESE RVED |      | PRI1   |      | RESE RVED |      | PRI0   |      |
| R/W- 0h   |      | R/W-3h |      | R/W- 0h   |      | R/W-2h |      | R/W- 0h   |      | R/W-1h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-141. P0\_CPDMA\_TX\_PRI\_MAP Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                     |
|-------|----------|--------|---------|---------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                 |
| 30-28 | PRI7     | R/W    | 7h      | Priority 7 - A packet pri of 0x7 is mapped (changed) to this header packet pri. |
| 27    | RESERVED | R/W    | 0h      |                                                                                 |
| 26-24 | PRI6     | R/W    | 6h      | Priority 6 - A packet pri of 0x6 is mapped (changed) to this header packet pri. |
| 23    | RESERVED | R/W    | 0h      |                                                                                 |
| 22-20 | PRI5     | R/W    | 5h      | Priority 5 - A packet pri of 0x5 is mapped (changed) to this header packet pri. |
| 19    | RESERVED | R/W    | 0h      |                                                                                 |
| 18-16 | PRI4     | R/W    | 4h      | Priority 4 - A packet pri of 0x4 is mapped (changed) to this header packet pri. |
| 15    | RESERVED | R/W    | 0h      |                                                                                 |
| 14-12 | PRI3     | R/W    | 3h      | Priority 3 - A packet pri of 0x3 is mapped (changed) to this header packet pri. |
| 11    | RESERVED | R/W    | 0h      |                                                                                 |
| 10-8  | PRI2     | R/W    | 2h      | Priority 2 - A packet pri of 0x2 is mapped (changed) to this header packet pri. |
| 7     | RESERVED | R/W    | 0h      |                                                                                 |
| 6-4   | PRI1     | R/W    | 1h      | Priority 1 - A packet pri of 0x1 is mapped (changed) to this header packet pri. |
| 3     | RESERVED | R/W    | 0h      |                                                                                 |
| 2-0   | PRI0     | R/W    | 0h      | Priority 0 - A packet pri of 0x0 is mapped (changed) to this header packet pri. |

<!-- image -->

## 14.5.6.8 P0\_CPDMA\_RX\_CH\_MAP Register (offset = 20h) [reset = 0h]

P0\_CPDMA\_RX\_CH\_MAP is shown in Figure 14-128 and described in Table 14-142. CPSW CPDMA RX (PORT 0 TX) SWITCH PRIORITY TO DMA CHANNEL

## Figure 14-128. P0\_CPDMA\_RX\_CH\_MAP Register

| 31        | 30   | 29      | 28   | 27        | 26   | 25      | 24   | 23        | 22 21   | 20   | 19        | 18   | 17      | 16   |
|-----------|------|---------|------|-----------|------|---------|------|-----------|---------|------|-----------|------|---------|------|
| RESE RVED |      | P2_PRI3 |      | RESE RVED |      | P2_PRI2 |      | RESE RVED | P2_PRI1 |      | RESE RVED |      | P2_PRI0 |      |
| R/W- 0h   |      | R/W-0h  |      | R/W- 0h   |      | R/W-0h  |      | R/W- 0h   | R/W-0h  |      | R/W- 0h   |      | R/W-0h  |      |
| 15        | 14   | 13      | 12   | 11        | 10   | 9       | 8    | 7         | 6 5     | 4    | 3         | 2    | 1       | 0    |
| RESE RVED |      | P1_PRI3 |      | RESE RVED |      | P1_PRI2 |      | RESE RVED | P1_PRI1 |      | RESE RVED |      | P1_PRI0 |      |
| R/W- 0h   |      | R/W-0h  |      | R/W- 0h   |      | R/W-0h  |      | R/W- 0h   | R/W-0h  |      | R/W- 0h   |      | R/W-0h  |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-142. P0\_CPDMA\_RX\_CH\_MAP Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                           |
|-------|----------|--------|---------|-------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                       |
| 30-28 | P2_PRI3  | R/W    | 0h      | Port 2 Priority 3 packets go to this CPDMA Rx Channel |
| 27    | RESERVED | R/W    | 0h      |                                                       |
| 26-24 | P2_PRI2  | R/W    | 0h      | Port 2 Priority 2 packets go to this CPDMA Rx Channel |
| 23    | RESERVED | R/W    | 0h      |                                                       |
| 22-20 | P2_PRI1  | R/W    | 0h      | Port 2 Priority 1 packets go to this CPDMA Rx Channel |
| 19    | RESERVED | R/W    | 0h      |                                                       |
| 18-16 | P2_PRI0  | R/W    | 0h      | Port 2 Priority 0 packets go to this CPDMA Rx Channel |
| 15    | RESERVED | R/W    | 0h      |                                                       |
| 14-12 | P1_PRI3  | R/W    | 0h      | Port 1 Priority 3 packets go to this CPDMA Rx Channel |
| 11    | RESERVED | R/W    | 0h      |                                                       |
| 10-8  | P1_PRI2  | R/W    | 0h      | Port 1 Priority 2 packets go to this CPDMA Rx Channel |
| 7     | RESERVED | R/W    | 0h      |                                                       |
| 6-4   | P1_PRI1  | R/W    | 0h      | Port 1 Priority 1 packets go to this CPDMA Rx Channel |
| 3     | RESERVED | R/W    | 0h      |                                                       |
| 2-0   | P1_PRI0  | R/W    | 0h      | Port 1 Priority 0 packets go to this CPDMA Rx Channel |

<!-- image -->

www.ti.com

## 14.5.6.9 P0\_RX\_DSCP\_PRI\_MAP0 Register (offset = 30h) [reset = 0h]

P0\_RX\_DSCP\_PRI\_MAP0 is shown in Figure 14-129 and described in Table 14-143.

CPSW PORT 0 RX DSCP PRIORITY TO RX PACKET MAPPING REG 0

## Figure 14-129. P0\_RX\_DSCP\_PRI\_MAP0 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI7   |      | RESE RVED |      | PRI6   |      | RESE RVED |      | PRI5   |      | RESE RVED |      | PRI4   |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI3   |      | RESE RVED |      | PRI2   |      | RESE RVED |      | PRI1   |      | RESE RVED |      | PRI0   |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-143. P0\_RX\_DSCP\_PRI\_MAP0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                              |
| 30-28 | PRI7     | R/W    | 0h      | Priority 7 - A packet TOS of 0d7 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                              |
| 26-24 | PRI6     | R/W    | 0h      | Priority 6 - A packet TOS of 0d6 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                              |
| 22-20 | PRI5     | R/W    | 0h      | Priority 5 - A packet TOS of 0d5 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                              |
| 18-16 | PRI4     | R/W    | 0h      | Priority 4 - A packet TOS of 0d4 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                              |
| 14-12 | PRI3     | R/W    | 0h      | Priority 3 - A packet TOS of 0d3 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                              |
| 10-8  | PRI2     | R/W    | 0h      | Priority 2 - A packet TOS of 0d2 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                              |
| 6-4   | PRI1     | R/W    | 0h      | Priority 1 - A packet TOS of 0d1 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                              |
| 2-0   | PRI0     | R/W    | 0h      | Priority 0 - A packet TOS of 0d0 is mapped to this received packet priority. |

<!-- image -->

## 14.5.6.10 P0\_RX\_DSCP\_PRI\_MAP1 Register (offset = 34h) [reset = 0h]

P0\_RX\_DSCP\_PRI\_MAP1 is shown in Figure 14-130 and described in Table 14-144. CPSW PORT 0 RX DSCP PRIORITY TO RX PACKET MAPPING REG 1

## Figure 14-130. P0\_RX\_DSCP\_PRI\_MAP1 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI15  |      | RESE RVED |      | PRI14  |      | RESE RVED |      | PRI13  |      | RESE RVED |      | PRI12  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI11  |      | RESE RVED |      | PRI10  |      | RESE RVED |      | PRI9   |      | RESE RVED |      | PRI8   |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-144. P0\_RX\_DSCP\_PRI\_MAP1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI15    | R/W    | 0h      | Priority 15 - A packet TOS of 0d15 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI14    | R/W    | 0h      | Priority 14 - A packet TOS of 0d14 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI13    | R/W    | 0h      | Priority 13 - A packet TOS of 0d13 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI12    | R/W    | 0h      | Priority 12 - A packet TOS of 0d12 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI11    | R/W    | 0h      | Priority 11 - A packet TOS of 0d11 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI10    | R/W    | 0h      | Priority 10 - A packet TOS of 0d10 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI9     | R/W    | 0h      | Priority 9 - A packet TOS of 0d9 is mapped to this received packet priority.   |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI8     | R/W    | 0h      | Priority 8 - A packet TOS of 0d8 is mapped to this received packet priority.   |

<!-- image -->

www.ti.com

## 14.5.6.11 P0\_RX\_DSCP\_PRI\_MAP2 Register (offset = 38h) [reset = 0h]

P0\_RX\_DSCP\_PRI\_MAP2 is shown in Figure 14-131 and described in Table 14-145. CPSW PORT 0 RX DSCP PRIORITY TO RX PACKET MAPPING REG 2

## Figure 14-131. P0\_RX\_DSCP\_PRI\_MAP2 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI23  |      | RESE RVED |      | PRI22  |      | RESE RVED |      | PRI21  |      | RESE RVED |      | PRI20  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI19  |      | RESE RVED |      | PRI18  |      | RESE RVED |      | PRI17  |      | RESE RVED |      | PRI16  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-145. P0\_RX\_DSCP\_PRI\_MAP2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI23    | R/W    | 0h      | Priority 23 - A packet TOS of 0d23 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI22    | R/W    | 0h      | Priority 22 - A packet TOS of 0d22 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI21    | R/W    | 0h      | Priority 21 - A packet TOS of 0d21 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI20    | R/W    | 0h      | Priority 20 - A packet TOS of 0d20 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI19    | R/W    | 0h      | Priority 19 - A packet TOS of 0d19 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI18    | R/W    | 0h      | Priority 18 - A packet TOS of 0d18 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI17    | R/W    | 0h      | Priority 17 - A packet TOS of 0d17 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI16    | R/W    | 0h      | Priority 16 - A packet TOS of 0d16 is mapped to this received packet priority. |

<!-- image -->

## 14.5.6.12 P0\_RX\_DSCP\_PRI\_MAP3 Register (offset = 3Ch) [reset = 0h]

P0\_RX\_DSCP\_PRI\_MAP3 is shown in Figure 14-132 and described in Table 14-146. CPSW PORT 0 RX DSCP PRIORITY TO RX PACKET MAPPING REG 3

## Figure 14-132. P0\_RX\_DSCP\_PRI\_MAP3 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI31  |      | RESE RVED |      | PRI30  |      | RESE RVED |      | PRI29  |      | RESE RVED |      | PRI28  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI27  |      | RESE RVED |      | PRI26  |      | RESE RVED |      | PRI25  |      | RESE RVED |      | PRI24  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-146. P0\_RX\_DSCP\_PRI\_MAP3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI31    | R/W    | 0h      | Priority 31 - A packet TOS of 0d31 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI30    | R/W    | 0h      | Priority 30 - A packet TOS of 0d30 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI29    | R/W    | 0h      | Priority 29 - A packet TOS of 0d39 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI28    | R/W    | 0h      | Priority 28 - A packet TOS of 0d28 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI27    | R/W    | 0h      | Priority 27 - A packet TOS of 0d27 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI26    | R/W    | 0h      | Priority 26 - A packet TOS of 0d26 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI25    | R/W    | 0h      | Priority 25 - A packet TOS of 0d25 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI24    | R/W    | 0h      | Priority 24 - A packet TOS of 0d24 is mapped to this received packet priority. |

<!-- image -->

www.ti.com

## 14.5.6.13 P0\_RX\_DSCP\_PRI\_MAP4 Register (offset = 40h) [reset = 0h]

P0\_RX\_DSCP\_PRI\_MAP4 is shown in Figure 14-133 and described in Table 14-147. CPSW PORT 0 RX DSCP PRIORITY TO RX PACKET MAPPING REG 4

## Figure 14-133. P0\_RX\_DSCP\_PRI\_MAP4 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI39  |      | RESE RVED |      | PRI38  |      | RESE RVED |      | PRI37  |      | RESE RVED |      | PRI36  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI35  |      | RESE RVED |      | PRI34  |      | RESE RVED |      | PRI33  |      | RESE RVED |      | PRI32  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-147. P0\_RX\_DSCP\_PRI\_MAP4 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI39    | R/W    | 0h      | Priority 39 - A packet TOS of 0d39 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI38    | R/W    | 0h      | Priority 38 - A packet TOS of 0d38 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI37    | R/W    | 0h      | Priority 37 - A packet TOS of 0d37 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI36    | R/W    | 0h      | Priority 36 - A packet TOS of 0d36 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI35    | R/W    | 0h      | Priority 35 - A packet TOS of 0d35 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI34    | R/W    | 0h      | Priority 34 - A packet TOS of 0d34 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI33    | R/W    | 0h      | Priority 33 - A packet TOS of 0d33 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI32    | R/W    | 0h      | Priority 32 - A packet TOS of 0d32 is mapped to this received packet priority. |

<!-- image -->

## 14.5.6.14 P0\_RX\_DSCP\_PRI\_MAP5 Register (offset = 44h) [reset = 0h]

P0\_RX\_DSCP\_PRI\_MAP5 is shown in Figure 14-134 and described in Table 14-148. CPSW PORT 0 RX DSCP PRIORITY TO RX PACKET MAPPING REG 5

## Figure 14-134. P0\_RX\_DSCP\_PRI\_MAP5 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI47  |      | RESE RVED |      | PRI46  |      | RESE RVED |      | PRI45  |      | RESE RVED |      | PRI44  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI43  |      | RESE RVED |      | PRI42  |      | RESE RVED |      | PRI41  |      | RESE RVED |      | PRI40  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-148. P0\_RX\_DSCP\_PRI\_MAP5 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI47    | R/W    | 0h      | Priority 47 - A packet TOS of 0d47 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI46    | R/W    | 0h      | Priority 46 - A packet TOS of 0d46 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI45    | R/W    | 0h      | Priority 45 - A packet TOS of 0d45 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI44    | R/W    | 0h      | Priority 44 - A packet TOS of 0d44 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI43    | R/W    | 0h      | Priority 43 - A packet TOS of 0d43 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI42    | R/W    | 0h      | Priority 42 - A packet TOS of 0d42 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI41    | R/W    | 0h      | Priority 41 - A packet TOS of 0d41 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI40    | R/W    | 0h      | Priority 40 - A packet TOS of 0d40 is mapped to this received packet priority. |

<!-- image -->

www.ti.com

## 14.5.6.15 P0\_RX\_DSCP\_PRI\_MAP6 Register (offset = 48h) [reset = 0h]

P0\_RX\_DSCP\_PRI\_MAP6 is shown in Figure 14-135 and described in Table 14-149. CPSW PORT 0 RX DSCP PRIORITY TO RX PACKET MAPPING REG 6

## Figure 14-135. P0\_RX\_DSCP\_PRI\_MAP6 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI55  |      | RESE RVED |      | PRI54  |      | RESE RVED |      | PRI53  |      | RESE RVED |      | PRI52  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI51  |      | RESE RVED |      | PRI50  |      | RESE RVED |      | PRI49  |      | RESE RVED |      | PRI48  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-149. P0\_RX\_DSCP\_PRI\_MAP6 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI55    | R/W    | 0h      | Priority 55 - A packet TOS of 0d55 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI54    | R/W    | 0h      | Priority 54 - A packet TOS of 0d54 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI53    | R/W    | 0h      | Priority 53 - A packet TOS of 0d53 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI52    | R/W    | 0h      | Priority 52 - A packet TOS of 0d52 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI51    | R/W    | 0h      | Priority 51 - A packet TOS of 0d51 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI50    | R/W    | 0h      | Priority 50 - A packet TOS of 0d50 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI49    | R/W    | 0h      | Priority 49 - A packet TOS of 0d49 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI48    | R/W    | 0h      | Priority 48 - A packet TOS of 0d48 is mapped to this received packet priority. |

<!-- image -->

## 14.5.6.16 P0\_RX\_DSCP\_PRI\_MAP7 Register (offset = 4Ch) [reset = 0h]

P0\_RX\_DSCP\_PRI\_MAP7 is shown in Figure 14-136 and described in Table 14-150. CPSW PORT 0 RX DSCP PRIORITY TO RX PACKET MAPPING REG 7

## Figure 14-136. P0\_RX\_DSCP\_PRI\_MAP7 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI63  |      | RESE RVED |      | PRI62  |      | RESE RVED |      | PRI61  |      | RESE RVED |      | PRI60  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI59  |      | RESE RVED |      | PRI58  |      | RESE RVED |      | PRI57  |      | RESE RVED |      | PRI56  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-150. P0\_RX\_DSCP\_PRI\_MAP7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI63    | R/W    | 0h      | Priority 63 - A packet TOS of 0d63 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI62    | R/W    | 0h      | Priority 62 - A packet TOS of 0d62 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI61    | R/W    | 0h      | Priority 61 - A packet TOS of 0d61 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI60    | R/W    | 0h      | Priority 60 - A packet TOS of 0d60 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI59    | R/W    | 0h      | Priority 59 - A packet TOS of 0d59 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI58    | R/W    | 0h      | Priority 58 - A packet TOS of 0d58 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI57    | R/W    | 0h      | Priority 57 - A packet TOS of 0d57 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI56    | R/W    | 0h      | Priority 56 - A packet TOS of 0d56 is mapped to this received packet priority. |

<!-- image -->

## 14.5.6.17 P1\_CONTROL Register (offset = 100h) [reset = 0h]

P1\_CONTROL is shown in Figure 14-137 and described in Table 14-151. CPSW PORT 1 CONTROL REGISTER

## Figure 14-137. P1\_CONTROL Register

| 31       | 30        | 29                 | 28                 | 27               | 26               | 25          | 24                  |
|----------|-----------|--------------------|--------------------|------------------|------------------|-------------|---------------------|
|          |           |                    | RESERVED           |                  |                  |             | P1_PASS_PRI _TAGGED |
|          |           |                    | R/W-0h             |                  |                  |             | R/W-0h              |
| 23       | 22        | 21                 | 20                 | 19               | 18               | 17          | 16                  |
| RESERVED | RESERVED  | P1_VLAN_LTY PE2_EN | P1_VLAN_LTY PE1_EN |                  | RESERVED         |             | P1_DSCP_PRI _EN     |
| R/W-0h   | R/W-0h    | R/W-0h             | R/W-0h             |                  | R/W-0h           |             | R/W-0h              |
| 15       | 14        | 13                 | 12                 | 11               | 10               | 9           | 8                   |
| RESERVED | P1_TS_320 | P1_TS_319          | P1_TS_132          | P1_TS_131        | P1_TS_130        | P1_TS_129   | P1_TS_TTL_N ONZERO  |
| R/W-0h   | R/W-0h    | R/W-0h             | R/W-0h             | R/W-0h           | R/W-0h           | R/W-0h      | R/W-0h              |
| 7        | 6         | 5                  | 4                  | 3                | 2                | 1           | 0                   |
|          | RESERVED  |                    | P1_TS_ANNEX _D_EN  | P1_TS_LTYPE 2_EN | P1_TS_LTYPE 1_EN | P1_TS_TX_EN | P1_TS_RX_EN         |
|          | R/W-0h    |                    | R/W-0h             | R-0h             | R/W-0h           | R/W-0h      | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-151. P1\_CONTROL Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                                              |
|-------|--------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-25 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 24    | P1_PASS_PRI_TAGGED | R/W    | 0h      | Port 1 Pass Priority Tagged 0 - Priority tagged packets have the zero VID replaced with the input port P1_PORT_VLAN [11:0] 1 - Priority tagged packets are processed unchanged.                                                          |
| 23-22 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 21    | P1_VLAN_LTYPE2_EN  | R/W    | 0h      | Port 1 VLAN LTYPE 2 enable 0 - disabled 1 - VLAN LTYPE2 enabled on transmit and receive                                                                                                                                                  |
| 20    | P1_VLAN_LTYPE1_EN  | R/W    | 0h      | Port 1 VLAN LTYPE 1 enable 0 - disabled 1 - VLAN LTYPE1 enabled on transmit and receive                                                                                                                                                  |
| 19-17 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 16    | P1_DSCP_PRI_EN     | R/W    | 0h      | Port 1 DSCP Priority Enable 0 - DSCP priority disabled 1 - DSCP priority enabled. All non-tagged IPV4 packets have their received packet priority determined by mapping the 6 TOS bits through the port DSCP priority mapping registers. |
| 15    | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 14    | P1_TS_320          | R/W    | 0h      | Port 1 Time Sync Destination Port Number 320 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination port number 320 (decimal) is enabled.                                                                               |
| 13    | P1_TS_319          | R/W    | 0h      | Port 1 Time Sync Destination Port Number 319 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination port number 319 (decimal) is enabled.                                                                               |
| 12    | P1_TS_132          | R/W    | 0h      | Port 1 Time Sync Destination IP Address 132 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination IP address number 132 (decimal) is enabled.                                                                          |

<!-- image -->

Table 14-151. P1\_CONTROL Register Field Descriptions (continued)

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                     |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 11    | P1_TS_131         | R/W    | 0h      | Port 1 Time Sync Destination IP Address 131 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination IP address number 131 (decimal) is enabled. |
| 10    | P1_TS_130         | R/W    | 0h      | Port 1 Time Sync Destination IP Address 130 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination IP address number 130 (decimal) is enabled. |
| 9     | P1_TS_129         | R/W    | 0h      | Port 1 Time Sync Destination IP Address 129 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination IP address number 129 (decimal) is enabled. |
| 8     | P1_TS_TTL_NONZERO | R/W    | 0h      | Port 1 Time Sync Time To Live Non-zero enable. 0 = TTL must be zero. 1 = TTL may be any value.                                                                  |
| 7-5   | RESERVED          | R/W    | 0h      |                                                                                                                                                                 |
| 4     | P1_TS_ANNEX_D_EN  | R/W    | 0h      | Port 1 Time Sync Annex D enable 0 - Annex D disabled 1 - Annex D enabled                                                                                        |
| 3     | P1_TS_LTYPE2_EN   | R      | 0h      | Port 1 Time Sync LTYPE 2 enable 0 - disabled 1 - enabled                                                                                                        |
| 2     | P1_TS_LTYPE1_EN   | R/W    | 0h      | Port 1 Time Sync LTYPE 1 enable 0 - disabled 1 - enabled                                                                                                        |
| 1     | P1_TS_TX_EN       | R/W    | 0h      | Port 1 Time Sync Transmit Enable 0 - disabled 1 - enabled                                                                                                       |
| 0     | P1_TS_RX_EN       | R/W    | 0h      | Port 1 Time Sync Receive Enable 0 - Port 1 Receive Time Sync disabled 1 - Port 1 Receive Time Sync enabled                                                      |

<!-- image -->

www.ti.com

## 14.5.6.18 P1\_MAX\_BLKS Register (offset = 108h) [reset = 113h]

P1\_MAX\_BLKS is shown in Figure 14-138 and described in Table 14-152. CPSW PORT 1 MAXIMUM FIFO BLOCKS REGISTER

Figure 14-138. P1\_MAX\_BLKS Register

| 31       | 30       | 29             | 28       | 27       | 26                             | 25       | 24       |
|----------|----------|----------------|----------|----------|--------------------------------|----------|----------|
| RESERVED | RESERVED | RESERVED       | RESERVED | RESERVED | RESERVED                       | RESERVED | RESERVED |
| 22       | 22       | 22             | 22       | 22       | 22                             | 22       | 22       |
| 23 21 15 | 20       | 19 R/W-0h      | 18       | 17       | 16                             | RESERVED | 14       |
| 13       | 13       | 13             | 13       | 13       | 13                             | 13       | 13       |
| 12       | 12       | 12             | 12       | 12       | 12                             | 12       | 12       |
| 11       | 10       | 9              | 8        | RESERVED | P1_TX_MAX_B LKS R/W-0h R/W-11h | 6        | 5        |
| 7 4      | 7 4      | 7 4            | 7 4      | 7 4      | 7 4                            | 7 4      | 3        |
| 2        | 2        | 2              | 2        | 2        | 2                              | 2        | 2        |
| 1        | 0        | P1_TX_MAX_BLKS |          |          | P1_RX_MAX_BLKS                 |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-152. P1\_MAX\_BLKS Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 8-4   | P1_TX_MAX_BLKS | R/W    | 11h     | Transmit FIFO Maximum Blocks - This value is the maximum number of 1k memory blocks that may be allocated to the FIFO's logical transmit priority queues. 0x11 is the recommended value of p1_tx_max_blks unless the port is in fullduplex flow control mode. In flow control mode, the p1_rx_max_blks will need to increase in order to accept the required run out in fullduplex mode. This value will need to decrease by the amount of increase in p1_rx_max_blks. 0xe is the minimum value tx max blks. |
| 3-0   | P1_RX_MAX_BLKS | R/W    | 3h      | Receive FIFO Maximum Blocks - This value is the maximum number of 1k memory blocks that may be allocated to the FIFO's logical receive queue. This value must be greater than or equal to 0x3. It should be increased In fullduplex flow control mode to 0x5 or 0x6 depending on the required runout space. The p1_tx_max_blks value must be decreased by the amount of increase in p1_rx_max_blks. 0x3 is the minimum value rx max blks and 0x6 is the maximum value.                                       |

## 14.5.6.19 P1\_BLK\_CNT Register (offset = 10Ch) [reset = 41h]

P1\_BLK\_CNT is shown in Figure 14-139 and described in Table 14-153. CPSW PORT 1 FIFO BLOCK USAGE COUNT (READ ONLY)

## Figure 14-139. P1\_BLK\_CNT Register

| 31       | 30       | 29            | 28                    | 27       | 26       | 25       | 24       |
|----------|----------|---------------|-----------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED      | RESERVED              | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22            | 22                    | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h       | 18                    | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13            | 13                    | 13       | 13       | 13       | 13       |
| 12       | 12       | 12            | 12                    | 12       | 12       | 12       | 12       |
| 11       | 10       | 9             | 8 P1_TX_BLK_C NT R-4h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5             | 5                     | 5        | 5        | 5        | 4        |
| 3        | 3        | 3             | 3                     | 3        | 3        | 3        | 2        |
| 1        | 0        | P1_TX_BLK_CNT | P1_RX_BLK_CNT         |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-153. P1\_BLK\_CNT Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                           |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED      | R      | 0h      |                                                                                                                       |
| 8-4   | P1_TX_BLK_CNT | R      | 4h      | Port 1 Transmit Block Count Usage - This value is the number of blocks allocated to the FIFO logical transmit queues. |
| 3-0   | P1_RX_BLK_CNT | R      | 1h      | Port 1 Receive Block Count Usage - This value is the number of blocks allocated to the FIFO logical receive queues.   |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.6.20 P1\_TX\_IN\_CTL Register (offset = 110h) [reset = 80040C0h]

P1\_TX\_IN\_CTL is shown in Figure 14-140 and described in Table 14-154. CPSW PORT 1 TRANSMIT FIFO CONTROL

## Figure 14-140. P1\_TX\_IN\_CTL Register

| 31          | 30          | 29          | 28          | 27            | 26            | 25            | 24            |
|-------------|-------------|-------------|-------------|---------------|---------------|---------------|---------------|
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | HOST_BLKS_REM | HOST_BLKS_REM | HOST_BLKS_REM | HOST_BLKS_REM |
| R/W-        | R/W-        | R/W-        | R/W-        | R/W-8h        | R/W-8h        | R/W-8h        | R/W-8h        |
| 23          | 22          | 21          | 20          | 19            | 18            | 17            | 16            |
| TX_RATE_EN  | TX_RATE_EN  | TX_RATE_EN  | TX_RATE_EN  | RESERVED      | RESERVED      | TX_IN_SEL     | TX_IN_SEL     |
| R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-          | R/W-          | R/W-0h        | R/W-0h        |
| 15          | 14          | 13          | 12          | 11            | 10            | 9             | 8             |
| TX_BLKS_REM | TX_BLKS_REM | TX_BLKS_REM | TX_BLKS_REM | RESERVED      | RESERVED      | TX_PRI_WDS    | TX_PRI_WDS    |
| R/W-4h      | R/W-4h      | R/W-4h      | R/W-4h      | R/W-          | R/W-          | R/W-C0h       | R/W-C0h       |
| 7           | 6           | 5           | 4           | 3             | 2             | 1             | 0             |
| TX_PRI_WDS  | TX_PRI_WDS  | TX_PRI_WDS  | TX_PRI_WDS  | TX_PRI_WDS    | TX_PRI_WDS    | TX_PRI_WDS    | TX_PRI_WDS    |
| R/W-C0h     | R/W-C0h     | R/W-C0h     | R/W-C0h     | R/W-C0h       | R/W-C0h       | R/W-C0h       | R/W-C0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-154. P1\_TX\_IN\_CTL Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                    |
|-------|---------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED      | R/W    |         |                                                                                                                                |
| 27-24 | HOST_BLKS_REM | R/W    | 8h      | Transmit FIFO Blocks that must be free before a non rate-limited CPDMA channel can begin sending a packet to the FIFO.         |
| 23-20 | TX_RATE_EN    | R/W    | 0h      | Transmit FIFO Input Rate Enable                                                                                                |
| 19-18 | RESERVED      | R/W    |         |                                                                                                                                |
| 17-16 | TX_IN_SEL     | R/W    | 0h      | Transmit FIFO Input Queue Type Select 00 - Normal priority mode 01 - reserved 10 - Rate Limit mode 11 - reserved               |
| 15-12 | TX_BLKS_REM   | R/W    | 4h      | Transmit FIFO Input Blocks to subtract in dual mac mode and blocks to subtract on non rate-limited traffic in rate-limit mode. |
| 11-10 | RESERVED      | R/W    |         |                                                                                                                                |
| 9-0   | TX_PRI_WDS    | R/W    | C0h     | Transmit FIFO Words in queue                                                                                                   |

## 14.5.6.21 P1\_PORT\_VLAN Register (offset = 114h) [reset = 0h]

P1\_PORT\_VLAN is shown in Figure 14-141 and described in Table 14-155. CPSW PORT 1 VLAN REGISTER

## Figure 14-141. P1\_PORT\_VLAN Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|          | PORT_PRI |          | PORT_CFI |          | PORT_VID |          |          |
|          | R/W-0h   |          | R/W-0h   |          | R/W-0h   |          |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-155. P1\_PORT\_VLAN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                |
|-------|----------|--------|---------|--------------------------------------------|
| 31-16 | RESERVED | R/W    | 0h      |                                            |
| 15-13 | PORT_PRI | R/W    | 0h      | Port VLAN Priority (7 is highest priority) |
| 12    | PORT_CFI | R/W    | 0h      | Port CFI bit                               |
| 11-0  | PORT_VID | R/W    | 0h      | Port VLAN ID                               |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.6.22 P1\_TX\_PRI\_MAP Register (offset = 118h) [reset = 33221001h]

P1\_TX\_PRI\_MAP is shown in Figure 14-142 and described in Table 14-156. CPSW PORT 1 TX HEADER PRIORITY TO SWITCH PRI MAPPING REGISTER

## Figure 14-142. P1\_TX\_PRI\_MAP Register

| 31 30         | 29            | 27 26         | 25            | 24 23    | 22 21    | 20       | 19     | 18       | 17 16   |
|---------------|---------------|---------------|---------------|----------|----------|----------|--------|----------|---------|
| RESERVED PRI7 | RESERVED PRI7 | RESERVED PRI6 | RESERVED PRI6 | RESERVED | RESERVED |          | PRI5   | RESERVED | PRI4    |
| R/W-0h        | R/W-3h        | R/W-0h        | R/W-0h        | R/W-3h   | R/W-3h   | R/W-0h   | R/W-2h | R/W-0h   | R/W-2h  |
| 15 14         | 13            | 11            | 10            | 9        | 8 7      | 6        | 5 4    | 3 2      | 1 0     |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | PRI2     | PRI2     | RESERVED | PRI1   | RESERVED | PRI0    |
| R/W-0h        | R/W-0h        | R/W-1h R/W-0h | R/W-1h R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h   | R/W-1h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-156. P1\_TX\_PRI\_MAP Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------|
| 31-30 | RESERVED | R/W    | 0h      |                                                                              |
| 29-28 | PRI7     | R/W    | 3h      | Priority 7 - A packet header priority of 0x7 is given this switch queue pri. |
| 27-26 | RESERVED | R/W    | 0h      |                                                                              |
| 25-24 | PRI6     | R/W    | 3h      | Priority 6 - A packet header priority of 0x6 is given this switch queue pri. |
| 23-22 | RESERVED | R/W    | 0h      |                                                                              |
| 21-20 | PRI5     | R/W    | 2h      | Priority 5 - A packet header priority of 0x5 is given this switch queue pri. |
| 19-18 | RESERVED | R/W    | 0h      |                                                                              |
| 17-16 | PRI4     | R/W    | 2h      | Priority 4 - A packet header priority of 0x4 is given this switch queue pri. |
| 15-14 | RESERVED | R/W    | 0h      |                                                                              |
| 13-12 | PRI3     | R/W    | 1h      | Priority 3 - A packet header priority of 0x3 is given this switch queue pri. |
| 11-10 | RESERVED | R/W    | 0h      |                                                                              |
| 9-8   | PRI2     | R/W    | 0h      | Priority 2 - A packet header priority of 0x2 is given this switch queue pri. |
| 7-6   | RESERVED | R/W    | 0h      |                                                                              |
| 5-4   | PRI1     | R/W    | 0h      | Priority 1 - A packet header priority of 0x1 is given this switch queue pri. |
| 3-2   | RESERVED | R/W    | 0h      |                                                                              |
| 1-0   | PRI0     | R/W    | 1h      | Priority 0 - A packet header priority of 0x0 is given this switch queue pri. |

## 14.5.6.23 P1\_TS\_SEQ\_MTYPE Register (offset = 11Ch) [reset = 1E0000h]

P1\_TS\_SEQ\_MTYPE is shown in Figure 14-143 and described in Table 14-157. CPSW PORT 1 TIME SYNC SEQUENCE ID OFFSET AND MSG TYPE.

## Figure 14-143. P1\_TS\_SEQ\_MTYPE Register

| 31                           | 30                           | 29                           | 28                           | 27                           | 26                           | 25                           | 24                           |
|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|
| RESERVED                     | RESERVED                     | RESERVED                     | RESERVED                     | RESERVED                     | RESERVED                     | RESERVED                     | RESERVED                     |
| R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       |
| 23                           | 22                           | 21                           | 20                           | 19                           | 18                           | 17                           | 16                           |
| RESERVED P1_TS_SEQ_ID_OFFSET | RESERVED P1_TS_SEQ_ID_OFFSET | RESERVED P1_TS_SEQ_ID_OFFSET | RESERVED P1_TS_SEQ_ID_OFFSET | RESERVED P1_TS_SEQ_ID_OFFSET | RESERVED P1_TS_SEQ_ID_OFFSET | RESERVED P1_TS_SEQ_ID_OFFSET | RESERVED P1_TS_SEQ_ID_OFFSET |
| R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               |
| 15                           | 14                           | 13                           | 12                           | 11                           | 10                           | 9                            | 8                            |
| P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            |
| R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       |
| 7                            | 6                            | 5                            | 4                            | 3                            | 2                            | 1                            | 0                            |
| P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            | P1_TS_MSG_TYPE_EN            |
| R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-157. P1\_TS\_SEQ\_MTYPE Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                          |
|-------|---------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-22 | RESERVED            | R/W    | 0h      |                                                                                                                                                                                      |
| 21-16 | P1_TS_SEQ_ID_OFFSET | R/W    | 1Eh     | Port 1 Time Sync Sequence ID Offset This is the number of octets that the sequence ID is offset in the tx and rx time sync message header. The minimum value is 6.                   |
| 15-0  | P1_TS_MSG_TYPE_EN   | R/W    | 0h      | Port 1 Time Sync Message Type Enable - Each bit in this field enables the corresponding message type in receive and transmit time sync messages (Bit 0 enables message type 0 etc.). |

<!-- image -->

<!-- image -->

## 14.5.6.24 P1\_SA\_LO Register (offset = 120h) [reset = 0h]

P1\_SA\_LO is shown in Figure 14-144 and described in Table 14-158. CPSW CPGMAC\_SL1 SOURCE ADDRESS LOW REGISTER

## Figure 14-144. P1\_SA\_LO Register

| 31                             | 30                             | 29                             | 28                             | 27                             | 26                             | 25                             | 24                             | 23                             | 22                             | 21                             | 20                             | 19                             | 18                             | 17                             | 16                             |
|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|
| RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       |
| R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         |
| 15                             | 14                             | 13                             | 12                             | 11                             | 10                             | 9                              | 8                              | 7                              | 6                              | 5                              | 4                              | 3                              | 2                              | 1                              | 0                              |
| MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 |
| R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-158. P1\_SA\_LO Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                          |
|-------|-----------------|--------|---------|--------------------------------------|
| 31-16 | RESERVED        | R/W    | 0h      |                                      |
| 15-8  | MACSRCADDR_7_0  | R/W    | 0h      | Source Address Lower 8 bits (byte 0) |
| 7-0   | MACSRCADDR_15_8 | R/W    | 0h      | Source Address bits 15:8 (byte 1)    |

## 14.5.6.25 P1\_SA\_HI Register (offset = 124h) [reset = 0h]

P1\_SA\_HI is shown in Figure 14-145 and described in Table 14-159. CPSW CPGMAC\_SL1 SOURCE ADDRESS HIGH REGISTER

## Figure 14-145. P1\_SA\_HI Register

| 31               | 30               | 29               | 28               | 27               | 26               | 25               |                  | 24               | 23               | 22               | 21               | 20               | 19               | 18               | 17               | 16               |
|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|
| MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_31_24 | MACSRCADDR_31_24 | MACSRCADDR_31_24 | MACSRCADDR_31_24 | MACSRCADDR_31_24 | MACSRCADDR_31_24 | MACSRCADDR_31_24 | MACSRCADDR_31_24 |
| R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 15               | 14               | 13               | 12               | 11               | 10               | 9                | 8                |                  | 7                | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
| MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 |
| R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-159. P1\_SA\_HI Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                        |
|-------|------------------|--------|---------|------------------------------------|
| 31-24 | MACSRCADDR_23_16 | R/W    | 0h      | Source Address bits 23:16 (byte 2) |
| 23-16 | MACSRCADDR_31_24 | R/W    | 0h      | Source Address bits 31:24 (byte 3) |
| 15-8  | MACSRCADDR_39_32 | R/W    | 0h      | Source Address bits 39:32 (byte 4) |
| 7-0   | MACSRCADDR_47_40 | R/W    | 0h      | Source Address bits 47:40 (byte 5) |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.6.26 P1\_SEND\_PERCENT Register (offset = 128h) [reset = 0h]

P1\_SEND\_PERCENT is shown in Figure 14-146 and described in Table 14-160. CPSW PORT 1 TRANSMIT QUEUE SEND PERCENTAGES

## Figure 14-146. P1\_SEND\_PERCENT Register

| 31        | 30                | 29                | 28                | 27                | 26                | 25                | 24                | 23        | 22                | 21                | 20                | 19                | 18                |                   | 17                | 16                |
|-----------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-----------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
|           | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED  | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT |
| R/W-0h    | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h    | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |
| 15        | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 | 7         | 6                 | 5                 | 4                 | 3                 |                   | 2                 | 1                 | 0                 |
| RESE RVED | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | RESE RVED | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT |
| R/W- 0h   | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W- 0h   | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-160. P1\_SEND\_PERCENT Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                              |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-23 | RESERVED          | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                          |
| 22-16 | PRI3_SEND_PERCENT | R/W    | 0h      | Priority 3 Transmit Percentage - This percentage value is sent from FIFO priority 3 (maximum) when the p1_pri3_shape_en is set (queue shaping enabled). This is the percentage of the wire that packets from priority 3 receive (which includes interpacket gap and preamble bytes). If shaping is enabled on this queue then this value must be between zero and 0d100 (not inclusive). |
| 15    | RESERVED          | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                          |
| 14-8  | PRI2_SEND_PERCENT | R/W    | 0h      | Priority 2 Transmit Percentage - This percentage value is sent from FIFO priority 2 (maximum) when the p1_pri2_shape_en is set (queue shaping enabled). This is the percentage of the wire that packets from priority 2 receive (which includes interpacket gap and preamble bytes). If shaping is enabled on this queue then this value must be between zero and 0d100 (not inclusive). |
| 7     | RESERVED          | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                          |
| 6-0   | PRI1_SEND_PERCENT | R/W    | 0h      | Priority 1 Transmit Percentage - This percentage value is sent from FIFO priority 1 (maximum) when the p1_pri1_shape_en is set (queue shaping enabled). This is the percentage of the wire that packets from priority 1 receive (which includes interpacket gap and preamble bytes). If shaping is enabled on this queue then this value must be between zero and 0d100 (not inclusive). |

<!-- image -->

## 14.5.6.27 P1\_RX\_DSCP\_PRI\_MAP0 Register (offset = 130h) [reset = 0h]

P1\_RX\_DSCP\_PRI\_MAP0 is shown in Figure 14-147 and described in Table 14-161.

CPSW PORT 1 RX DSCP PRIORITY TO RX PACKET MAPPING REG 0

## Figure 14-147. P1\_RX\_DSCP\_PRI\_MAP0 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI7   |      | RESE RVED |      | PRI6   |      | RESE RVED |      | PRI5   |      | RESE RVED |      | PRI4   |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI3   |      | RESE RVED |      | PRI2   |      | RESE RVED |      | PRI1   |      | RESE RVED |      | PRI0   |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-161. P1\_RX\_DSCP\_PRI\_MAP0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                              |
| 30-28 | PRI7     | R/W    | 0h      | Priority 7 - A packet TOS of 0d7 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                              |
| 26-24 | PRI6     | R/W    | 0h      | Priority 6 - A packet TOS of 0d6 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                              |
| 22-20 | PRI5     | R/W    | 0h      | Priority 5 - A packet TOS of 0d5 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                              |
| 18-16 | PRI4     | R/W    | 0h      | Priority 4 - A packet TOS of 0d4 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                              |
| 14-12 | PRI3     | R/W    | 0h      | Priority 3 - A packet TOS of 0d3 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                              |
| 10-8  | PRI2     | R/W    | 0h      | Priority 2 - A packet TOS of 0d2 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                              |
| 6-4   | PRI1     | R/W    | 0h      | Priority 1 - A packet TOS of 0d1 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                              |
| 2-0   | PRI0     | R/W    | 0h      | Priority 0 - A packet TOS of 0d0 is mapped to this received packet priority. |

<!-- image -->

www.ti.com

## 14.5.6.28 P1\_RX\_DSCP\_PRI\_MAP1 Register (offset = 134h) [reset = 0h]

P1\_RX\_DSCP\_PRI\_MAP1 is shown in Figure 14-148 and described in Table 14-162.

CPSW PORT 1 RX DSCP PRIORITY TO RX PACKET MAPPING REG 1

## Figure 14-148. P1\_RX\_DSCP\_PRI\_MAP1 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI15  |      | RESE RVED |      | PRI14  |      | RESE RVED |      | PRI13  |      | RESE RVED |      | PRI12  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI11  |      | RESE RVED |      | PRI10  |      | RESE RVED |      | PRI9   |      | RESE RVED |      | PRI8   |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-162. P1\_RX\_DSCP\_PRI\_MAP1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI15    | R/W    | 0h      | Priority 15 - A packet TOS of 0d15 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI14    | R/W    | 0h      | Priority 14 - A packet TOS of 0d14 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI13    | R/W    | 0h      | Priority 13 - A packet TOS of 0d13 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI12    | R/W    | 0h      | Priority 12 - A packet TOS of 0d12 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI11    | R/W    | 0h      | Priority 11 - A packet TOS of 0d11 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI10    | R/W    | 0h      | Priority 10 - A packet TOS of 0d10 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI9     | R/W    | 0h      | Priority 9 - A packet TOS of 0d9 is mapped to this received packet priority.   |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI8     | R/W    | 0h      | Priority 8 - A packet TOS of 0d8 is mapped to this received packet priority.   |

<!-- image -->

## 14.5.6.29 P1\_RX\_DSCP\_PRI\_MAP2 Register (offset = 138h) [reset = 0h]

P1\_RX\_DSCP\_PRI\_MAP2 is shown in Figure 14-149 and described in Table 14-163.

CPSW PORT 1 RX DSCP PRIORITY TO RX PACKET MAPPING REG 2

Figure 14-149. P1\_RX\_DSCP\_PRI\_MAP2 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI23  |      | RESE RVED |      | PRI22  |      | RESE RVED |      | PRI21  |      | RESE RVED |      | PRI20  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI19  |      | RESE RVED |      | PRI18  |      | RESE RVED |      | PRI17  |      | RESE RVED |      | PRI16  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-163. P1\_RX\_DSCP\_PRI\_MAP2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI23    | R/W    | 0h      | Priority 23 - A packet TOS of 0d23 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI22    | R/W    | 0h      | Priority 22 - A packet TOS of 0d22 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI21    | R/W    | 0h      | Priority 21 - A packet TOS of 0d21 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI20    | R/W    | 0h      | Priority 20 - A packet TOS of 0d20 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI19    | R/W    | 0h      | Priority 19 - A packet TOS of 0d19 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI18    | R/W    | 0h      | Priority 18 - A packet TOS of 0d18 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI17    | R/W    | 0h      | Priority 17 - A packet TOS of 0d17 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI16    | R/W    | 0h      | Priority 16 - A packet TOS of 0d16 is mapped to this received packet priority. |

<!-- image -->

www.ti.com

## 14.5.6.30 P1\_RX\_DSCP\_PRI\_MAP3 Register (offset = 13Ch) [reset = 0h]

P1\_RX\_DSCP\_PRI\_MAP3 is shown in Figure 14-150 and described in Table 14-164. CPSW PORT 1 RX DSCP PRIORITY TO RX PACKET MAPPING REG 3

## Figure 14-150. P1\_RX\_DSCP\_PRI\_MAP3 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI31  |      | RESE RVED |      | PRI30  |      | RESE RVED |      | PRI29  |      | RESE RVED |      | PRI28  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI27  |      | RESE RVED |      | PRI26  |      | RESE RVED |      | PRI25  |      | RESE RVED |      | PRI24  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-164. P1\_RX\_DSCP\_PRI\_MAP3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI31    | R/W    | 0h      | Priority 31 - A packet TOS of 0d31 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI30    | R/W    | 0h      | Priority 30 - A packet TOS of 0d30 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI29    | R/W    | 0h      | Priority 29 - A packet TOS of 0d39 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI28    | R/W    | 0h      | Priority 28 - A packet TOS of 0d28 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI27    | R/W    | 0h      | Priority 27 - A packet TOS of 0d27 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI26    | R/W    | 0h      | Priority 26 - A packet TOS of 0d26 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI25    | R/W    | 0h      | Priority 25 - A packet TOS of 0d25 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI24    | R/W    | 0h      | Priority 24 - A packet TOS of 0d24 is mapped to this received packet priority. |

<!-- image -->

## 14.5.6.31 P1\_RX\_DSCP\_PRI\_MAP4 Register (offset = 140h) [reset = 0h]

P1\_RX\_DSCP\_PRI\_MAP4 is shown in Figure 14-151 and described in Table 14-165. CPSW PORT 1 RX DSCP PRIORITY TO RX PACKET MAPPING REG 4

## Figure 14-151. P1\_RX\_DSCP\_PRI\_MAP4 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI39  |      | RESE RVED |      | PRI38  |      | RESE RVED |      | PRI37  |      | RESE RVED |      | PRI36  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI35  |      | RESE RVED |      | PRI34  |      | RESE RVED |      | PRI33  |      | RESE RVED |      | PRI32  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-165. P1\_RX\_DSCP\_PRI\_MAP4 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI39    | R/W    | 0h      | Priority 39 - A packet TOS of 0d39 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI38    | R/W    | 0h      | Priority 38 - A packet TOS of 0d38 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI37    | R/W    | 0h      | Priority 37 - A packet TOS of 0d37 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI36    | R/W    | 0h      | Priority 36 - A packet TOS of 0d36 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI35    | R/W    | 0h      | Priority 35 - A packet TOS of 0d35 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI34    | R/W    | 0h      | Priority 34 - A packet TOS of 0d34 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI33    | R/W    | 0h      | Priority 33 - A packet TOS of 0d33 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI32    | R/W    | 0h      | Priority 32 - A packet TOS of 0d32 is mapped to this received packet priority. |

<!-- image -->

www.ti.com

## 14.5.6.32 P1\_RX\_DSCP\_PRI\_MAP5 Register (offset = 144h) [reset = 0h]

P1\_RX\_DSCP\_PRI\_MAP5 is shown in Figure 14-152 and described in Table 14-166.

CPSW PORT 1 RX DSCP PRIORITY TO RX PACKET MAPPING REG 5

## Figure 14-152. P1\_RX\_DSCP\_PRI\_MAP5 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI47  |      | RESE RVED |      | PRI46  |      | RESE RVED |      | PRI45  |      | RESE RVED |      | PRI44  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI43  |      | RESE RVED |      | PRI42  |      | RESE RVED |      | PRI41  |      | RESE RVED |      | PRI40  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-166. P1\_RX\_DSCP\_PRI\_MAP5 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI47    | R/W    | 0h      | Priority 47 - A packet TOS of 0d47 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI46    | R/W    | 0h      | Priority 46 - A packet TOS of 0d46 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI45    | R/W    | 0h      | Priority 45 - A packet TOS of 0d45 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI44    | R/W    | 0h      | Priority 44 - A packet TOS of 0d44 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI43    | R/W    | 0h      | Priority 43 - A packet TOS of 0d43 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI42    | R/W    | 0h      | Priority 42 - A packet TOS of 0d42 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI41    | R/W    | 0h      | Priority 41 - A packet TOS of 0d41 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI40    | R/W    | 0h      | Priority 40 - A packet TOS of 0d40 is mapped to this received packet priority. |

<!-- image -->

## 14.5.6.33 P1\_RX\_DSCP\_PRI\_MAP6 Register (offset = 148h) [reset = 0h]

P1\_RX\_DSCP\_PRI\_MAP6 is shown in Figure 14-153 and described in Table 14-167. CPSW PORT 1 RX DSCP PRIORITY TO RX PACKET MAPPING REG 6

## Figure 14-153. P1\_RX\_DSCP\_PRI\_MAP6 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI55  |      | RESE RVED |      | PRI54  |      | RESE RVED |      | PRI53  |      | RESE RVED |      | PRI52  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI51  |      | RESE RVED |      | PRI50  |      | RESE RVED |      | PRI49  |      | RESE RVED |      | PRI48  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-167. P1\_RX\_DSCP\_PRI\_MAP6 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI55    | R/W    | 0h      | Priority 55 - A packet TOS of 0d55 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI54    | R/W    | 0h      | Priority 54 - A packet TOS of 0d54 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI53    | R/W    | 0h      | Priority 53 - A packet TOS of 0d53 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI52    | R/W    | 0h      | Priority 52 - A packet TOS of 0d52 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI51    | R/W    | 0h      | Priority 51 - A packet TOS of 0d51 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI50    | R/W    | 0h      | Priority 50 - A packet TOS of 0d50 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI49    | R/W    | 0h      | Priority 49 - A packet TOS of 0d49 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI48    | R/W    | 0h      | Priority 48 - A packet TOS of 0d48 is mapped to this received packet priority. |

<!-- image -->

www.ti.com

## 14.5.6.34 P1\_RX\_DSCP\_PRI\_MAP7 Register (offset = 14Ch) [reset = 0h]

P1\_RX\_DSCP\_PRI\_MAP7 is shown in Figure 14-154 and described in Table 14-168. CPSW PORT 1 RX DSCP PRIORITY TO RX PACKET MAPPING REG 7

## Figure 14-154. P1\_RX\_DSCP\_PRI\_MAP7 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI63  |      | RESE RVED |      | PRI62  |      | RESE RVED |      | PRI61  |      | RESE RVED |      | PRI60  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI59  |      | RESE RVED |      | PRI58  |      | RESE RVED |      | PRI57  |      | RESE RVED |      | PRI56  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-168. P1\_RX\_DSCP\_PRI\_MAP7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI63    | R/W    | 0h      | Priority 63 - A packet TOS of 0d63 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI62    | R/W    | 0h      | Priority 62 - A packet TOS of 0d62 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI61    | R/W    | 0h      | Priority 61 - A packet TOS of 0d61 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI60    | R/W    | 0h      | Priority 60 - A packet TOS of 0d60 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI59    | R/W    | 0h      | Priority 59 - A packet TOS of 0d59 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI58    | R/W    | 0h      | Priority 58 - A packet TOS of 0d58 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI57    | R/W    | 0h      | Priority 57 - A packet TOS of 0d57 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI56    | R/W    | 0h      | Priority 56 - A packet TOS of 0d56 is mapped to this received packet priority. |

## 14.5.6.35 P2\_CONTROL Register (offset = 200h) [reset = 0h]

P2\_CONTROL is shown in Figure 14-155 and described in Table 14-169. CPSW\_3GF PORT 2 CONTROL REGISTER

Figure 14-155. P2\_CONTROL Register

| 31       | 30        | 29                 | 28                 | 27               | 26               | 25          | 24                  |
|----------|-----------|--------------------|--------------------|------------------|------------------|-------------|---------------------|
|          |           |                    | RESERVED           |                  |                  |             | P2_PASS_PRI _TAGGED |
|          |           |                    | R/W-0h             |                  |                  |             | R/W-0h              |
| 23       | 22        | 21                 | 20                 | 19               | 18               | 17          | 16                  |
| RESERVED | RESERVED  | P2_VLAN_LTY PE2_EN | P2_VLAN_LTY PE1_EN |                  | RESERVED         |             | P2_DSCP_PRI _EN     |
| R/W-0h   | R/W-0h    | R/W-0h             | R/W-0h             |                  | R/W-0h           |             | R/W-0h              |
| 15       | 14        | 13                 | 12                 | 11               | 10               | 9           | 8                   |
| RESERVED | P2_TS_320 | P2_TS_319          | P2_TS_132          | P2_TS_131        | P2_TS_130        | P2_TS_129   | P2_TS_TTL_N ONZERO  |
| R/W-0h   | R/W-0h    | R/W-0h             | R/W-0h             | R/W-0h           | R/W-0h           | R/W-0h      | R/W-0h              |
| 7        | 6         | 5                  | 4                  | 3                | 2                | 1           | 0                   |
|          | RESERVED  |                    | P2_TS_ANNEX _D_EN  | P2_TS_LTYPE 2_EN | P2_TS_LTYPE 1_EN | P2_TS_TX_EN | P2_TS_RX_EN         |
|          | R/W-0h    |                    | R/W-0h             | R-0h             | R/W-0h           | R/W-0h      | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-169. P2\_CONTROL Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                                              |
|-------|--------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-25 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 24    | P2_PASS_PRI_TAGGED | R/W    | 0h      | Port 2 Pass Priority Tagged 0 - Priority tagged packets have the zero VID replaced with the input port P2_PORT_VLAN [11:0] 1 - Priority tagged packets are processed unchanged.                                                          |
| 23-22 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 21    | P2_VLAN_LTYPE2_EN  | R/W    | 0h      | Port 2 VLAN LTYPE 2 enable 0 - disabled 1 - VLAN LTYPE2 enabled on transmit and receive                                                                                                                                                  |
| 20    | P2_VLAN_LTYPE1_EN  | R/W    | 0h      | Port 2 VLAN LTYPE 1 enable 0 - disabled 1 - VLAN LTYPE1 enabled on transmit and receive                                                                                                                                                  |
| 19-17 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 16    | P2_DSCP_PRI_EN     | R/W    | 0h      | Port 0 DSCP Priority Enable 0 - DSCP priority disabled 1 - DSCP priority enabled. All non-tagged IPV4 packets have their received packet priority determined by mapping the 6 TOS bits through the port DSCP priority mapping registers. |
| 15    | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                          |
| 14    | P2_TS_320          | R/W    | 0h      | Port 2 Time Sync Destination Port Number 320 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination port number 320 (decimal) is enabled.                                                                               |
| 13    | P2_TS_319          | R/W    | 0h      | Port 2 Time Sync Destination Port Number 319 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination port number 319 (decimal) is enabled.                                                                               |
| 12    | P2_TS_132          | R/W    | 0h      | Port 2 Time Sync Destination IP Address 132 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination IP address number 132 (decimal) is enabled.                                                                          |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Table 14-169. P2\_CONTROL Register Field Descriptions (continued)

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                     |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 11    | P2_TS_131         | R/W    | 0h      | Port 2 Time Sync Destination IP Address 131 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination IP address number 131 (decimal) is enabled. |
| 10    | P2_TS_130         | R/W    | 0h      | Port 2 Time Sync Destination IP Address 130 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination IP address number 130 (decimal) is enabled. |
| 9     | P2_TS_129         | R/W    | 0h      | Port 2 Time Sync Destination IP Address 129 enable 0 - disabled 1 - Annex D (UDP/IPv4) time sync packet destination IP address number 129 (decimal) is enabled. |
| 8     | P2_TS_TTL_NONZERO | R/W    | 0h      | Port 2 Time Sync Time To Live Non-zero enable. 0 = TTL must be zero. 1 = TTL may be any value.                                                                  |
| 7-5   | RESERVED          | R/W    | 0h      |                                                                                                                                                                 |
| 4     | P2_TS_ANNEX_D_EN  | R/W    | 0h      | Port 2 Time Sync Annex D enable 0 - Annex D disabled 1 - Annex D enabled                                                                                        |
| 3     | P2_TS_LTYPE2_EN   | R      | 0h      | Port 2 Time Sync LTYPE 2 enable 0 - disabled 1 - enabled                                                                                                        |
| 2     | P2_TS_LTYPE1_EN   | R/W    | 0h      | Port 2 Time Sync LTYPE 1 enable 0 - disabled 1 - enabled                                                                                                        |
| 1     | P2_TS_TX_EN       | R/W    | 0h      | Port 2 Time Sync Transmit Enable 0 - disabled 1 - enabled                                                                                                       |
| 0     | P2_TS_RX_EN       | R/W    | 0h      | Port 2 Time Sync Receive Enable 0 - Port 1 Receive Time Sync disabled 1 - Port 1 Receive Time Sync enabled                                                      |

## 14.5.6.36 P2\_MAX\_BLKS Register (offset = 208h) [reset = 113h]

P2\_MAX\_BLKS is shown in Figure 14-156 and described in Table 14-170. CPSW PORT 2 MAXIMUM FIFO BLOCKS REGISTER

Figure 14-156. P2\_MAX\_BLKS Register

| 31       | 30       | 29             | 28       | 27       | 26                             | 25       | 24       |
|----------|----------|----------------|----------|----------|--------------------------------|----------|----------|
| RESERVED | RESERVED | RESERVED       | RESERVED | RESERVED | RESERVED                       | RESERVED | RESERVED |
| 22       | 22       | 22             | 22       | 22       | 22                             | 22       | 22       |
| 23 21 15 | 20       | 19 R/W-0h      | 18       | 17       | 16                             | RESERVED | 14       |
| 13       | 13       | 13             | 13       | 13       | 13                             | 13       | 13       |
| 12       | 12       | 12             | 12       | 12       | 12                             | 12       | 12       |
| 11       | 10       | 9              | 8        | RESERVED | P2_TX_MAX_B LKS R/W-0h R/W-11h | 6        | 5        |
| 7 4      | 7 4      | 7 4            | 7 4      | 7 4      | 7 4                            | 7 4      | 3        |
| 2        | 2        | 2              | 2        | 2        | 2                              | 2        | 2        |
| 1        | 0        | P2_TX_MAX_BLKS |          |          | P2_RX_MAX_BLKS                 |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-170. P2\_MAX\_BLKS Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 8-4   | P2_TX_MAX_BLKS | R/W    | 11h     | Transmit FIFO Maximum Blocks - This value is the maximum number of 1k memory blocks that may be allocated to the FIFO's logical transmit priority queues. 0x11 is the recommended value of p2_tx_max_blks unless the port is in fullduplex flow control mode. In flow control mode, the p2_rx_max_blks will need to increase in order to accept the required run out in fullduplex mode. This value will need to decrease by the amount of increase in p2_rx_max_blks. 0xe is the minimum value tx max blks. |
| 3-0   | P2_RX_MAX_BLKS | R/W    | 3h      | Receive FIFO Maximum Blocks - This value is the maximum number of 1k memory blocks that may be allocated to the FIFO's logical receive queue. This value must be greater than or equal to 0x3. It should be increased In fullduplex flow control mode to 0x5 or 0x6 depending on the required runout space. The p2_tx_max_blks value must be decreased by the amount of increase in p2_rx_max_blks. 0x3 is the minimum value rx max blks and 0x6 is the maximum value.                                       |

<!-- image -->

<!-- image -->

## 14.5.6.37 P2\_BLK\_CNT Register (offset = 20Ch) [reset = 41h]

P2\_BLK\_CNT is shown in Figure 14-157 and described in Table 14-171. CPSW PORT 2 FIFO BLOCK USAGE COUNT (READ ONLY)

## Figure 14-157. P2\_BLK\_CNT Register

| 31       | 30       | 29            | 28                    | 27       | 26       | 25       | 24       |
|----------|----------|---------------|-----------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED      | RESERVED              | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22            | 22                    | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h       | 18                    | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13            | 13                    | 13       | 13       | 13       | 13       |
| 12       | 12       | 12            | 12                    | 12       | 12       | 12       | 12       |
| 11       | 10       | 9             | 8 P2_TX_BLK_C NT R-4h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5             | 5                     | 5        | 5        | 5        | 4        |
| 3        | 3        | 3             | 3                     | 3        | 3        | 3        | 2        |
| 1        | 0        | P2_TX_BLK_CNT | P2_RX_BLK_CNT         |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-171. P2\_BLK\_CNT Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                           |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED      | R      | 0h      |                                                                                                                       |
| 8-4   | P2_TX_BLK_CNT | R      | 4h      | Port 2 Transmit Block Count Usage - This value is the number of blocks allocated to the FIFO logical transmit queues. |
| 3-0   | P2_RX_BLK_CNT | R      | 1h      | Port 2 Receive Block Count Usage - This value is the number of blocks allocated to the FIFO logical receive queues.   |

## 14.5.6.38 P2\_TX\_IN\_CTL Register (offset = 210h) [reset = 80040C0h]

P2\_TX\_IN\_CTL is shown in Figure 14-158 and described in Table 14-172. CPSW PORT 2 TRANSMIT FIFO CONTROL

## Figure 14-158. P2\_TX\_IN\_CTL Register

| 31          | 30          | 29          | 28          | 27            | 26            | 25            | 24            |
|-------------|-------------|-------------|-------------|---------------|---------------|---------------|---------------|
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | HOST_BLKS_REM | HOST_BLKS_REM | HOST_BLKS_REM | HOST_BLKS_REM |
| R/W-        | R/W-        | R/W-        | R/W-        | R/W-8h        | R/W-8h        | R/W-8h        | R/W-8h        |
| 23          | 22          | 21          | 20          | 19            | 18            | 17            | 16            |
| TX_RATE_EN  | TX_RATE_EN  | TX_RATE_EN  | TX_RATE_EN  | RESERVED      | RESERVED      | TX_IN_SEL     | TX_IN_SEL     |
| R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-          | R/W-          | R/W-0h        | R/W-0h        |
| 15          | 14          | 13          | 12          | 11            | 10            | 9             | 8             |
| TX_BLKS_REM | TX_BLKS_REM | TX_BLKS_REM | TX_BLKS_REM | RESERVED      | RESERVED      | TX_PRI_WDS    | TX_PRI_WDS    |
| R/W-4h      | R/W-4h      | R/W-4h      | R/W-4h      | R/W-          | R/W-          | R/W-C0h       | R/W-C0h       |
| 7           | 6           | 5           | 4           | 3             | 2             | 1             | 0             |
| TX_PRI_WDS  | TX_PRI_WDS  | TX_PRI_WDS  | TX_PRI_WDS  | TX_PRI_WDS    | TX_PRI_WDS    | TX_PRI_WDS    | TX_PRI_WDS    |
| R/W-C0h     | R/W-C0h     | R/W-C0h     | R/W-C0h     | R/W-C0h       | R/W-C0h       | R/W-C0h       | R/W-C0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-172. P2\_TX\_IN\_CTL Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                    |
|-------|---------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED      | R/W    |         |                                                                                                                                |
| 27-24 | HOST_BLKS_REM | R/W    | 8h      | Transmit FIFO Blocks that must be free before a non rate-limited CPDMA channel can begin sending a packet to the FIFO.         |
| 23-20 | TX_RATE_EN    | R/W    | 0h      | Transmit FIFO Input Rate Enable                                                                                                |
| 19-18 | RESERVED      | R/W    |         |                                                                                                                                |
| 17-16 | TX_IN_SEL     | R/W    | 0h      | Transmit FIFO Input Queue Type Select 00 - Normal priority mode 01 - reserved 10 - Rate Limit mode 11 - reserved               |
| 15-12 | TX_BLKS_REM   | R/W    | 4h      | Transmit FIFO Input Blocks to subtract in dual mac mode and blocks to subtract on non rate-limited traffic in rate-limit mode. |
| 11-10 | RESERVED      | R/W    |         |                                                                                                                                |
| 9-0   | TX_PRI_WDS    | R/W    | C0h     | Transmit FIFO Words in queue                                                                                                   |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.6.39 P2\_PORT\_VLAN Register (offset = 214h) [reset = 0h]

P2\_PORT\_VLAN is shown in Figure 14-159 and described in Table 14-173. CPSW PORT 2 VLAN REGISTER

## Figure 14-159. P2\_PORT\_VLAN Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|          | PORT_PRI |          | PORT_CFI |          | PORT_VID |          |          |
|          | R/W-0h   |          | R/W-0h   |          | R/W-0h   |          |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID | PORT_VID |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-173. P2\_PORT\_VLAN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                |
|-------|----------|--------|---------|--------------------------------------------|
| 31-16 | RESERVED | R/W    | 0h      |                                            |
| 15-13 | PORT_PRI | R/W    | 0h      | Port VLAN Priority (7 is highest priority) |
| 12    | PORT_CFI | R/W    | 0h      | Port CFI bit                               |
| 11-0  | PORT_VID | R/W    | 0h      | Port VLAN ID                               |

## 14.5.6.40 P2\_TX\_PRI\_MAP Register (offset = 218h) [reset = 33221001h]

P2\_TX\_PRI\_MAP is shown in Figure 14-160 and described in Table 14-174. CPSW PORT 2 TX HEADER PRIORITY TO SWITCH PRI MAPPING REGISTER

## Figure 14-160. P2\_TX\_PRI\_MAP Register

| 31 30         | 29            | 27 26         | 25            | 24 23    | 22 21    | 20       | 19     | 18       | 17 16   |
|---------------|---------------|---------------|---------------|----------|----------|----------|--------|----------|---------|
| RESERVED PRI7 | RESERVED PRI7 | RESERVED PRI6 | RESERVED PRI6 | RESERVED | RESERVED |          | PRI5   | RESERVED | PRI4    |
| R/W-0h        | R/W-3h        | R/W-0h        | R/W-0h        | R/W-3h   | R/W-3h   | R/W-0h   | R/W-2h | R/W-0h   | R/W-2h  |
| 15 14         | 13            | 11            | 10            | 9        | 8 7      | 6        | 5 4    | 3 2      | 1 0     |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | PRI2     | PRI2     | RESERVED | PRI1   | RESERVED | PRI0    |
| R/W-0h        | R/W-0h        | R/W-1h R/W-0h | R/W-1h R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h   | R/W-1h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-174. P2\_TX\_PRI\_MAP Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------|
| 31-30 | RESERVED | R/W    | 0h      |                                                                              |
| 29-28 | PRI7     | R/W    | 3h      | Priority 7 - A packet header priority of 0x7 is given this switch queue pri. |
| 27-26 | RESERVED | R/W    | 0h      |                                                                              |
| 25-24 | PRI6     | R/W    | 3h      | Priority 6 - A packet header priority of 0x6 is given this switch queue pri. |
| 23-22 | RESERVED | R/W    | 0h      |                                                                              |
| 21-20 | PRI5     | R/W    | 2h      | Priority 5 - A packet header priority of 0x5 is given this switch queue pri. |
| 19-18 | RESERVED | R/W    | 0h      |                                                                              |
| 17-16 | PRI4     | R/W    | 2h      | Priority 4 - A packet header priority of 0x4 is given this switch queue pri. |
| 15-14 | RESERVED | R/W    | 0h      |                                                                              |
| 13-12 | PRI3     | R/W    | 1h      | Priority 3 - A packet header priority of 0x3 is given this switch queue pri. |
| 11-10 | RESERVED | R/W    | 0h      |                                                                              |
| 9-8   | PRI2     | R/W    | 0h      | Priority 2 - A packet header priority of 0x2 is given this switch queue pri. |
| 7-6   | RESERVED | R/W    | 0h      |                                                                              |
| 5-4   | PRI1     | R/W    | 0h      | Priority 1 - A packet header priority of 0x1 is given this switch queue pri. |
| 3-2   | RESERVED | R/W    | 0h      |                                                                              |
| 1-0   | PRI0     | R/W    | 1h      | Priority 0 - A packet header priority of 0x0 is given this switch queue pri. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.6.41 P2\_TS\_SEQ\_MTYPE Register (offset = 21Ch) [reset = 1E0000h]

P2\_TS\_SEQ\_MTYPE is shown in Figure 14-161 and described in Table 14-175. CPSW\_3GF PORT 2 TIME SYNC SEQUENCE ID OFFSET AND MSG TYPE.

## Figure 14-161. P2\_TS\_SEQ\_MTYPE Register

| 31                           | 30                           | 29                           | 28                           | 27                           | 26                           | 25                           | 24                           |
|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|
| RESERVED                     | RESERVED                     | RESERVED                     | RESERVED                     | RESERVED                     | RESERVED                     | RESERVED                     | RESERVED                     |
| R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       |
| 23                           | 22                           | 21                           | 20                           | 19                           | 18                           | 17                           | 16                           |
| RESERVED P2_TS_SEQ_ID_OFFSET | RESERVED P2_TS_SEQ_ID_OFFSET | RESERVED P2_TS_SEQ_ID_OFFSET | RESERVED P2_TS_SEQ_ID_OFFSET | RESERVED P2_TS_SEQ_ID_OFFSET | RESERVED P2_TS_SEQ_ID_OFFSET | RESERVED P2_TS_SEQ_ID_OFFSET | RESERVED P2_TS_SEQ_ID_OFFSET |
| R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               | R/W-0h R/W-1Eh               |
| 15                           | 14                           | 13                           | 12                           | 11                           | 10                           | 9                            | 8                            |
| P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            |
| R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       |
| 7                            | 6                            | 5                            | 4                            | 3                            | 2                            | 1                            | 0                            |
| P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            | P2_TS_MSG_TYPE_EN            |
| R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       | R/W-0h                       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-175. P2\_TS\_SEQ\_MTYPE Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                          |
|-------|---------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-22 | RESERVED            | R/W    | 0h      |                                                                                                                                                                                      |
| 21-16 | P2_TS_SEQ_ID_OFFSET | R/W    | 1Eh     | Port 2 Time Sync Sequence ID Offset This is the number of octets that the sequence ID is offset in the tx and rx time sync message header. The minimum value is 6.                   |
| 15-0  | P2_TS_MSG_TYPE_EN   | R/W    | 0h      | Port 2 Time Sync Message Type Enable - Each bit in this field enables the corresponding message type in receive and transmit time sync messages (Bit 0 enables message type 0 etc.). |

## 14.5.6.42 P2\_SA\_LO Register (offset = 220h) [reset = 0h]

P2\_SA\_LO is shown in Figure 14-162 and described in Table 14-176. CPSW CPGMAC\_SL2 SOURCE ADDRESS LOW REGISTER

## Figure 14-162. P2\_SA\_LO Register

| 31                             | 30                             | 29                             | 28                             | 27                             | 26                             | 25                             | 24                             | 23                             | 22                             | 21                             | 20                             | 19                             | 18                             | 17                             | 16                             |
|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|
| RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       |
| R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         | R/W-0h                         |
| 15                             | 14                             | 13                             | 12                             | 11                             | 10                             | 9                              | 8                              | 7                              | 6                              | 5                              | 4                              | 3                              | 2                              | 1                              | 0                              |
| MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 | MACSRCADDR_7_0 MACSRCADDR_15_8 |
| R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  | R/W-0h R/W-0h                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-176. P2\_SA\_LO Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                          |
|-------|-----------------|--------|---------|--------------------------------------|
| 31-16 | RESERVED        | R/W    | 0h      |                                      |
| 15-8  | MACSRCADDR_7_0  | R/W    | 0h      | Source Address Lower 8 bits (byte 0) |
| 7-0   | MACSRCADDR_15_8 | R/W    | 0h      | Source Address bits 15:8 (byte 1)    |

<!-- image -->

www.ti.com

<!-- image -->

## 14.5.6.43 P2\_SA\_HI Register (offset = 224h) [reset = 0h]

P2\_SA\_HI is shown in Figure 14-163 and described in Table 14-177. CPSW CPGMAC\_SL2 SOURCE ADDRESS HIGH REGISTER

## Figure 14-163. P2\_SA\_HI Register

| 31               | 30               | 29               | 28               | 27               | 26               | 25               |                  | 24               | 23               | 22               | 21               | 20               | 19               | 18               | 17               | 16               |
|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|
| MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_23_16 | MACSRCADDR_31_23 | MACSRCADDR_31_23 | MACSRCADDR_31_23 | MACSRCADDR_31_23 | MACSRCADDR_31_23 | MACSRCADDR_31_23 | MACSRCADDR_31_23 | MACSRCADDR_31_23 |
| R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 15               | 14               | 13               | 12               | 11               | 10               | 9                | 8                |                  | 7                | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
| MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_39_32 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 | MACSRCADDR_47_40 |
| R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-177. P2\_SA\_HI Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                        |
|-------|------------------|--------|---------|------------------------------------|
| 31-24 | MACSRCADDR_23_16 | R/W    | 0h      | Source Address bits 23:16 (byte 2) |
| 23-16 | MACSRCADDR_31_23 | R/W    | 0h      | Source Address bits 31:23 (byte 3) |
| 15-8  | MACSRCADDR_39_32 | R/W    | 0h      | Source Address bits 39:32 (byte 4) |
| 7-0   | MACSRCADDR_47_40 | R/W    | 0h      | Source Address bits 47:40 (byte 5) |

## 14.5.6.44 P2\_SEND\_PERCENT Register (offset = 228h) [reset = 0h]

P2\_SEND\_PERCENT is shown in Figure 14-164 and described in Table 14-178. CPSW PORT 2 TRANSMIT QUEUE SEND PERCENTAGES

## Figure 14-164. P2\_SEND\_PERCENT Register

| 31        | 30                | 29                | 28                | 27                | 26                | 25                | 24                | 23        | 22                | 21                | 20                | 19                | 18                |                   | 17                | 16                |
|-----------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-----------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
|           | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED  | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT | PRI3_SEND_PERCENT |
| R/W-0h    | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h    | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |
| 15        | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 | 7         | 6                 | 5                 | 4                 | 3                 |                   | 2                 | 1                 | 0                 |
| RESE RVED | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | PRI2_SEND_PERCENT | RESE RVED | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT | PRI1_SEND_PERCENT |
| R/W- 0h   | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W- 0h   | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-178. P2\_SEND\_PERCENT Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                              |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-23 | RESERVED          | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                          |
| 22-16 | PRI3_SEND_PERCENT | R/W    | 0h      | Priority 3 Transmit Percentage - This percentage value is sent from FIFO priority 3 (maximum) when the p1_pri3_shape_en is set (queue shaping enabled). This is the percentage of the wire that packets from priority 3 receive (which includes interpacket gap and preamble bytes). If shaping is enabled on this queue then this value must be between zero and 0d100 (not inclusive). |
| 15    | RESERVED          | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                          |
| 14-8  | PRI2_SEND_PERCENT | R/W    | 0h      | Priority 2 Transmit Percentage - This percentage value is sent from FIFO priority 2 (maximum) when the p1_pri2_shape_en is set (queue shaping enabled). This is the percentage of the wire that packets from priority 2 receive (which includes interpacket gap and preamble bytes). If shaping is enabled on this queue then this value must be between zero and 0d100 (not inclusive). |
| 7     | RESERVED          | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                          |
| 6-0   | PRI1_SEND_PERCENT | R/W    | 0h      | Priority 1 Transmit Percentage - This percentage value is sent from FIFO priority 1 (maximum) when the p1_pri1_shape_en is set (queue shaping enabled). This is the percentage of the wire that packets from priority 1 receive (which includes interpacket gap and preamble bytes). If shaping is enabled on this queue then this value must be between zero and 0d100 (not inclusive). |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.6.45 P2\_RX\_DSCP\_PRI\_MAP0 Register (offset = 230h) [reset = 0h]

P2\_RX\_DSCP\_PRI\_MAP0 is shown in Figure 14-165 and described in Table 14-179.

CPSW PORT 2 RX DSCP PRIORITY TO RX PACKET MAPPING REG 0

## Figure 14-165. P2\_RX\_DSCP\_PRI\_MAP0 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI7   |      | RESE RVED |      | PRI6   |      | RESE RVED |      | PRI5   |      | RESE RVED |      | PRI4   |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI3   |      | RESE RVED |      | PRI2   |      | RESE RVED |      | PRI1   |      | RESE RVED |      | PRI0   |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-179. P2\_RX\_DSCP\_PRI\_MAP0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                              |
| 30-28 | PRI7     | R/W    | 0h      | Priority 7 - A packet TOS of 0d7 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                              |
| 26-24 | PRI6     | R/W    | 0h      | Priority 6 - A packet TOS of 0d6 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                              |
| 22-20 | PRI5     | R/W    | 0h      | Priority 5 - A packet TOS of 0d5 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                              |
| 18-16 | PRI4     | R/W    | 0h      | Priority 4 - A packet TOS of 0d4 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                              |
| 14-12 | PRI3     | R/W    | 0h      | Priority 3 - A packet TOS of 0d3 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                              |
| 10-8  | PRI2     | R/W    | 0h      | Priority 2 - A packet TOS of 0d2 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                              |
| 6-4   | PRI1     | R/W    | 0h      | Priority 1 - A packet TOS of 0d1 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                              |
| 2-0   | PRI0     | R/W    | 0h      | Priority 0 - A packet TOS of 0d0 is mapped to this received packet priority. |

<!-- image -->

## 14.5.6.46 P2\_RX\_DSCP\_PRI\_MAP1 Register (offset = 234h) [reset = 0h]

P2\_RX\_DSCP\_PRI\_MAP1 is shown in Figure 14-166 and described in Table 14-180.

CPSW PORT 2 RX DSCP PRIORITY TO RX PACKET MAPPING REG 1

## Figure 14-166. P2\_RX\_DSCP\_PRI\_MAP1 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI15  |      | RESE RVED |      | PRI14  |      | RESE RVED |      | PRI13  |      | RESE RVED |      | PRI12  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI11  |      | RESE RVED |      | PRI10  |      | RESE RVED |      | PRI9   |      | RESE RVED |      | PRI8   |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-180. P2\_RX\_DSCP\_PRI\_MAP1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI15    | R/W    | 0h      | Priority 15 - A packet TOS of 0d15 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI14    | R/W    | 0h      | Priority 14 - A packet TOS of 0d14 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI13    | R/W    | 0h      | Priority 13 - A packet TOS of 0d13 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI12    | R/W    | 0h      | Priority 12 - A packet TOS of 0d12 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI11    | R/W    | 0h      | Priority 11 - A packet TOS of 0d11 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI10    | R/W    | 0h      | Priority 10 - A packet TOS of 0d10 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI9     | R/W    | 0h      | Priority 9 - A packet TOS of 0d9 is mapped to this received packet priority.   |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI8     | R/W    | 0h      | Priority 8 - A packet TOS of 0d8 is mapped to this received packet priority.   |

<!-- image -->

www.ti.com

## 14.5.6.47 P2\_RX\_DSCP\_PRI\_MAP2 Register (offset = 238h) [reset = 0h]

P2\_RX\_DSCP\_PRI\_MAP2 is shown in Figure 14-167 and described in Table 14-181. CPSW PORT 2 RX DSCP PRIORITY TO RX PACKET MAPPING REG 2

## Figure 14-167. P2\_RX\_DSCP\_PRI\_MAP2 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI23  |      | RESE RVED |      | PRI22  |      | RESE RVED |      | PRI21  |      | RESE RVED |      | PRI20  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI19  |      | RESE RVED |      | PRI18  |      | RESE RVED |      | PRI17  |      | RESE RVED |      | PRI16  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-181. P2\_RX\_DSCP\_PRI\_MAP2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI23    | R/W    | 0h      | Priority 23 - A packet TOS of 0d23 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI22    | R/W    | 0h      | Priority 22 - A packet TOS of 0d22 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI21    | R/W    | 0h      | Priority 21 - A packet TOS of 0d21 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI20    | R/W    | 0h      | Priority 20 - A packet TOS of 0d20 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI19    | R/W    | 0h      | Priority 19 - A packet TOS of 0d19 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI18    | R/W    | 0h      | Priority 18 - A packet TOS of 0d18 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI17    | R/W    | 0h      | Priority 17 - A packet TOS of 0d17 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI16    | R/W    | 0h      | Priority 16 - A packet TOS of 0d16 is mapped to this received packet priority. |

<!-- image -->

## 14.5.6.48 P2\_RX\_DSCP\_PRI\_MAP3 Register (offset = 23Ch) [reset = 0h]

P2\_RX\_DSCP\_PRI\_MAP3 is shown in Figure 14-168 and described in Table 14-182. CPSW PORT 2 RX DSCP PRIORITY TO RX PACKET MAPPING REG 3

## Figure 14-168. P2\_RX\_DSCP\_PRI\_MAP3 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI31  |      | RESE RVED |      | PRI30  |      | RESE RVED |      | PRI29  |      | RESE RVED |      | PRI28  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI27  |      | RESE RVED |      | PRI26  |      | RESE RVED |      | PRI25  |      | RESE RVED |      | PRI24  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-182. P2\_RX\_DSCP\_PRI\_MAP3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI31    | R/W    | 0h      | Priority 31 - A packet TOS of 0d31 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI30    | R/W    | 0h      | Priority 30 - A packet TOS of 0d30 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI29    | R/W    | 0h      | Priority 29 - A packet TOS of 0d39 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI28    | R/W    | 0h      | Priority 28 - A packet TOS of 0d28 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI27    | R/W    | 0h      | Priority 27 - A packet TOS of 0d27 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI26    | R/W    | 0h      | Priority 26 - A packet TOS of 0d26 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI25    | R/W    | 0h      | Priority 25 - A packet TOS of 0d25 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI24    | R/W    | 0h      | Priority 24 - A packet TOS of 0d24 is mapped to this received packet priority. |

<!-- image -->

www.ti.com

## 14.5.6.49 P2\_RX\_DSCP\_PRI\_MAP4 Register (offset = 240h) [reset = 0h]

P2\_RX\_DSCP\_PRI\_MAP4 is shown in Figure 14-169 and described in Table 14-183. CPSW PORT 2 RX DSCP PRIORITY TO RX PACKET MAPPING REG 4

## Figure 14-169. P2\_RX\_DSCP\_PRI\_MAP4 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI39  |      | RESE RVED |      | PRI38  |      | RESE RVED |      | PRI37  |      | RESE RVED |      | PRI36  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI35  |      | RESE RVED |      | PRI34  |      | RESE RVED |      | PRI33  |      | RESE RVED |      | PRI32  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-183. P2\_RX\_DSCP\_PRI\_MAP4 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI39    | R/W    | 0h      | Priority 39 - A packet TOS of 0d39 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI38    | R/W    | 0h      | Priority 38 - A packet TOS of 0d38 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI37    | R/W    | 0h      | Priority 37 - A packet TOS of 0d37 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI36    | R/W    | 0h      | Priority 36 - A packet TOS of 0d36 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI35    | R/W    | 0h      | Priority 35 - A packet TOS of 0d35 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI34    | R/W    | 0h      | Priority 34 - A packet TOS of 0d34 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI33    | R/W    | 0h      | Priority 33 - A packet TOS of 0d33 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI32    | R/W    | 0h      | Priority 32 - A packet TOS of 0d32 is mapped to this received packet priority. |

<!-- image -->

## 14.5.6.50 P2\_RX\_DSCP\_PRI\_MAP5 Register (offset = 244h) [reset = 0h]

P2\_RX\_DSCP\_PRI\_MAP5 is shown in Figure 14-170 and described in Table 14-184.

CPSW PORT 2 RX DSCP PRIORITY TO RX PACKET MAPPING REG 5

## Figure 14-170. P2\_RX\_DSCP\_PRI\_MAP5 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI47  |      | RESE RVED |      | PRI46  |      | RESE RVED |      | PRI45  |      | RESE RVED |      | PRI44  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI43  |      | RESE RVED |      | PRI42  |      | RESE RVED |      | PRI41  |      | RESE RVED |      | PRI40  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-184. P2\_RX\_DSCP\_PRI\_MAP5 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI47    | R/W    | 0h      | Priority 47 - A packet TOS of 0d47 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI46    | R/W    | 0h      | Priority 46 - A packet TOS of 0d46 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI45    | R/W    | 0h      | Priority 45 - A packet TOS of 0d45 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI44    | R/W    | 0h      | Priority 44 - A packet TOS of 0d44 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI43    | R/W    | 0h      | Priority 43 - A packet TOS of 0d43 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI42    | R/W    | 0h      | Priority 42 - A packet TOS of 0d42 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI41    | R/W    | 0h      | Priority 41 - A packet TOS of 0d41 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI40    | R/W    | 0h      | Priority 40 - A packet TOS of 0d40 is mapped to this received packet priority. |

<!-- image -->

www.ti.com

## 14.5.6.51 P2\_RX\_DSCP\_PRI\_MAP6 Register (offset = 248h) [reset = 0h]

P2\_RX\_DSCP\_PRI\_MAP6 is shown in Figure 14-171 and described in Table 14-185. CPSW PORT 2 RX DSCP PRIORITY TO RX PACKET MAPPING REG 6

## Figure 14-171. P2\_RX\_DSCP\_PRI\_MAP6 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI55  |      | RESE RVED |      | PRI54  |      | RESE RVED |      | PRI53  |      | RESE RVED |      | PRI52  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI51  |      | RESE RVED |      | PRI50  |      | RESE RVED |      | PRI49  |      | RESE RVED |      | PRI48  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-185. P2\_RX\_DSCP\_PRI\_MAP6 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31    | RESERVED | R/W    | 0h      |                                                                                |
| 30-28 | PRI55    | R/W    | 0h      | Priority 55 - A packet TOS of 0d55 is mapped to this received packet priority. |
| 27    | RESERVED | R/W    | 0h      |                                                                                |
| 26-24 | PRI54    | R/W    | 0h      | Priority 54 - A packet TOS of 0d54 is mapped to this received packet priority. |
| 23    | RESERVED | R/W    | 0h      |                                                                                |
| 22-20 | PRI53    | R/W    | 0h      | Priority 53 - A packet TOS of 0d53 is mapped to this received packet priority. |
| 19    | RESERVED | R/W    | 0h      |                                                                                |
| 18-16 | PRI52    | R/W    | 0h      | Priority 52 - A packet TOS of 0d52 is mapped to this received packet priority. |
| 15    | RESERVED | R/W    | 0h      |                                                                                |
| 14-12 | PRI51    | R/W    | 0h      | Priority 51 - A packet TOS of 0d51 is mapped to this received packet priority. |
| 11    | RESERVED | R/W    | 0h      |                                                                                |
| 10-8  | PRI50    | R/W    | 0h      | Priority 50 - A packet TOS of 0d50 is mapped to this received packet priority. |
| 7     | RESERVED | R/W    | 0h      |                                                                                |
| 6-4   | PRI49    | R/W    | 0h      | Priority 49 - A packet TOS of 0d49 is mapped to this received packet priority. |
| 3     | RESERVED | R/W    | 0h      |                                                                                |
| 2-0   | PRI48    | R/W    | 0h      | Priority 48 - A packet TOS of 0d48 is mapped to this received packet priority. |