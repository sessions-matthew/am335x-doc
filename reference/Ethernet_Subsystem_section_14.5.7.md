<!-- image -->

## 14.5.6.52 P2\_RX\_DSCP\_PRI\_MAP7 Register (offset = 24Ch) [reset = 0h]

P2\_RX\_DSCP\_PRI\_MAP7 is shown in Figure 14-172 and described in Table 14-186.

CPSW PORT 2 RX DSCP PRIORITY TO RX PACKET MAPPING REG 7

## Figure 14-172. P2\_RX\_DSCP\_PRI\_MAP7 Register

| 31        | 30   | 29     | 28   | 27        | 26   | 25     | 24   | 23        | 22   | 21     | 20   | 19        | 18   | 17     | 16   |
|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|-----------|------|--------|------|
| RESE RVED |      | PRI63  |      | RESE RVED |      | PRI62  |      | RESE RVED |      | PRI61  |      | RESE RVED |      | PRI60  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |
| 15        | 14   | 13     | 12   | 11        | 10   | 9      | 8    | 7         | 6    | 5      | 4    | 3         | 2    | 1      | 0    |
| RESE RVED |      | PRI59  |      | RESE RVED |      | PRI58  |      | RESE RVED |      | PRI57  |      | RESE RVED |      | PRI56  |      |
| R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      | R/W- 0h   |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-186. P2\_RX\_DSCP\_PRI\_MAP7 Register Field Descriptions

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

## 14.5.7 CPSW\_SL Registers

Table 14-187 lists the memory-mapped registers for the CPSW\_SL. All register offset addresses not listed in Table 14-187 should be considered as reserved locations and the register contents should not be modified.

<!-- image -->

## Table 14-187. CPSW\_SL Registers

| Offset   | Acronym    | Section           |
|----------|------------|-------------------|
| 0h       | IDVER      | Section 14.5.7.1  |
| 4h       | MACCONTROL | Section 14.5.7.2  |
| 8h       | MACSTATUS  | Section 14.5.7.3  |
| Ch       | SOFT_RESET | Section 14.5.7.4  |
| 10h      | RX_MAXLEN  | Section 14.5.7.5  |
| 14h      | BOFFTEST   | Section 14.5.7.6  |
| 18h      | RX_PAUSE   | Section 14.5.7.7  |
| 1Ch      | TX_PAUSE   | Section 14.5.7.8  |
| 20h      | EMCONTROL  | Section 14.5.7.9  |
| 24h      | RX_PRI_MAP | Section 14.5.7.10 |
| 28h      | TX_GAP     | Section 14.5.7.11 |

## 14.5.7.1 IDVER Register (offset = 0h) [reset = 170112h]

Register mask: FFFFFFFFh

IDVER is shown in Figure 14-173 and described in Table 14-188.

CPGMAC\_SL ID/VERSION REGISTER

## Figure 14-173. IDVER Register

| 31 30 29 28 27 26 25 24 23 IDENT   | 13 Z   | 9 X   | 5 4 3 2 Y   |
|------------------------------------|--------|-------|-------------|
| R-17h                              | R-0h   | R-1h  | R-12h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-188. IDVER Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description             |
|-------|---------|--------|---------|-------------------------|
| 31-16 | IDENT   | R      | 17h     | Rx Identification Value |
| 15-11 | Z       | R      | 0h      | Rx Z value (X.Y.Z)      |
| 10-8  | X       | R      | 1h      | Rx X value (major)      |
| 7-0   | Y       | R      | 12h     | Rx Y value (minor)      |

<!-- image -->

<!-- image -->

## 14.5.7.2 MACCONTROL Register (offset = 4h) [reset = 0h]

Register mask: FFFFFFFFh

MACCONTROL is shown in Figure 14-174 and described in Table 14-189.

CPGMAC\_SL MAC CONTROL REGISTER

Figure 14-174. MACCONTROL Register

