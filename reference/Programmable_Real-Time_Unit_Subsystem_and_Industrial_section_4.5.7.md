<!-- image -->

## 4.5.5.14 Mode Definition Register (MDR)

The Mode Definition register (MDR) determines the over-sampling mode for the UART. MDR is shown in Figure 4-255 and described in Table 4-247.

## Figure 4-255. Mode Definition Register (MDR)

| 31       |          |          | 16       |
|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved |
| R-0      | R-0      | R-0      | R-0      |
|          | 15       | 1        | 0        |
|          |          |          | OSM_SEL  |
|          |          |          | R/W-0    |

Table 4-247. Mode Definition Register (MDR) Field Descriptions

| Bit   | Field    | Value   | Description                                                      |
|-------|----------|---------|------------------------------------------------------------------|
| 31-1  | Reserved | 0       | Reserved                                                         |
| 0     | OSM_SEL  | 0 1     | Over-Sampling Mode Select. 16× over-sampling. 13× over-sampling. |

## 4.5.6 PRU\_ICSS\_ECAP Registers

The PRU ECAP module within the PRU-ICSS is identical to the ECAP module in the AM335x PWMSS.

For additional details about the ECAP registers, see Section 15.3.

## 4.5.7 PRU\_ICSS\_MII\_RT Registers

Table 4-248 lists the memory-mapped registers for the PRU\_ICSS\_MII\_RT. All register offset addresses not listed in Table 4-248 should be considered as reserved locations and the register contents should not be modified.

Table 4-248. PRU\_ICSS\_MII\_RT Registers

| Offset   | Acronym   | Register Name Section   |
|----------|-----------|-------------------------|
| 0h       | RXCFG0    | Section 4.5.7.1         |
| 4h       | RXCFG1    | Section 4.5.7.2         |
| 10h      | TXCFG0    | Section 4.5.7.3         |
| 14h      | TXCFG1    | Section 4.5.7.4         |
| 20h      | TXCRC0    | Section 4.5.7.5         |
| 24h      | TXCRC1    | Section 4.5.7.6         |
| 30h      | TXIPG0    | Section 4.5.7.7         |
| 34h      | TXIPG1    | Section 4.5.7.8         |
| 38h      | PRS0      | Section 4.5.7.9         |
| 3Ch      | PRS1      | Section 4.5.7.10        |
| 40h      | RXFRMS0   | Section 4.5.7.11        |
| 44h      | RXFRMS1   | Section 4.5.7.12        |
| 48h      | RXPCNT0   | Section 4.5.7.13        |
| 4Ch      | RXPCNT1   | Section 4.5.7.14        |
| 50h      | RXERR0    | Section 4.5.7.15        |
| 54h      | RXERR1    | Section 4.5.7.16        |

## 4.5.7.1 RXCFG0 Register (Offset = 0h) [reset = 0h]

RXCFG0 is shown in Figure 4-256 and described in Table 4-249.

Return to Summary Table.

RX CONFIG0

## Figure 4-256. RXCFG0 Register

| 31       | 30              | 29            | 28            | 27         | 26               | 25       | 24        |
|----------|-----------------|---------------|---------------|------------|------------------|----------|-----------|
| RESERVED | RESERVED        | RESERVED      | RESERVED      | RESERVED   | RESERVED         | RESERVED | RESERVED  |
| R-0h     | R-0h            | R-0h          | R-0h          | R-0h       | R-0h             | R-0h     | R-0h      |
| 23       | 22              | 21            | 20            | 19         | 18               | 17       | 16        |
| RESERVED | RESERVED        | RESERVED      | RESERVED      | RESERVED   | RESERVED         | RESERVED | RESERVED  |
| R-0h     | R-0h            | R-0h          | R-0h          | R-0h       | R-0h             | R-0h     | R-0h      |
| 15       | 14              | 13            | 12            | 11         | 10               | 9        | 8         |
| RESERVED | RESERVED        | RESERVED      | RESERVED      | RESERVED   | RESERVED         | RESERVED | RESERVED  |
| R-0h     | R-0h            | R-0h          | R-0h          | R-0h       | R-0h             | R-0h     | R-0h      |
| 7        | 6               | 5             | 4             | 3          | 2                | 1        | 0         |
| RESERVED | RX_AUTOFWD _PRE | RX_BYTE_SW AP | RX_L2_ENABL E | RX_MUX_SEL | RX_CUT_PRE AMBLE | RESERVED | RX_ENABLE |
| R-0h     | R/W-0h          | R/W-0h        | R/W-0h        | R/W-0h     | R/W-0h           | R-0h     | R/W-0h    |

