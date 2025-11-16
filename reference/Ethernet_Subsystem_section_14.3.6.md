<!-- image -->

Any received packet that ends with an improper nibble boundary aligned RMII\_CRS\_DV toggle will issue an MII\_RXER during the packet to the CPGMAC. Also, a change in speed or duplex mode during packet operations will cause packet corruption.

The CPRMII can accept receive packets with shortened preambles, but 0x55 followed by a 0x5d is the shortest preamble that will be recognized (1 preamble byte with the start of frame byte). At least one byte of preamble with the start of frame indicator is required to begin a packet. An asserted RMII\_CRS\_DV without at least a single correct preamble byte followed by the start of frame indicator will be ignored.

## 14.3.5.2 RMII Transmit (TX)

The CPRMII transmit (TX) interface converts the 3PSW MII input data into the RMII transmit format. The data is then output to the external RMII PHY.

The 3PSW does not source the transmit error (MII TXERR) signal. Any transmit frame from the CPGMAC with an error (ie. underrun) will be indicated as an error by an error CRC. Transmit error is assumed to be deasserted at all times and is not an input into the CPRMII module.Zeroes are output on RMII\_TXD[1:0] for each clock that RMII\_TXEN is deasserted.

## 14.3.6 RGMII Interface

The CPRGMII peripheral shall be compliant to the RGMII specification document.

## Features:

- Supports 1000/100/10 Mbps Speed.
- MII mode is not supported.

If RGMII is used, and a 10Mbit operation is desired, in-band mode must be used and an ethernet PHY that supports in-band status signaling must be selected.

## 14.3.6.1 RGMII Receive (RX)

The CPRGMII receive (RX) interface converts the source synchronous DDR input data from the external RGMII PHY into the required G/MII (CPGMAC) signals.

## 14.3.6.2 In-Band Mode of Operation

The CPRGMII is operating in the in-band mode of operation when the RGMII\_RX\_INBAND input is asserted.RGMII\_RX\_INPUT is asserted by configuring the ext\_en bit to 1 of the MACCONTROL register. The link status, duplexity, and speed are determined from the RGMII input data stream as defined in the RGMII specification. The link speed is indicated as shown in the following table:

|   RGMII_SPEED(1:0) | Link Speed    |
|--------------------|---------------|
|                 00 | 10 Mbs mode   |
|                 01 | 100 Mbs mode  |
|                 10 | 1000 Mbs mode |
|                 11 | reserved      |

## 14.3.6.3 Forced Mode of Operation

The CPRGMII is operating in the forced mode of operation when the RGMII\_RX\_INBAND input is deasserted by setting MACCONTROL.EXT\_EN to 0. In the forced mode of operation, the in-band data is ignored if present. In this mode, the contents of RGMII\_CTL are meaningless. Link status, duplexity, and speed status should be determined from the external ethernet PHY via MDIO transactions.

## 14.3.6.4 RGMII Transmit (TX)

The CPRGMII transmit (TX) interface converts the CPGMAC G/MII input data into the DDR RGMII format. The DDR data is then output to the external PHY.