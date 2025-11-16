<!-- image -->

www.ti.com

## 14.2.2 Ethernet Switch Clock and Reset Management

The ethernet switch controller operates in its own clock domain and its initiator and target interfaces are connected to the L3/L4 through asynchronous bridges. The OCP interfaces are driven by the MAIN clock input. Additional reference clock inputs are provided for operating the various ethernet ports at different rates.

Table 14-3. Ethernet Switch Clock Signals

| Clock Signal                                     | Max Freq   | Reference / Source          | Comments                              |
|--------------------------------------------------|------------|-----------------------------|---------------------------------------|
| rft_clk Gigabit GMII Tx Reference clock          | 125 MHz    | Tied low                    | not supported                         |
| main_clk Logic/Interface clock                   | 125 MHz    | CORE_CLKOUTM5 / 2           | pd_per_cpsw_125mhz_gclk from PRCM     |
| mhz250_clk Gigabit RGMII Reference clock         | 250 MHz    | CORE_CLKOUTM5               | pd_per_cpsw_250mhz_gclk from PRCM     |
| mhz50_clk RMII and 100mbps RGMII Reference clock | 50 MHz     | CORE_CLKOUTM5 / 5           | pd_per_cpsw_50mhz_gclk from PRCM      |
| mhz5_clk 10 mbpsRGMII Reference clock            | 5 MHz      | CORE_CLKOUTM5 / 50          | pd_per_cpsw_5mhz_gclk from PRCM       |
| cpts_rft_clk IEEE 1588v2 clock                   | 250 MHz    | CORE_CLKOUTM4 CORE_CLKOUTM5 | pd_per_cpsw_cpts_rft_clk from PRCM    |
| gmii1_mr_clk GMII Port 1 Receive clock           | 25 MHz     | External Pin                | gmii1_rxclk_in from GMII1_RCLK pad    |
| gmii2_mr_clk GMII Port 2 Receive clock           | 25 MHz     | External Pin                | gmii2_rxclk_in from GMII2_RCLK pad    |
| gmii1_mt_clk GMII Port 1 Transmit clock          | 25 MHz     | External Pin                | gmii1_txclk_in from GMII1_TCLK pad    |
| gmii2_mt_clk GMII Port 2 Transmit clock          | 25 MHz     | External Pin                | gmii2_txclk_in from GMII2_TCLK pad    |
| rgmii1_rxc_clk RGMII Port 1 Receive clock        | 250 MHz    | External Pin                | rgmii1_rclk_in from RGMII1_RCLK pad   |
| rgmii2_rxc_clk RGMII Port 2 Receive clock        | 250 MHz    | External Pin                | rgmii2_rclk_in from RGMII2_RCLK pad   |
| rmii1_mhz_50_clk RMII Port 1 Reference clock     | 50 MHz     | External Pin                | rmii1_refclk_in from RMII1_REFCLK pad |
| rmii2_mhz_50_clk RMII Port 2 Reference clock     | 50 MHz     | External Pin                | rmii2_refclk_in from RMII2_REFCLK pad |