Table 4-249. RXCFG0 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-7  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 6     | RX_AUTOFWD_PRE | R/W    | 0h      | Enables auto-forward of received preamble. When enabled, this will forward the preamble nibbles including the SFD to the TX L1 FIFO that is attached to the PRU. First data byte seen by PRU R31 and/or RX L2 is destination address (DA). Odd number of preamble nibbles is supported in this mode. For example, 0x55D. Note that new RX should only occur after the current TX completes. 0x 0: Disable 0x 1: Enable, it must disable RX_CUT_PREAMBLE and TX_AUTO_PREAMBLE                                 |
| 5     | RX_BYTE_SWAP   | R/W    | 0h      | Defines the order of Byte0/1 placement for RX R31 and RX L2. Note that if TX_AUTO_SEQUENCE enabled, this bit cannot get enable since TX_BYTE_SWAP on swaps the PRU output. This bit must be selected/updated when the port is disabled or there is no traffic. 0x 0: R31 [15:8]/RXL2 [15:8] = Byte1{Nibble3,Nibble2} R31[ 7:0]/RXL2 [7:0] = Byte0{Nibble1,Nibble0} 0x 1: R31 [15:8]/RXL2 [15:8] = Byte0{Nibble1,Nibble0} R31[ 7:0]/RXL2 [7:0] = Byte1{Nibble3,Nibble2} Nibble0 is the first nibble received. |
| 4     | RX_L2_ENABLE   | R/W    | 0h      | Enables RX L2 buffer. 0x 0: Disable (RX L2 can function as generic scratch pad) 0x 1: Enable                                                                                                                                                                                                                                                                                                                                                                                                                 |

<!-- image -->

<!-- image -->

## Table 4-249. RXCFG0 Register Field Descriptions (continued)

|   Bit | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                              |
|-------|-----------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | RX_MUX_SEL      | R/W    | 0h      | Selects receive data source. Typically, the setting for this will not be identical for the two MII receive configuration registers. 0x 0: MII RX Data from Port 0 (default for RXCFG0) 0x 1: MII RX Data from Port 1 (default for RXCFG1)                                                |
|     2 | RX_CUT_PREAMBLE | R/W    | 0h      | Removes received preamble. 0x 0: All data from Ethernet PHY are passed on to PRU register. This assumes Ethernet PHY which does not shorten the preamble. 0x 1: MII interface suppresses preamble and sync frame delimiter. First data byte seen by PRU register is destination address. |
|     1 | RESERVED        | R      | 0h      |                                                                                                                                                                                                                                                                                          |
|     0 | RX_ENABLE       | R/W    | 0h      | Enables the receive traffic currently selected by RX_MUX_SELECT. 0x 0: Disable 0x 1: Enable                                                                                                                                                                                              |

## 4.5.7.2 RXCFG1 Register (Offset = 4h) [reset = 8h]

RXCFG1 is shown in Figure 4-257 and described in Table 4-250.

Return to Summary Table.

RX CONFIG1

## Figure 4-257. RXCFG1 Register

| 31       | 30              | 29            | 28            | 27         | 26               | 25       | 24        |
|----------|-----------------|---------------|---------------|------------|------------------|----------|-----------|
| RESERVED | RESERVED        | RESERVED      | RESERVED      | RESERVED   | RESERVED         | RESERVED | RESERVED  |
| R-0h     | R-0h            | R-0h          | R-0h          | R-0h       | R-0h             | R-0h     | R-0h      |
| 23       | 22              | 21            | 20            | 19         | 18               | 17       | 16        |
| RESERVED | RESERVED        | RESERVED      | RESERVED      | RESERVED   | RESERVED         | RESERVED | RESERVED  |
| R-0h     | R-0h            | R-0h          | R-0h          | R-0h       | R-0h             | R-0h     | R-0h      |
| 15       | 14              | 13            | 12            | 11         | 10               | 9        | 8         |
| RESERVED | RESERVED        | RESERVED      | RESERVED      | RESERVED   | RESERVED         | RESERVED | RESERVED  |
| R-0h     | R-0h            | R-0h          | R-0h          | R-0h       | R-0h             | R-0h     | R-0h      |
| 7        | 6               | 5             | 4             | 3          | 2                | 1        | 0         |
| RESERVED | RX_AUTOFWD _PRE | RX_BYTE_SW AP | RX_L2_ENABL E | RX_MUX_SEL | RX_CUT_PRE AMBLE | RESERVED | RX_ENABLE |
| R-0h     | R/W-0h          | R/W-0h        | R/W-0h        | R/W-1h     | R/W-0h           | R-0h     | R/W-0h    |

