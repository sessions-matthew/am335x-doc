## 1.2.8 Changed Default Value of ncin and pcin Bits in vtp\_ctrl Register

See Section 9.3.1.53, vtp\_ctrl Register .

PG1.0: VTP\_CTRL.NCIN and VTP\_CTRL.PCIN reset value is 0.

PG2.x: VTP\_CTRL.NCIN and VTP\_CTRL.PCIN reset value is 1.

## 1.2.9 Changed Default Value of RGMII Mode to No Internal Delay

See Section 9.3.1.30, gmii\_sel Register and Errata Advisory 1.0.10.

PG1.0: RGMII1\_IDMODE And RGMII2\_IDMODE reset value is 0.

PG2.x: RGMII1\_IDMODE And RGMII2\_IDMODE reset value is 1.

## 1.2.10 Changed Default Value of RMII Clock Source

See Section 9.3.1.30, gmii\_sel Register and Errata Advisory 1.0.18.

PG1.0: RMII1\_IO\_CLK\_EN and RMII2\_IO\_CLK\_EN reset value is 0.

PG2.x: RMII1\_IO\_CLK\_EN and RMII2\_IO\_CLK\_EN reset value is 1.

## 1.2.11 Changed the Method of Determining Speed of Operation During EMAC Boot

See Section 26.1.9.4, EMAC Boot Procedure and Errata Advisory 1.0.7.

PG1.0: Link speed is determined by CONTROL register bit 6 in the external ethernet PHY. Note that some PHYs may not update this bit, as it is not necessary as described in the 802.3 specification.

PG2.x: Link speed is determined by reading the Auto-Negotiation Advertisement and Auto-Negotiation Link Partner Base Page Ability registers in the external ethernet PHY.

## 1.2.12 Added EFUSE\_SMA Register for Help Identifying Different Device Variants

See Section 9.3.1.49, efuse\_sma Register .

PG1.0: EFUSE\_SMA register value is not applicable. Value is always 0.

PG2.x: Added EFUSE\_SMA description to distinguish package type and maximum ARM frequency of the device.

<!-- image -->