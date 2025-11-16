## 14.1.2 Unsupported Features

There are 18 level interrupts from the CPGMAC module and 2 (used) level interrupts from the MDIO module. The CPSW\_3GSS includes an interrupt combiner/pacer to combine these interrupts together to produce 4 interrupt outputs (per processing core). This device does not split processing among multiple cores but allows servicing of the Core0 interrupts by the Cortex-A8 or the PRU-ICSS.

The unsupported CPGMAC features in the device are shown in the following table.

Table 14-1. Unsupported CPGMAC Features

| Feature                          | Reason                                                                                                                            |
|----------------------------------|-----------------------------------------------------------------------------------------------------------------------------------|
| Multi-core split processing      | Core 1 and Core 2 interrupts not connected.                                                                                       |
| GMII                             | Only 4 Rx/Tx data pins are pinned out for each port. The device supports MII (on GMII interface), RGMII, and RMII interfaces only |
| Phy link status                  | The MLINK inputs are not pinned out. Phy link status outputs can be connected to device GPIOs.                                    |
| Internal Delay mode for RGMII    | RGMII Internal Delay mode is not supported.                                                                                       |
| RMII reference clock output mode | RMII reference clock does not satisfy input requirements of RMII Ethernet PHYs.                                                   |
| Reset isolation                  | Silicon bug. For more information, see AM335x ARM Cortex-A8 Microprocessors (MPUs) Silicon Errata (literature number SPRZ360).    |
| IEEE 1588v2                      | Only IEEE 1588v1 is supported. IEEE 1588v2 is not supported.                                                                      |

<!-- image -->