Table 4-250. RXCFG1 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-7  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 6     | RX_AUTOFWD_PRE | R/W    | 0h      | Enables auto-forward of received preamble. When enabled, this will forward the preamble nibbles including the SFD to the TX L1 FIFO that is attached to the PRU. First data byte seen by PRU R31 and/or RX L2 is destination address (DA). Odd number of preamble nibbles is supported in this mode. For example, 0x55D. Note that new RX should only occur after the current TX completes. 0x 0: Disable 0x 1: Enable, it must disable RX_CUT_PREAMBLE and TX_AUTO_PREAMBLE                                 |
| 5     | RX_BYTE_SWAP   | R/W    | 0h      | Defines the order of Byte0/1 placement for RX R31 and RX L2. Note that if TX_AUTO_SEQUENCE enabled, this bit cannot get enable since TX_BYTE_SWAP on swaps the PRU output. This bit must be selected/updated when the port is disabled or there is no traffic. 0x 0: R31 [15:8]/RXL2 [15:8] = Byte1{Nibble3,Nibble2} R31[ 7:0]/RXL2 [7:0] = Byte0{Nibble1,Nibble0} 0x 1: R31 [15:8]/RXL2 [15:8] = Byte0{Nibble1,Nibble0} R31[ 7:0]/RXL2 [7:0] = Byte1{Nibble3,Nibble2} Nibble0 is the first nibble received. |
| 4     | RX_L2_ENABLE   | R/W    | 0h      | Enables RX L2 buffer. 0x 0: Disable (RX L2 can function as generic scratch pad) 0x 1: Enable                                                                                                                                                                                                                                                                                                                                                                                                                 |

<!-- image -->

<!-- image -->

## Table 4-250. RXCFG1 Register Field Descriptions (continued)

|   Bit | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                              |
|-------|-----------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | RX_MUX_SEL      | R/W    | 1h      | Selects receive data source. Typically, the setting for this will not be identical for the two MII receive configuration registers. 0x 0: MII RX Data from Port 0 (default for RXCFG0) 0x 1: MII RX Data from Port 1 (default for RXCFG1)                                                |
|     2 | RX_CUT_PREAMBLE | R/W    | 0h      | Removes received preamble. 0x 0: All data from Ethernet PHY are passed on to PRU register. This assumes Ethernet PHY which does not shorten the preamble. 0x 1: MII interface suppresses preamble and sync frame delimiter. First data byte seen by PRU register is destination address. |
|     1 | RESERVED        | R      | 0h      |                                                                                                                                                                                                                                                                                          |
|     0 | RX_ENABLE       | R/W    | 0h      | Enables the receive traffic currently selected by RX_MUX_SELECT. 0x 0: Disable 0x 1: Enable                                                                                                                                                                                              |

## 4.5.7.3 TXCFG0 Register (Offset = 10h) [reset = 00020010h]

TXCFG0 is shown in Figure 4-258 and described in Table 4-251.

Return to Summary Table.

TX CONFIG0

## Figure 4-258. TXCFG0 Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25                | 24             |
|----------------|----------------|----------------|----------------|----------------|----------------|-------------------|----------------|
| RESERVED       | TX_CLK_DELAY   | TX_CLK_DELAY   | TX_CLK_DELAY   | RESERVED       | RESERVED       | TX_START_DELAY    | TX_START_DELAY |
| R-0h           | R/W-0h         | R/W-0h         | R/W-0h         | R-0h           | R-0h           | R/W-2h            | R/W-2h         |
| 23             | 22             | 21             | 20             | 19             | 18             | 17                | 16             |
| TX_START_DELAY | TX_START_DELAY | TX_START_DELAY | TX_START_DELAY | TX_START_DELAY | TX_START_DELAY | TX_START_DELAY    | TX_START_DELAY |
| R/W-2h         | R/W-2h         | R/W-2h         | R/W-2h         | R/W-2h         | R/W-2h         | R/W-2h            | R/W-2h         |
| 15             | 14             | 13             | 12             | 11             | 10             | 9                 | 8              |
| RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | TX_AUTO_SE QUENCE | TX_MUX_SEL     |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R/W-0h            | R/W-0h         |
| 7              | 6              | 5              | 4              | 3              | 2              | 1                 | 0              |
| RESERVED       | RESERVED       | RESERVED       | RESERVED       | TX_BYTE_SW AP  | TX_EN_MODE     | TX_AUTO_PR EAMBLE | TX_ENABLE      |
| R-1h           | R-1h           | R-1h           | R-1h           | R/W-0h         | R/W-0h         | R/W-0h            | R/W-0h         |

