## 14.2.3 Ethernet Switch Pin List

The external signals for the Ethernet Switch module are shown in the following table.

Table 14-4. Ethernet Switch Pin List

| Pin            | Type*   | Description                     |
|----------------|---------|---------------------------------|
| GMIIx_RXCLK    | I       | GMII/MII Receive clock          |
| GMIIx_RXD[3:0] | I       | GMII/MII Receive data           |
| GMIIx_RXDV     | I       | GMII/MII Receive data valid     |
| GMIIx_RXER     | I       | GMII/MII Receive error          |
| GMIIx_COL      | I       | GMII/MII Collision detect       |
| GMIIx_CRS      | I       | GMII/MII Carrier sense          |
| GMIIx_TXCLK    | I       | GMII/MII Transmit clock         |
| GMIIx_TXD[3:0] | O       | GMII/MII Transmit data          |
| GMIIx_TXEN     | O       | GMII/MII Transmit enable        |
| RGMIIx_RCLK    | I       | RGMII Receive clock             |
| RGMIIx_RCTL    | I       | RGMII Receive control           |
| RGMIIx_RD[3:0] | I       | RGMII Receive data              |
| RGMIIx_TCLK    | O       | RGMII Transmit clock            |
| RGMIIx_TCTL    | O       | RGMII Transmit control          |
| RGMIIx_TD[3:0] | O       | RGMII Transmit data             |
| RMIIx_RXD[1:0] | I       | RMII Receiver data              |
| RMIIx_RXER     | I       | RMII Receiver error             |
| RMIIx_CRS_DV   | I       | RMII Carrier sense / Data valid |
| RMIIx_TXEN     | O       | RMII Transmit enable            |
| RMIIx_REFCLK   | I/O     | RMII Reference clock            |
| RMIIx_TXD[1:0] | O       | RMII Transmit data              |
| MDIO_CLK       | O       | MDIO Serial clock               |
| MDIO_DATA      | I/O     | MDIO Serial data                |

## 14.2.4 Ethernet Switch RMII Clocking Details

The RMII interface reference clock pin operates as an input. When used as an input, the clock is driven by the I/O pad. The operation is controlled by the GMII\_SEL[RMIIx\_IO\_CLK\_EN] fields in the Control Module, as shown in Figure 14-2.

<!-- image -->