| 31            | 30            | 29                   | 28            | 27            | 26               | 25            | 24            |
|---------------|---------------|----------------------|---------------|---------------|------------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED             | RESERVED      | RESERVED      | RESERVED         | RESERVED      | RX_CMF_EN     |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h        | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h    | Rreturns0s-0h | R/W-0h        |
| 23            | 22            | 21                   | 20            | 19            | 18               | 17            | 16            |
| RX_CSF_EN     | RX_CEF_EN     | TX_SHORT_G AP_LIM_EN | RESERVED      | RESERVED      | EXT_EN           | GIG_FORCE     | IFCTL_B       |
| R/W-0h        | R/W-0h        | R/W-0h               | Rreturns0s-0h | Rreturns0s-0h | R/W-0h           | R/W-0h        | R/W-0h        |
| 15            | 14            | 13                   | 12            | 11            | 10               | 9             | 8             |
| IFCTL_A       | RESERVED      | RESERVED             | RESERVED      | CMD_IDLE      | TX_SHORT_G AP_EN | RESERVED      | RESERVED      |
| R/W-0h        | Rreturns0s-0h | Rreturns0s-0h        | Rreturns0s-0h | R/W-0h        | R/W-0h           | Rreturns0s-0h | Rreturns0s-0h |
| 7             | 6             | 5                    | 4             | 3             | 2                | 1             | 0             |
| GIG           | TX_PACE       | GMII_EN              | TX_FLOW_EN    | RX_FLOW_EN    | MTEST            | LOOPBACK      | FULLDUPLEX    |
| R/W-0h        | R/W-0h        | R/W-0h               | R/W-0h        | R/W-0h        | R/W-0h           | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-189. MACCONTROL Register Field Descriptions

| Bit   | Field                | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------------------|------------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-25 | RESERVED             | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 24    | RX_CMF_EN            | R/W        | 0h      | RX Copy MAC Control Frames Enable - Enables MAC control frames to be transferred to memory. MAC control frames are normally acted upon (if enabled), but not copied to memory. MAC control frames that are pause frames will be acted upon if enabled in the MacControl register, regardless of the value of rx_cmf_en. Frames transferred to memory due to rx_cmf_en will have the control bit set in their EOP buffer descriptor. 0 - MAC control frames are filtered (but acted upon if enabled). 1 - MAC control frames are transferred to memory. |
| 23    | RX_CSF_EN            | R/W        | 0h      | RX Copy Short Frames Enable - Enables frames or fragments shorter than 64 bytes to be copied to memory. Frames transferred to memory due to rx_csf_en will have the fragment or undersized bit set in their receive footer. Fragments are short frames that contain CRC/align/code errors and undersized are short frames without errors. 0 - Short frames are filtered 1 - Short frames are transferred to memory.                                                                                                                                    |
| 22    | RX_CEF_EN            | R/W        | 0h      | RX Copy Error Frames Enable - Enables frames containing errors to be transferred to memory. The appropriate error bit will be set in the frame receive footer. Frames containing errors will be filtered when rx_cef _en is not set. 0 - Frames containing errors are filtered. 1 - Frames containing errors are transferred to memory.                                                                                                                                                                                                                |
| 21    | TX_SHORT_GAP_LIM_E N | R/W        | 0h      | Transmit Short Gap Limit Enable When set this bit limits the number of short gap packets transmitted to 100ppm. Each time a short gap packet is sent, a counter is loaded with 10,000 and decremented on each wireside clock. Another short gap packet will not be sent out until the counter decrements to zero. This mode is included to preclude the host from filling up the FIFO and sending every packet out with short gap which would violate the maximum number of packets per second allowed.                                                |

<!-- image -->

Table 14-189. MACCONTROL Register Field Descriptions (continued)