## Table 4-251. TXCFG0 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 30-28 | TX_CLK_DELAY   | R/W    | 0h      | To ensure the MII_RT IO timing values published in the device data manual, the ocp_clk must be configured for 200 MHz and TX_CLK_DELAY must be set to 6h.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 27-26 | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 25-16 | TX_START_DELAY | R/W    | 2h      | Defines the minimum time interval (delay) between receiving the RXDV for the current frame and the start of the transmit interface sending data to the MII interface. Delay value is in units of MII_RT clock cycles, which uses the ocp_clk (default is 200MHz, or 5ns). Default TX_START_DELAY value is 320ns, which is optimized for minimum latency at 16 bit processing. Counter is started with RX_DV signal going active. Transmit interface stops sending data when no more data is written into transmit interface by PRU along with TX_EOF marker bit set. If the TX FIFO has data when the delay expires, then TX will start sending data. But if the TX FIFO is empty, it will not start until the TX FIFO is not empty. It is possible to overflow the TX FIFO with the max delay setting when auto-forwarding is enabled since the time delay is larger than the amount of data it needs to store. As long as TX L1 FIFO overflows, software will need to issue a TX_RESET to reset the TX FIFO. The total delay is 64-byte times (size of TX FIFO), but you need to allow delays for synchronization. Do to this fact, the maximum delay should be 80ns less when auto forwarding is enabled. Therefore, 0x3F0 is the maximum in this configuration. |
| 15-10 | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Table 4-251. TXCFG0 Register Field Descriptions (continued)

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 9     | TX_AUTO_SEQUENCE | R/W    | 0h      | Enables transmit auto-sequence. Note the transmit data source is determined by TX_MUX_SEL setting. 0x 0: Disable 0x 1: Enable, transmit state machine based on events on receiver path that is connected to the respective transmitter. Also, the masking logic is disabled and only the MII data is used.                                                                                                  |
| 8     | TX_MUX_SEL       | R/W    | 0h      | Selects transmit data source. The default/reset setting for TX Port 0 is 1. This setting permits MII TX Port 0 to receive data from PRU1 and the MII TX Port 1 which is connected to PRU0 by default. 0x 0: Data from PRU0 (default for TXCFG1) 0x 1: Data from PRU1 (default for TXCFG0)                                                                                                                   |
| 7-4   | RESERVED         | R      | 1h      |                                                                                                                                                                                                                                                                                                                                                                                                             |
| 3     | TX_BYTE_SWAP     | R/W    | 0h      | Defines the order of Byte0/1 placement for TX R30. This bit must be selected/updated when the port is disabled or there is no traffic. 0x 0: R30 [15:8] = Byte1{Nibble3,Nibble2} R30[ 7:0] = Byte0{Nibble1,Nibble0} R30 [31:24] = TX_MASK [15:8] R30 [23:16] = TX_MASK [7:0] 0x 1: R30 [15:8] = Byte0{Nibble1,Nibble0} R30[ 7:0] = Byte1{Nibble3,Nibble2} R30 [31:24] = TX_MASK [7:0] R30 [23:16] = TX_MASK |
| 2     | TX_EN_MODE       | R/W    | 0h      | Enables transmit self clear on TX_EOF event. Note that iep.cmp[3] must be set before transmission will start for TX0, and iep_cmp[4] for TX1. This is a new dependency, in addition to TX L1 FIFO not empty and TX_START_DELAY expiration, to start transmission. 0x 0: Disable 0x 1: Enable, TX_ENABLE will be clear for a TX_EOF event by itself.                                                         |
| 1     | TX_AUTO_PREAMBLE | R/W    | 0h      | Transmit data auto-preamble. 0x 0: PRU will provide full preamble 0x 1: TX FIFO will insert pre-amble automatically. Note that the TX FIFO does not get preloaded with the preamble until the first write occurs. This can cause the latency to be larger than the minimum latency.                                                                                                                         |
| 0     | TX_ENABLE        | R/W    | 0h      | Enables transmit traffic on TX PORT. If TX_EN_MODE is set, then TX_ENABLE will self clear during a TX_EOF event. Note Software can use this to pre-fill the TX FIFO and then start the TX frame during non-ECS operations. 0x 0: TX PORT is disabled/stopped immediately 0x 1: TX PORT is enabled and the frame will start once the IPG counter expired and TX Start Delay counter has expired              |

## 4.5.7.4 TXCFG1 Register (Offset = 14h) [reset = 00400000h]

TXCFG1 is shown in Figure 4-259 and described in Table 4-252.

Return to Summary Table.

TX CONFIG1

