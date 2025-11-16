<!-- image -->

www.ti.com

## 4.2.3 PRU-ICSS Pin List

The PRU-ICSS external interface signals are shown in Table 4-3. PRU GPI/GPO pin function depends on the operation mode. SeeTable 4-3 for a complete list of pin functions for each mode.

Table 4-3. PRU-ICSS Pin List

| Pin                         | Type   | Description                                        |
|-----------------------------|--------|----------------------------------------------------|
| pr1_mii_mr0_clk             | I      | MII0 Receive Clock                                 |
| pr1_mii0_rxdv               | I      | MII0 Receive Data Valid                            |
| pr1_mii0_rxd[3:0]           | I      | MII0 Receive Data                                  |
| pr1_mii0_rxlink             | I      | MII0 Receive Link                                  |
| pr1_mii0_rxer               | I      | MII0 Receive Data Error                            |
| pr1_mii0_crs                | I      | MII0 Carrier Sense                                 |
| pr1_mii0_col                | I      | MII0 Carrier Sense                                 |
| pr1_mii_mt0_clk             | I      | MII0 Transmit Clock                                |
| pr1_mii0_txen               | O      | MII0 Transmit Enable                               |
| pr1_mii0_txd[3:0]           | O      | MII0 Transmit Data                                 |
| pr1_mii_mr1_clk             | I      | MII1 Receive Clock                                 |
| pr1_mii1_rxdv               | I      | MII1 Receive Data Valid                            |
| pr1_mii1_rxd[3:0]           | I      | MII1 Receive Data                                  |
| pr1_mii1_rxlink             | I      | MII1 Receive Link                                  |
| pr1_mii1_rxer               | I      | MII1 Receive Data Error                            |
| pr1_mii1_crs                | I      | MII1 Carrier Sense                                 |
| pr1_mii1_col                | I      | MII1 Carrier Sense                                 |
| pr1_mii_mt1_clk             | I      | MII1 Transmit Clock                                |
| pr1_mii1_txen               | O      | MII1 Transmit Enable                               |
| pr1_mii1_txd[3:0]           | O      | MII1 Transmit Data                                 |
| pr1_mdio_mdclk              | O      | MDIO Clk                                           |
| pr1_mdio_data               | I/O    | MDIO Data                                          |
| pr1_edio_sof                | O      | ECAT Digital I/O Start of Frame                    |
| pr1_edio_latch_in           | I      | ECAT Digital I/O Latch In                          |
| pr1_edio_data_in[7:0]       | I      | ECAT Digital I/O Data In                           |
| pr1_edio_data_out[7:0]      | O      | ECAT Digital I/O Data Out                          |
| pr1_edc_sync0_out           | O      | ECAT Distributed Clock Sync Out                    |
| pr1_edc_sync1_out           | O      | ECAT Distributed Clock Sync Out                    |
| pr1_edc_latch0_in           | I      | ECAT Distributed Clock Latch In                    |
| pr1_edc_latch1_in           | I      | ECAT Distributed Clock Latch In                    |
| pr1_uart0_cts_n             | I      | UART Clear to Send                                 |
| pr1_uart0_rts_n             | O      | UART Request to Send                               |
| pr1_uart0_rxd               | I      | UART Receive Data                                  |
| pr1_uart0_txd               | O      | UART Transmit Data                                 |
| pr1_ecap0_ecap_capin_apwm_o | I/O    | Enhanced capture (ECAP) input or Auxiliary PWM out |
| pr1_pru0_pru_r30[15:0]      | O      | PRU0 Register R30 (GPO) Outputs                    |
| pr1_pru0_pru_r31[16:0]      | I      | PRU0 Register R31 (GPI)Inputs                      |
| pr1_pru1_pru_r30[15:0]      | O      | PRU1 Register R30 (GPO) Outputs                    |
| pr1_pru1_pru_r31[16:0]      | I      | PRU1 Register R31 (GPI) Inputs                     |