| Bit   | Field           | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|-----------------|------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 20-19 | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 18    | EXT_EN          | R/W        | 0h      | Mode of operation. 0 - Forced mode of operation. 1 - In-band mode of operation.                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 17    | GIG_FORCE       | R/W        | 0h      | Gigabit Mode Force - This bit is used to force the CPGMAC_SL into gigabit mode if the input GMII_MTCLK has been stopped by the PHY.                                                                                                                                                                                                                                                                                                                                                                |
| 16    | IFCTL_B         | R/W        | 0h      | Connects to the speed_in input of the respective RMII gasket. When using RMII mode: 0 - 10Mbps operation 1 - 100Mbps operation                                                                                                                                                                                                                                                                                                                                                                     |
| 15    | IFCTL_A         | R/W        | 0h      | Connects to the speed_in input of the respective RMII gasket. When using RMII mode: 0 - 10Mbps operation 1 - 100Mbps operation                                                                                                                                                                                                                                                                                                                                                                     |
| 14-12 | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 11    | CMD_IDLE        | R/W        | 0h      | Command Idle 0 - Idle not commanded 1 - Idle Commanded (read idle in MacStatus)                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 10    | TX_SHORT_GAP_EN | R/W        | 0h      | Transmit Short Gap Enable 0 - Transmit with a short IPG is disabled 1 - Transmit with a short IPG (when TX_SHORT_GAP input is asserted) is enabled.                                                                                                                                                                                                                                                                                                                                                |
| 9-8   | RESERVED        | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 7     | GIG             | R/W        | 0h      | Gigabit Mode - 0 - 10/100 mode 1 - Gigabit mode (full duplex only) The GIG_OUT output is the value of this bit.                                                                                                                                                                                                                                                                                                                                                                                    |
| 6     | TX_PACE         | R/W        | 0h      | Transmit Pacing Enable 0 - Transmit Pacing Disabled 1 - Transmit Pacing Enabled                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 5     | GMII_EN         | R/W        | 0h      | GMII Enable Bit. This bit must be set before the MAC will transmit or receive data in any of the supported interface modes (such as MII and RMII). This bit does not select the interface mode, but rather holds or releases the MAC TX and RX state machines from reset. 0 - The MAC RX and TX state machines are held in reset 1 - The MAC RX and TX state machines are released from reset and transmit/receive are enabled.                                                                    |
| 4     | TX_FLOW_EN      | R/W        | 0h      | Transmit Flow Control Enable - Determines if incoming pause frames are acted upon in full-duplex mode. Incoming pause frames are not acted upon in half-duplex mode regardless of this bit setting. The RX_MBP_Enable bits determine whether or not received pause frames are transferred to memory. 0 - Transmit Flow Control Disabled. Full-duplex mode - Incoming pause frames are not acted upon. 1 - Transmit Flow Control Enabled . Full-duplex mode - Incoming pause frames are acted upon. |
| 3     | RX_FLOW_EN      | R/W        | 0h      | Receive Flow Control Enable - 0 - Receive Flow Control Disabled Half-duplex mode - No flow control generated collisions are sent. Full-duplex mode - No outgoing pause frames are sent. 1 - Receive Flow Control Enabled Half-duplex mode - Collisions are initiated when receive flow control is triggered. Full-duplex mode - Outgoing pause frames are sent when receive flow control is triggered.                                                                                             |
| 2     | MTEST           | R/W        | 0h      | Manufacturing Test mode - This bit must be set to allow writes to the Backoff_Test and PauseTimer registers.                                                                                                                                                                                                                                                                                                                                                                                       |

<!-- image -->

www.ti.com

## Table 14-189. MACCONTROL Register Field Descriptions (continued)

|   Bit | Field      | Type   | Reset   | Description                                                                                                                                                                                                                               |
|-------|------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | LOOPBACK   | R/W    | 0h      | Loop Back Mode - Loopback mode forces internal fullduplex mode regardless of whether the fullduplex bit is set or not. The loopback bit should be changed only when GMII_en is deasserted. 0 - Not looped back 1 - Loop Back Mode enabled |
|     0 | FULLDUPLEX | R/W    | 0h      | Full Duplex mode - Gigabit mode forces fullduplex mode regardless of whether the fullduplex bit is set or not. The FULLDUPLEX_OUT output is the value of this register bit 0 - half duplex mode 1 - full duplex mode                      |

## 14.5.7.3 MACSTATUS Register (offset = 8h) [reset = 0h]

Register mask: FFFFFFFFh

MACSTATUS is shown in Figure 14-175 and described in Table 14-190.

CPGMAC\_SL MAC STATUS REGISTER

Figure 14-175. MACSTATUS Register

| 31            | 30            | 29            | 28            | 27              | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|-----------------|---------------|---------------|---------------|
| IDLE          | RESERVED      | RESERVED      | RESERVED      | RESERVED        | RESERVED      | RESERVED      | RESERVED      |
| R-0h          | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h   | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19              | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED        | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h   | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 15            | 14            | 13            | 12            | 11              | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED        | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h   | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 7             | 6             | 5             | 4             | 3               | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | EXT_GIG       | EXT_FULLDUP LEX | RESERVED      | RX_FLOW_AC T  | TX_FLOW_AC T  |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h          | R-0h            | Rreturns0s-0h | R-0h          | R-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-190. MACSTATUS Register Field Descriptions