## Figure 4-259. TXCFG1 Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25                | 24             |
|----------------|----------------|----------------|----------------|----------------|----------------|-------------------|----------------|
| RESERVED       | TX_CLK_DELAY   | TX_CLK_DELAY   | TX_CLK_DELAY   | RESERVED       | RESERVED       | TX_START_DELAY    | TX_START_DELAY |
| R-0h           | R/W-0h         | R/W-0h         | R/W-0h         | R-0h           | R-0h           | R/W-40h           | R/W-40h        |
| 23             | 22             | 21             | 20             | 19             | 18             | 17                | 16             |
| TX_START_DELAY | TX_START_DELAY | TX_START_DELAY | TX_START_DELAY | TX_START_DELAY | TX_START_DELAY | TX_START_DELAY    | TX_START_DELAY |
| R/W-40h        | R/W-40h        | R/W-40h        | R/W-40h        | R/W-40h        | R/W-40h        | R/W-40h           | R/W-40h        |
| 15             | 14             | 13             | 12             | 11             | 10             | 9                 | 8              |
| RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | TX_AUTO_SE QUENCE | TX_MUX_SEL     |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R/W-0h            | R/W-0h         |
| 7              | 6              | 5              | 4              | 3              | 2              | 1                 | 0              |
| RESERVED       | RESERVED       | RESERVED       | RESERVED       | TX_BYTE_SW AP  | TX_EN_MODE     | TX_AUTO_PR EAMBLE | TX_ENABLE      |
| R-0h           | R-0h           | R-0h           | R-0h           | R/W-0h         | R/W-0h         | R/W-0h            | R/W-0h         |

## Table 4-252. TXCFG1 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 30-28 | TX_CLK_DELAY   | R/W    | 0h      | To ensure the MII_RT IO timing values published in the device data manual, the ocp_clk must be configured for 200 MHz and TX_CLK_DELAY must be set to 6h.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 27-26 | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 25-16 | TX_START_DELAY | R/W    | 40h     | Defines the minimum time interval (delay) between receiving the RXDV for the current frame and the start of the transmit interface sending data to the MII interface. Delay value is in units of MII_RT clock cycles, which uses the ocp_clk (default is 200MHz, or 5ns). Default TX_START_DELAY value is 320ns, which is optimized for minimum latency at 16 bit processing. Counter is started with RX_DV signal going active. Transmit interface stops sending data when no more data is written into transmit interface by PRU along with TX_EOF marker bit set. If the TX FIFO has data when the delay expires, then TX will start sending data. But if the TX FIFO is empty, it will not start until the TX FIFO is not empty. It is possible to overflow the TX FIFO with the max delay setting when auto-forwarding is enabled since the time delay is larger than the amount of data it needs to store. As long as TX L1 FIFO overflows, software will need to issue a TX_RESET to reset the TX FIFO. The total delay is 64-byte times (size of TX FIFO), but you need to allow delays for synchronization. Do to this fact, the maximum delay should be 80ns less when auto forwarding is enabled. Therefore, 0x3F0 is the maximum in this configuration. |
| 15-10 | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Table 4-252. TXCFG1 Register Field Descriptions (continued)

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 9     | TX_AUTO_SEQUENCE | R/W    | 0h      | Enables transmit auto-sequence. Note the transmit data source is determined by TX_MUX_SEL setting. 0x 0: Disable 0x 1: Enable, transmit state machine based on events on receiver path that is connected to the respective transmitter. Also, the masking logic is disabled and only the MII data is used.                                                                                                  |
| 8     | TX_MUX_SEL       | R/W    | 0h      | Selects transmit data source. The default/reset setting for TX Port 0 is 1. This setting permits MII TX Port 0 to receive data from PRU1 and the MII TX Port 1 which is connected to PRU0 by default. 0x 0: Data from PRU0 (default for TXCFG1) 0x 1: Data from PRU1 (default for TXCFG0)                                                                                                                   |
| 7-4   | RESERVED         | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                             |
| 3     | TX_BYTE_SWAP     | R/W    | 0h      | Defines the order of Byte0/1 placement for TX R30. This bit must be selected/updated when the port is disabled or there is no traffic. 0x 0: R30 [15:8] = Byte1{Nibble3,Nibble2} R30[ 7:0] = Byte0{Nibble1,Nibble0} R30 [31:24] = TX_MASK [15:8] R30 [23:16] = TX_MASK [7:0] 0x 1: R30 [15:8] = Byte0{Nibble1,Nibble0} R30[ 7:0] = Byte1{Nibble3,Nibble2} R30 [31:24] = TX_MASK [7:0] R30 [23:16] = TX_MASK |
| 2     | TX_EN_MODE       | R/W    | 0h      | Enables transmit self clear on TX_EOF event. Note that iep.cmp[3] must be set before transmission will start for TX0, and iep_cmp[4] for TX1. This is a new dependency, in addition to TX L1 FIFO not empty and TX_START_DELAY expiration, to start transmission. 0x 0: Disable 0x 1: Enable, TX_ENABLE will be clear for a TX_EOF event by itself.                                                         |
| 1     | TX_AUTO_PREAMBLE | R/W    | 0h      | Transmit data auto-preamble. 0x 0: PRU will provide full preamble 0x 1: TX FIFO will insert pre-amble automatically. Note that the TX FIFO does not get preloaded with the preamble until the first write occurs. This can cause the latency to be larger than the minimum latency.                                                                                                                         |
| 0     | TX_ENABLE        | R/W    | 0h      | Enables transmit traffic on TX PORT. If TX_EN_MODE is set, then TX_ENABLE will self clear during a TX_EOF event. Note Software can use this to pre-fill the TX FIFO and then start the TX frame during non-ECS operations. 0x 0: TX PORT is disabled/stopped immediately 0x 1: TX PORT is enabled and the frame will start once the IPG counter expired and TX Start Delay counter has expired              |

## 4.5.7.5 TXCRC0 Register (Offset = 20h) [reset = 0h]

TXCRC0 is shown in Figure 4-260 and described in Table 4-253.

Return to Summary Table.

TX CYCLIC REDUNDANCY CHECK0

## Figure 4-260. TXCRC0 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 TX_CRC32   |
|------------------------------------------------------------------------------------------------|

## Table 4-253. TXCRC0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_CRC32 | R      | 0h      | FCS (CRC32) data can be read by PRU for diagnostics. It is only valid after 6 clocks after a TX_CRC_HIGH command is given. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.7.6 TXCRC1 Register (Offset = 24h) [reset = 0h]

TXCRC1 is shown in Figure 4-261 and described in Table 4-254.

Return to Summary Table.

TX CYCLIC REDUNDANCY CHECK1

## Figure 4-261. TXCRC1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 TX_CRC32   |
|------|---------------------------------------------------------------------------------------------|

## Table 4-254. TXCRC1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TX_CRC32 | R      | 0h      | FCS (CRC32) data can be read by PRU for diagnostics. It is only valid after 6 clocks after a TX_CRC_HIGH command is given. |

## 4.5.7.7 TXIPG0 Register (Offset = 30h) [reset = 28h]

TXIPG0 is shown in Figure 4-262 and described in Table 4-255.

Return to Summary Table.

TX INTERPACKET GAP0

## Figure 4-262. TXIPG0 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7   | 6 5 4 3 2 1 0   |
|---------------------------------------------------------------------------|-----------------|
| RESERVED                                                                  | TX_IPG          |
| R-0h                                                                      | R/W-28h         |

## Table 4-255. TXIPG0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                        |
| 9-0   | TX_IPG   | R/W    | 28h     | Defines the minimum of transmit Inter Packet Gap (IPG) which is the number of ocp_clk cycles between the de-assertion of TX_EN and the assertion of TX_EN. The start of the TX will get delayed when the incoming packet IPG is less than defined minimum value. In general, software should program in increments of 8, 40ns to insure the extra delays takes effect. |

<!-- image -->

<!-- image -->

## 4.5.7.8 TXIPG1 Register (Offset = 34h) [reset = 28h]

TXIPG1 is shown in Figure 4-263 and described in Table 4-256.

Return to Summary Table.

TX INTERPACKET GAP1

## Figure 4-263. TXIPG1 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7   | 6 5 4 3 2 1 0   |
|---------------------------------------------------------------------------|-----------------|
| RESERVED                                                                  | TX_IPG          |
| R-0h                                                                      | R/W-28h         |

## Table 4-256. TXIPG1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                        |
| 9-0   | TX_IPG   | R/W    | 28h     | Defines the minimum of transmit Inter Packet Gap (IPG) which is the number of ocp_clk cycles between the de-assertion of TX_EN and the assertion of TX_EN. The start of the TX will get delayed when the incoming packet IPG is less than defined minimum value. In general, software should program in increments of 8, 40ns to insure the extra delays takes effect. |

## 4.5.7.9 PRS0 Register (Offset = 38h) [reset = 0h]

PRS0 is shown in Figure 4-264 and described in Table 4-257.

Return to Summary Table.

PORT RAW STATUS0

## Figure 4-264. PRS0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25           | 24           |
|----------|----------|----------|----------|----------|----------|--------------|--------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h         |
| 23       | 22       | 21       | 20       | 19       | 18       | 17           | 16           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h         |
| 15       | 14       | 13       | 12       | 11       | 10       | 9            | 8            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h         |
| 7        | 6        | 5        | 4        | 3        | 2        | 1            | 0            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | pr1_mii0_crs | pr1_mii0_col |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h         |

## Table 4-257. PRS0 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                   |
|-------|--------------|--------|---------|-------------------------------|
| 31-2  | RESERVED     | R      | 0h      |                               |
| 1     | pr1_mii0_crs | R      | 0h      | Current state of pr1_mii0_crs |
| 0     | pr1_mii0_col | R      | 0h      | Current state of pr1_mii0_col |

<!-- image -->

<!-- image -->

## 4.5.7.10 PRS1 Register (Offset = 3Ch) [reset = 0h]

PRS1 is shown in Figure 4-265 and described in Table 4-258. Return to Summary Table.

PORT RAW STATUS1