| Bit   | Field          | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                             |
|-------|----------------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | IDLE           | R          | 0h      | CPGMAC_SL IDLE - The CPGMAC_SL is in the idle state (valid after an idle command) 0 - The CPGMAC_SL is not in the idle state. 1 - The CPGMAC_SL is in the idle state.                                                                                                                                                   |
| 30-5  | RESERVED       | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                         |
| 4     | EXT_GIG        | R          | 0h      | External GIG - This is the value of the EXT_GIG input bit.                                                                                                                                                                                                                                                              |
| 3     | EXT_FULLDUPLEX | R          | 0h      | External Fullduplex - This is the value of the EXT_FULLDUPLEX input bit.                                                                                                                                                                                                                                                |
| 2     | RESERVED       | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                         |
| 1     | RX_FLOW_ACT    | R          | 0h      | Receive Flow Control Active - When asserted, indicates that receive flow control is enabled and triggered.                                                                                                                                                                                                              |
| 0     | TX_FLOW_ACT    | R          | 0h      | Transmit Flow Control Active - When asserted, this bit indicates that the pause time period is being observed for a received pause frame. No new transmissions will begin while this bit is asserted except for the transmission of pause frames. Any transmission in progress when this bit is asserted will complete. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.7.4 SOFT\_RESET Register (offset = Ch) [reset = 0h]

Register mask: FFFFFFFFh

SOFT\_RESET is shown in Figure 14-176 and described in Table 14-191.

CPGMAC\_SL SOFT RESET REGISTER

## Figure 14-176. SOFT\_RESET Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | SOFT_RESET    |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-191. SOFT\_RESET Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                               |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                           |
| 0     | SOFT_RESET | R/W        | 0h      | Software reset - Writing a one to this bit causes the CPGMAC_SL logic to be reset. After writing a one to this bit, it may be polled to determine if the reset has occurred. If a one is read, the reset has not yet occurred. If a zero is read then reset has occurred. |

## 14.5.7.5 RX\_MAXLEN Register (offset = 10h) [reset = 5EEh]

Register mask: FFFFFFFFh

RX\_MAXLEN is shown in Figure 14-177 and described in Table 14-192.

CPGMAC\_SL RX MAXIMUM LENGTH REGISTER

## Figure 14-177. RX\_MAXLEN Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | RX_MAXLEN                                                                             |
| Rreturns0s-0h                                                                         | R/W-5EEh                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-192. RX\_MAXLEN Register Field Descriptions

| Bit   | Field     | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                            |
|-------|-----------|------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-14 | RESERVED  | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                        |
| 13-0  | RX_MAXLEN | R/W        | 5EEh    | RX Maximum Frame Length - This field determines the maximum length of a received frame. The reset value is 1518 (dec). Frames with byte counts greater than rx_maxlen are long frames. Long frames with no errors are oversized frames. Long frames with CRC, code, or alignment error are jabber frames. The maximum value is 16,383. |

<!-- image -->

<!-- image -->

## 14.5.7.6 BOFFTEST Register (offset = 14h) [reset = 0h]

Register mask: FFFFFFFFh

BOFFTEST is shown in Figure 14-178 and described in Table 14-193.

CPGMAC\_SL BACKOFF TEST REGISTER

## Figure 14-178. BOFFTEST Register