## Figure 4-265. PRS1 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25           | 24           |
|----------|----------|----------|----------|----------|----------|--------------|--------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h         |
| 23       | 22       | 21       | 20       | 19       | 18       | 17           | 16           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h         |
| 15       | 14       | 13       | 12       | 11       | 10       | 9            | 8            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h         |
| 7        | 6        | 5        | 4        | 3        | 2        | 1            | 0            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | pr1_mii1_crs | pr1_mii1_col |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h         |

## Table 4-258. PRS1 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                   |
|-------|--------------|--------|---------|-------------------------------|
| 31-2  | RESERVED     | R      | 0h      |                               |
| 1     | pr1_mii1_crs | R      | 0h      | Current state of pr1_mii1_crs |
| 0     | pr1_mii1_col | R      | 0h      | Current state of pr1_mii1_col |

## 4.5.7.11 RXFRMS0 Register (Offset = 40h) [reset = 9E1h]

RXFRMS0 is shown in Figure 4-266 and described in Table 4-259.

Return to Summary Table.

RX FRAME SIZE0

## Figure 4-266. RXFRMS0 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RX_MAX_FRM_CNT                                                                        | RX_MIN_FRM_CNT                                                                        |
| R/W-0h                                                                                | R/W-9E1h                                                                              |

## Table 4-259. RXFRMS0 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RX_MAX_FRM_CNT | R/W    | 5F1h    | Defines the maximum received frame count. If the total byte count of the received frame is more than defined value, RX_MAX_FRM_ERR will get set. 0x 0: 1 byte after SFD and including CRC. N: N+1 bytes after SFD and including CRC Note if the incoming frame is truncated at the marker, RX_CRC and RX_NIBBLE_ODD will not get asserted. |
| 15-0  | RX_MIN_FRM_CNT | R/W    | 3Fh     | Defines the minimum received frame count. If the total byte count of received frame is less than defined value, RX_MIN_FRM_ERR will get set. 0x 0: 1 byte after SFD and including CRC. N: N+1 bytes after SFD and including CRC                                                                                                            |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 4.5.7.12 RXFRMS1 Register (Offset = 44h) [reset = 05F1003Fh]

RXFRMS1 is shown in Figure 4-267 and described in Table 4-260.

Return to Summary Table.

RX FRAME SIZE1

## Figure 4-267. RXFRMS1 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RX_MAX_FRM_CNT                                                                        | RX_MIN_FRM_CNT                                                                        |
| R/W-5F1h                                                                              | R/W-3Fh                                                                               |

## Table 4-260. RXFRMS1 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RX_MAX_FRM_CNT | R/W    | 5F1h    | Defines the maximum received frame count. If the total byte count of the received frame is more than defined value, RX_MAX_FRM_ERR will get set. 0x 0: 1 byte after SFD and including CRC. N: N+1 bytes after SFD and including CRC Note if the incoming frame is truncated at the marker, RX_CRC and RX_NIBBLE_ODD will not get asserted. |
| 15-0  | RX_MIN_FRM_CNT | R/W    | 3Fh     | Defines the minimum received frame count. If the total byte count of received frame is less than defined value, RX_MIN_FRM_ERR will get set. 0x 0: 1 byte after SFD and including CRC. N: N+1 bytes after SFD and including CRC                                                                                                            |

## 4.5.7.13 RXPCNT0 Register (Offset = 48h) [reset = E1h]

RXPCNT0 is shown in Figure 4-268 and described in Table 4-261.

Return to Summary Table.

## RX PREAMABLE COUNT0

## Figure 4-268. RXPCNT0 Register

| 31       | 30       | 29             | 28             | 27       | 26       | 25       | 24       |
|----------|----------|----------------|----------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED       | RESERVED       | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22             | 22             | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h        | 18             | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13             | 13             | 13       | 13       | 13       | 13       |
| 12       | 12       | 12             | 12             | 12       | 12       | 12       | 12       |
| 11       | 10       | 9 R-0h         | 8              | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3              | 3              | 3        | 3        | 3        | 3        |
| 2        | 2        | 2              | 2              | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RX_MAX_PRE_CNT | RX_MIN_PRE_CNT |          |          |          |          |

Table 4-261. RXPCNT0 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 7-4   | RX_MAX_PRE_CNT | R/W    | Eh      | Defines the maximum number of nibbles until the start of frame delimiter (SFD) event occurred (i.e. matches 0x5D). RX_MAX_PRE_COUNT_ERR will be set if the preamble counts more than the value of RX_MAX_PRE_CNT. If the SFD does not occur within 16 nibbles, the error will assert and the incoming frame will be truncated. 0x 0: Disabled 0x 1: Reserved 0x 2: 4th nibble needs to have built 0x5D 0xe: 16th nibble needs to have built 0x5D Note the 16th nibble is transmitted. |
| 3-0   | RX_MIN_PRE_CNT | R/W    | 1h      | Defines the minimum number of nibbles until the start of frame delimiter (SFD) event occurred, which is matched the value 0x5D. RX_MIN_PRE_COUNT_ERR will be set if the preamble counts less than the value of RX_MIN_PRE_CNT. 0x 0: Disabled 0x 1: 1 0x5 before 0x5D 0x 2: 2 0x5 before 0x5D N: N 0x5 before 0x5D Note it does not need to be 0x5.                                                                                                                                   |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 4.5.7.14 RXPCNT1 Register (Offset = 4Ch) [reset = E1h]