| 31            | 30         | 29         | 28         | 27            | 26            | 25         | 24         |
|---------------|------------|------------|------------|---------------|---------------|------------|------------|
| RESERVED      |            |            | PACEVAL    |               |               | RNDNUM     | RNDNUM     |
| Rreturns0s-0h |            |            | R/W-0h     |               |               | R/W-0h     | R/W-0h     |
| 23            | 22         | 21         | 20         | 19            | 18            | 17         | 16         |
| RNDNUM        | RNDNUM     | RNDNUM     | RNDNUM     | RNDNUM        | RNDNUM        | RNDNUM     | RNDNUM     |
| R/W-0h        | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h        | R/W-0h        | R/W-0h     | R/W-0h     |
| 15            | 14         | 13         | 12         | 11            | 10            | 9          | 8          |
| COLL_COUNT    | COLL_COUNT | COLL_COUNT |            | RESERVED      | RESERVED      | TX_BACKOFF | TX_BACKOFF |
| R-0h          | R-0h       | R-0h       |            | Rreturns0s-0h | Rreturns0s-0h | R-0h       | R-0h       |
| 7             | 6          | 5          | 4          | 3             | 2             | 1          | 0          |
| TX_BACKOFF    | TX_BACKOFF | TX_BACKOFF | TX_BACKOFF | TX_BACKOFF    | TX_BACKOFF    | TX_BACKOFF | TX_BACKOFF |
| R-0h          | R-0h       | R-0h       | R-0h       | R-0h          | R-0h          | R-0h       | R-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-193. BOFFTEST Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|------------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30-26 | PACEVAL    | R/W        | 0h      | Pacing Register Current Value. A non-zero value in this field indicates that transmit pacing is active. A transmit frame collision or deferral causes paceval to loaded with decimal 31, good frame transmissions (with no collisions or deferrals) cause paceval to be decremented down to zero. When paceval is nonzero, the transmitter delays 4 IPGs between new frame transmissions after each successfully transmitted frame that had no deferrals or collisions. Transmit pacing helps reduce "capture" effects improving overall network bandwidth. |
| 25-16 | RNDNUM     | R/W        | 0h      | Backoff Random Number Generator - This field allows the Backoff Random Number Generator to be read (or written in test mode only). This field can be written only when mtest has previously been set. Reading this field returns the generator's current value. The value is reset to zero and begins counting on the clock after the deassertion of reset.                                                                                                                                                                                                 |
| 15-12 | COLL_COUNT | R          | 0h      | Collision Count - The number of collisions the current frame has experienced.                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 11-10 | RESERVED   | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 9-0   | TX_BACKOFF | R          | 0h      | Backoff Count - This field allows the current value of the backoff counter to be observed for test purposes. This field is loaded automatically according to the backoff algorithm, and is decremented by one for each slot time after the collision.                                                                                                                                                                                                                                                                                                       |

## 14.5.7.7 RX\_PAUSE Register (offset = 18h) [reset = 0h]

Register mask: FFFFFFFFh

RX\_PAUSE is shown in Figure 14-179 and described in Table 14-194.

CPGMAC\_SL RECEIVE PAUSE TIMER REGISTER

## Figure 14-179. RX\_PAUSE Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| rx_pausetimer                                                                         | RESERVED                                                                              |
| R-0h                                                                                  | Rreturns0s-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-194. RX\_PAUSE Register Field Descriptions

| Bit   | Field         | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|---------------|------------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | rx_pausetimer | R          | 0h      | RX Pause Timer Value - This field allows the contents of the receive pause timer to be observed (and written in test mode). The receive pause timer is loaded with 0xFF00 when the CPGMAC_SL sends an outgoing pause frame (with pause time of 0xFFFF). The receive pause timer is decremented at slot time intervals. If the receive pause timer decrements to zero, then another outgoing pause frame will be sent and the load/decrement process will be repeated. |
| 15-0  | RESERVED      | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.7.8 TX\_PAUSE Register (offset = 1Ch) [reset = 0h]

Register mask: FFFFFFFFh

TX\_PAUSE is shown in Figure 14-180 and described in Table 14-195.

CPGMAC\_SL TRANSMIT PAUSE TIMER REGISTER

## Figure 14-180. TX\_PAUSE Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| tx_pausetimer                                                                         | RESERVED                                                                              |
| R-0h                                                                                  | Rreturns0s-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-195. TX\_PAUSE Register Field Descriptions

| Bit   | Field         | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                |
|-------|---------------|------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | tx_pausetimer | R          | 0h      | TX Pause Timer Value - This field allows the contents of the transmit pause timer to be observed (and written in test mode). The transmit pause timer is loaded by a received (incoming) pause frame, and then decremented, at slottime intervals, down to zero at which time CPGMAC_SL transmit frames are again enabled. |
| 15-0  | RESERVED      | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                            |

## 14.5.7.9 EMCONTROL Register (offset = 20h) [reset = 0h]

Register mask: FFFFFFFFh

EMCONTROL is shown in Figure 14-181 and described in Table 14-196.

CPGMAC\_SL EMULATION CONTROL REGISTER

## Figure 14-181. EMCONTROL Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | SOFT          | FREE          |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-196. EMCONTROL Register Field Descriptions

| Bit   | Field    | Type       | Reset   | Description        |
|-------|----------|------------|---------|--------------------|
| 31-2  | RESERVED | Rreturns0s | 0h      |                    |
| 1     | SOFT     | R/W        | 0h      | Emulation Soft Bit |
| 0     | FREE     | R/W        | 0h      | Emulation Free Bit |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.7.10 RX\_PRI\_MAP Register (offset = 24h) [reset = 76543210h]

Register mask: FFFFFFFFh

RX\_PRI\_MAP is shown in Figure 14-182 and described in Table 14-197.

CPGMAC\_SL RX PKT PRIORITY TO HEADER PRIORITY MAPPING REGISTER

## Figure 14-182. RX\_PRI\_MAP Register

| 31            | 30   | 29     | 28   | 27            | 26   | 25     | 24   |
|---------------|------|--------|------|---------------|------|--------|------|
| RESERVED      |      | PRI7   |      | RESERVED      |      | PRI6   |      |
| Rreturns0s-0h |      | R/W-7h |      | Rreturns0s-0h |      | R/W-6h |      |
| 23            | 22   | 21     | 20   | 19            | 18   | 17     | 16   |
| RESERVED      |      | PRI5   |      | RESERVED      |      | PRI4   |      |
| Rreturns0s-0h |      | R/W-5h |      | Rreturns0s-0h |      | R/W-4h |      |
| 15            | 14   | 13     | 12   | 11            | 10   | 9      | 8    |
| RESERVED      |      | PRI3   |      | RESERVED      |      | PRI2   |      |
| Rreturns0s-0h |      | R/W-3h |      | Rreturns0s-0h |      | R/W-2h |      |
| 7             | 6    | 5      | 4    | 3             | 2    | 1      | 0    |
| RESERVED      |      | PRI1   |      | RESERVED      |      | PRI0   |      |
| Rreturns0s-0h |      | R/W-1h |      | Rreturns0s-0h |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-197. RX\_PRI\_MAP Register Field Descriptions

| Bit   | Field    | Type       | Reset   | Description                                                              |
|-------|----------|------------|---------|--------------------------------------------------------------------------|
| 31    | RESERVED | Rreturns0s | 0h      |                                                                          |
| 30-28 | PRI7     | R/W        | 7h      | Priority 7 - A packet priority of 0x7 is mapped (changed) to this value. |
| 27    | RESERVED | Rreturns0s | 0h      |                                                                          |
| 26-24 | PRI6     | R/W        | 6h      | Priority 6 - A packet priority of 0x6 is mapped (changed) to this value. |
| 23    | RESERVED | Rreturns0s | 0h      |                                                                          |
| 22-20 | PRI5     | R/W        | 5h      | Priority 5 - A packet priority of 0x5 is mapped (changed) to this value. |
| 19    | RESERVED | Rreturns0s | 0h      |                                                                          |
| 18-16 | PRI4     | R/W        | 4h      | Priority 4 - A packet priority of 0x4 is mapped (changed) to this value. |
| 15    | RESERVED | Rreturns0s | 0h      |                                                                          |
| 14-12 | PRI3     | R/W        | 3h      | Priority 3 - A packet priority of 0x3 is mapped (changed) to this value. |
| 11    | RESERVED | Rreturns0s | 0h      |                                                                          |
| 10-8  | PRI2     | R/W        | 2h      | Priority 2 - A packet priority of 0x2 is mapped (changed) to this value. |
| 7     | RESERVED | Rreturns0s | 0h      |                                                                          |
| 6-4   | PRI1     | R/W        | 1h      | Priority 1 - A packet priority of 0x1 is mapped (changed) to this value. |
| 3     | RESERVED | Rreturns0s | 0h      |                                                                          |
| 2-0   | PRI0     | R/W        | 0h      | Priority 0 - A packet priority of 0x0 is mapped (changed) to this value. |