RXPCNT1 is shown in Figure 4-269 and described in Table 4-262.

Return to Summary Table.

RX PREAMABLE COUNT1

## Figure 4-269. RXPCNT1 Register

| 31       | 30       | 29             | 28             | 27       | 26       | 25       | 24       |
|----------|----------|----------------|----------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED       | RESERVED       | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22             | 22             | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h        | 18             | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13             | 13             | 13       | 13       | 13       | 13       |
| 12       | 12       | 12             | 12             | 12       | 12       | 12       | 12       |
| 11       | 10       | 9 R-0h         | 8              | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3              | 3              | 3        | 3        | 3        | 3        |
| 2        | 2        | 2              | 2              | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RX_MAX_PRE_CNT | RX_MIN_PRE_CNT |          |          |          |          |

## Table 4-262. RXPCNT1 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 7-4   | RX_MAX_PRE_CNT | R/W    | Eh      | Defines the maximum number of nibbles until the start of frame delimiter (SFD) event occurred (i.e. matches 0x5D). RX_MAX_PRE_COUNT_ERR will be set if the preamble counts more than the value of RX_MAX_PRE_CNT. If the SFD does not occur within 16 nibbles, the error will assert and the incoming frame will be truncated. 0x 0: Disabled 0x 1: Reserved 0x 2: 4th nibble needs to have built 0x5D 0xe: 16th nibble needs to have built 0x5D Note the 16th nibble is transmitted. |
| 3-0   | RX_MIN_PRE_CNT | R/W    | 1h      | Defines the minimum number of nibbles until the start of frame delimiter (SFD) event occurred, which is matched the value 0x5D. RX_MIN_PRE_COUNT_ERR will be set if the preamble counts less than the value of RX_MIN_PRE_CNT. 0x 0: Disabled 0x 1: 1 0x5 before 0x5D 0x 2: 2 0x5 before 0x5D N: N 0x5 before 0x5D Note it does not need to be 0x5.                                                                                                                                   |

## 4.5.7.15 RXERR0 Register (Offset = 50h) [reset = 0h]

RXERR0 is shown in Figure 4-270 and described in Table 4-263.

Return to Summary Table.

RX ERROR0

## Figure 4-270. RXERR0 Register

| 31       | 30       | 29       | 28       | 27                  | 26                  | 25                  | 24                  |
|----------|----------|----------|----------|---------------------|---------------------|---------------------|---------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h                | R-0h                | R-0h                | R-0h                |
| 23       | 22       | 21       | 20       | 19                  | 18                  | 17                  | 16                  |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h                | R-0h                | R-0h                | R-0h                |
| 15       | 14       | 13       | 12       | 11                  | 10                  | 9                   | 8                   |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h                | R-0h                | R-0h                | R-0h                |
| 7        | 6        | 5        | 4        | 3                   | 2                   | 1                   | 0                   |
|          | RESERVED |          |          | RX_MAX_FRM _CNT_ERR | RX_MIN_FRM_ CNT_ERR | RX_MAX_PRE _CNT_ERR | RX_MIN_PRE_ CNT_ERR |
|          | R-0h     |          |          | R-0h                | R-0h                | R-0h                | R-0h                |

Table 4-263. RXERR0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                     |
|-------|---------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED            | R      | 0h      |                                                                                                                                 |
| 3     | RX_MAX_FRM_CNT_ER R | R      | 0h      | Error status of received frame is more than the value of RX_MAX_FRM_CNT. 0x 0: No error occurred 0x 1: Error occurred           |
| 2     | RX_MIN_FRM_CNT_ERR  | R      | 0h      | Error status of received frame is less than the value of RX_MIN_FRM_CNT. 0x 0: No error occurred 0x 1: Error occurred           |
| 1     | RX_MAX_PRE_CNT_ER R | R      | 0h      | Error status of received preamble nibble is more than the value of RX_MAX_PRE_CNT. 0x 0: No error occurred 0x 1: Error occurred |
| 0     | RX_MIN_PRE_CNT_ERR  | R      | 0h      | Error status of received preamble nibble is less than the value of RX_MIN_PRE_CNT. 0x 0: No error occurred 0x 1: Error occurred |

<!-- image -->