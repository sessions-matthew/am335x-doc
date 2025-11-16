## 9.3 Registers

## 9.3.1 CONTROL\_MODULE Registers

Table 9-10 lists the memory-mapped registers for the CONTROL\_MODULE. All other register offset addresses not listed in Table 9-10 should be considered as reserved locations and the register contents should not be modified.

Table 9-10. CONTROL\_MODULE REGISTERS

| Offset   | Acronym                   | Register Description   | Section          |
|----------|---------------------------|------------------------|------------------|
| 0h       | control_revision          |                        | Section 9.3.1.1  |
| 4h       | control_hwinfo            |                        | Section 9.3.1.2  |
| 10h      | control_sysconfig         |                        | Section 9.3.1.3  |
| 40h      | control_status            |                        | Section 9.3.1.4  |
| 110h     | control_emif_sdram_config |                        | Section 9.3.1.5  |
| 428h     | core_sldo_ctrl            |                        | Section 9.3.1.6  |
| 42Ch     | mpu_sldo_ctrl             |                        | Section 9.3.1.7  |
| 444h     | clk32kdivratio_ctrl       |                        | Section 9.3.1.8  |
| 448h     | bandgap_ctrl              |                        | Section 9.3.1.9  |
| 44Ch     | bandgap_trim              |                        | Section 9.3.1.10 |
| 458h     | pll_clkinpulow_ctrl       |                        | Section 9.3.1.11 |
| 468h     | mosc_ctrl                 |                        | Section 9.3.1.12 |
| 470h     | deepsleep_ctrl            |                        | Section 9.3.1.13 |
| 50Ch     | dpll_pwr_sw_status        |                        | Section 9.3.1.14 |
| 600h     | device_id                 |                        | Section 9.3.1.15 |
| 604h     | dev_feature               |                        | Section 9.3.1.16 |
| 608h     | init_priority_0           |                        | Section 9.3.1.17 |
| 60Ch     | init_priority_1           |                        | Section 9.3.1.18 |
| 614h     | tptc_cfg                  |                        | Section 9.3.1.19 |
| 620h     | usb_ctrl0                 |                        | Section 9.3.1.20 |
| 624h     | usb_sts0                  |                        | Section 9.3.1.21 |
| 628h     | usb_ctrl1                 |                        | Section 9.3.1.22 |
| 62Ch     | usb_sts1                  |                        | Section 9.3.1.23 |
| 630h     | mac_id0_lo                |                        | Section 9.3.1.24 |
| 634h     | mac_id0_hi                |                        | Section 9.3.1.25 |
| 638h     | mac_id1_lo                |                        | Section 9.3.1.26 |
| 63Ch     | mac_id1_hi                |                        | Section 9.3.1.27 |
| 644h     | dcan_raminit              |                        | Section 9.3.1.28 |
| 648h     | usb_wkup_ctrl             |                        | Section 9.3.1.29 |
| 650h     | gmii_sel                  |                        | Section 9.3.1.30 |
| 664h     | pwmss_ctrl                |                        | Section 9.3.1.31 |
| 670h     | mreqprio_0                |                        | Section 9.3.1.32 |
| 674h     | mreqprio_1                |                        | Section 9.3.1.33 |
| 690h     | hw_event_sel_grp1         |                        | Section 9.3.1.34 |
| 694h     | hw_event_sel_grp2         |                        | Section 9.3.1.35 |
| 698h     | hw_event_sel_grp3         |                        | Section 9.3.1.36 |
| 69Ch     | hw_event_sel_grp4         |                        | Section 9.3.1.37 |
| 6A0h     | smrt_ctrl                 |                        | Section 9.3.1.38 |
| 6A4h     | mpuss_hw_debug_sel        |                        | Section 9.3.1.39 |
| 6A8h     | mpuss_hw_dbg_info         |                        | Section 9.3.1.40 |
| 770h     | vdd_mpu_opp_050           |                        | Section 9.3.1.41 |

<!-- image -->

<!-- image -->

Table 9-10. CONTROL\_MODULE REGISTERS (continued)

| Offset   | Acronym            | Register Description                                                                                                                                                                     | Section          |
|----------|--------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------|
| 774h     | vdd_mpu_opp_100    |                                                                                                                                                                                          | Section 9.3.1.42 |
| 778h     | vdd_mpu_opp_120    |                                                                                                                                                                                          | Section 9.3.1.43 |
| 77Ch     | vdd_mpu_opp_turbo  |                                                                                                                                                                                          | Section 9.3.1.44 |
| 7B8h     | vdd_core_opp_050   |                                                                                                                                                                                          | Section 9.3.1.45 |
| 7BCh     | vdd_core_opp_100   |                                                                                                                                                                                          | Section 9.3.1.46 |
| 7D0h     | bb_scale           |                                                                                                                                                                                          | Section 9.3.1.47 |
| 7F4h     | usb_vid_pid        |                                                                                                                                                                                          | Section 9.3.1.48 |
| 7FCh     | efuse_sma          |                                                                                                                                                                                          | Section 9.3.1.49 |
| 800h     | conf_gpmc_ad0      | See the device datasheet for information on default pin mux configurations. Note that the device ROM may change the default pin mux for certain pins based on the SYSBOOT mode settings. | Section 9.3.1.50 |
| 804h     | conf_gpmc_ad1      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 808h     | conf_gpmc_ad2      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 80Ch     | conf_gpmc_ad3      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 810h     | conf_gpmc_ad4      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 814h     | conf_gpmc_ad5      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 818h     | conf_gpmc_ad6      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 81Ch     | conf_gpmc_ad7      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 820h     | conf_gpmc_ad8      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 824h     | conf_gpmc_ad9      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 828h     | conf_gpmc_ad10     |                                                                                                                                                                                          | Section 9.3.1.50 |
| 82Ch     | conf_gpmc_ad11     |                                                                                                                                                                                          | Section 9.3.1.50 |
| 830h     | conf_gpmc_ad12     |                                                                                                                                                                                          | Section 9.3.1.50 |
| 834h     | conf_gpmc_ad13     |                                                                                                                                                                                          | Section 9.3.1.50 |
| 838h     | conf_gpmc_ad14     |                                                                                                                                                                                          | Section 9.3.1.50 |
| 83Ch     | conf_gpmc_ad15     |                                                                                                                                                                                          | Section 9.3.1.50 |
| 840h     | conf_gpmc_a0       |                                                                                                                                                                                          | Section 9.3.1.50 |
| 844h     | conf_gpmc_a1       |                                                                                                                                                                                          | Section 9.3.1.50 |
| 848h     | conf_gpmc_a2       |                                                                                                                                                                                          | Section 9.3.1.50 |
| 84Ch     | conf_gpmc_a3       |                                                                                                                                                                                          | Section 9.3.1.50 |
| 850h     | conf_gpmc_a4       |                                                                                                                                                                                          | Section 9.3.1.50 |
| 854h     | conf_gpmc_a5       |                                                                                                                                                                                          | Section 9.3.1.50 |
| 858h     | conf_gpmc_a6       |                                                                                                                                                                                          | Section 9.3.1.50 |
| 85Ch     | conf_gpmc_a7       |                                                                                                                                                                                          | Section 9.3.1.50 |
| 860h     | conf_gpmc_a8       |                                                                                                                                                                                          | Section 9.3.1.50 |
| 864h     | conf_gpmc_a9       |                                                                                                                                                                                          | Section 9.3.1.50 |
| 868h     | conf_gpmc_a10      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 86Ch     | conf_gpmc_a11      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 870h     | conf_gpmc_wait0    |                                                                                                                                                                                          | Section 9.3.1.50 |
| 874h     | conf_gpmc_wpn      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 878h     | conf_gpmc_ben1     |                                                                                                                                                                                          | Section 9.3.1.50 |
| 87Ch     | conf_gpmc_csn0     |                                                                                                                                                                                          | Section 9.3.1.50 |
| 880h     | conf_gpmc_csn1     |                                                                                                                                                                                          | Section 9.3.1.50 |
| 884h     | conf_gpmc_csn2     |                                                                                                                                                                                          | Section 9.3.1.50 |
| 888h     | conf_gpmc_csn3     |                                                                                                                                                                                          | Section 9.3.1.50 |
| 88Ch     | conf_gpmc_clk      |                                                                                                                                                                                          | Section 9.3.1.50 |
| 890h     | conf_gpmc_advn_ale |                                                                                                                                                                                          | Section 9.3.1.50 |

## Table 9-10. CONTROL\_MODULE REGISTERS (continued)

| Offset   | Acronym             | Register Description   | Section          |
|----------|---------------------|------------------------|------------------|
| 894h     | conf_gpmc_oen_ren   |                        | Section 9.3.1.50 |
| 898h     | conf_gpmc_wen       |                        | Section 9.3.1.50 |
| 89Ch     | conf_gpmc_ben0_cle  |                        | Section 9.3.1.50 |
| 8A0h     | conf_lcd_data0      |                        | Section 9.3.1.50 |
| 8A4h     | conf_lcd_data1      |                        | Section 9.3.1.50 |
| 8A8h     | conf_lcd_data2      |                        | Section 9.3.1.50 |
| 8ACh     | conf_lcd_data3      |                        | Section 9.3.1.50 |
| 8B0h     | conf_lcd_data4      |                        | Section 9.3.1.50 |
| 8B4h     | conf_lcd_data5      |                        | Section 9.3.1.50 |
| 8B8h     | conf_lcd_data6      |                        | Section 9.3.1.50 |
| 8BCh     | conf_lcd_data7      |                        | Section 9.3.1.50 |
| 8C0h     | conf_lcd_data8      |                        | Section 9.3.1.50 |
| 8C4h     | conf_lcd_data9      |                        | Section 9.3.1.50 |
| 8C8h     | conf_lcd_data10     |                        | Section 9.3.1.50 |
| 8CCh     | conf_lcd_data11     |                        | Section 9.3.1.50 |
| 8D0h     | conf_lcd_data12     |                        | Section 9.3.1.50 |
| 8D4h     | conf_lcd_data13     |                        | Section 9.3.1.50 |
| 8D8h     | conf_lcd_data14     |                        | Section 9.3.1.50 |
| 8DCh     | conf_lcd_data15     |                        | Section 9.3.1.50 |
| 8E0h     | conf_lcd_vsync      |                        | Section 9.3.1.50 |
| 8E4h     | conf_lcd_hsync      |                        | Section 9.3.1.50 |
| 8E8h     | conf_lcd_pclk       |                        | Section 9.3.1.50 |
| 8ECh     | conf_lcd_ac_bias_en |                        | Section 9.3.1.50 |
| 8F0h     | conf_mmc0_dat3      |                        | Section 9.3.1.50 |
| 8F4h     | conf_mmc0_dat2      |                        | Section 9.3.1.50 |
| 8F8h     | conf_mmc0_dat1      |                        | Section 9.3.1.50 |
| 8FCh     | conf_mmc0_dat0      |                        | Section 9.3.1.50 |
| 900h     | conf_mmc0_clk       |                        | Section 9.3.1.50 |
| 904h     | conf_mmc0_cmd       |                        | Section 9.3.1.50 |
| 908h     | conf_mii1_col       |                        | Section 9.3.1.50 |
| 90Ch     | conf_mii1_crs       |                        | Section 9.3.1.50 |
| 910h     | conf_mii1_rx_er     |                        | Section 9.3.1.50 |
| 914h     | conf_mii1_tx_en     |                        | Section 9.3.1.50 |
| 918h     | conf_mii1_rx_dv     |                        | Section 9.3.1.50 |
| 91Ch     | conf_mii1_txd3      |                        | Section 9.3.1.50 |
| 920h     | conf_mii1_txd2      |                        | Section 9.3.1.50 |
| 924h     | conf_mii1_txd1      |                        | Section 9.3.1.50 |
| 928h     | conf_mii1_txd0      |                        | Section 9.3.1.50 |
| 92Ch     | conf_mii1_tx_clk    |                        | Section 9.3.1.50 |
| 930h     | conf_mii1_rx_clk    |                        | Section 9.3.1.50 |
| 934h     | conf_mii1_rxd3      |                        | Section 9.3.1.50 |
| 938h     | conf_mii1_rxd2      |                        | Section 9.3.1.50 |
| 93Ch     | conf_mii1_rxd1      |                        | Section 9.3.1.50 |
| 940h     | conf_mii1_rxd0      |                        | Section 9.3.1.50 |
| 944h     | conf_rmii1_ref_clk  |                        | Section 9.3.1.50 |
| 948h     | conf_mdio           |                        | Section 9.3.1.50 |
| 94Ch     | conf_mdc            |                        | Section 9.3.1.50 |

<!-- image -->

<!-- image -->

Table 9-10. CONTROL\_MODULE REGISTERS (continued)

| Offset   | Acronym                | Register Description   | Section          |
|----------|------------------------|------------------------|------------------|
| 950h     | conf_spi0_sclk         |                        | Section 9.3.1.50 |
| 954h     | conf_spi0_d0           |                        | Section 9.3.1.50 |
| 958h     | conf_spi0_d1           |                        | Section 9.3.1.50 |
| 95Ch     | conf_spi0_cs0          |                        | Section 9.3.1.50 |
| 960h     | conf_spi0_cs1          |                        | Section 9.3.1.50 |
| 964h     | conf_ecap0_in_pwm0_out |                        | Section 9.3.1.50 |
| 968h     | conf_uart0_ctsn        |                        | Section 9.3.1.50 |
| 96Ch     | conf_uart0_rtsn        |                        | Section 9.3.1.50 |
| 970h     | conf_uart0_rxd         |                        | Section 9.3.1.50 |
| 974h     | conf_uart0_txd         |                        | Section 9.3.1.50 |
| 978h     | conf_uart1_ctsn        |                        | Section 9.3.1.50 |
| 97Ch     | conf_uart1_rtsn        |                        | Section 9.3.1.50 |
| 980h     | conf_uart1_rxd         |                        | Section 9.3.1.50 |
| 984h     | conf_uart1_txd         |                        | Section 9.3.1.50 |
| 988h     | conf_i2c0_sda          |                        | Section 9.3.1.50 |
| 98Ch     | conf_i2c0_scl          |                        | Section 9.3.1.50 |
| 990h     | conf_mcasp0_aclkx      |                        | Section 9.3.1.50 |
| 994h     | conf_mcasp0_fsx        |                        | Section 9.3.1.50 |
| 998h     | conf_mcasp0_axr0       |                        | Section 9.3.1.50 |
| 99Ch     | conf_mcasp0_ahclkr     |                        | Section 9.3.1.50 |
| 9A0h     | conf_mcasp0_aclkr      |                        | Section 9.3.1.50 |
| 9A4h     | conf_mcasp0_fsr        |                        | Section 9.3.1.50 |
| 9A8h     | conf_mcasp0_axr1       |                        | Section 9.3.1.50 |
| 9ACh     | conf_mcasp0_ahclkx     |                        | Section 9.3.1.50 |
| 9B0h     | conf_xdma_event_intr0  |                        | Section 9.3.1.50 |
| 9B4h     | conf_xdma_event_intr1  |                        | Section 9.3.1.50 |
| 9B8h     | conf_warmrstn          |                        | Section 9.3.1.50 |
| 9C0h     | conf_nnmi              |                        | Section 9.3.1.50 |
| 9D0h     | conf_tms               |                        | Section 9.3.1.50 |
| 9D4h     | conf_tdi               |                        | Section 9.3.1.50 |
| 9D8h     | conf_tdo               |                        | Section 9.3.1.50 |
| 9DCh     | conf_tck               |                        | Section 9.3.1.50 |
| 9E0h     | conf_trstn             |                        | Section 9.3.1.50 |
| 9E4h     | conf_emu0              |                        | Section 9.3.1.50 |
| 9E8h     | conf_emu1              |                        | Section 9.3.1.50 |
| 9F8h     | conf_rtc_pwronrstn     |                        | Section 9.3.1.50 |
| 9FCh     | conf_pmic_power_en     |                        | Section 9.3.1.50 |
| A00h     | conf_ext_wakeup        |                        | Section 9.3.1.50 |
| A1Ch     | conf_usb0_drvvbus      |                        | Section 9.3.1.50 |
| A34h     | conf_usb1_drvvbus      |                        | Section 9.3.1.50 |
| E00h     | cqdetect_status        |                        | Section 9.3.1.51 |
| E04h     | ddr_io_ctrl            |                        | Section 9.3.1.52 |
| E0Ch     | vtp_ctrl               |                        | Section 9.3.1.53 |
| E14h     | vref_ctrl              |                        | Section 9.3.1.54 |
| F90h     | tpcc_evt_mux_0_3       |                        | Section 9.3.1.55 |
| F94h     | tpcc_evt_mux_4_7       |                        | Section 9.3.1.56 |
| F98h     | tpcc_evt_mux_8_11      |                        | Section 9.3.1.57 |

## Table 9-10. CONTROL\_MODULE REGISTERS (continued)

| Offset   | Acronym            | Register Description   | Section          |
|----------|--------------------|------------------------|------------------|
| F9Ch     | tpcc_evt_mux_12_15 |                        | Section 9.3.1.58 |
| FA0h     | tpcc_evt_mux_16_19 |                        | Section 9.3.1.59 |
| FA4h     | tpcc_evt_mux_20_23 |                        | Section 9.3.1.60 |
| FA8h     | tpcc_evt_mux_24_27 |                        | Section 9.3.1.61 |
| FACh     | tpcc_evt_mux_28_31 |                        | Section 9.3.1.62 |
| FB0h     | tpcc_evt_mux_32_35 |                        | Section 9.3.1.63 |
| FB4h     | tpcc_evt_mux_36_39 |                        | Section 9.3.1.64 |
| FB8h     | tpcc_evt_mux_40_43 |                        | Section 9.3.1.65 |
| FBCh     | tpcc_evt_mux_44_47 |                        | Section 9.3.1.66 |
| FC0h     | tpcc_evt_mux_48_51 |                        | Section 9.3.1.67 |
| FC4h     | tpcc_evt_mux_52_55 |                        | Section 9.3.1.68 |
| FC8h     | tpcc_evt_mux_56_59 |                        | Section 9.3.1.69 |
| FCCh     | tpcc_evt_mux_60_63 |                        | Section 9.3.1.70 |
| FD0h     | timer_evt_capt     |                        | Section 9.3.1.71 |
| FD4h     | ecap_evt_capt      |                        | Section 9.3.1.72 |
| FD8h     | adc_evt_capt       |                        | Section 9.3.1.73 |
| 1000h    | reset_iso          |                        | Section 9.3.1.74 |
| 1318h    | dpll_pwr_sw_ctrl   |                        | Section 9.3.1.75 |
| 131Ch    | ddr_cke_ctrl       |                        | Section 9.3.1.76 |
| 1320h    | sma2               |                        | Section 9.3.1.77 |
| 1324h    | m3_txev_eoi        |                        | Section 9.3.1.78 |
| 1328h    | ipc_msg_reg0       |                        | Section 9.3.1.79 |
| 132Ch    | ipc_msg_reg1       |                        | Section 9.3.1.80 |
| 1330h    | ipc_msg_reg2       |                        | Section 9.3.1.81 |
| 1334h    | ipc_msg_reg3       |                        | Section 9.3.1.82 |
| 1338h    | ipc_msg_reg4       |                        | Section 9.3.1.83 |
| 133Ch    | ipc_msg_reg5       |                        | Section 9.3.1.84 |
| 1340h    | ipc_msg_reg6       |                        | Section 9.3.1.85 |
| 1344h    | ipc_msg_reg7       |                        | Section 9.3.1.86 |
| 1404h    | ddr_cmd0_ioctrl    |                        | Section 9.3.1.87 |
| 1408h    | ddr_cmd1_ioctrl    |                        | Section 9.3.1.88 |
| 140Ch    | ddr_cmd2_ioctrl    |                        | Section 9.3.1.89 |
| 1440h    | ddr_data0_ioctrl   |                        | Section 9.3.1.90 |
| 1444h    | ddr_data1_ioctrl   |                        | Section 9.3.1.91 |

<!-- image -->

<!-- image -->

## 9.3.1.1 control\_revision Register (offset = 0h) [reset = 0h]

control\_revision is shown in Figure 9-2 and described in Table 9-11.

| Figure 9-2. control_revision Register   | Figure 9-2. control_revision Register   | Figure 9-2. control_revision Register   | Figure 9-2. control_revision Register   | Figure 9-2. control_revision Register   | Figure 9-2. control_revision Register   | Figure 9-2. control_revision Register   | Figure 9-2. control_revision Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| ip_rev_scheme Reserved                  | ip_rev_scheme Reserved                  | ip_rev_scheme Reserved                  | ip_rev_scheme Reserved                  | ip_rev_func                             | ip_rev_func                             | ip_rev_func                             | ip_rev_func                             |
| R-0h R-0h                               | R-0h R-0h                               | R-0h R-0h                               | R-0h R-0h                               | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| ip_rev_func                             | ip_rev_func                             | ip_rev_func                             | ip_rev_func                             | ip_rev_func                             | ip_rev_func                             | ip_rev_func                             | ip_rev_func                             |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| ip_rev_rtl                              | ip_rev_rtl                              | ip_rev_rtl                              | ip_rev_rtl                              | ip_rev_major                            | ip_rev_major                            | ip_rev_major                            | ip_rev_major                            |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| ip_rev_custom                           | ip_rev_custom                           | ip_rev_minor                            | ip_rev_minor                            | ip_rev_minor                            | ip_rev_minor                            | ip_rev_minor                            | ip_rev_minor                            |

R-0h

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 9-11. control\_revision Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                 |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | ip_rev_scheme | R      | 0h      | 01 - New Scheme                                                                                                                                                             |
| 29-28 | Reserved      | R      | 0h      |                                                                                                                                                                             |
| 27-16 | ip_rev_func   | R      | 0h      | Function indicates a software compatible module family. If there is no level of software compatibility a new Func number (and hence REVISION) should be assigned.           |
| 15-11 | ip_rev_rtl    | R      | 0h      | RTL Version (R).                                                                                                                                                            |
| 10-8  | ip_rev_major  | R      | 0h      | Major Revision (X).                                                                                                                                                         |
| 7-6   | ip_rev_custom | R      | 0h      | Indicates a special version for a particular device. Consequence of use may avoid use of standard Chip Support Library (CSL) / Drivers - 00: Non custom (standard) revision |
| 5-0   | ip_rev_minor  | R      | 0h      | Minor Revision (Y).                                                                                                                                                         |

## 9.3.1.2 control\_hwinfo Register (offset = 4h) [reset = 0h]

control\_hwinfo is shown in Figure 9-3 and described in Table 9-12.

## Figure 9-3. control\_hwinfo Register

20

19

18

17

16

15

14

ip\_hwinfo

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-12. control\_hwinfo Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description         |
|-------|-----------|--------|---------|---------------------|
| 31-0  | ip_hwinfo | R      | 0h      | IP Module dependent |

13

12

11

10

31

30

29

28

27

26

25

24

23

22

21

9

8

7

6

<!-- image -->

5

4

3

2

1

0

<!-- image -->

www.ti.com

## 9.3.1.3 control\_sysconfig Register (offset = 10h) [reset = 0h]

control\_sysconfig is shown in Figure 9-4 and described in Table 9-13.

| Figure 9-4. control_sysconfig Register   | Figure 9-4. control_sysconfig Register   | Figure 9-4. control_sysconfig Register   | Figure 9-4. control_sysconfig Register   | Figure 9-4. control_sysconfig Register   | Figure 9-4. control_sysconfig Register   | Figure 9-4. control_sysconfig Register   | Figure 9-4. control_sysconfig Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| Reserved                                 | Reserved                                 | standby                                  | standby                                  | idlemode                                 | idlemode                                 | freeemu                                  | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R/W-0h                                   | R/W-0h                                   | R-0h                                     | R-0h                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-13. control\_sysconfig Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                     |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | Reserved | R      | 0h      |                                                                                                                                                                                                 |
| 5-4   | standby  | R      | 0h      | Configure local initiator state management 00: Force Standby 01: No Standby Mode 10: Smart Standby 11: Smart Standby wakeup capable Reserved in Control Module since it has no local initiator. |
| 3-2   | idlemode | R/W    | 0h      | Configure local target state management 00: Force Idle 01: No Idle 10: Smart Idle 11: Smart Idle wakeup capable                                                                                 |
| 1     | freeemu  | R      | 0h      | Sensitivity to Emulation suspend input. 0: Module is sensitive to EMU suspend 1: Module not sensitive to EMU suspend                                                                            |
| 0     | Reserved | R      | 0h      |                                                                                                                                                                                                 |

## 9.3.1.4 control\_status Register (offset = 40h) [reset = 0h]

control\_status is shown in Figure 9-5 and described in Table 9-14.

| Figure 9-5. control_status Register   | Figure 9-5. control_status Register   | Figure 9-5. control_status Register   | Figure 9-5. control_status Register   | Figure 9-5. control_status Register   | Figure 9-5. control_status Register   | Figure 9-5. control_status Register   | Figure 9-5. control_status Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| sysboot1                              | sysboot1                              | testmd                                | testmd                                | admux                                 | admux                                 | waiten                                | bw                                    |
| R-X                                   | R-X                                   | R-X                                   | R-X                                   | R-X                                   | R-X                                   | R-X                                   | R-X                                   |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
|                                       |                                       | Reserved                              |                                       |                                       |                                       | devtype                               |                                       |
|                                       |                                       | R-0h                                  |                                       |                                       |                                       | R-11b                                 |                                       |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| sysboot0                              | sysboot0                              | sysboot0                              | sysboot0                              | sysboot0                              | sysboot0                              | sysboot0                              | sysboot0                              |

R-X

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-14. control\_status Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                              |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | Reserved | R      | 0h      |                                                                                                                                                          |
| 23-22 | sysboot1 | R      | X       | Used to select crystal clock frequency. See SYSBOOT Configuration Pins. Reset value is from SYSBOOT[15:14].                                              |
| 21-20 | testmd   | R      | X       | Set to 00b. See SYSBOOT Configuration Pins for more information. Reset value is from SYSBOOT[13:12].                                                     |
| 19-18 | admux    | R      | X       | GPMC CS0 Default Address Muxing 00: No Addr/Data Muxing 01: Addr/Addr/Data Muxing 10: Addr/Data Muxing 11: Reserved Reset value is from SYSBOOT[11:10].  |
| 17    | waiten   | R      | X       | GPMC CS0 Default Wait Enable 0: Ignore WAIT input 1: Use WAIT input See SYSBOOT Configuration Pins for more information. Reset value is from SYSBOOT[9]. |
| 16    | bw       | R      | X       | GPMC CS0 Default Bus Width 0: 8-bit data bus 1: 16-bit data bus See SYSBOOT Configuration Pins for more information. Reset value is from SYSBOOT[8].     |
| 15-11 | Reserved | R      | 0h      |                                                                                                                                                          |
| 10-8  | devtype  | R      | 11b     | 000: Reserved 001: Reserved 010: Reserved 011: General Purpose (GP) Device 111: Reserved                                                                 |
| 7-0   | sysboot0 | R      | X       | Selected boot mode. See SYSBOOT Configuration Pins for more information. Reset value is from SYSBOOT[7:0].                                               |

<!-- image -->

<!-- image -->

## 9.3.1.5 control\_emif\_sdram\_config Register (offset = 110h) [reset = 0h]

The CONTROL\_EMIF\_SDRAM\_CONFIG register exports SDRAM configuration information to the EMIF after resuming from low power scenarios.

This register should be loaded with the same value as SDRAM\_CONFIG during DDR initialization. control\_emif\_sdram\_config is shown in Figure 9-6 and described in Table 9-15.

Figure 9-6. control\_emif\_sdram\_config Register

| 31          | 30          | 29         | 28        | 27          | 26          | 25       | 24       |
|-------------|-------------|------------|-----------|-------------|-------------|----------|----------|
| SDRAM_TYPE  | SDRAM_TYPE  | SDRAM_TYPE | IBANK_POS | IBANK_POS   | DDR_TERM    | DDR_TERM | DDR_TERM |
| R/W-0h      | R/W-0h      | R/W-0h     | R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h   | R/W-0h   |
| 23          | 22          | 21         | 20        | 19          | 18          | 17       | 16       |
| Reserved    | DYN_ODT     | DYN_ODT    | Reserved  | SDRAM_DRIVE | SDRAM_DRIVE | CWL      | CWL      |
| R-0h        | R/W-0h      | R/W-0h     | R-0h      | R/W-0h      | R/W-0h      | R/W-0h   | R/W-0h   |
| 15          | 14          | 13         | 12        | 11          | 10          | 9        | 8        |
| NARROW_MODE | NARROW_MODE |            | CL        | CL          | CL          | ROWSIZE  | ROWSIZE  |
| R/W-0h      | R/W-0h      |            | R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h   | R/W-0h   |
| 7           | 6           | 5          | 4         | 3           | 2           | 1        | 0        |
| ROWSIZE     | IBANK       |            | EBANK     |             | PAGESIZE    | PAGESIZE | PAGESIZE |
| R/W-0h      | R/W-0h      |            |           | R/W-0h      | R/W-0h      | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 9-15. control\_emif\_sdram\_config Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | SDRAM_TYPE | R/W    | 0h      | SDRAM Type selection 000 - Reserved 001 - LPDDR1 010 - DDR2 011 - DDR3 100 - Reserved 101 - Reserved 110 - Reserved 111 - Reserved                                                                                                                                                                                                                                                                                                                                             |
| 28-27 | IBANK_POS  | R/W    | 0h      | Internal bank position. 00 - All Bank Address bits assigned from OCP address above column address bits. 01 - Bank Address bits [1:0] assigned from OCP address above column address bits and bit [2] from OCP address bits above row address bits. 10 - Bank Address bit [0] assigned from OCP address above column address bits and bit [2:1] from OCP address bits above row address bits. 11 - All Bank Address bits assigned from OCP address bits above row address bits. |
| 26-24 | DDR_TERM   | R/W    | 0h      | DDR2 and DDR3 termination resistor value. Set to 0 to disable termination. For DDR2, set to 1 for 75 ohm, set to 2 for 150 ohm, and set to 3 for 50 ohm. For DDR3, set to 1 for RZQ/4, set to 2 for RZQ/2, set to 3 for RZQ/6, set to 4 for RZQ/12, and set to 5 for RZQ/8. All other values are reserved.                                                                                                                                                                     |
| 23    | DDR2_DDQS  | R      | 0h      | Reserved. Defaults to 0 for single ended DQS. For differential operation, SDRAM_CONFIG register in the EMIF module must be written.                                                                                                                                                                                                                                                                                                                                            |

<!-- image -->

Table 9-15. control\_emif\_sdram\_config Register Field Descriptions (continued)

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 22-21 | DYN_ODT     | R/W    | 0h      | DDR3 Dynamic ODT. Set to 0 to turn off dynamic ODT. Set to 1 for RZQ/4 and set to 2 for RZQ/2. All other values are reserved.                                                                                                                                                                                                                                                               |
| 20    | Reserved    | R      | 0h      | Reserved. Read returns 0.                                                                                                                                                                                                                                                                                                                                                                   |
| 19-18 | SDRAM_DRIVE | R/W    | 0h      | SDRAM drive strength. For DDR2, set to 0 for normal, and set to 1 for weak drive strength. For DDR3, set to 0 for RZQ/6 and set to 1 for RZQ/7. For LPDDR1, set to 0 for full, set to 1 for 1/2, set to 2 for 1/4, and set to 3 for 1/8 drive strength. All other values are reserved.                                                                                                      |
| 17-16 | CWL         | R/W    | 0h      | DDR3 CAS Write latency. Value of 0, 1, 2, and 3 (CAS write latency of 5, 6, 7, and 8) are supported. Use the lowest value supported for best performance. All other values are reserved.                                                                                                                                                                                                    |
| 15-14 | NARROW_MODE | R/W    | 0h      | SDRAM data bus width. Set to 0 for 32-bit and set to 1 for 16-bit. All other values are reserved.                                                                                                                                                                                                                                                                                           |
| 13-10 | CL          | R/W    | 0h      | CAS Latency. The value of this field defines the CAS latency to be used when accessing connected SDRAM devices. Value of 2, 3, 4, and 5 (CAS latency of 2, 3, 4, and 5) are supported for DDR2. Value of 2, 4, 6, 8, 10, 12, and 14 (CAS latency of 5, 6, 7, 8, 9, 10, and 11) are supported for DDR3. All other values are reserved.                                                       |
| 9-7   | ROWSIZE     | R/W    | 0h      | Row Size. Defines the number of row address bits of connected SDRAM devices. Set to 0 for 9 row bits, set to 1 for 10 row bits, set to 2 for 11 row bits, set to 3 for 12 row bits, set to 4 for 13 row bits, set to 5 for 14 row bits, set to 6 for 15 row bits, and set to 7 for 16 row bits. This field is only used when ibank_pos field in SDRAM Config register is set to 1, 2, or 3. |
| 6-4   | IBANK       | R/W    | 0h      | Internal Bank setup. Defines number of banks inside connected SDRAM devices. Set to 0 for 1 bank, set to 1 for 2 banks, set to 2 for 4 banks, and set to 3 for 8 banks. All other values are reserved.                                                                                                                                                                                      |
| 3     | EBANK       | R/W    | 0h      | External chip select setup. Defines whether SDRAM accesses will use 1 or 2 chip select lines. Set to 0 to use pad_cs_o_n[0] only. Set to 1 to use pad_cs_o_n[1:0].                                                                                                                                                                                                                          |
| 2-0   | PAGESIZE    | R/W    | 0h      | Page Size. Defines the internal page size of connected SDRAM devices. Set to 0 for 256-word page (8 column bits), set to 1 for 512- word page (9 column bits), set to 2 for 1024-word page (10 column bits), and set to 3 for 2048-word page (11 column bits). All other values are reserved.                                                                                               |

<!-- image -->

www.ti.com

## 9.3.1.6 core\_sldo\_ctrl Register (offset = 428h) [reset = 0h]

core\_sldo\_ctrl is shown in Figure 9-7 and described in Table 9-16.

| Figure 9-7. core_sldo_ctrl Register   | Figure 9-7. core_sldo_ctrl Register   | Figure 9-7. core_sldo_ctrl Register   | Figure 9-7. core_sldo_ctrl Register   | Figure 9-7. core_sldo_ctrl Register   | Figure 9-7. core_sldo_ctrl Register   | Figure 9-7. core_sldo_ctrl Register   | Figure 9-7. core_sldo_ctrl Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
|                                       | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | vset                                  | vset                                  |
| R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| vset                                  | vset                                  | vset                                  | vset                                  | vset                                  | vset                                  | vset                                  | vset                                  |
| R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-16. core\_sldo\_ctrl Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-26 | Reserved | R/W    | 0h      |               |
| 25-16 | vset     | R/W    | 0h      | Trims VDDAR   |
| 15-0  | Reserved | R/W    | 0h      |               |

## 9.3.1.7 mpu\_sldo\_ctrl Register (offset = 42Ch) [reset = 0h]

mpu\_sldo\_ctrl is shown in Figure 9-8 and described in Table 9-17.

| Figure 9-8. mpu_sldo_ctrl Register   | Figure 9-8. mpu_sldo_ctrl Register   | Figure 9-8. mpu_sldo_ctrl Register   | Figure 9-8. mpu_sldo_ctrl Register   | Figure 9-8. mpu_sldo_ctrl Register   | Figure 9-8. mpu_sldo_ctrl Register   | Figure 9-8. mpu_sldo_ctrl Register   | Figure 9-8. mpu_sldo_ctrl Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
|                                      |                                      | Reserved                             | Reserved                             |                                      |                                      | vset                                 | vset                                 |
|                                      |                                      | R/W-0h                               | R/W-0h                               |                                      |                                      | R/W-0h                               | R/W-0h                               |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| vset                                 | vset                                 | vset                                 | vset                                 | vset                                 | vset                                 | vset                                 | vset                                 |
|                                      |                                      |                                      | R/W-0h                               |                                      |                                      |                                      |                                      |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
|                                      |                                      |                                      | R/W-0h                               |                                      |                                      |                                      |                                      |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-17. mpu\_sldo\_ctrl Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-26 | Reserved | R/W    | 0h      |               |
| 25-16 | vset     | R/W    | 0h      | Trims VDDAR   |
| 15-0  | Reserved | R/W    | 0h      |               |

<!-- image -->

<!-- image -->

## 9.3.1.8 clk32kdivratio\_ctrl Register (offset = 444h) [reset = 0h]

clk32kdivratio\_ctrl is shown in Figure 9-9 and described in Table 9-18.

| Figure 9-9. clk32kdivratio_ctrl Register   | Figure 9-9. clk32kdivratio_ctrl Register   | Figure 9-9. clk32kdivratio_ctrl Register   | Figure 9-9. clk32kdivratio_ctrl Register   | Figure 9-9. clk32kdivratio_ctrl Register   | Figure 9-9. clk32kdivratio_ctrl Register   | Figure 9-9. clk32kdivratio_ctrl Register   | Figure 9-9. clk32kdivratio_ctrl Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | clkdivopp50_en                             |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-18. clk32kdivratio\_ctrl Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                            |
|-------|----------------|--------|---------|------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved       | R      | 0h      |                                                                                                                        |
| 0     | clkdivopp50_en | R/W    | 0h      | 0 : OPP100 operation, use ratio for 24MHz to 32KHz division 1 : OPP50 operation, use ratio for 12MHz to 32KHz division |

R/W-0h

## 9.3.1.9 bandgap\_ctrl Register (offset = 448h) [reset = 0h]

bandgap\_ctrl is shown in Figure 9-10 and described in Table 9-19.

| Figure 9-10. bandgap_ctrl Register   | Figure 9-10. bandgap_ctrl Register   | Figure 9-10. bandgap_ctrl Register   | Figure 9-10. bandgap_ctrl Register   | Figure 9-10. bandgap_ctrl Register   | Figure 9-10. bandgap_ctrl Register   | Figure 9-10. bandgap_ctrl Register   | Figure 9-10. bandgap_ctrl Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| dtemp                                | dtemp                                | dtemp                                | dtemp                                | dtemp                                | dtemp                                | dtemp                                | dtemp                                |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| cbiassel                             | bgroff                               | tmpsoff                              | soc                                  | clrz                                 | contconv                             | ecoz                                 | tshut                                |
| R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R-0h                                 | R-0h                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-19. bandgap\_ctrl Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                       |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------|
| 31-16 | Reserved | R      | 0h      |                                                                                   |
| 15-8  | dtemp    | R      | 0h      | Temperature data from ADC. To be used when end of conversion (EOCZ) is 0.         |
| 7     | cbiassel | R/W    | 0h      | 0: Select bandgap voltage as reference 1: Select resistor divider as reference    |
| 6     | bgroff   | R/W    | 0h      | 0: Normal operation 1: Bandgap is OFF (OFF Mode)                                  |
| 5     | tmpsoff  | R/W    | 0h      | 0: Normal operation 1: Temperature sensor is off and thermal shutdown in OFF mode |
| 4     | soc      | R/W    | 0h      | ADC start of conversion. Transition to high starts a new ADC conversion cycle.    |
| 3     | clrz     | R/W    | 0h      | 0: Resets the digital outputs                                                     |
| 2     | contconv | R/W    | 0h      | 0: ADC single conversion mode 1: ADC continuous conversion mode                   |
| 1     | ecoz     | R      | 0h      | ADC end of conversion 0: End of conversion 1: Conversion in progress              |
| 0     | tshut    | R      | 0h      | 0: Normal operation 1: Thermal shutdown event (greater than 147C)                 |

<!-- image -->

<!-- image -->

## 9.3.1.10 bandgap\_trim Register (offset = 44Ch) [reset = 0h]

bandgap\_trim is shown in Figure 9-11 and described in Table 9-20.

| Figure 9-11. bandgap_trim Register   | Figure 9-11. bandgap_trim Register   | Figure 9-11. bandgap_trim Register   | Figure 9-11. bandgap_trim Register   | Figure 9-11. bandgap_trim Register   | Figure 9-11. bandgap_trim Register   | Figure 9-11. bandgap_trim Register   | Figure 9-11. bandgap_trim Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| dtrbgapc                             | dtrbgapc                             | dtrbgapc                             | dtrbgapc                             | dtrbgapc                             | dtrbgapc                             | dtrbgapc                             | dtrbgapc                             |
| R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| dtrbgapv                             | dtrbgapv                             | dtrbgapv                             | dtrbgapv                             | dtrbgapv                             | dtrbgapv                             | dtrbgapv                             | dtrbgapv                             |
| R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| dtrtemps                             | dtrtemps                             | dtrtemps                             | dtrtemps                             | dtrtemps                             | dtrtemps                             | dtrtemps                             | dtrtemps                             |
| R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               | R/W-0h                               |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| dtrtempsc                            | dtrtempsc                            | dtrtempsc                            | dtrtempsc                            | dtrtempsc                            | dtrtempsc                            | dtrtempsc                            | dtrtempsc                            |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-20. bandgap\_trim Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                        |
|-------|-----------|--------|---------|------------------------------------|
| 31-24 | dtrbgapc  | R/W    | 0h      | trim the output voltage of bandgap |
| 23-16 | dtrbgapv  | R/W    | 0h      | trim the output voltage of bandgap |
| 15-8  | dtrtemps  | R/W    | 0h      | trim the temperature sensor        |
| 7-0   | dtrtempsc | R/W    | 0h      | trim the temperature sensor        |

## 9.3.1.11 pll\_clkinpulow\_ctrl Register (offset = 458h) [reset = 0h]

pll\_clkinpulow\_ctrl is shown in Figure 9-12 and described in Table 9-21.

| Figure 9-12. pll_clkinpulow_ctrl Register   | Figure 9-12. pll_clkinpulow_ctrl Register   | Figure 9-12. pll_clkinpulow_ctrl Register   | Figure 9-12. pll_clkinpulow_ctrl Register   | Figure 9-12. pll_clkinpulow_ctrl Register   | Figure 9-12. pll_clkinpulow_ctrl Register   | Figure 9-12. pll_clkinpulow_ctrl Register   | Figure 9-12. pll_clkinpulow_ctrl Register   |
|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| 31                                          | 30                                          | 29                                          | 28                                          | 27                                          | 26                                          | 25                                          | 24                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 23                                          | 22                                          | 21                                          | 20                                          | 19                                          | 18                                          | 17                                          | 16                                          |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 15                                          | 14                                          | 13                                          | 12                                          | 11                                          | 10                                          | 9                                           | 8                                           |
| Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    | Reserved                                    |
| R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        | R-0h                                        |
| 7                                           | 6                                           | 5                                           | 4                                           | 3                                           | 2                                           | 1                                           | 0                                           |
|                                             |                                             | Reserved                                    |                                             |                                             | ddr_pll_clkinpul ow_sel                     | disp_pll_clkinpu low_sel                    | mpu_dpll_clkin pulow_sel                    |
|                                             |                                             | R-0h                                        |                                             |                                             | R/W-0h                                      | R/W-0h                                      | R/W-0h                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-21. pll\_clkinpulow\_ctrl Register Field Descriptions

| Bit   | Field                   | Type   | Reset   | Description                                                                                |
|-------|-------------------------|--------|---------|--------------------------------------------------------------------------------------------|
| 31-3  | Reserved                | R      | 0h      |                                                                                            |
| 2     | ddr_pll_clkinpulow_sel  | R/W    | 0h      | 0 : Select CORE_CLKOUT_M6 clock as CLKINPULOW 1 : Select PER_CLKOUT_M2 clock as CLKINPULOW |
| 1     | disp_pll_clkinpulow_sel | R/W    | 0h      | 0 : Select CORE_CLKOUT_M6 clock as CLKINPULOW 1 : Select PER_CLKOUT_M2 clock as CLKINPULOW |
| 0     | mpu_dpll_clkinpulow_sel | R/W    | 0h      | 0 : Select CORE_CLKOUT_M6 clock as CLKINPULOW 1 : Select PER_CLKOUT_M2 clock as CLKINPULOW |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.12 mosc\_ctrl Register (offset = 468h) [reset = 0h]

mosc\_ctrl is shown in Figure 9-13 and described in Table 9-22.

| Figure 9-13. mosc_ctrl Register   | Figure 9-13. mosc_ctrl Register   | Figure 9-13. mosc_ctrl Register   | Figure 9-13. mosc_ctrl Register   | Figure 9-13. mosc_ctrl Register   | Figure 9-13. mosc_ctrl Register   | Figure 9-13. mosc_ctrl Register   | Figure 9-13. mosc_ctrl Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | resselect                         |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-22. mosc\_ctrl Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                               |
|-------|-----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved  | R      | 0h      |                                                                                                                                                                           |
| 0     | resselect | R/W    | 0h      | 0: Enable 1M ohm internal resistor (connected between XTALIN and XTALOUT). 1: Disable 1M ohm internal resistor (bias resistor needs to be provided externally to device). |

R/W-0h

## 9.3.1.13 deepsleep\_ctrl Register (offset = 470h) [reset = 0h]

deepsleep\_ctrl is shown in Figure 9-14 and described in Table 9-23.

| Figure 9-14. deepsleep_ctrl Register   | Figure 9-14. deepsleep_ctrl Register   | Figure 9-14. deepsleep_ctrl Register   | Figure 9-14. deepsleep_ctrl Register   | Figure 9-14. deepsleep_ctrl Register   | Figure 9-14. deepsleep_ctrl Register   | Figure 9-14. deepsleep_ctrl Register   | Figure 9-14. deepsleep_ctrl Register   |
|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|
| 31                                     | 30                                     | 29                                     | 28                                     | 27                                     | 26                                     | 25                                     | 24                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 23                                     | 22                                     | 21                                     | 20                                     | 19                                     | 18                                     | 17                                     | 16                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | dsenable                               | Reserved                               |
|                                        |                                        |                                        |                                        |                                        |                                        | R/W-0h                                 | R-0h                                   |
| 15                                     | 14                                     | 13                                     | 12                                     | 11                                     | 10                                     | 9                                      | 8                                      |
| dscount                                | dscount                                | dscount                                | dscount                                | dscount                                | dscount                                | dscount                                | dscount                                |
| R/W-0h                                 | R/W-0h                                 | R/W-0h                                 | R/W-0h                                 | R/W-0h                                 | R/W-0h                                 | R/W-0h                                 | R/W-0h                                 |
| 7                                      | 6                                      | 5                                      | 4                                      | 3                                      | 2                                      | 1                                      | 0                                      |
| dscount                                | dscount                                | dscount                                | dscount                                | dscount                                | dscount                                | dscount                                | dscount                                |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-23. deepsleep\_ctrl Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                     |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------|
| 31-18 | Reserved | R      | 0h      |                                                                                                 |
| 17    | dsenable | R/W    | 0h      | Deep sleep enable 0: Normal operation 1: Master oscillator output is gated                      |
| 16    | Reserved | R      | 0h      |                                                                                                 |
| 15-0  | dscount  | R/W    | 0h      | Programmable count of how many CLK_M_OSC clocks needs to be seen before exiting deep sleep mode |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.14 dpll\_pwr\_sw\_status (offset = 50Ch) [reset = 0h]

dpll\_pwr\_sw\_status is shown in Figure 9-15 and described in Table 9-24.

| Figure 9-15. dpll_pwr_sw_status Register   | Figure 9-15. dpll_pwr_sw_status Register   | Figure 9-15. dpll_pwr_sw_status Register   | Figure 9-15. dpll_pwr_sw_status Register   | Figure 9-15. dpll_pwr_sw_status Register   | Figure 9-15. dpll_pwr_sw_status Register   | Figure 9-15. dpll_pwr_sw_status Register   | Figure 9-15. dpll_pwr_sw_status Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
|                                            | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | pgoodout_ddr                               | ponout_ddr                                 |
|                                            | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | pgoodout_disp                              | ponout_disp                                |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | pgoodout_per                               | ponout_per                                 |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-24. dpll\_pwr\_sw\_status Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                  |
|-------|---------------|--------|---------|--------------------------------------------------------------|
| 31-26 | Reserved      | R      | 0h      |                                                              |
| 25    | pgoodout_ddr  | R      | 0h      | Power Good status for DDR DPLL 0: Power Fault 1: Power Good  |
| 24    | ponout_ddr    | R      | 0h      | Power Enable status for DDR DPLL 0: Disabled 1: Enabled      |
| 23-18 | Reserved      | R      | 0h      |                                                              |
| 17    | pgoodout_disp | R      | 0h      | Power Good status for DISP DPLL 0: Power Fault 1: Power Good |
| 16    | ponout_disp   | R      | 0h      | Power Enable status for DISP DPLL 0: Disabled 1: Enabled     |
| 15-10 | Reserved      | R      | 0h      |                                                              |
| 9     | pgoodout_per  | R      | 0h      | Power Good status for PER DPLL 0: Power Fault 1: Power Good  |
| 8     | ponout_per    | R      | 0h      | Power Enable status for PER DPLL 0: Disabled 1: Enabled      |
| 7-0   | Reserved      | R      | 0h      |                                                              |

## 9.3.1.15 device\_id Register (offset = 600h) [reset = 0x]

device\_id is shown in Figure 9-16 and described in Table 9-25.

| Figure 9-16. device_id Register   | Figure 9-16. device_id Register   | Figure 9-16. device_id Register   | Figure 9-16. device_id Register   | Figure 9-16. device_id Register   | Figure 9-16. device_id Register   | Figure 9-16. device_id Register   | Figure 9-16. device_id Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| devrev                            | devrev                            | devrev                            | partnum                           | partnum                           | partnum                           | partnum                           | partnum                           |
| R-0h                              | R-0h                              | R-0h                              | R-B944h                           | R-B944h                           | R-B944h                           | R-B944h                           | R-B944h                           |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| partnum                           | partnum                           | partnum                           | partnum                           | partnum                           | partnum                           | partnum                           | partnum                           |
| R-B944h                           | R-B944h                           | R-B944h                           | R-B944h                           | R-B944h                           | R-B944h                           | R-B944h                           | R-B944h                           |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| partnum                           | partnum                           | partnum                           | mfgr                              | mfgr                              | mfgr                              | mfgr                              | mfgr                              |
| R-B944h                           | R-B944h                           | R-B944h                           | R-017h                            | R-017h                            | R-017h                            | R-017h                            | R-017h                            |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| mfgr Reserved                     | mfgr Reserved                     | mfgr Reserved                     | mfgr Reserved                     | mfgr Reserved                     | mfgr Reserved                     | mfgr Reserved                     | mfgr Reserved                     |
| R-017h R-0h                       | R-017h R-0h                       | R-017h R-0h                       | R-017h R-0h                       | R-017h R-0h                       | R-017h R-0h                       | R-017h R-0h                       | R-017h R-0h                       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-25. device\_id Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                     |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-28 | devrev   | R      | 0h      | Device revision. 0000b - Silicon Revision 1.0 0001b - Silicon Revision 2.0 0010b - Silicon Revision 2.1 See device errata for detailed information on functionality in each device revision. Reset value is revision-dependent. |
| 27-12 | partnum  | R      | B944h   | Device part number (unique JTAG ID)                                                                                                                                                                                             |
| 11-1  | mfgr     | R      | 017h    | Manufacturer's JTAG ID                                                                                                                                                                                                          |
| 0     | Reserved | R      | 0h      |                                                                                                                                                                                                                                 |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.16 dev\_feature Register (offset = 604h) [reset = 0h]

dev\_feature is shown in Figure 9-17 and described in Table 9-26.

| Figure 9-17. dev_feature Register   | Figure 9-17. dev_feature Register   | Figure 9-17. dev_feature Register   | Figure 9-17. dev_feature Register   | Figure 9-17. dev_feature Register   | Figure 9-17. dev_feature Register   | Figure 9-17. dev_feature Register   | Figure 9-17. dev_feature Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    | dev_feature_bits                    |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-26. dev\_feature Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                  |
|-------|------------------|--------|---------|------------------------------------------------------------------------------|
| 31-0  | dev_feature_bits | R      | 0h      | Device-dependent, See Device Feature Comparison table in device data manual. |

## 9.3.1.17 init\_priority\_0 Register (offset = 608h) [reset = 0h]

init\_priority\_0 is shown in Figure 9-18 and described in Table 9-27.

| Figure 9-18. init_priority_0 Register   | Figure 9-18. init_priority_0 Register   | Figure 9-18. init_priority_0 Register   | Figure 9-18. init_priority_0 Register   | Figure 9-18. init_priority_0 Register   | Figure 9-18. init_priority_0 Register   | Figure 9-18. init_priority_0 Register   | Figure 9-18. init_priority_0 Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | tcwr2                                   | tcwr2                                   | tcrd2                                   | tcrd2                                   |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| tcwr1 tcrd1                             | tcwr1 tcrd1                             | tcwr1 tcrd1                             | tcwr1 tcrd1                             | tcwr0                                   | tcwr0                                   | tcrd0                                   | tcrd0                                   |
| R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| p1500                                   | p1500                                   | p1500                                   | p1500                                   | Reserved                                | Reserved                                |                                         |                                         |
| R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R-0h                                    | R-0h                                    |                                         |                                         |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| mmu pru_icss                            | mmu pru_icss                            | mmu pru_icss                            | mmu pru_icss                            | Reserved                                | Reserved                                | host_arm                                | host_arm                                |
| R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R-0h                                    | R-0h                                    | R/W-0h                                  | R/W-0h                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-27. init\_priority\_0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                          |
|-------|----------|--------|---------|--------------------------------------|
| 31-28 | Reserved | R      | 0h      |                                      |
| 27-26 | tcwr2    | R/W    | 0h      | TPTC 2 Write Port initiator priority |
| 25-24 | tcrd2    | R/W    | 0h      | TPTC 2 Read Port initiator priority  |
| 23-22 | tcwr1    | R/W    | 0h      | TPTC 1 Write Port initiator priority |
| 21-20 | tcrd1    | R/W    | 0h      | TPTC 1 Read Port initiator priority  |
| 19-18 | tcwr0    | R/W    | 0h      | TPTC 0 Write Port initiator priority |
| 17-16 | tcrd0    | R/W    | 0h      | TPTC 0 Read Port initiator priority  |
| 15-14 | p1500    | R/W    | 0h      | P1500 Port Initiator priority        |
| 13-8  | Reserved | R      | 0h      |                                      |
| 7-6   | mmu      | R/W    | 0h      | System MMU initiator priority        |
| 5-4   | pru_icss | R/W    | 0h      | PRU-ICSS initiator priority          |
| 3-2   | Reserved | R      | 0h      |                                      |
| 1-0   | host_arm | R/W    | 0h      | Host Cortex A8 initiator priority    |

<!-- image -->

<!-- image -->

## 9.3.1.18 init\_priority\_1 Register (offset = 60Ch) [reset = 0h]

init\_priority\_1 is shown in Figure 9-19 and described in Table 9-28.

| Figure 9-19. init_priority_1 Register   | Figure 9-19. init_priority_1 Register   | Figure 9-19. init_priority_1 Register   | Figure 9-19. init_priority_1 Register   | Figure 9-19. init_priority_1 Register   | Figure 9-19. init_priority_1 Register   | Figure 9-19. init_priority_1 Register   | Figure 9-19. init_priority_1 Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | debug                                   | debug                                   |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R/W-0h                                  | R/W-0h                                  |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| lcd                                     | lcd                                     | sgx Reserved                            | sgx Reserved                            | sgx Reserved                            | sgx Reserved                            | Reserved                                | Reserved                                |
| R/W-0h                                  | R/W-0h                                  | R/W-0h R-0h                             | R/W-0h R-0h                             | R/W-0h R-0h                             | R/W-0h R-0h                             | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| usb_qmgr                                | usb_qmgr                                | usb_dma                                 | usb_dma                                 | usb_dma                                 | Reserved cpsw                           | Reserved cpsw                           | Reserved cpsw                           |
| R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R-0h R/W-0h                             | R-0h R/W-0h                             | R-0h R/W-0h                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-28. init\_priority\_1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                          |
|-------|----------|--------|---------|--------------------------------------|
| 31-26 | Reserved | R      | 0h      |                                      |
| 25-24 | debug    | R/W    | 0h      | Debug Subsystem initiator priority   |
| 23-22 | lcd      | R/W    | 0h      | LCD initiator priority               |
| 21-20 | sgx      | R/W    | 0h      | SGX initiator priority               |
| 19-18 | Reserved | R      | 0h      |                                      |
| 17-16 | Reserved | R      | 0h      |                                      |
| 15-8  | Reserved | R      | 0h      |                                      |
| 7-6   | usb_qmgr | R/W    | 0h      | USB Queue Manager initiator priority |
| 5-4   | usb_dma  | R/W    | 0h      | USB DMA port initiator priority      |
| 3-2   | Reserved | R      | 0h      |                                      |
| 1-0   | cpsw     | R/W    | 0h      | CPSW initiator priority              |

## 9.3.1.19 tptc\_cfg Register (offset = 614h) [reset = 0h]

tptc\_cfg is shown in Figure 9-20 and described in Table 9-29.

| Figure 9-20. tptc_cfg Register   | Figure 9-20. tptc_cfg Register   | Figure 9-20. tptc_cfg Register   | Figure 9-20. tptc_cfg Register   | Figure 9-20. tptc_cfg Register   | Figure 9-20. tptc_cfg Register   | Figure 9-20. tptc_cfg Register   | Figure 9-20. tptc_cfg Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| Reserved                         | Reserved                         | tc2dbs                           | tc2dbs                           | tc1dbs                           | tc1dbs                           | tc0dbs                           | tc0dbs                           |
| R-0h                             | R-0h                             | R/W-0h                           | R/W-0h                           | R/W-0h                           | R/W-0h                           | R/W-0h                           | R/W-0h                           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-29. tptc\_cfg Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                               |
|-------|----------|--------|---------|---------------------------------------------------------------------------|
| 31-6  | Reserved | R      | 0h      |                                                                           |
| 5-4   | tc2dbs   | R/W    | 0h      | TPTC2 Default Burst Size 00: 16 byte 01: 32 byte 10: 64 byte 11: 128 byte |
| 3-2   | tc1dbs   | R/W    | 0h      | TPTC1 Default Burst Size 00: 16 byte 01: 32 byte 10: 64 byte 11: 128 byte |
| 1-0   | tc0dbs   | R/W    | 0h      | TPTC0 Default Burst Size 00: 16 byte 01: 32 byte 10: 64 byte 11: 128 byte |

<!-- image -->

<!-- image -->

## 9.3.1.20 usb\_ctrl0 Register (offset = 620h) [reset = 0h]

usb\_ctrl0 is shown in Figure 9-21 and described in Table 9-30.

## Figure 9-21. usb\_ctrl0 Register

| 31               | 30             | 29           | 28           | 27           | 26          | 25        | 24       |
|------------------|----------------|--------------|--------------|--------------|-------------|-----------|----------|
| Reserved         | Reserved       | Reserved     | Reserved     | Reserved     | Reserved    | Reserved  | Reserved |
| R/W-3Ch          | R/W-3Ch        | R/W-3Ch      | R/W-3Ch      | R/W-3Ch      | R/W-3Ch     | R/W-3Ch   | R/W-3Ch  |
| 23               | 22             | 21           | 20           | 19           | 18          | 17        | 16       |
| datapolarity_inv | Reserved       | Reserved     | otgsessenden | otgvdet_en   | dmgpio_pd   | dpgpio_pd | Reserved |
| R/W-0h           | R-0h           | R-0h         | R/W-0h       | R/W-0h       | R/W-0h      | R/W-0h    | R/W-0h   |
| 15               | 14             | 13           | 12           | 11           | 10          | 9         | 8        |
| Reserved         | gpio_sig_cross | gpio_sig_inv | gpiomode     | Reserved     | cdet_extctl | dppullup  | dmpulldn |
| R/W-0h           | R/W-0h         | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h      | R/W-0h    | R/W-0h   |
| 7                | 6              | 5            | 4            | 3            | 2           | 1         | 0        |
| chgvsrc_en       | chgisink_en    | sinkondp     | srcondm      | chgdet_rstrt | chgdet_dis  | otg_pwrdn | cm_pwrdn |
| R/W-0h           | R/W-0h         | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h      | R/W-0h    | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-30. usb\_ctrl0 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                               |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------|
| 31-24 | Reserved         | R/W    | 3Ch     | Reserved. Any writes to this register must keep these bits set to 0x3C.                                                   |
| 23    | datapolarity_inv | R/W    | 0h      | Data Polarity Invert: 0: DP/DM (normal polarity matching port definition) 1: DM/DP (inverted polarity of port definition) |
| 22    | Reserved         | R      | 0h      |                                                                                                                           |
| 21    | Reserved         | R      | 0h      |                                                                                                                           |
| 20    | otgsessenden     | R/W    | 0h      | Session End Detect Enable 0: Disable Session End Comparator 1: Turns on Session End Comparator                            |
| 19    | otgvdet_en       | R/W    | 0h      | VBUS Detect Enable 0: Disable VBUS Detect Enable 1: Turns on all comparators except Session End comparator                |
| 18    | dmgpio_pd        | R/W    | 0h      | Pulldown on DM in GPIO Mode 0: Enables pulldown 1: Disables pulldown                                                      |
| 17    | dpgpio_pd        | R/W    | 0h      | Pulldown on DP in GPIO Mode 0: Enables pulldown 1: Disables pulldown                                                      |
| 16    | Reserved         | R/W    | 0h      |                                                                                                                           |
| 15    | Reserved         | R/W    | 0h      |                                                                                                                           |
| 14    | gpio_sig_cross   | R/W    | 0h      | UART TX -> DM UART RX -> DP                                                                                               |
| 13    | gpio_sig_inv     | R/W    | 0h      | UART TX -> Invert -> DP UART RX -> Invert -> DM                                                                           |
| 12    | gpiomode         | R/W    | 0h      | GPIO Mode 0: USB Mode 1: GPIO Mode (UART Mode)                                                                            |
| 11    | Reserved         | R/W    | 0h      |                                                                                                                           |
| 10    | cdet_extctl      | R/W    | 0h      | Bypass the charger detection state machine 0: Charger detection on 1: Charger detection is bypassed                       |
| 9     | dppullup         | R/W    | 0h      | Pull-up on DP line 0: No effect 1: Enable pull-up on DP line                                                              |

## Table 9-30. usb\_ctrl0 Register Field Descriptions (continued)

|   Bit | Field        | Type   | Reset   | Description                                                          |
|-------|--------------|--------|---------|----------------------------------------------------------------------|
|     8 | dmpulldn     | R/W    | 0h      | Pull-down on DM line 0: No effect 1: Enable pull-down on DM line     |
|     7 | chgvsrc_en   | R/W    | 0h      | Enable VSRC on DP line (Host Charger case)                           |
|     6 | chgisink_en  | R/W    | 0h      | Enable ISINK on DM line (Host Charger case)                          |
|     5 | sinkondp     | R/W    | 0h      | Sink on DP 0: Sink on DM 1: Sink on DP                               |
|     4 | srcondm      | R/W    | 0h      | Source on DM 0: Source on DP 1: Source on DM                         |
|     3 | chgdet_rstrt | R/W    | 0h      | Restart Charger Detect                                               |
|     2 | chgdet_dis   | R/W    | 0h      | Charger Detect Disable 0: Enable 1: Disable                          |
|     1 | otg_pwrdn    | R/W    | 0h      | Power down the USB OTG PHY 0: PHY in normal mode 1: PHY Powered down |
|     0 | cm_pwrdn     | R/W    | 0h      | Power down the USB CM PHY 0: PHY in normal mode 1: PHY Powered down  |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.21 usb\_sts0 Register (offset = 624h) [reset = 0h]

usb\_sts0 is shown in Figure 9-22 and described in Table 9-31.

| Figure 9-22. usb_sts0 Register   | Figure 9-22. usb_sts0 Register   | Figure 9-22. usb_sts0 Register   | Figure 9-22. usb_sts0 Register   | Figure 9-22. usb_sts0 Register   | Figure 9-22. usb_sts0 Register   | Figure 9-22. usb_sts0 Register   | Figure 9-22. usb_sts0 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
|                                  | chgdetsts                        |                                  | cdet_dmdet                       | cdet_dpdet                       | cdet_datadet                     | chgdetect                        | chgdetdone                       |
|                                  | R-0h                             |                                  | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-31. usb\_sts0 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|--------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 7-5   | chgdetsts    | R      | 0h      | Charge Detection Status 000: Wait State (When a D+WPU and D-15K are connected, it enters into this state and will remain in this state unless it enters into other state) 001: No Contact 010: PS/2 011: Unknown error 100: Dedicated charger(valid if CE is HIGH) 101: HOST charger (valid if CE is HIGH) 110: PC 111: Interrupt (if any of the pullup is enabled, charger detect routine gets interrupted and will restart from the beginning if the same is disabled) |
| 4     | cdet_dmdet   | R      | 0h      | DM Comparator Output                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 3     | cdet_dpdet   | R      | 0h      | DP Comparator Output                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 2     | cdet_datadet | R      | 0h      | Charger Comparator Output                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 1     | chgdetect    | R      | 0h      | Charger Detection Status 0: Charger was no detected 1: Charger was detected                                                                                                                                                                                                                                                                                                                                                                                              |
| 0     | chgdetdone   | R      | 0h      | Charger Detection Protocol Done                                                                                                                                                                                                                                                                                                                                                                                                                                          |

## 9.3.1.22 usb\_ctrl1 Register (offset = 628h) [reset = 0h]

usb\_ctrl1 is shown in Figure 9-23 and described in Table 9-32.

## Figure 9-23. usb\_ctrl1 Register

| 31               | 30             | 29           | 28           | 27           | 26          | 25        | 24       |
|------------------|----------------|--------------|--------------|--------------|-------------|-----------|----------|
| Reserved         | Reserved       | Reserved     | Reserved     | Reserved     | Reserved    | Reserved  | Reserved |
| R/W-3Ch          | R/W-3Ch        | R/W-3Ch      | R/W-3Ch      | R/W-3Ch      | R/W-3Ch     | R/W-3Ch   | R/W-3Ch  |
| 23               | 22             | 21           | 20           | 19           | 18          | 17        | 16       |
| datapolarity_inv | Reserved       | Reserved     | otgsessenden | otgvdet_en   | dmgpio_pd   | dpgpio_pd | Reserved |
| R/W-0h           | R-0h           | R-0h         | R/W-0h       | R/W-0h       | R/W-0h      | R/W-0h    | R/W-0h   |
| 15               | 14             | 13           | 12           | 11           | 10          | 9         | 8        |
| Reserved         | gpio_sig_cross | gpio_sig_inv | gpiomode     | Reserved     | cdet_extctl | dppullup  | dmpulldn |
| R/W-0h           | R/W-0h         | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h      | R/W-0h    | R/W-0h   |
| 7                | 6              | 5            | 4            | 3            | 2           | 1         | 0        |
| chgvsrc_en       | chgisink_en    | sinkondp     | srcondm      | chgdet_rstrt | chgdet_dis  | otg_pwrdn | cm_pwrdn |
| R/W-0h           | R/W-0h         | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h      | R/W-0h    | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 9-32. usb\_ctrl1 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                               |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------|
| 31-24 | Reserved         | R/W    | 3Ch     | Reserved. Any writes to this register must keep these bits set to 0x3C.                                                   |
| 23    | datapolarity_inv | R/W    | 0h      | Data Polarity Invert: 0: DP/DM (normal polarity matching port definition) 1: DM/DP (inverted polarity of port definition) |
| 22    | Reserved         | R      | 0h      |                                                                                                                           |
| 21    | Reserved         | R      | 0h      |                                                                                                                           |
| 20    | otgsessenden     | R/W    | 0h      | Session End Detect Enable 0: Disable Session End Comparator 1: Turns on Session End Comparator                            |
| 19    | otgvdet_en       | R/W    | 0h      | VBUS Detect Enable 0: Disable VBUS Detect Enable 1: Turns on all comparators except Session End comparator                |
| 18    | dmgpio_pd        | R/W    | 0h      | Pulldown on DM in GPIO Mode 0: Enables pulldown 1: Disables pulldown                                                      |
| 17    | dpgpio_pd        | R/W    | 0h      | Pulldown on DP in GPIO Mode 0: Enables pulldown 1: Disables pulldown                                                      |
| 16    | Reserved         | R/W    | 0h      |                                                                                                                           |
| 15    | Reserved         | R/W    | 0h      |                                                                                                                           |
| 14    | gpio_sig_cross   | R/W    | 0h      | UART TX -> DM UART RX -> DP                                                                                               |
| 13    | gpio_sig_inv     | R/W    | 0h      | UART TX -> INV -> DP UART RX -> INV -> DM                                                                                 |
| 12    | gpiomode         | R/W    | 0h      | GPIO Mode 0: USB Mode 1: GPIO Mode (UART)                                                                                 |
| 11    | Reserved         | R/W    | 0h      |                                                                                                                           |
| 10    | cdet_extctl      | R/W    | 0h      | Bypass the charger detection state machine 0: Charger detection on 1: Charger detection is bypassed                       |
| 9     | dppullup         | R/W    | 0h      | Pull-up on DP line 0: No effect 1: Enable pull-up on DP line                                                              |

<!-- image -->

<!-- image -->

## Table 9-32. usb\_ctrl1 Register Field Descriptions (continued)

|   Bit | Field        | Type   | Reset   | Description                                                          |
|-------|--------------|--------|---------|----------------------------------------------------------------------|
|     8 | dmpulldn     | R/W    | 0h      | Pull-down on DM line 0: No effect 1: Enable pull-down on DM line     |
|     7 | chgvsrc_en   | R/W    | 0h      | Enable VSRC on DP line (Host Charger case)                           |
|     6 | chgisink_en  | R/W    | 0h      | Enable ISINK on DM line (Host Charger case)                          |
|     5 | sinkondp     | R/W    | 0h      | Sink on DP 0: Sink on DM 1: Sink on DP                               |
|     4 | srcondm      | R/W    | 0h      | Source on DM 0: Source on DP 1: Source on DM                         |
|     3 | chgdet_rstrt | R/W    | 0h      | Restart Charger Detect                                               |
|     2 | chgdet_dis   | R/W    | 0h      | Charger Detect Disable 0: Enable 1: Disable                          |
|     1 | otg_pwrdn    | R/W    | 0h      | Power down the USB OTG PHY 0: PHY in normal mode 1: PHY Powered down |
|     0 | cm_pwrdn     | R/W    | 0h      | Power down the USB CM PHY 1: PHY Powered down 0: PHY in normal mode  |

## 9.3.1.23 usb\_sts1 Register (offset = 62Ch) [reset = 0h]

usb\_sts1 is shown in Figure 9-24 and described in Table 9-33.

| Figure 9-24. usb_sts1 Register   | Figure 9-24. usb_sts1 Register   | Figure 9-24. usb_sts1 Register   | Figure 9-24. usb_sts1 Register   | Figure 9-24. usb_sts1 Register   | Figure 9-24. usb_sts1 Register   | Figure 9-24. usb_sts1 Register   | Figure 9-24. usb_sts1 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
|                                  | chgdetsts                        |                                  | cdet_dmdet                       | cdet_dpdet                       | cdet_datadet                     | chgdetect                        | chgdetdone                       |
|                                  | R-0h                             |                                  | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-33. usb\_sts1 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|--------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 7-5   | chgdetsts    | R      | 0h      | Charge Detection Status 000: Wait State (When a D+WPU and D-15K are connected, it enters into this state and will remain in this state unless it enters into other state) 001: No Contact 010: PS/2 011: Unknown error 100: Dedicated charger(valid if CE is HIGH) 101: HOST charger (valid if CE is HIGH) 110: PC 111: Interrupt (if any of the pullup is enabled, charger detect routine gets interrupted and will restart from the beginning if the same is disabled) |
| 4     | cdet_dmdet   | R      | 0h      | DM Comparator Output                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 3     | cdet_dpdet   | R      | 0h      | DP Comparator Output                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 2     | cdet_datadet | R      | 0h      | Charger Comparator Output                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 1     | chgdetect    | R      | 0h      | Charger Detection Status 0: Charger was no detected 1: Charger was detected                                                                                                                                                                                                                                                                                                                                                                                              |
| 0     | chgdetdone   | R      | 0h      | Charger Detection Protocol Done                                                                                                                                                                                                                                                                                                                                                                                                                                          |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.24 mac\_id0\_lo Register (offset = 630h) [reset = 0h]

mac\_id0\_lo is shown in Figure 9-25 and described in Table 9-34.

| Figure 9-25. mac_id0_lo Register   | Figure 9-25. mac_id0_lo Register   | Figure 9-25. mac_id0_lo Register   | Figure 9-25. mac_id0_lo Register   | Figure 9-25. mac_id0_lo Register   | Figure 9-25. mac_id0_lo Register   | Figure 9-25. mac_id0_lo Register   | Figure 9-25. mac_id0_lo Register   |
|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|
| 31                                 | 30                                 | 29                                 | 28                                 | 27                                 | 26                                 | 25                                 | 24                                 |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 23                                 | 22                                 | 21                                 | 20                                 | 19                                 | 18                                 | 17                                 | 16                                 |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 15                                 | 14                                 | 13                                 | 12                                 | 11                                 | 10                                 | 9                                  | 8                                  |
| macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 7                                  | 6                                  | 5                                  | 4                                  | 3                                  | 2                                  | 1                                  | 0                                  |
| macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-34. mac\_id0\_lo Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                            |
|-------|---------------|--------|---------|--------------------------------------------------------|
| 31-16 | Reserved      | R      | 0h      |                                                        |
| 15-8  | macaddr_47_40 | R      | 0h      | MAC0 Address - Byte 5 Reset value is device-dependent. |
| 7-0   | macaddr_39_32 | R      | 0h      | MAC0 Address - Byte 4 Reset value is device-dependent. |

## 9.3.1.25 mac\_id0\_hi Register (offset = 634h) [reset = 0h]

mac\_id0\_hi is shown in Figure 9-26 and described in Table 9-35.

| Figure 9-26. mac_id0_hi Register   | Figure 9-26. mac_id0_hi Register   | Figure 9-26. mac_id0_hi Register   | Figure 9-26. mac_id0_hi Register   | Figure 9-26. mac_id0_hi Register   | Figure 9-26. mac_id0_hi Register   | Figure 9-26. mac_id0_hi Register   | Figure 9-26. mac_id0_hi Register   |
|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|
| 31                                 | 30                                 | 29                                 | 28                                 | 27                                 | 26                                 | 25                                 | 24                                 |
| macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 23                                 | 22                                 | 21                                 | 20                                 | 19                                 | 18                                 | 17                                 | 16                                 |
| macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 15                                 | 14                                 | 13                                 | 12                                 | 11                                 | 10                                 | 9                                  | 8                                  |
| macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 7                                  | 6                                  | 5                                  | 4                                  | 3                                  | 2                                  | 1                                  | 0                                  |
| macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-35. mac\_id0\_hi Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                            |
|-------|---------------|--------|---------|--------------------------------------------------------|
| 31-24 | macaddr_31_24 | R      | 0h      | MAC0 Address - Byte 3 Reset value is device-dependent. |
| 23-16 | macaddr_23_16 | R      | 0h      | MAC0 Address - Byte 2 Reset value is device-dependent. |
| 15-8  | macaddr_15_8  | R      | 0h      | MAC0 Address - Byte 1 Reset value is device-dependent. |
| 7-0   | macaddr_7_0   | R      | 0h      | MAC0 Address - Byte 0 Reset value is device-dependent. |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.26 mac\_id1\_lo Register (offset = 638h) [reset = 0h]

mac\_id1\_lo is shown in Figure 9-27 and described in Table 9-36.

| Figure 9-27. mac_id1_lo Register   | Figure 9-27. mac_id1_lo Register   | Figure 9-27. mac_id1_lo Register   | Figure 9-27. mac_id1_lo Register   | Figure 9-27. mac_id1_lo Register   | Figure 9-27. mac_id1_lo Register   | Figure 9-27. mac_id1_lo Register   | Figure 9-27. mac_id1_lo Register   |
|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|
| 31                                 | 30                                 | 29                                 | 28                                 | 27                                 | 26                                 | 25                                 | 24                                 |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 23                                 | 22                                 | 21                                 | 20                                 | 19                                 | 18                                 | 17                                 | 16                                 |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 15                                 | 14                                 | 13                                 | 12                                 | 11                                 | 10                                 | 9                                  | 8                                  |
| macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      | macaddr_47_40                      |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 7                                  | 6                                  | 5                                  | 4                                  | 3                                  | 2                                  | 1                                  | 0                                  |
| macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      | macaddr_39_32                      |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-36. mac\_id1\_lo Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                            |
|-------|---------------|--------|---------|--------------------------------------------------------|
| 31-16 | Reserved      | R      | 0h      |                                                        |
| 15-8  | macaddr_47_40 | R      | 0h      | MAC1 Address - Byte 5 Reset value is device-dependent. |
| 7-0   | macaddr_39_32 | R      | 0h      | MAC1 Address - Byte 4 Reset value is device-dependent. |

## 9.3.1.27 mac\_id1\_hi Register (offset = 63Ch) [reset = 0h]

mac\_id1\_hi is shown in Figure 9-28 and described in Table 9-37.

| Figure 9-28. mac_id1_hi Register   | Figure 9-28. mac_id1_hi Register   | Figure 9-28. mac_id1_hi Register   | Figure 9-28. mac_id1_hi Register   | Figure 9-28. mac_id1_hi Register   | Figure 9-28. mac_id1_hi Register   | Figure 9-28. mac_id1_hi Register   | Figure 9-28. mac_id1_hi Register   |
|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|
| 31                                 | 30                                 | 29                                 | 28                                 | 27                                 | 26                                 | 25                                 | 24                                 |
| macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      | macaddr_31_24                      |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 23                                 | 22                                 | 21                                 | 20                                 | 19                                 | 18                                 | 17                                 | 16                                 |
| macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      | macaddr_23_16                      |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 15                                 | 14                                 | 13                                 | 12                                 | 11                                 | 10                                 | 9                                  | 8                                  |
| macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       | macaddr_15_8                       |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 7                                  | 6                                  | 5                                  | 4                                  | 3                                  | 2                                  | 1                                  | 0                                  |
| macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        | macaddr_7_0                        |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-37. mac\_id1\_hi Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                            |
|-------|---------------|--------|---------|--------------------------------------------------------|
| 31-24 | macaddr_31_24 | R      | 0h      | MAC1 Address - Byte 3 Reset value is device-dependent. |
| 23-16 | macaddr_23_16 | R      | 0h      | MAC1 Address - Byte 2 Reset value is device-dependent. |
| 15-8  | macaddr_15_8  | R      | 0h      | MAC1 Address - Byte 1 Reset value is device-dependent. |
| 7-0   | macaddr_7_0   | R      | 0h      | MAC1 Address - Byte 0 Reset value is device-dependent. |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.28 dcan\_raminit Register (offset = 644h) [reset = 0h]

dcan\_raminit is shown in Figure 9-29 and described in Table 9-38.

| Figure 9-29. dcan_raminit Register   | Figure 9-29. dcan_raminit Register   | Figure 9-29. dcan_raminit Register   | Figure 9-29. dcan_raminit Register   | Figure 9-29. dcan_raminit Register   | Figure 9-29. dcan_raminit Register   | Figure 9-29. dcan_raminit Register   | Figure 9-29. dcan_raminit Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | dcan1_raminit_ done                  | dcan0_raminit_ done                  |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R/W1toClr                            | R/W1toClr                            |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | dcan1_raminit_ start                 | dcan0_raminit_ start                 |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R/W-0h                               | R/W-0h                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-38. dcan\_raminit Register Field Descriptions

| Bit   | Field               | Type      | Reset   | Description                                                                   |
|-------|---------------------|-----------|---------|-------------------------------------------------------------------------------|
| 31-10 | Reserved            | R         | 0h      |                                                                               |
| 9     | dcan1_raminit_done  | R/W1toClr | 0h      | 0: DCAN1 RAM Initialization NOT complete 1: DCAN1 RAM Initialization complete |
| 8     | dcan0_raminit_done  | R/W1toClr | 0h      | 0: DCAN0 RAM Initialization NOT complete 1: DCAN0 RAM Initialization complete |
| 7-2   | Reserved            | R         | 0h      |                                                                               |
| 1     | dcan1_raminit_start | R/W       | 0h      | A transition from 0 to 1 will start DCAN1 RAM initialization sequence.        |
| 0     | dcan0_raminit_start | R/W       | 0h      | A transition from 0 to 1 will start DCAN0 RAM initialization sequence.        |

## 9.3.1.29 usb\_wkup\_ctrl Register (offset = 648h) [reset = 0h]

usb\_wkup\_ctrl is shown in Figure 9-30 and described in Table 9-39.

| Figure 9-30. usb_wkup_ctrl Register   | Figure 9-30. usb_wkup_ctrl Register   | Figure 9-30. usb_wkup_ctrl Register   | Figure 9-30. usb_wkup_ctrl Register   | Figure 9-30. usb_wkup_ctrl Register   | Figure 9-30. usb_wkup_ctrl Register   | Figure 9-30. usb_wkup_ctrl Register   | Figure 9-30. usb_wkup_ctrl Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | phy1_wuen                             |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R/W-0h                                |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | phy0_wuen                             |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-39. usb\_wkup\_ctrl Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                               |
|-------|-----------|--------|---------|-----------------------------------------------------------|
| 31-9  | Reserved  | R      | 0h      |                                                           |
| 8     | phy1_wuen | R/W    | 0h      | PHY1 Wakeup Enable. Write to 1 enables WKUP from USB PHY1 |
| 7-1   | Reserved  | R      | 0h      |                                                           |
| 0     | phy0_wuen | R/W    | 0h      | PHY0 Wakeup Enable. Write to 1 enables WKUP from USB PHY0 |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 9.3.1.30 gmii\_sel Register (offset = 650h) [reset = 0h]

gmii\_sel is shown in Figure 9-31 and described in Table 9-40.

| Figure 9-31. gmii_sel Register   | Figure 9-31. gmii_sel Register   | Figure 9-31. gmii_sel Register   | Figure 9-31. gmii_sel Register   | Figure 9-31. gmii_sel Register   | Figure 9-31. gmii_sel Register   | Figure 9-31. gmii_sel Register   | Figure 9-31. gmii_sel Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| rmii2_io_clk_en                  | rmii1_io_clk_en                  | rgmii2_idmoe                     | rgmii1_idmode                    | gmii2_sel                        | gmii2_sel                        | gmii1_sel                        | gmii1_sel                        |
| R/W-0h                           | R/W-0h                           | R/W-0h                           | R/W-0h                           | R/W-0h                           | R/W-0h                           | R/W-0h                           | R/W-0h                           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-40. gmii\_sel Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                     |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved        | R      | 0h      |                                                                                                                                                                                                                                                                                                 |
| 7     | rmii2_io_clk_en | R/W    | 1h      | 0: RMII Reference Clock Output mode. Enable RMII clock to be sourced from PLL. 1: RMII Reference Clock Input mode. Enable RMII clock to be sourced from chip pin. See "Silicon Revision Functional Differences and Enhancements" for differences in operation based on AM335x silicon revision. |
| 6     | rmii1_io_clk_en | R/W    | 1h      | 0: RMII Reference Clock Output mode. Enable RMII clock to be sourced from PLL 1: RMII Reference Clock Input mode. Enable RMII clock to be sourced from chip pin See "Silicon Revision Functional Differences and Enhancements" for differences in operation based on AM335x silicon revision.   |
| 5     | rgmii2_idmode   | R/W    | 1h      | RGMII2 Internal Delay Mode 0: Reserved 1: No Internal Delay See "Silicon Revision Functional Differences and Enhancements" for differences in operation based on AM335x silicon revision.                                                                                                       |
| 4     | rgmii1_idmode   | R/W    | 1h      | RGMII1 Internal Delay Mode 0: Reserved 1: No Internal Delay See "Silicon Revision Functional Differences and Enhancements" for differences in operation based on AM335x silicon revision.                                                                                                       |
| 3-2   | gmii2_sel       | R/W    | 0h      | 00: Port2 GMII/MII Mode 01: Port2 RMII Mode 10: Port2 RGMII Mode 11: Not Used                                                                                                                                                                                                                   |
| 1-0   | gmii1_sel       | R/W    | 0h      | 00: Port1 GMII/MII Mode 01: Port1 RMII Mode 10: Port1 RGMII Mode 11: Not Used                                                                                                                                                                                                                   |

## 9.3.1.31 pwmss\_ctrl Register (offset = 664h) [reset = 0h]

pwmss\_ctrl is shown in Figure 9-32 and described in Table 9-41.

| Figure 9-32. pwmss_ctrl Register   | Figure 9-32. pwmss_ctrl Register   | Figure 9-32. pwmss_ctrl Register   | Figure 9-32. pwmss_ctrl Register   | Figure 9-32. pwmss_ctrl Register   | Figure 9-32. pwmss_ctrl Register   | Figure 9-32. pwmss_ctrl Register   | Figure 9-32. pwmss_ctrl Register   |
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
|                                    |                                    | Reserved                           |                                    |                                    | pwmss2_tbclke n                    | pwmss1_tbclke n                    | pwmss0_tbclke n                    |
|                                    |                                    | R-0h                               |                                    |                                    | R/W-0h                             | R/W-0h                             | R/W-0h                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-41. pwmss\_ctrl Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                      |
|-------|----------------|--------|---------|----------------------------------|
| 31-3  | Reserved       | R      | 0h      |                                  |
| 2     | pwmss2_tbclken | R/W    | 0h      | Timebase clock enable for PWMSS2 |
| 1     | pwmss1_tbclken | R/W    | 0h      | Timebase clock enable for PWMSS1 |
| 0     | pwmss0_tbclken | R/W    | 0h      | Timebase clock enable for PWMSS0 |

<!-- image -->

<!-- image -->

## 9.3.1.32 mreqprio\_0 Register (offset = 670h) [reset = 0h]

mreqprio\_0 is shown in Figure 9-33 and described in Table 9-42.

| Figure 9-33. mreqprio_0 Register   | Figure 9-33. mreqprio_0 Register   | Figure 9-33. mreqprio_0 Register   | Figure 9-33. mreqprio_0 Register   | Figure 9-33. mreqprio_0 Register   | Figure 9-33. mreqprio_0 Register   | Figure 9-33. mreqprio_0 Register   | Figure 9-33. mreqprio_0 Register   |
|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|
| 31                                 | 30                                 | 29                                 | 28                                 | 27                                 | 26                                 | 25                                 | 24                                 |
| Reserved                           |                                    | sgx                                |                                    | Reserved                           |                                    | usb1                               |                                    |
| R-0h                               |                                    | R/W-0h                             |                                    | R-0h                               |                                    | R/W-0h                             |                                    |
| 23                                 | 22                                 | 21                                 | 20                                 | 19                                 | 18                                 | 17                                 | 16                                 |
| Reserved                           |                                    | usb0                               |                                    | Reserved                           |                                    | cpsw                               |                                    |
| R-0h                               |                                    | R/W-0h                             |                                    | R-0h                               |                                    | R/W-0h                             |                                    |
| 15                                 | 14                                 | 13                                 | 12                                 | 11                                 | 10                                 | 9                                  | 8                                  |
| Reserved                           |                                    | Reserved                           |                                    | Reserved                           |                                    | pru_icss_pru0                      |                                    |
| R-0h                               |                                    | R-0h                               |                                    | R-0h                               |                                    | R/W-0h                             |                                    |
| 7                                  | 6                                  | 5                                  | 4                                  | 3                                  | 2                                  | 1                                  | 0                                  |
| Reserved                           |                                    | sab_init1                          |                                    | Reserved                           |                                    | sab_init0                          |                                    |
| R-0h                               |                                    | R/W-0h                             |                                    | R-0h                               |                                    | R/W-0h                             |                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-42. mreqprio\_0 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                            |
|-------|---------------|--------|---------|--------------------------------------------------------|
| 31    | Reserved      | R      | 0h      |                                                        |
| 30-28 | sgx           | R/W    | 0h      | MReqPriority for SGX Initiator OCP Interface           |
| 27    | Reserved      | R      | 0h      |                                                        |
| 26-24 | usb1          | R/W    | 0h      | MReqPriority for USB1 Initiator OCP Interface          |
| 23    | Reserved      | R      | 0h      |                                                        |
| 22-20 | usb0          | R/W    | 0h      | MReqPriority for USB0 Initiator OCP Interface          |
| 19    | Reserved      | R      | 0h      |                                                        |
| 18-16 | cpsw          | R/W    | 0h      | MReqPriority for CPSW Initiator OCP Interface          |
| 15    | Reserved      | R      | 0h      |                                                        |
| 14-12 | Reserved      | R      | 0h      |                                                        |
| 11    | Reserved      | R      | 0h      |                                                        |
| 10-8  | pru_icss_pru0 | R/W    | 0h      | MReqPriority for PRU-ICSS PRU0 Initiator OCP Interface |
| 7     | Reserved      | R      | 0h      |                                                        |
| 6-4   | sab_init1     | R/W    | 0h      | MReqPriority for MPU Initiator 1 OCP Interface         |
| 3     | Reserved      | R      | 0h      |                                                        |
| 2-0   | sab_init0     | R/W    | 0h      | MReqPriority for MPU Initiator 0 OCP Interface         |

## 9.3.1.33 mreqprio\_1 Register (offset = 674h) [reset = 0h]

mreqprio\_1 is shown in Figure 9-34 and described in Table 9-43.

| Figure 9-34. mreqprio_1 Register   | Figure 9-34. mreqprio_1 Register   | Figure 9-34. mreqprio_1 Register   | Figure 9-34. mreqprio_1 Register   | Figure 9-34. mreqprio_1 Register   | Figure 9-34. mreqprio_1 Register   | Figure 9-34. mreqprio_1 Register   | Figure 9-34. mreqprio_1 Register   |
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
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-43. mreqprio\_1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-0  | Reserved | R      | 0h      |               |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.34 hw\_event\_sel\_grp1 Register (offset = 690h) [reset = 0h]

hw\_event\_sel\_grp1 is shown in Figure 9-35 and described in Table 9-44.

| Figure 9-35. hw_event_sel_grp1 Register   | Figure 9-35. hw_event_sel_grp1 Register   | Figure 9-35. hw_event_sel_grp1 Register   | Figure 9-35. hw_event_sel_grp1 Register   | Figure 9-35. hw_event_sel_grp1 Register   | Figure 9-35. hw_event_sel_grp1 Register   | Figure 9-35. hw_event_sel_grp1 Register   | Figure 9-35. hw_event_sel_grp1 Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| event4                                    | event4                                    | event4                                    | event4                                    | event4                                    | event4                                    | event4                                    | event4                                    |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| event3                                    | event3                                    | event3                                    | event3                                    | event3                                    | event3                                    | event3                                    | event3                                    |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| event2                                    | event2                                    | event2                                    | event2                                    | event2                                    | event2                                    | event2                                    | event2                                    |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| event1                                    | event1                                    | event1                                    | event1                                    | event1                                    | event1                                    | event1                                    | event1                                    |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-44. hw\_event\_sel\_grp1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                         |
|-------|---------|--------|---------|-------------------------------------|
| 31-24 | event4  | R/W    | 0h      | Select 4th trace event from group 1 |
| 23-16 | event3  | R/W    | 0h      | Select 3rd trace event from group 1 |
| 15-8  | event2  | R/W    | 0h      | Select 2nd trace event from group 1 |
| 7-0   | event1  | R/W    | 0h      | Select 1st trace event from group 1 |

## 9.3.1.35 hw\_event\_sel\_grp2 Register (offset = 694h) [reset = 0h]

hw\_event\_sel\_grp2 is shown in Figure 9-36 and described in Table 9-45.

| Figure 9-36. hw_event_sel_grp2 Register   | Figure 9-36. hw_event_sel_grp2 Register   | Figure 9-36. hw_event_sel_grp2 Register   | Figure 9-36. hw_event_sel_grp2 Register   | Figure 9-36. hw_event_sel_grp2 Register   | Figure 9-36. hw_event_sel_grp2 Register   | Figure 9-36. hw_event_sel_grp2 Register   | Figure 9-36. hw_event_sel_grp2 Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| event8                                    | event8                                    | event8                                    | event8                                    | event8                                    | event8                                    | event8                                    | event8                                    |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| event7                                    | event7                                    | event7                                    | event7                                    | event7                                    | event7                                    | event7                                    | event7                                    |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| event6                                    | event6                                    | event6                                    | event6                                    | event6                                    | event6                                    | event6                                    | event6                                    |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| event5                                    | event5                                    | event5                                    | event5                                    | event5                                    | event5                                    | event5                                    | event5                                    |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-45. hw\_event\_sel\_grp2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                         |
|-------|---------|--------|---------|-------------------------------------|
| 31-24 | event8  | R/W    | 0h      | Select 8th trace event from group 2 |
| 23-16 | event7  | R/W    | 0h      | Select 7th trace event from group 2 |
| 15-8  | event6  | R/W    | 0h      | Select 6th trace event from group 2 |
| 7-0   | event5  | R/W    | 0h      | Select 5th trace event from group 2 |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.36 hw\_event\_sel\_grp3 Register (offset = 698h) [reset = 0h]

hw\_event\_sel\_grp3 is shown in Figure 9-37 and described in Table 9-46.

| Figure 9-37. hw_event_sel_grp3 Register   | Figure 9-37. hw_event_sel_grp3 Register   | Figure 9-37. hw_event_sel_grp3 Register   | Figure 9-37. hw_event_sel_grp3 Register   | Figure 9-37. hw_event_sel_grp3 Register   | Figure 9-37. hw_event_sel_grp3 Register   | Figure 9-37. hw_event_sel_grp3 Register   | Figure 9-37. hw_event_sel_grp3 Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| event12                                   | event12                                   | event12                                   | event12                                   | event12                                   | event12                                   | event12                                   | event12                                   |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| event11                                   | event11                                   | event11                                   | event11                                   | event11                                   | event11                                   | event11                                   | event11                                   |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| event10                                   | event10                                   | event10                                   | event10                                   | event10                                   | event10                                   | event10                                   | event10                                   |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| event9                                    | event9                                    | event9                                    | event9                                    | event9                                    | event9                                    | event9                                    | event9                                    |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-46. hw\_event\_sel\_grp3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                          |
|-------|---------|--------|---------|--------------------------------------|
| 31-24 | event12 | R/W    | 0h      | Select 12th trace event from group 3 |
| 23-16 | event11 | R/W    | 0h      | Select 11th trace event from group 3 |
| 15-8  | event10 | R/W    | 0h      | Select 10th trace event from group 3 |
| 7-0   | event9  | R/W    | 0h      | Select 9th trace event from group 3  |

## 9.3.1.37 hw\_event\_sel\_grp4 Register (offset = 69Ch) [reset = 0h]

hw\_event\_sel\_grp4 is shown in Figure 9-38 and described in Table 9-47.

| Figure 9-38. hw_event_sel_grp4 Register   | Figure 9-38. hw_event_sel_grp4 Register   | Figure 9-38. hw_event_sel_grp4 Register   | Figure 9-38. hw_event_sel_grp4 Register   | Figure 9-38. hw_event_sel_grp4 Register   | Figure 9-38. hw_event_sel_grp4 Register   | Figure 9-38. hw_event_sel_grp4 Register   | Figure 9-38. hw_event_sel_grp4 Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| event16                                   | event16                                   | event16                                   | event16                                   | event16                                   | event16                                   | event16                                   | event16                                   |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| event15                                   | event15                                   | event15                                   | event15                                   | event15                                   | event15                                   | event15                                   | event15                                   |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| event14                                   | event14                                   | event14                                   | event14                                   | event14                                   | event14                                   | event14                                   | event14                                   |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| event13                                   | event13                                   | event13                                   | event13                                   | event13                                   | event13                                   | event13                                   | event13                                   |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-47. hw\_event\_sel\_grp4 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                          |
|-------|---------|--------|---------|--------------------------------------|
| 31-24 | event16 | R/W    | 0h      | Select 16th trace event from group 4 |
| 23-16 | event15 | R/W    | 0h      | Select 15th trace event from group 4 |
| 15-8  | event14 | R/W    | 0h      | Select 14th trace event from group 4 |
| 7-0   | event13 | R/W    | 0h      | Select 13th trace event from group 4 |

<!-- image -->

<!-- image -->

## 9.3.1.38 smrt\_ctrl Register (offset = 6A0h) [reset = 0h]

smrt\_ctrl is shown in Figure 9-39 and described in Table 9-48.

| Figure 9-39. smrt_ctrl Register   | Figure 9-39. smrt_ctrl Register   | Figure 9-39. smrt_ctrl Register   | Figure 9-39. smrt_ctrl Register   | Figure 9-39. smrt_ctrl Register   | Figure 9-39. smrt_ctrl Register   | Figure 9-39. smrt_ctrl Register   | Figure 9-39. smrt_ctrl Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | sr1_sleep                         | sr0_sleep                         |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R/W-0h                            | R/W-0h                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-48. smrt\_ctrl Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                         |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-2  | Reserved  | R      | 0h      |                                                                                                     |
| 1     | sr1_sleep | R/W    | 0h      | 0: Disable sensor (SRSLEEP on sensor driven to 1) 1: Enable sensor (SRSLEEP on sensor driven to 0). |
| 0     | sr0_sleep | R/W    | 0h      | 0: Disable sensor (SRSLEEP on sensor driven to 1) 1: Enable sensor (SRSLEEP on sensor driven to 0). |

## 9.3.1.39 mpuss\_hw\_debug\_sel Register (offset = 6A4h) [reset = 0h]

mpuss\_hw\_debug\_sel is shown in Figure 9-40 and described in Table 9-49.

| Figure 9-40. mpuss_hw_debug_sel Register   | Figure 9-40. mpuss_hw_debug_sel Register   | Figure 9-40. mpuss_hw_debug_sel Register   | Figure 9-40. mpuss_hw_debug_sel Register   | Figure 9-40. mpuss_hw_debug_sel Register   | Figure 9-40. mpuss_hw_debug_sel Register   | Figure 9-40. mpuss_hw_debug_sel Register   | Figure 9-40. mpuss_hw_debug_sel Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | hw_dbg_gate_e n                            | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R/W-0h                                     | R-0h                                       |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved hw_dbg_sel                        | Reserved hw_dbg_sel                        | Reserved hw_dbg_sel                        | Reserved hw_dbg_sel                        | Reserved hw_dbg_sel                        | Reserved hw_dbg_sel                        | Reserved hw_dbg_sel                        | Reserved hw_dbg_sel                        |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-49. mpuss\_hw\_debug\_sel Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                    |
|-------|----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | Reserved       | R      | 0h      |                                                                                                                                                                                                                                                                |
| 9     | hw_dbg_gate_en | R/W    | 0h      | To save power input to MPUSS_HW_DBG_INFO is gated off to all zeros when HW_DBG_GATE_EN bit is low. 0: Debug info gated off 1: Debug info not gated off                                                                                                         |
| 8     | Reserved       | R      | 0h      |                                                                                                                                                                                                                                                                |
| 7-4   | Reserved       | R      | 0h      |                                                                                                                                                                                                                                                                |
| 3-0   | hw_dbg_sel     | R/W    | 0h      | Selects which Group of signals are sent out to the MODENA_HW_DBG_INFO register. Please see MPU functional spec for more details 0000: Group 0 0001: Group 1 0010: Group 2 0011: Group 3 0100: Group 4 0101: Group 5 0110: Group 6 0111: Group 7 1xxx: Reserved |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.40 mpuss\_hw\_dbg\_info Register (offset = 6A8h) [reset = 0h]

mpuss\_hw\_dbg\_info is shown in Figure 9-41 and described in Table 9-50.

## Figure 9-41. mpuss\_hw\_dbg\_info Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

<!-- formula-not-decoded -->

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-50. mpuss\_hw\_dbg\_info Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                   |
|-------|-------------|--------|---------|-------------------------------|
| 31-0  | hw_dbg_info | R      | 0h      | Hardware Debug Info from MPU. |

## 9.3.1.41 vdd\_mpu\_opp\_050 Register (offset = 770h) [reset = 0h]

vdd\_mpu\_opp\_050 is shown in Figure 9-42 and described in Table 9-51.

| Figure 9-42. vdd_mpu_opp_050 Register   | Figure 9-42. vdd_mpu_opp_050 Register   | Figure 9-42. vdd_mpu_opp_050 Register   | Figure 9-42. vdd_mpu_opp_050 Register   | Figure 9-42. vdd_mpu_opp_050 Register   | Figure 9-42. vdd_mpu_opp_050 Register   | Figure 9-42. vdd_mpu_opp_050 Register   | Figure 9-42. vdd_mpu_opp_050 Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-51. vdd\_mpu\_opp\_050 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                 |
|-------|----------|--------|---------|-----------------------------------------------------------------------------|
| 31-24 | Reserved | R      | 0h      |                                                                             |
| 23-0  | ntarget  | R      | 0h      | Ntarget value for MPU Voltage domain OPP50 Reset value is device-dependent. |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.42 vdd\_mpu\_opp\_100 Register (offset = 774h) [reset = 0h]

vdd\_mpu\_opp\_100 is shown in Figure 9-43 and described in Table 9-52.

| Figure 9-43. vdd_mpu_opp_100 Register   | Figure 9-43. vdd_mpu_opp_100 Register   | Figure 9-43. vdd_mpu_opp_100 Register   | Figure 9-43. vdd_mpu_opp_100 Register   | Figure 9-43. vdd_mpu_opp_100 Register   | Figure 9-43. vdd_mpu_opp_100 Register   | Figure 9-43. vdd_mpu_opp_100 Register   | Figure 9-43. vdd_mpu_opp_100 Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-52. vdd\_mpu\_opp\_100 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------|
| 31-24 | Reserved | R      | 0h      |                                                                              |
| 23-0  | ntarget  | R      | 0h      | Ntarget value for MPU Voltage domain OPP100 Reset value is device-dependent. |

## 9.3.1.43 vdd\_mpu\_opp\_120 Register (offset = 778h) [reset = 0h]

vdd\_mpu\_opp\_120 is shown in Figure 9-44 and described in Table 9-53.

| Figure 9-44. vdd_mpu_opp_120 Register   | Figure 9-44. vdd_mpu_opp_120 Register   | Figure 9-44. vdd_mpu_opp_120 Register   | Figure 9-44. vdd_mpu_opp_120 Register   | Figure 9-44. vdd_mpu_opp_120 Register   | Figure 9-44. vdd_mpu_opp_120 Register   | Figure 9-44. vdd_mpu_opp_120 Register   | Figure 9-44. vdd_mpu_opp_120 Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 | ntarget                                 |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-53. vdd\_mpu\_opp\_120 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------|
| 31-24 | Reserved | R      | 0h      |                                                                              |
| 23-0  | ntarget  | R      | 0h      | Ntarget value for MPU Voltage domain OPP120 Reset value is device-dependent. |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.44 vdd\_mpu\_opp\_turbo Register (offset = 77Ch) [reset = 0h]

vdd\_mpu\_opp\_turbo is shown in Figure 9-45 and described in Table 9-54.

| Figure 9-45. vdd_mpu_opp_turbo Register   | Figure 9-45. vdd_mpu_opp_turbo Register   | Figure 9-45. vdd_mpu_opp_turbo Register   | Figure 9-45. vdd_mpu_opp_turbo Register   | Figure 9-45. vdd_mpu_opp_turbo Register   | Figure 9-45. vdd_mpu_opp_turbo Register   | Figure 9-45. vdd_mpu_opp_turbo Register   | Figure 9-45. vdd_mpu_opp_turbo Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   | ntarget                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-54. vdd\_mpu\_opp\_turbo Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31-24 | Reserved | R      | 0h      |                                                                                |
| 23-0  | ntarget  | R      | 0h      | Ntarget value for MPU Voltage domain OPPTURBO Reset value is device-dependent. |

## 9.3.1.45 vdd\_core\_opp\_050 Register (offset = 7B8h) [reset = 0h]

vdd\_core\_opp\_050 is shown in Figure 9-46 and described in Table 9-55.

| Figure 9-46. vdd_core_opp_050 Register   | Figure 9-46. vdd_core_opp_050 Register   | Figure 9-46. vdd_core_opp_050 Register   | Figure 9-46. vdd_core_opp_050 Register   | Figure 9-46. vdd_core_opp_050 Register   | Figure 9-46. vdd_core_opp_050 Register   | Figure 9-46. vdd_core_opp_050 Register   | Figure 9-46. vdd_core_opp_050 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-55. vdd\_core\_opp\_050 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------|
| 31-24 | Reserved | R      | 0h      |                                                                              |
| 23-0  | ntarget  | R      | 0h      | Ntarget value for CORE Voltage domain OPP50 Reset value is device-dependent. |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.46 vdd\_core\_opp\_100 Register (offset = 7BCh) [reset = 0h]

vdd\_core\_opp\_100 is shown in Figure 9-47 and described in Table 9-56.

| Figure 9-47. vdd_core_opp_100 Register   | Figure 9-47. vdd_core_opp_100 Register   | Figure 9-47. vdd_core_opp_100 Register   | Figure 9-47. vdd_core_opp_100 Register   | Figure 9-47. vdd_core_opp_100 Register   | Figure 9-47. vdd_core_opp_100 Register   | Figure 9-47. vdd_core_opp_100 Register   | Figure 9-47. vdd_core_opp_100 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  | ntarget                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-56. vdd\_core\_opp\_100 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------|
| 31-24 | Reserved | R      | 0h      |                                                                               |
| 23-0  | ntarget  | R      | 0h      | Ntarget value for CORE Voltage domain OPP100 Reset value is device-dependent. |

## 9.3.1.47 bb\_scale Register (offset = 7D0h) [reset = 0h]

bb\_scale is shown in Figure 9-48 and described in Table 9-57.

| Figure 9-48. bb_scale Register   | Figure 9-48. bb_scale Register   | Figure 9-48. bb_scale Register   | Figure 9-48. bb_scale Register   | Figure 9-48. bb_scale Register   | Figure 9-48. bb_scale Register   | Figure 9-48. bb_scale Register   | Figure 9-48. bb_scale Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | scale                            | scale                            | scale                            | scale                            |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| Reserved bbias                   | Reserved bbias                   | Reserved bbias                   | Reserved bbias                   | Reserved bbias                   | Reserved bbias                   | Reserved bbias                   | Reserved bbias                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-57. bb\_scale Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                              |
|-------|----------|--------|---------|------------------------------------------|
| 31-12 | Reserved | R      | 0h      |                                          |
| 11-8  | scale    | R      | 0h      | Dynamic core voltage scaling for class 0 |
| 7-2   | Reserved | R      | 0h      |                                          |
| 1-0   | bbias    | R      | 0h      | BBIAS value from Efuse                   |

<!-- image -->

R-0h

<!-- image -->

## 9.3.1.48 usb\_vid\_pid Register (offset = 7F4h) [reset = 4516141h]

usb\_vid\_pid is shown in Figure 9-49 and described in Table 9-58.

| Figure 9-49. usb_vid_pid Register   | Figure 9-49. usb_vid_pid Register   | Figure 9-49. usb_vid_pid Register   | Figure 9-49. usb_vid_pid Register   | Figure 9-49. usb_vid_pid Register   | Figure 9-49. usb_vid_pid Register   | Figure 9-49. usb_vid_pid Register   | Figure 9-49. usb_vid_pid Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| usb_vid                             | usb_vid                             | usb_vid                             | usb_vid                             | usb_vid                             | usb_vid                             | usb_vid                             | usb_vid                             |
| R-451h                              | R-451h                              | R-451h                              | R-451h                              | R-451h                              | R-451h                              | R-451h                              | R-451h                              |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| usb_vid                             | usb_vid                             | usb_vid                             | usb_vid                             | usb_vid                             | usb_vid                             | usb_vid                             | usb_vid                             |
| R-451h                              | R-451h                              | R-451h                              | R-451h                              | R-451h                              | R-451h                              | R-451h                              | R-451h                              |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| usb_pid                             | usb_pid                             | usb_pid                             | usb_pid                             | usb_pid                             | usb_pid                             | usb_pid                             | usb_pid                             |
| R-6141h                             | R-6141h                             | R-6141h                             | R-6141h                             | R-6141h                             | R-6141h                             | R-6141h                             | R-6141h                             |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| usb_pid                             | usb_pid                             | usb_pid                             | usb_pid                             | usb_pid                             | usb_pid                             | usb_pid                             | usb_pid                             |

R-6141h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-58. usb\_vid\_pid Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description    |
|-------|---------|--------|---------|----------------|
| 31-16 | usb_vid | R      | 0x451   | USB Vendor ID  |
| 15-0  | usb_pid | R      | 0x6141  | USB Product ID |

## 9.3.1.49 efuse\_sma Register (offset = 7FCh) [reset = 0h]

This register describes the device's ARM maximum frequency capabilities and package type. Note that this register is only applicable in PG2.x. The contents of this register is not applicable in PG1.0 devices. efuse\_sma is shown in Figure 9-50 and described in Table 9-59.

## Figure 9-50. efuse\_sma Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| Reserved             | Reserved             | Reserved             | Reserved             | Reserved             | Reserved             | Reserved             | Reserved             |
| R                    | R                    | R                    | R                    | R                    | R                    | R                    | R                    |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| Reserved             | Reserved             | Reserved             | Reserved             | Reserved             | Reserved             | package_type         | package_type         |
| R                    | R                    | R                    | R                    | R                    | R                    | R-package-dependent  | R-package-dependent  |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| Reserved             | Reserved             | Reserved             | arm_mpu_max_freq     | arm_mpu_max_freq     | arm_mpu_max_freq     | arm_mpu_max_freq     | arm_mpu_max_freq     |
| R R-device-dependent | R R-device-dependent | R R-device-dependent | R R-device-dependent | R R-device-dependent | R R-device-dependent | R R-device-dependent | R R-device-dependent |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| arm_mpu_max_freq     | arm_mpu_max_freq     | arm_mpu_max_freq     | arm_mpu_max_freq     | arm_mpu_max_freq     | arm_mpu_max_freq     | arm_mpu_max_freq     | arm_mpu_max_freq     |

R-device-dependent

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 9-59. efuse\_sma Register Field Descriptions

| Bit   | Field            | Type   | Reset              | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|------------------|--------|--------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | Reserved         | R      |                    | These bits are undefined and contents can vary from device to device.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 17-16 | package_type     | R      | Package- dependent | Designates the Package type of the device (PG2.x only). 00b - Undefined 01b - ZCZ Package 10b - ZCE Package 11b - Reserved                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 15-13 | Reserved         | R      |                    | These bits are undefined and contents can vary from device to device.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 12-0  | arm_mpu_max_freq | R      | Device- dependent  | Designates the ARM MPU Maximum Frequency supported by the device (PG2.x only). There are also voltage requirements that accompany each frequency (OPPs). See the device specific data manual for this information and for information on device variants. 0x1FEF - 300 MHz ARM MPU Maximum (ZCZ Package only) 0x1FAF - 600 MHz ARM MPU Maximum (ZCZ Package only) 0x1F2F - 720 MHz ARM MPU Maximum (ZCZ Package only) 0x1E2F - 800 MHz ARM MPU Maximum (ZCZ Package only) 0x1C2F - 1 GHz ARM MPU Maximum (ZCZ Package only) 0x1FDF - 300 MHz ARM MPU Maximum (ZCE Package only) 0x1F9F - 600 MHz ARM MPU Maximum (ZCE Package only) All other values are reserved. |

<!-- image -->

<!-- image -->

## 9.3.1.50 conf\_&lt;module&gt;\_&lt;pin&gt; Register (offset = 800h-A34h)

See the device datasheet for information on default pin mux configurations. Note that the device ROM may change the default pin mux for certain pins based on the SYSBOOT mode settings.

See Table 9-10, Control Module Registers Table , for the full list of offsets for each module/pin configuration.

conf\_&lt;module&gt;\_&lt;pin&gt; is shown in Figure 9-51 and described in Table 9-60.

## Figure 9-51. conf\_&lt;module&gt;\_&lt;pin&gt; Register

| 31       | 30                            | 29                            | 28                              | 27                         | 26                        | 25                        | 24                        |
|----------|-------------------------------|-------------------------------|---------------------------------|----------------------------|---------------------------|---------------------------|---------------------------|
| Reserved | Reserved                      | Reserved                      | Reserved                        | Reserved                   | Reserved                  | Reserved                  | Reserved                  |
| R-0h     | R-0h                          | R-0h                          | R-0h                            | R-0h                       | R-0h                      | R-0h                      | R-0h                      |
| 23       | 22                            | 21                            | 20                              | 19                         | 18                        | 17                        | 16                        |
| Reserved | Reserved                      | Reserved                      | Reserved                        | Reserved                   | Reserved                  | Reserved                  | Reserved                  |
| R-0h     | R-0h                          | R-0h                          | R-0h                            |                            |                           |                           |                           |
| 15       | 14                            | 13                            | 12                              | 11                         | 10                        | 9                         | 8                         |
| Reserved | Reserved                      | Reserved                      | Reserved                        | Reserved                   | Reserved                  | Reserved                  | Reserved                  |
| R-0h     | R-0h                          | R-0h                          | R-0h                            | R-0h                       | R-0h                      | R-0h                      | R-0h                      |
| 7        | 6                             | 5                             | 4                               | 3                          | 2                         | 1                         | 0                         |
| Reserved | conf_<module> _<pin>_slewctrl | conf_<module> _<pin>_rxactive | conf_<module> _<pin>_putypes el | conf_<module> _<pin>_puden | conf_<module>_<pin>_mmode | conf_<module>_<pin>_mmode | conf_<module>_<pin>_mmode |
| R-0h     | R/W-0h                        | R/W-1h                        | R/W-0h                          | R/W-0h                     | R/W-0h                    | R/W-0h                    | R/W-0h                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-60. conf\_&lt;module&gt;\_&lt;pin&gt; Register Field Descriptions

| Bit   | Field                          | Type   | Reset   | Description                                                                                                     |
|-------|--------------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------|
| 31-20 | Reserved                       | R      | 0h      |                                                                                                                 |
| 19-7  | Reserved                       | R      | 0h      |                                                                                                                 |
| 6     | conf_<module>_<pin>_sle wctrl  | R/W    | X       | Select between faster or slower slew rate 0: Fast 1: Slow Reset value is pad-dependent.                         |
| 5     | conf_<module>_<pin>_rx active  | R/W    | 1h      | Input enable value for the PAD 0: Receiver disabled 1: Receiver enabled                                         |
| 4     | conf_<module>_<pin>_pu typesel | R/W    | X       | Pad pullup/pulldown type selection 0: Pulldown selected 1: Pullup selected Reset value is pad-dependent.        |
| 3     | conf_<module>_<pin>_pu den     | R/W    | X       | Pad pullup/pulldown enable 0: Pullup/pulldown enabled 1: Pullup/pulldown disabled Reset value is pad-dependent. |
| 2-0   | conf_<module>_<pin>_m mode     | R/W    | X       | Pad functional signal mux select. Reset value is pad-dependent.                                                 |

## 9.3.1.51 cqdetect\_status Register (offset = E00h) [reset = 0h]

cqdetect\_status is shown in Figure 9-52 and described in Table 9-61.

| Figure 9-52. cqdetect_status Register   | Figure 9-52. cqdetect_status Register   | Figure 9-52. cqdetect_status Register   | Figure 9-52. cqdetect_status Register   | Figure 9-52. cqdetect_status Register   | Figure 9-52. cqdetect_status Register   | Figure 9-52. cqdetect_status Register   | Figure 9-52. cqdetect_status Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| Reserved                                | Reserved                                | cqerr_general                           | cqerr_gemac_b                           | cqerr_gemac_a                           | cqerr_mmcsd_ b                          | cqerr_mmcsd_ a                          | cqerr_gpmc                              |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| Reserved                                | Reserved                                | cqstat_general                          | cqstat_gemac_ b                         | cqstat_gemac_ a                         | cqstat_mmcsd_ b                         | cqstat_mmcsd_ a                         | cqstat_gpmc                             |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 9-61. cqdetect\_status Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                               |
|-------|----------------|--------|---------|-------------------------------------------|
| 31-22 | Reserved       | R      | 0h      |                                           |
| 21    | Reserved       | R      | 0h      |                                           |
| 20    | Reserved       | R      | 0h      |                                           |
| 19    | Reserved       | R      | 0h      |                                           |
| 18    | Reserved       | R      | 0h      |                                           |
| 17    | Reserved       | R      | 0h      |                                           |
| 16    | Reserved       | R      | 0h      |                                           |
| 15-14 | Reserved       | R      | 0h      |                                           |
| 13    | cqerr_general  | R      | 0h      | CQDetect Mode Error Status                |
| 12    | cqerr_gemac_b  | R      | 0h      | CQDetect Mode Error Status                |
| 11    | cqerr_gemac_a  | R      | 0h      | CQDetect Mode Error Status                |
| 10    | cqerr_mmcsd_b  | R      | 0h      | CQDetect Mode Error Status                |
| 9     | cqerr_mmcsd_a  | R      | 0h      | CQDetect Mode Error Status                |
| 8     | cqerr_gpmc     | R      | 0h      | CQDetect Mode Error Status                |
| 7-6   | Reserved       | R      | 0h      |                                           |
| 5     | cqstat_general | R      | 0h      | 1: IOs are 3.3V mode 0: IOs are 1.8V mode |
| 4     | cqstat_gemac_b | R      | 0h      | 1: IOs are 3.3V mode 0: IOs are 1.8V mode |
| 3     | cqstat_gemac_a | R      | 0h      | 1: IOs are 3.3V mode 0: IOs are 1.8V mode |
| 2     | cqstat_mmcsd_b | R      | 0h      | 1: IOs are 3.3V mode 0: IOs are 1.8V mode |
| 1     | cqstat_mmcsd_a | R      | 0h      | 1: IOs are 3.3V mode 0: IOs are 1.8V mode |
| 0     | cqstat_gpmc    | R      | 0h      | 1: IOs are 3.3V mode 0: IOs are 1.8V mode |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.52 ddr\_io\_ctrl Register (offset = E04h) [reset = 0h]

ddr\_io\_ctrl is shown in Figure 9-53 and described in Table 9-62.

## Figure 9-53. ddr\_io\_ctrl Register

| 31                | 30                 | 29       | 28       | 27       | 26       | 25       | 24       |
|-------------------|--------------------|----------|----------|----------|----------|----------|----------|
| ddr3_rst_def_v al | ddr_wuclk_disa ble | Reserved | mddr_sel |          | Reserved | Reserved |          |
| R/W-0h            | R/W-0h             | R-0h     | R/W-0h   |          | R/W-0h   | R/W-0h   |          |
| 23                | 22                 | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved          | Reserved           | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R/W-0h            | R/W-0h             | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15                | 14                 | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved          | Reserved           | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R/W-0h            | R/W-0h             | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7                 | 6                  | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved          | Reserved           | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-62. ddr\_io\_ctrl Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                          |
|-------|-------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | ddr3_rst_def_val  | R/W    | 0h      | DDR3 reset default value                                                                                                                                                                                             |
| 30    | ddr_wuclk_disable | R/W    | 0h      | Disables the slow clock to WUCLKIN and ISOCLKIN of DDR emif SS and IOs (required for proper initialization, after which clock could be shut off). 0 = free running SLOW (32k) clock 1 = clock is synchronously gated |
| 29    | Reserved          | R      | 0h      |                                                                                                                                                                                                                      |
| 28    | mddr_sel          | R/W    | 0h      | 0: IOs set for DDR2/DDR3 (STL mode) 1: IOs set for mDDR (CMOS mode)                                                                                                                                                  |
| 27-0  | Reserved          | R/W    | 0h      |                                                                                                                                                                                                                      |

## 9.3.1.53 vtp\_ctrl Register (offset = E0Ch) [reset = 0h]

vtp\_ctrl is shown in Figure 9-54 and described in Table 9-63.

| Figure 9-54. vtp_ctrl Register   | Figure 9-54. vtp_ctrl Register   | Figure 9-54. vtp_ctrl Register   | Figure 9-54. vtp_ctrl Register   | Figure 9-54. vtp_ctrl Register   | Figure 9-54. vtp_ctrl Register   | Figure 9-54. vtp_ctrl Register   | Figure 9-54. vtp_ctrl Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             | R-0h                             |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         |                                  |                                  |                                  | pcin                             |                                  |                                  |                                  |
| R-0h                             |                                  |                                  |                                  | R-0h                             |                                  |                                  |                                  |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         |                                  |                                  |                                  | ncin                             |                                  |                                  |                                  |
| R-0h                             |                                  |                                  |                                  | R-0h                             |                                  |                                  |                                  |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| Reserved                         | enable                           | ready                            | lock                             |                                  | filter                           |                                  | clrz                             |
| R-0h                             | R/W-0h                           | R-0h                             | R/W-0h                           |                                  | R/W-0h                           |                                  | R/W-0h                           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-63. vtp\_ctrl Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-23 | Reserved | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 22-16 | pcin     | R      | 1h      | Default/reset values of 'P' for the VTP controller. See "Silicon Revision Functional Differences and Enhancements" for differences in operation based on AM335x silicon revision.                                                                                                                                                                                                                                                                       |
| 15    | Reserved | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 14-8  | ncin     | R      | 1h      | Default/reset values of 'N' for the VTP controller. See "Silicon Revision Functional Differences and Enhancements" for differences in operation based on AM335x silicon revision.                                                                                                                                                                                                                                                                       |
| 7     | Reserved | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 6     | enable   | R/W    | 0h      | 0: VTP macro in bypass mode. P and N are driven from PCIN and NCIN. 1: Dynamic VTP compensation mode                                                                                                                                                                                                                                                                                                                                                    |
| 5     | ready    | R      | 0h      | 0: Training sequence is not complete 1: Training sequence is complete                                                                                                                                                                                                                                                                                                                                                                                   |
| 4     | lock     | R/W    | 0h      | 0: Normal operation dynamic update 1: freeze dynamic update, pwrdn controller                                                                                                                                                                                                                                                                                                                                                                           |
| 3-1   | filter   | R/W    | 11h     | Digital filter bits to prevent the controller from making excessive number of changes. 000: Filter off 001: Update on two consecutive update requests 010: Update on three consecutive update requests 011: Update on four consecutive update requests 100: Update on five consecutive update requests 101: Update on six consecutive update requests 110: Update on seven consecutive update requests 111: Update on eight consecutive update requests |
| 0     | clrz     | R/W    | 0h      | clears flops, start count again, after low going pulse                                                                                                                                                                                                                                                                                                                                                                                                  |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.54 vref\_ctrl Register (offset = E14h) [reset = 0h]

vref\_ctrl is shown in Figure 9-55 and described in Table 9-64.

| Figure 9-55. vref_ctrl Register   | Figure 9-55. vref_ctrl Register   | Figure 9-55. vref_ctrl Register   | Figure 9-55. vref_ctrl Register   | Figure 9-55. vref_ctrl Register   | Figure 9-55. vref_ctrl Register   | Figure 9-55. vref_ctrl Register   | Figure 9-55. vref_ctrl Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | Reserved                          | ddr_vref_ccap                     | ddr_vref_ccap                     | ddr_vref_tap                      | ddr_vref_tap                      | ddr_vref_en                       |
| R-0h                              | R-0h                              | R-0h                              | R/W-0h                            | R/W-0h                            | R/W-0h                            | R/W-0h                            | R/W-0h                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-64. vref\_ctrl Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                            |
|-------|---------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                        |
| 4-3   | ddr_vref_ccap | R/W    | 0h      | select for coupling cap for DDR 00 : No capacitor connected 01 : Capacitor between BIAS2 and VSS 10 : Capacitor between BIAS2 and VDDS 11: Capacitor between BIAS2 and VSS andamp Capacitor between BIAS2 and VDDS                                                                                                                     |
| 2-1   | ddr_vref_tap  | R/W    | 0h      | select for int ref for DDR 00 : Pad/Bias2 connected to internal reference VDDS/2 for 2uA current load 01 : Pad/Bias2 connected to internal reference VDDS/2 for 4uA current load 10 : Pad/Bias2 connected to internal reference VDDS/2 for 6uA current load 11 : Pad/Bias2 connected to internal reference VDDS/2 for 8uA current load |
| 0     | ddr_vref_en   | R/W    | 0h      | active high internal reference enable for DDR                                                                                                                                                                                                                                                                                          |

## 9.3.1.55 tpcc\_evt\_mux\_0\_3 Register (offset = F90h) [reset = 0h]

tpcc\_evt\_mux\_0\_3 is shown in Figure 9-56 and described in Table 9-65.

| Figure 9-56. tpcc_evt_mux_0_3 Register   | Figure 9-56. tpcc_evt_mux_0_3 Register   | Figure 9-56. tpcc_evt_mux_0_3 Register   | Figure 9-56. tpcc_evt_mux_0_3 Register   | Figure 9-56. tpcc_evt_mux_0_3 Register   | Figure 9-56. tpcc_evt_mux_0_3 Register   | Figure 9-56. tpcc_evt_mux_0_3 Register   | Figure 9-56. tpcc_evt_mux_0_3 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | evt_mux_3                                | evt_mux_3                                | evt_mux_3                                | evt_mux_3                                | evt_mux_3                                | evt_mux_3                                |
| R-0h                                     | R-0h                                     | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | evt_mux_2                                | evt_mux_2                                | evt_mux_2                                | evt_mux_2                                | evt_mux_2                                | evt_mux_2                                |
| R-0h                                     | R-0h                                     | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| Reserved                                 | Reserved                                 | evt_mux_1                                | evt_mux_1                                | evt_mux_1                                | evt_mux_1                                | evt_mux_1                                | evt_mux_1                                |
| R-0h                                     | R-0h                                     | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| Reserved                                 | Reserved                                 | evt_mux_0                                | evt_mux_0                                | evt_mux_0                                | evt_mux_0                                | evt_mux_0                                | evt_mux_0                                |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-65. tpcc\_evt\_mux\_0\_3 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                            |
|-------|-----------|--------|---------|----------------------------------------|
| 31-30 | Reserved  | R      | 0h      |                                        |
| 29-24 | evt_mux_3 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 3 |
| 23-22 | Reserved  | R      | 0h      |                                        |
| 21-16 | evt_mux_2 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 2 |
| 15-14 | Reserved  | R      | 0h      |                                        |
| 13-8  | evt_mux_1 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 1 |
| 7-6   | Reserved  | R      | 0h      |                                        |
| 5-0   | evt_mux_0 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 0 |

<!-- image -->

<!-- image -->

## 9.3.1.56 tpcc\_evt\_mux\_4\_7 Register (offset = F94h) [reset = 0h]

tpcc\_evt\_mux\_4\_7 is shown in Figure 9-57 and described in Table 9-66.

| Figure 9-57. tpcc_evt_mux_4_7 Register   | Figure 9-57. tpcc_evt_mux_4_7 Register   | Figure 9-57. tpcc_evt_mux_4_7 Register   | Figure 9-57. tpcc_evt_mux_4_7 Register   | Figure 9-57. tpcc_evt_mux_4_7 Register   | Figure 9-57. tpcc_evt_mux_4_7 Register   | Figure 9-57. tpcc_evt_mux_4_7 Register   | Figure 9-57. tpcc_evt_mux_4_7 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | evt_mux_7                                | evt_mux_7                                | evt_mux_7                                | evt_mux_7                                | evt_mux_7                                | evt_mux_7                                |
| R-0h                                     | R-0h                                     | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | evt_mux_6                                | evt_mux_6                                | evt_mux_6                                | evt_mux_6                                | evt_mux_6                                | evt_mux_6                                |
| R-0h                                     | R-0h                                     | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| Reserved                                 | Reserved                                 | evt_mux_5                                | evt_mux_5                                | evt_mux_5                                | evt_mux_5                                | evt_mux_5                                | evt_mux_5                                |
| R-0h                                     | R-0h                                     | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| Reserved                                 | Reserved                                 | evt_mux_4                                | evt_mux_4                                | evt_mux_4                                | evt_mux_4                                | evt_mux_4                                | evt_mux_4                                |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-66. tpcc\_evt\_mux\_4\_7 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                            |
|-------|-----------|--------|---------|----------------------------------------|
| 31-30 | Reserved  | R      | 0h      |                                        |
| 29-24 | evt_mux_7 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 7 |
| 23-22 | Reserved  | R      | 0h      |                                        |
| 21-16 | evt_mux_6 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 6 |
| 15-14 | Reserved  | R      | 0h      |                                        |
| 13-8  | evt_mux_5 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 5 |
| 7-6   | Reserved  | R      | 0h      |                                        |
| 5-0   | evt_mux_4 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 4 |

## 9.3.1.57 tpcc\_evt\_mux\_8\_11 Register (offset = F98h) [reset = 0h]

tpcc\_evt\_mux\_8\_11 is shown in Figure 9-58 and described in Table 9-67.

| Figure 9-58. tpcc_evt_mux_8_11 Register   | Figure 9-58. tpcc_evt_mux_8_11 Register   | Figure 9-58. tpcc_evt_mux_8_11 Register   | Figure 9-58. tpcc_evt_mux_8_11 Register   | Figure 9-58. tpcc_evt_mux_8_11 Register   | Figure 9-58. tpcc_evt_mux_8_11 Register   | Figure 9-58. tpcc_evt_mux_8_11 Register   | Figure 9-58. tpcc_evt_mux_8_11 Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| Reserved                                  | Reserved                                  | evt_mux_11                                | evt_mux_11                                | evt_mux_11                                | evt_mux_11                                | evt_mux_11                                | evt_mux_11                                |
| R-0h                                      | R-0h                                      | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| Reserved                                  | Reserved                                  | evt_mux_10                                | evt_mux_10                                | evt_mux_10                                | evt_mux_10                                | evt_mux_10                                | evt_mux_10                                |
| R-0h                                      | R-0h                                      | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| Reserved                                  | Reserved                                  | evt_mux_9                                 | evt_mux_9                                 | evt_mux_9                                 | evt_mux_9                                 | evt_mux_9                                 | evt_mux_9                                 |
| R-0h                                      | R-0h                                      | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| Reserved                                  | Reserved                                  | evt_mux_8                                 | evt_mux_8                                 | evt_mux_8                                 | evt_mux_8                                 | evt_mux_8                                 | evt_mux_8                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-67. tpcc\_evt\_mux\_8\_11 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_11 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 11 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_10 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 10 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_9  | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 9  |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_8  | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 8  |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.58 tpcc\_evt\_mux\_12\_15 Register (offset = F9Ch) [reset = 0h]

tpcc\_evt\_mux\_12\_15 is shown in Figure 9-59 and described in Table 9-68.

| Figure 9-59. tpcc_evt_mux_12_15 Register   | Figure 9-59. tpcc_evt_mux_12_15 Register   | Figure 9-59. tpcc_evt_mux_12_15 Register   | Figure 9-59. tpcc_evt_mux_12_15 Register   | Figure 9-59. tpcc_evt_mux_12_15 Register   | Figure 9-59. tpcc_evt_mux_12_15 Register   | Figure 9-59. tpcc_evt_mux_12_15 Register   | Figure 9-59. tpcc_evt_mux_12_15 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_15                                 | evt_mux_15                                 | evt_mux_15                                 | evt_mux_15                                 | evt_mux_15                                 | evt_mux_15                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_14                                 | evt_mux_14                                 | evt_mux_14                                 | evt_mux_14                                 | evt_mux_14                                 | evt_mux_14                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_13                                 | evt_mux_13                                 | evt_mux_13                                 | evt_mux_13                                 | evt_mux_13                                 | evt_mux_13                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_12                                 | evt_mux_12                                 | evt_mux_12                                 | evt_mux_12                                 | evt_mux_12                                 | evt_mux_12                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-68. tpcc\_evt\_mux\_12\_15 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_15 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 15 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_14 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 14 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_13 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 13 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_12 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 12 |

## 9.3.1.59 tpcc\_evt\_mux\_16\_19 Register (offset = FA0h) [reset = 0h]

tpcc\_evt\_mux\_16\_19 is shown in Figure 9-60 and described in Table 9-69.

| Figure 9-60. tpcc_evt_mux_16_19 Register   | Figure 9-60. tpcc_evt_mux_16_19 Register   | Figure 9-60. tpcc_evt_mux_16_19 Register   | Figure 9-60. tpcc_evt_mux_16_19 Register   | Figure 9-60. tpcc_evt_mux_16_19 Register   | Figure 9-60. tpcc_evt_mux_16_19 Register   | Figure 9-60. tpcc_evt_mux_16_19 Register   | Figure 9-60. tpcc_evt_mux_16_19 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_19                                 | evt_mux_19                                 | evt_mux_19                                 | evt_mux_19                                 | evt_mux_19                                 | evt_mux_19                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_18                                 | evt_mux_18                                 | evt_mux_18                                 | evt_mux_18                                 | evt_mux_18                                 | evt_mux_18                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_17                                 | evt_mux_17                                 | evt_mux_17                                 | evt_mux_17                                 | evt_mux_17                                 | evt_mux_17                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_16                                 | evt_mux_16                                 | evt_mux_16                                 | evt_mux_16                                 | evt_mux_16                                 | evt_mux_16                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-69. tpcc\_evt\_mux\_16\_19 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_19 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 19 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_18 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 18 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_17 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 17 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_16 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 16 |

<!-- image -->

<!-- image -->

## 9.3.1.60 tpcc\_evt\_mux\_20\_23 Register (offset = FA4h) [reset = 0h]

tpcc\_evt\_mux\_20\_23 is shown in Figure 9-61 and described in Table 9-70.

| Figure 9-61. tpcc_evt_mux_20_23 Register   | Figure 9-61. tpcc_evt_mux_20_23 Register   | Figure 9-61. tpcc_evt_mux_20_23 Register   | Figure 9-61. tpcc_evt_mux_20_23 Register   | Figure 9-61. tpcc_evt_mux_20_23 Register   | Figure 9-61. tpcc_evt_mux_20_23 Register   | Figure 9-61. tpcc_evt_mux_20_23 Register   | Figure 9-61. tpcc_evt_mux_20_23 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_23                                 | evt_mux_23                                 | evt_mux_23                                 | evt_mux_23                                 | evt_mux_23                                 | evt_mux_23                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_22                                 | evt_mux_22                                 | evt_mux_22                                 | evt_mux_22                                 | evt_mux_22                                 | evt_mux_22                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_21                                 | evt_mux_21                                 | evt_mux_21                                 | evt_mux_21                                 | evt_mux_21                                 | evt_mux_21                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_20                                 | evt_mux_20                                 | evt_mux_20                                 | evt_mux_20                                 | evt_mux_20                                 | evt_mux_20                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-70. tpcc\_evt\_mux\_20\_23 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_23 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 23 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_22 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 22 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_21 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 21 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_20 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 20 |

## 9.3.1.61 tpcc\_evt\_mux\_24\_27 Register (offset = FA8h) [reset = 0h]

tpcc\_evt\_mux\_24\_27 is shown in Figure 9-62 and described in Table 9-71.

| Figure 9-62. tpcc_evt_mux_24_27 Register   | Figure 9-62. tpcc_evt_mux_24_27 Register   | Figure 9-62. tpcc_evt_mux_24_27 Register   | Figure 9-62. tpcc_evt_mux_24_27 Register   | Figure 9-62. tpcc_evt_mux_24_27 Register   | Figure 9-62. tpcc_evt_mux_24_27 Register   | Figure 9-62. tpcc_evt_mux_24_27 Register   | Figure 9-62. tpcc_evt_mux_24_27 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_27                                 | evt_mux_27                                 | evt_mux_27                                 | evt_mux_27                                 | evt_mux_27                                 | evt_mux_27                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_26                                 | evt_mux_26                                 | evt_mux_26                                 | evt_mux_26                                 | evt_mux_26                                 | evt_mux_26                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_25                                 | evt_mux_25                                 | evt_mux_25                                 | evt_mux_25                                 | evt_mux_25                                 | evt_mux_25                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_24                                 | evt_mux_24                                 | evt_mux_24                                 | evt_mux_24                                 | evt_mux_24                                 | evt_mux_24                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-71. tpcc\_evt\_mux\_24\_27 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_27 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 27 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_26 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 26 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_25 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 25 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_24 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 24 |

<!-- image -->

<!-- image -->

## 9.3.1.62 tpcc\_evt\_mux\_28\_31 Register (offset = FACh) [reset = 0h]

tpcc\_evt\_mux\_28\_31 is shown in Figure 9-63 and described in Table 9-72.

| Figure 9-63. tpcc_evt_mux_28_31 Register   | Figure 9-63. tpcc_evt_mux_28_31 Register   | Figure 9-63. tpcc_evt_mux_28_31 Register   | Figure 9-63. tpcc_evt_mux_28_31 Register   | Figure 9-63. tpcc_evt_mux_28_31 Register   | Figure 9-63. tpcc_evt_mux_28_31 Register   | Figure 9-63. tpcc_evt_mux_28_31 Register   | Figure 9-63. tpcc_evt_mux_28_31 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved evt_mux_31                        | Reserved evt_mux_31                        | Reserved evt_mux_31                        | Reserved evt_mux_31                        | Reserved evt_mux_31                        | Reserved evt_mux_31                        | Reserved evt_mux_31                        | Reserved evt_mux_31                        |
| R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved evt_mux_30                        | Reserved evt_mux_30                        | Reserved evt_mux_30                        | Reserved evt_mux_30                        | Reserved evt_mux_30                        | Reserved evt_mux_30                        | Reserved evt_mux_30                        | Reserved evt_mux_30                        |
| R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved evt_mux_29                        | Reserved evt_mux_29                        | Reserved evt_mux_29                        | Reserved evt_mux_29                        | Reserved evt_mux_29                        | Reserved evt_mux_29                        | Reserved evt_mux_29                        | Reserved evt_mux_29                        |
| R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                | R-0h R/W-0h                                |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved evt_mux_28                        | Reserved evt_mux_28                        | Reserved evt_mux_28                        | Reserved evt_mux_28                        | Reserved evt_mux_28                        | Reserved evt_mux_28                        | Reserved evt_mux_28                        | Reserved evt_mux_28                        |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-72. tpcc\_evt\_mux\_28\_31 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_31 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 31 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_30 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 30 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_29 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 29 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_28 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 28 |

## 9.3.1.63 tpcc\_evt\_mux\_32\_35 Register (offset = FB0h) [reset = 0h]

tpcc\_evt\_mux\_32\_35 is shown in Figure 9-64 and described in Table 9-73.

| Figure 9-64. tpcc_evt_mux_32_35 Register   | Figure 9-64. tpcc_evt_mux_32_35 Register   | Figure 9-64. tpcc_evt_mux_32_35 Register   | Figure 9-64. tpcc_evt_mux_32_35 Register   | Figure 9-64. tpcc_evt_mux_32_35 Register   | Figure 9-64. tpcc_evt_mux_32_35 Register   | Figure 9-64. tpcc_evt_mux_32_35 Register   | Figure 9-64. tpcc_evt_mux_32_35 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_35                                 | evt_mux_35                                 | evt_mux_35                                 | evt_mux_35                                 | evt_mux_35                                 | evt_mux_35                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_34                                 | evt_mux_34                                 | evt_mux_34                                 | evt_mux_34                                 | evt_mux_34                                 | evt_mux_34                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_33                                 | evt_mux_33                                 | evt_mux_33                                 | evt_mux_33                                 | evt_mux_33                                 | evt_mux_33                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_32                                 | evt_mux_32                                 | evt_mux_32                                 | evt_mux_32                                 | evt_mux_32                                 | evt_mux_32                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-73. tpcc\_evt\_mux\_32\_35 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_35 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 35 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_34 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 34 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_33 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 33 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_32 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 32 |

<!-- image -->

<!-- image -->

## 9.3.1.64 tpcc\_evt\_mux\_36\_39 Register (offset = FB4h) [reset = 0h]

tpcc\_evt\_mux\_36\_39 is shown in Figure 9-65 and described in Table 9-74.

| Figure 9-65. tpcc_evt_mux_36_39 Register   | Figure 9-65. tpcc_evt_mux_36_39 Register   | Figure 9-65. tpcc_evt_mux_36_39 Register   | Figure 9-65. tpcc_evt_mux_36_39 Register   | Figure 9-65. tpcc_evt_mux_36_39 Register   | Figure 9-65. tpcc_evt_mux_36_39 Register   | Figure 9-65. tpcc_evt_mux_36_39 Register   | Figure 9-65. tpcc_evt_mux_36_39 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_39                                 | evt_mux_39                                 | evt_mux_39                                 | evt_mux_39                                 | evt_mux_39                                 | evt_mux_39                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_38                                 | evt_mux_38                                 | evt_mux_38                                 | evt_mux_38                                 | evt_mux_38                                 | evt_mux_38                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_37                                 | evt_mux_37                                 | evt_mux_37                                 | evt_mux_37                                 | evt_mux_37                                 | evt_mux_37                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_36                                 | evt_mux_36                                 | evt_mux_36                                 | evt_mux_36                                 | evt_mux_36                                 | evt_mux_36                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-74. tpcc\_evt\_mux\_36\_39 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_39 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 39 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_38 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 38 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_37 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 37 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_36 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 36 |

## 9.3.1.65 tpcc\_evt\_mux\_40\_43 Register (offset = FB8h) [reset = 0h]

tpcc\_evt\_mux\_40\_43 is shown in Figure 9-66 and described in Table 9-75.

| Figure 9-66. tpcc_evt_mux_40_43 Register   | Figure 9-66. tpcc_evt_mux_40_43 Register   | Figure 9-66. tpcc_evt_mux_40_43 Register   | Figure 9-66. tpcc_evt_mux_40_43 Register   | Figure 9-66. tpcc_evt_mux_40_43 Register   | Figure 9-66. tpcc_evt_mux_40_43 Register   | Figure 9-66. tpcc_evt_mux_40_43 Register   | Figure 9-66. tpcc_evt_mux_40_43 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_43                                 | evt_mux_43                                 | evt_mux_43                                 | evt_mux_43                                 | evt_mux_43                                 | evt_mux_43                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_42                                 | evt_mux_42                                 | evt_mux_42                                 | evt_mux_42                                 | evt_mux_42                                 | evt_mux_42                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_41                                 | evt_mux_41                                 | evt_mux_41                                 | evt_mux_41                                 | evt_mux_41                                 | evt_mux_41                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_40                                 | evt_mux_40                                 | evt_mux_40                                 | evt_mux_40                                 | evt_mux_40                                 | evt_mux_40                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-75. tpcc\_evt\_mux\_40\_43 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_43 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 43 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_42 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 42 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_41 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 41 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_40 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 40 |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.66 tpcc\_evt\_mux\_44\_47 Register (offset = FBCh) [reset = 0h]

tpcc\_evt\_mux\_44\_47 is shown in Figure 9-67 and described in Table 9-76.

| Figure 9-67. tpcc_evt_mux_44_47 Register   | Figure 9-67. tpcc_evt_mux_44_47 Register   | Figure 9-67. tpcc_evt_mux_44_47 Register   | Figure 9-67. tpcc_evt_mux_44_47 Register   | Figure 9-67. tpcc_evt_mux_44_47 Register   | Figure 9-67. tpcc_evt_mux_44_47 Register   | Figure 9-67. tpcc_evt_mux_44_47 Register   | Figure 9-67. tpcc_evt_mux_44_47 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_47                                 | evt_mux_47                                 | evt_mux_47                                 | evt_mux_47                                 | evt_mux_47                                 | evt_mux_47                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_46                                 | evt_mux_46                                 | evt_mux_46                                 | evt_mux_46                                 | evt_mux_46                                 | evt_mux_46                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_45                                 | evt_mux_45                                 | evt_mux_45                                 | evt_mux_45                                 | evt_mux_45                                 | evt_mux_45                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_44                                 | evt_mux_44                                 | evt_mux_44                                 | evt_mux_44                                 | evt_mux_44                                 | evt_mux_44                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-76. tpcc\_evt\_mux\_44\_47 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_47 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 47 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_46 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 46 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_45 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 45 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_44 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 44 |

## 9.3.1.67 tpcc\_evt\_mux\_48\_51 Register (offset = FC0h) [reset = 0h]

tpcc\_evt\_mux\_48\_51 is shown in Figure 9-68 and described in Table 9-77.

| Figure 9-68. tpcc_evt_mux_48_51 Register   | Figure 9-68. tpcc_evt_mux_48_51 Register   | Figure 9-68. tpcc_evt_mux_48_51 Register   | Figure 9-68. tpcc_evt_mux_48_51 Register   | Figure 9-68. tpcc_evt_mux_48_51 Register   | Figure 9-68. tpcc_evt_mux_48_51 Register   | Figure 9-68. tpcc_evt_mux_48_51 Register   | Figure 9-68. tpcc_evt_mux_48_51 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_51                                 | evt_mux_51                                 | evt_mux_51                                 | evt_mux_51                                 | evt_mux_51                                 | evt_mux_51                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_50                                 | evt_mux_50                                 | evt_mux_50                                 | evt_mux_50                                 | evt_mux_50                                 | evt_mux_50                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_49                                 | evt_mux_49                                 | evt_mux_49                                 | evt_mux_49                                 | evt_mux_49                                 | evt_mux_49                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_48                                 | evt_mux_48                                 | evt_mux_48                                 | evt_mux_48                                 | evt_mux_48                                 | evt_mux_48                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-77. tpcc\_evt\_mux\_48\_51 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_51 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 51 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_50 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 50 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_49 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 49 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_48 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 48 |

<!-- image -->

<!-- image -->

## 9.3.1.68 tpcc\_evt\_mux\_52\_55 Register (offset = FC4h) [reset = 0h]

tpcc\_evt\_mux\_52\_55 is shown in Figure 9-69 and described in Table 9-78.

| Figure 9-69. tpcc_evt_mux_52_55 Register   | Figure 9-69. tpcc_evt_mux_52_55 Register   | Figure 9-69. tpcc_evt_mux_52_55 Register   | Figure 9-69. tpcc_evt_mux_52_55 Register   | Figure 9-69. tpcc_evt_mux_52_55 Register   | Figure 9-69. tpcc_evt_mux_52_55 Register   | Figure 9-69. tpcc_evt_mux_52_55 Register   | Figure 9-69. tpcc_evt_mux_52_55 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_55                                 | evt_mux_55                                 | evt_mux_55                                 | evt_mux_55                                 | evt_mux_55                                 | evt_mux_55                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_54                                 | evt_mux_54                                 | evt_mux_54                                 | evt_mux_54                                 | evt_mux_54                                 | evt_mux_54                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_53                                 | evt_mux_53                                 | evt_mux_53                                 | evt_mux_53                                 | evt_mux_53                                 | evt_mux_53                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_52                                 | evt_mux_52                                 | evt_mux_52                                 | evt_mux_52                                 | evt_mux_52                                 | evt_mux_52                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-78. tpcc\_evt\_mux\_52\_55 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_55 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 55 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_54 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 54 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_53 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 53 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_52 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 52 |

## 9.3.1.69 tpcc\_evt\_mux\_56\_59 Register (offset = FC8h) [reset = 0h]

tpcc\_evt\_mux\_56\_59 is shown in Figure 9-70 and described in Table 9-79.

| Figure 9-70. tpcc_evt_mux_56_59 Register   | Figure 9-70. tpcc_evt_mux_56_59 Register   | Figure 9-70. tpcc_evt_mux_56_59 Register   | Figure 9-70. tpcc_evt_mux_56_59 Register   | Figure 9-70. tpcc_evt_mux_56_59 Register   | Figure 9-70. tpcc_evt_mux_56_59 Register   | Figure 9-70. tpcc_evt_mux_56_59 Register   | Figure 9-70. tpcc_evt_mux_56_59 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_59                                 | evt_mux_59                                 | evt_mux_59                                 | evt_mux_59                                 | evt_mux_59                                 | evt_mux_59                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_58                                 | evt_mux_58                                 | evt_mux_58                                 | evt_mux_58                                 | evt_mux_58                                 | evt_mux_58                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_57                                 | evt_mux_57                                 | evt_mux_57                                 | evt_mux_57                                 | evt_mux_57                                 | evt_mux_57                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_56                                 | evt_mux_56                                 | evt_mux_56                                 | evt_mux_56                                 | evt_mux_56                                 | evt_mux_56                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-79. tpcc\_evt\_mux\_56\_59 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_59 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 59 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_58 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 58 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_57 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 57 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_56 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 56 |

<!-- image -->

<!-- image -->

## 9.3.1.70 tpcc\_evt\_mux\_60\_63 Register (offset = FCCh) [reset = 0h]

tpcc\_evt\_mux\_60\_63 is shown in Figure 9-71 and described in Table 9-80.

| Figure 9-71. tpcc_evt_mux_60_63 Register   | Figure 9-71. tpcc_evt_mux_60_63 Register   | Figure 9-71. tpcc_evt_mux_60_63 Register   | Figure 9-71. tpcc_evt_mux_60_63 Register   | Figure 9-71. tpcc_evt_mux_60_63 Register   | Figure 9-71. tpcc_evt_mux_60_63 Register   | Figure 9-71. tpcc_evt_mux_60_63 Register   | Figure 9-71. tpcc_evt_mux_60_63 Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | evt_mux_63                                 | evt_mux_63                                 | evt_mux_63                                 | evt_mux_63                                 | evt_mux_63                                 | evt_mux_63                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | evt_mux_62                                 | evt_mux_62                                 | evt_mux_62                                 | evt_mux_62                                 | evt_mux_62                                 | evt_mux_62                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| Reserved                                   | Reserved                                   | evt_mux_61                                 | evt_mux_61                                 | evt_mux_61                                 | evt_mux_61                                 | evt_mux_61                                 | evt_mux_61                                 |
| R-0h                                       | R-0h                                       | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | evt_mux_60                                 | evt_mux_60                                 | evt_mux_60                                 | evt_mux_60                                 | evt_mux_60                                 | evt_mux_60                                 |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-80. tpcc\_evt\_mux\_60\_63 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                             |
|-------|------------|--------|---------|-----------------------------------------|
| 31-30 | Reserved   | R      | 0h      |                                         |
| 29-24 | evt_mux_63 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 63 |
| 23-22 | Reserved   | R      | 0h      |                                         |
| 21-16 | evt_mux_62 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 62 |
| 15-14 | Reserved   | R      | 0h      |                                         |
| 13-8  | evt_mux_61 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 61 |
| 7-6   | Reserved   | R      | 0h      |                                         |
| 5-0   | evt_mux_60 | R/W    | 0h      | Selects 1 of 64 inputs for DMA event 60 |

## 9.3.1.71 timer\_evt\_capt Register (offset = FD0h) [reset = 0h]

timer\_evt\_capt is shown in Figure 9-72 and described in Table 9-81.

| Figure 9-72. timer_evt_capt Register   | Figure 9-72. timer_evt_capt Register   | Figure 9-72. timer_evt_capt Register   | Figure 9-72. timer_evt_capt Register   | Figure 9-72. timer_evt_capt Register   | Figure 9-72. timer_evt_capt Register   | Figure 9-72. timer_evt_capt Register   | Figure 9-72. timer_evt_capt Register   |
|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|
| 31                                     | 30                                     | 29                                     | 28                                     | 27                                     | 26                                     | 25                                     | 24                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 23                                     | 22                                     | 21                                     | 20                                     | 19                                     | 18                                     | 17                                     | 16                                     |
|                                        | Reserved                               |                                        |                                        |                                        | timer7_evtcapt                         |                                        |                                        |
|                                        | R-0h                                   |                                        |                                        |                                        | R/W-0h                                 |                                        |                                        |
| 15                                     | 14                                     | 13                                     | 12                                     | 11                                     | 10                                     | 9                                      | 8                                      |
|                                        | Reserved                               |                                        |                                        |                                        | timer6_evtcapt                         |                                        |                                        |
|                                        | R-0h                                   |                                        |                                        |                                        | R/W-0h                                 |                                        |                                        |
| 7                                      | 6                                      | 5                                      | 4                                      | 3                                      | 2                                      | 1                                      | 0                                      |
|                                        | Reserved                               |                                        | timer5_evtcapt                         | timer5_evtcapt                         | timer5_evtcapt                         | timer5_evtcapt                         | timer5_evtcapt                         |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-81. timer\_evt\_capt Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description               |
|-------|----------------|--------|---------|---------------------------|
| 31-21 | Reserved       | R      | 0h      |                           |
| 20-16 | timer7_evtcapt | R/W    | 0h      | Timer 7 event capture mux |
| 15-13 | Reserved       | R      | 0h      |                           |
| 12-8  | timer6_evtcapt | R/W    | 0h      | Timer 6 event capture mux |
| 7-5   | Reserved       | R      | 0h      |                           |
| 4-0   | timer5_evtcapt | R/W    | 0h      | Timer 5 event capture mux |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.72 ecap\_evt\_capt Register (offset = FD4h) [reset = 0h]

ecap\_evt\_capt is shown in Figure 9-73 and described in Table 9-82.

| Figure 9-73. ecap_evt_capt Register   | Figure 9-73. ecap_evt_capt Register   | Figure 9-73. ecap_evt_capt Register   | Figure 9-73. ecap_evt_capt Register   | Figure 9-73. ecap_evt_capt Register   | Figure 9-73. ecap_evt_capt Register   | Figure 9-73. ecap_evt_capt Register   | Figure 9-73. ecap_evt_capt Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
|                                       | Reserved                              |                                       |                                       |                                       | ecap2_evtcapt                         |                                       |                                       |
|                                       | R-0h                                  |                                       |                                       |                                       | R/W-0h                                |                                       |                                       |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
|                                       | Reserved                              |                                       |                                       |                                       | ecap1_evtcapt                         |                                       |                                       |
|                                       | R-0h                                  |                                       |                                       |                                       | R/W-0h                                |                                       |                                       |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| Reserved                              | Reserved                              |                                       | ecap0_evtcapt                         | ecap0_evtcapt                         | ecap0_evtcapt                         | ecap0_evtcapt                         | ecap0_evtcapt                         |

R-0h

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-82. ecap\_evt\_capt Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description             |
|-------|---------------|--------|---------|-------------------------|
| 31-21 | Reserved      | R      | 0h      |                         |
| 20-16 | ecap2_evtcapt | R/W    | 0h      | ECAP2 event capture mux |
| 15-13 | Reserved      | R      | 0h      |                         |
| 12-8  | ecap1_evtcapt | R/W    | 0h      | ECAP1 event capture mux |
| 7-5   | Reserved      | R      | 0h      |                         |
| 4-0   | ecap0_evtcapt | R/W    | 0h      | ECAP0 event capture mux |

## 9.3.1.73 adc\_evt\_capt Register (offset = FD8h) [reset = 0h]

adc\_evt\_capt is shown in Figure 9-74 and described in Table 9-83.

| Figure 9-74. adc_evt_capt Register   | Figure 9-74. adc_evt_capt Register   | Figure 9-74. adc_evt_capt Register   | Figure 9-74. adc_evt_capt Register   | Figure 9-74. adc_evt_capt Register   | Figure 9-74. adc_evt_capt Register   | Figure 9-74. adc_evt_capt Register   | Figure 9-74. adc_evt_capt Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | adc_evtcapt                          | adc_evtcapt                          | adc_evtcapt                          | adc_evtcapt                          |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-83. adc\_evt\_capt Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description             |
|-------|-------------|--------|---------|-------------------------|
| 31-4  | Reserved    | R      | 0h      |                         |
| 3-0   | adc_evtcapt | R/W    | 0h      | ECAP0 event capture mux |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.74 reset\_iso Register (offset = 1000h) [reset = 0h]

reset\_iso is shown in Figure 9-75 and described in Table 9-84.

| Figure 9-75. reset_iso Register   | Figure 9-75. reset_iso Register   | Figure 9-75. reset_iso Register   | Figure 9-75. reset_iso Register   | Figure 9-75. reset_iso Register   | Figure 9-75. reset_iso Register   | Figure 9-75. reset_iso Register   | Figure 9-75. reset_iso Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              | R-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | iso_control                       |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-84. reset\_iso Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                         |
|-------|-------------|--------|---------|---------------------------------------------------------------------|
| 31-1  | Reserved    | R      | 0h      |                                                                     |
| 0     | iso_control | R/W    | 0h      | 0 : Ethernet Switch is not isolated 1 : Ethernet Switch is isolated |

R/W-0h

## 9.3.1.75 dpll\_pwr\_sw\_ctrl Register (offset = 1318h) [reset = 0h]

The DPLL\_PWR\_SW\_CTRL register, in conjunction with the DPLL\_PWR\_SW\_STATUS register, can be used to power off the digital power domain of the 3 DPLLS - DDR, DISP, PER to save leakage power in deep-sleep power modes. This register gives control over the power switch signals of the individual DPLLS.

A specific sequence has to be followed while programming the RET, PONIN, PGOODIN, ISO and RESET signals to put the PLLs in to low power mode and bring it out of low power mode.

In normal operating mode, the PRCM controls the RESET of the DPLLS. The RET, PONIN, PGOODIN and ISO are tied off. An over-ride bit is provided in this register SW\_CTRL\_*\_RESET, which when set allows S/W to control the RESET, RET, PONIN, PGOODIN and ISO of the DPLLs to enable entry/exit into DPLL low power modes.

dpll\_pwr\_sw\_ctrl is shown in Figure 9-76 and described in Table 9-85.

Figure 9-76. dpll\_pwr\_sw\_ctrl Register

| 31                | 30       | 29           | 28       | 27         | 26       | 25           | 24         |
|-------------------|----------|--------------|----------|------------|----------|--------------|------------|
| sw_ctrl_ddr_pll   | Reserved | isoscan_ddr  | ret_ddr  | reset_ddr  | iso_ddr  | pgoodin_ddr  | ponin_ddr  |
| R-0h              | R-0h     | R-0h         | R-0h     | R-0h       | R-0h     | R-1h         | R-1h       |
| 23                | 22       | 21           | 20       | 19         | 18       | 17           | 16         |
| sw_ctrl_disp_pll  | Reserved | isoscan_disp | ret_disp | reset_disp | iso_disp | pgoodin_disp | ponin_disp |
| R-0h              | R-0h     | R-0h         | R-0h     | R-0h       | R-0h     | R-1h         | R-1h       |
| 15                | 14       | 13           | 12       | 11         | 10       | 9            | 8          |
| sw_ctrl_per_dpl l | Reserved | isoscan_per  | ret_per  | reset_per  | iso_per  | pgoodin_per  | ponin_per  |
| R-0h              | R-0h     | R-0h         | R-0h     | R-0h       | R-0h     | R-1h         | R-1h       |
| 7                 | 6        | 5            | 4        | 3          | 2        | 1            | 0          |
| Reserved          | Reserved | Reserved     | Reserved | Reserved   | Reserved | Reserved     | Reserved   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 9-85. dpll\_pwr\_sw\_ctrl Register Field Descriptions

|   Bit | Field            | Type   | Reset   | Description                                                                                                                                                                                                                |
|-------|------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    31 | sw_ctrl_ddr_pll  | R/W    | 0h      | Enable software control over DDR DPLL RET, RESET, ISO, PGOODIN, PONIN for power savings. 0: PRCM controls the DPLL reset, RET = 0, ISO = 0, PGOODIN = 1, PONIN = 1. 1: Controlled by corresponding bits in this register.  |
|    30 | Reserved         | R      | 0h      |                                                                                                                                                                                                                            |
|    29 | isoscan_ddr      | R/W    | 0h      | Drives ISOSCAN of DDR PLL.                                                                                                                                                                                                 |
|    28 | ret_ddr          | R/W    | 0h      | Drives RET signal of DDR PLL.                                                                                                                                                                                              |
|    27 | reset_ddr        | R/W    | 0h      | Drives RESET of DDR DPLL.                                                                                                                                                                                                  |
|    26 | iso_ddr          | R/W    | 0h      | Drives ISO of DDR DPLL.                                                                                                                                                                                                    |
|    25 | pgoodin_ddr      | R/W    | 1h      | Drives PGOODIN of DDR DPLL.                                                                                                                                                                                                |
|    24 | ponin_ddr        | R/W    | 1h      | Drives PONIN of DDR DPLL.                                                                                                                                                                                                  |
|    23 | sw_ctrl_disp_pll | R/W    | 0h      | Enable software control over DISP DPLL RET, RESET, ISO, PGOODIN, PONIN for power savings. 0: PRCM controls the DPLL reset, RET = 0, ISO = 0, PGOODIN = 1, PONIN = 1. 1: Controlled by corresponding bits in this register. |
|    22 | Reserved         | R      | 0h      |                                                                                                                                                                                                                            |
|    21 | isoscan_disp     | R/W    | 0h      | Drives ISOSCAN of DISP PLL.                                                                                                                                                                                                |
|    20 | ret_disp         | R/W    | 0h      | Drives RET of DISP DPLL.                                                                                                                                                                                                   |

<!-- image -->

<!-- image -->

## Table 9-85. dpll\_pwr\_sw\_ctrl Register Field Descriptions (continued)

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                               |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 19    | reset_disp       | R/W    | 0h      | Drives RESET of DISP DPLL.                                                                                                                                                                                                |
| 18    | iso_disp         | R/W    | 0h      | Drives ISO of DISP DPLL.                                                                                                                                                                                                  |
| 17    | pgoodin_disp     | R/W    | 1h      | Drives PGOODIN of DISP DPLL.                                                                                                                                                                                              |
| 16    | ponin_disp       | R/W    | 1h      | Drives PONIN of DISP DPLL.                                                                                                                                                                                                |
| 15    | sw_ctrl_per_dpll | R/W    | 0h      | Enable software control over PER DPLL RET, RESET, ISO, PGOODIN, PONIN for power savings. 0: PRCM controls the DPLL reset, RET = 0, ISO = 0, PGOODIN = 1, PONIN = 1. 1: Controlled by corresponding bits in this register. |
| 14    | Reserved         | R      | 0h      |                                                                                                                                                                                                                           |
| 13    | isoscan_per      | R/W    | 0h      | Drives ISOSCAN of PER PLL.                                                                                                                                                                                                |
| 12    | ret_per          | R/W    | 0h      | Drives RET of PER DPLL.                                                                                                                                                                                                   |
| 11    | reset_per        | R/W    | 0h      | Drives RESET signal of PER DPLL.                                                                                                                                                                                          |
| 10    | iso_per          | R/W    | 0h      | Drives ISO signal of PER DPLL.                                                                                                                                                                                            |
| 9     | pgoodin_per      | R/W    | 1h      | Drives PGOODIN signal of PER DPLL.                                                                                                                                                                                        |
| 8     | ponin_per        | R/W    | 1h      | Drives PONIN signal of PER DPLL.                                                                                                                                                                                          |
| 7-0   | Reserved         | R      | 0h      |                                                                                                                                                                                                                           |

## 9.3.1.76 ddr\_cke\_ctrl Register (offset = 131Ch) [reset = 0h]

ddr\_cke\_ctrl is shown in Figure 9-77 and described in Table 9-86.

| Figure 9-77. ddr_cke_ctrl Register   | Figure 9-77. ddr_cke_ctrl Register   | Figure 9-77. ddr_cke_ctrl Register   | Figure 9-77. ddr_cke_ctrl Register   | Figure 9-77. ddr_cke_ctrl Register   | Figure 9-77. ddr_cke_ctrl Register   | Figure 9-77. ddr_cke_ctrl Register   | Figure 9-77. ddr_cke_ctrl Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | ddr_cke_ctrl                         |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R/W-0h                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-86. ddr\_cke\_ctrl Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|--------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved     | R      | 0h      |                                                                                                                                                                                                                          |
| 0     | ddr_cke_ctrl | R/W    | 0h      | CKE from EMIF/DDRPHY is ANDed with this bit. 0: CKE to memories gated off to zero. External DRAM memories will not able to register DDR commands from device 1: Normal operation. CKE is now controlled by EMIF/DDR PHY. |

<!-- image -->

<!-- image -->

## 9.3.1.77 sma2 Register (offset = 1320h) [reset = 0h]

sma2 is shown in Figure 9-78 and described in Table 9-87.

| Figure 9-78. sma2 Register   | Figure 9-78. sma2 Register   | Figure 9-78. sma2 Register   | Figure 9-78. sma2 Register   | Figure 9-78. sma2 Register   | Figure 9-78. sma2 Register   | Figure 9-78. sma2 Register   | Figure 9-78. sma2 Register   |
|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|------------------------------|
| 31                           | 30                           | 29                           | 28                           | 27                           | 26                           | 25                           | 24                           |
| Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     |
| R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         |
| 23                           | 22                           | 21                           | 20                           | 19                           | 18                           | 17                           | 16                           |
| Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     |
| R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         |
| 15                           | 14                           | 13                           | 12                           | 11                           | 10                           | 9                            | 8                            |
| Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     |
| R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         | R-0h                         |
| 7                            | 6                            | 5                            | 4                            | 3                            | 2                            | 1                            | 0                            |
| Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     | Reserved                     | vsldo_core_aut o_ramp_en     | rmii2_crs_dv_m ode_sel       |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-87. sma2 Register Field Descriptions

| Bit   | Field                   | Type   | Reset   | Description                                                                                           |
|-------|-------------------------|--------|---------|-------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved                | R      | 0h      |                                                                                                       |
| 1     | vsldo_core_auto_ramp_en | R/W    | 0h      | 0: PRCM controls VSLDO. 1: Allows hardware to bring VSLDO out of retention on wakeup from deep-sleep. |
| 0     | rmii2_crs_dv_mode_sel   | R/W    | 0h      | 0: Select MMC2_DAT7 on GPMC_A9 pin in MODE3. 1: Select RMII2_CRS_DV on GPMC_A9 pin in MODE3.          |

R/W0h

R/W-0h

## 9.3.1.78 m3\_txev\_eoi Register (offset = 1324h) [reset = 0h]

m3\_txev\_eoi is shown in Figure 9-79 and described in Table 9-88.

| Figure 9-79. m3_txev_eoi Register   | Figure 9-79. m3_txev_eoi Register   | Figure 9-79. m3_txev_eoi Register   | Figure 9-79. m3_txev_eoi Register   | Figure 9-79. m3_txev_eoi Register   | Figure 9-79. m3_txev_eoi Register   | Figure 9-79. m3_txev_eoi Register   | Figure 9-79. m3_txev_eoi Register   |
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
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | m3_txev_eoi                         |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-88. m3\_txev\_eoi Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 0     | m3_txev_eoi | R/W    | 0h      | TXEV (Event) from M3 processor is a pulse signal connected as intertupt to MPU IRQ(78) Since MPU expects level signals. The TXEV pulse from M3 is converted to a level in glue logic. The logic works as follows: -On a 0-1 transition on TXEV, the IRQ[78] is set. -For clearing the interrupt, S/W must do the following: S/W must clear the IRQ[78] by writing a 1 to M3_TXEV_EOI bit in this registe This bit is sticky and for re-arming the IRQ[78], S/W must write a 0 to this field in the ISR |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 9.3.1.79 ipc\_msg\_reg0 Register (offset = 1328h) [reset = 0h]

ipc\_msg\_reg0 is shown in Figure 9-80 and described in Table 9-89. This register is typically used for messaging between Cortex A8 and CortexM3 (WKUP).

See the section "Functional Sequencing for Power Management with Cortex M3" for specific information on how the IPC\_MSG\_REG registers are used to communicate with the Cortex-M3 firmware.

## Figure 9-80. ipc\_msg\_reg0 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

ipc\_msg\_reg0

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-89. ipc\_msg\_reg0 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                        |
|-------|--------------|--------|---------|------------------------------------|
| 31-0  | ipc_msg_reg0 | R/W    | 0h      | Inter Processor Messaging Register |

## 9.3.1.80 ipc\_msg\_reg1 Register (offset = 132Ch) [reset = 0h]

ipc\_msg\_reg1 is shown in Figure 9-81 and described in Table 9-90. This register is typically used for messaging between Cortex A8 and CortexM3 (WKUP).

See the section "Functional Sequencing for Power Management with Cortex M3" for specific information on how the IPC\_MSG\_REG registers are used to communicate with the Cortex-M3 firmware.

## Figure 9-81. ipc\_msg\_reg1 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

ipc\_msg\_reg1

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-90. ipc\_msg\_reg1 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                        |
|-------|--------------|--------|---------|------------------------------------|
| 31-0  | ipc_msg_reg1 | R/W    | 0h      | Inter Processor Messaging Register |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.81 ipc\_msg\_reg2 Register (offset = 1330h) [reset = 0h]

ipc\_msg\_reg2 is shown in Figure 9-82 and described in Table 9-91. This register is typically used for messaging between Cortex A8 and CortexM3 (WKUP).

See the section "Functional Sequencing for Power Management with Cortex M3" for specific information on how the IPC\_MSG\_REG registers are used to communicate with the Cortex-M3 firmware.

## Figure 9-82. ipc\_msg\_reg2 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

ipc\_msg\_reg2

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-91. ipc\_msg\_reg2 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                        |
|-------|--------------|--------|---------|------------------------------------|
| 31-0  | ipc_msg_reg2 | R/W    | 0h      | Inter Processor Messaging Register |

## 9.3.1.82 ipc\_msg\_reg3 Register (offset = 1334h) [reset = 0h]

ipc\_msg\_reg3 is shown in Figure 9-83 and described in Table 9-92. This register is typically used for messaging between Cortex A8 and CortexM3 (WKUP).

See the section "Functional Sequencing for Power Management with Cortex M3" for specific information on how the IPC\_MSG\_REG registers are used to communicate with the Cortex-M3 firmware.

## Figure 9-83. ipc\_msg\_reg3 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

ipc\_msg\_reg3

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-92. ipc\_msg\_reg3 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                        |
|-------|--------------|--------|---------|------------------------------------|
| 31-0  | ipc_msg_reg3 | R/W    | 0h      | Inter Processor Messaging Register |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.83 ipc\_msg\_reg4 Register (offset = 1338h) [reset = 0h]

ipc\_msg\_reg4 is shown in Figure 9-84 and described in Table 9-93. This register is typically used for messaging between Cortex A8 and CortexM3 (WKUP).

See the section "Functional Sequencing for Power Management with Cortex M3" for specific information on how the IPC\_MSG\_REG registers are used to communicate with the Cortex-M3 firmware.

## Figure 9-84. ipc\_msg\_reg4 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

ipc\_msg\_reg4

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-93. ipc\_msg\_reg4 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                        |
|-------|--------------|--------|---------|------------------------------------|
| 31-0  | ipc_msg_reg4 | R/W    | 0h      | Inter Processor Messaging Register |

## 9.3.1.84 ipc\_msg\_reg5 Register (offset = 133Ch) [reset = 0h]

ipc\_msg\_reg5 is shown in Figure 9-85 and described in Table 9-94. This register is typically used for messaging between Cortex A8 and CortexM3 (WKUP).

See the section "Functional Sequencing for Power Management with Cortex M3" for specific information on how the IPC\_MSG\_REG registers are used to communicate with the Cortex-M3 firmware.

## Figure 9-85. ipc\_msg\_reg5 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

ipc\_msg\_reg5

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-94. ipc\_msg\_reg5 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                        |
|-------|--------------|--------|---------|------------------------------------|
| 31-0  | ipc_msg_reg5 | R/W    | 0h      | Inter Processor Messaging Register |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.85 ipc\_msg\_reg6 Register (offset = 1340h) [reset = 0h]

ipc\_msg\_reg6 is shown in Figure 9-86 and described in Table 9-95. This register is typically used for messaging between Cortex A8 and CortexM3 (WKUP).

See the section "Functional Sequencing for Power Management with Cortex M3" for specific information on how the IPC\_MSG\_REG registers are used to communicate with the Cortex-M3 firmware.

## Figure 9-86. ipc\_msg\_reg6 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

ipc\_msg\_reg6

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-95. ipc\_msg\_reg6 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                        |
|-------|--------------|--------|---------|------------------------------------|
| 31-0  | ipc_msg_reg6 | R/W    | 0h      | Inter Processor Messaging Register |

## 9.3.1.86 ipc\_msg\_reg7 Register (offset = 1344h) [reset = 0h]

ipc\_msg\_reg7 is shown in Figure 9-87 and described in Table 9-96. This register is typically used for messaging between Cortex A8 and CortexM3 (WKUP).

See the section "Functional Sequencing for Power Management with Cortex M3" for specific information on how the IPC\_MSG\_REG registers are used to communicate with the Cortex-M3 firmware.

## Figure 9-87. ipc\_msg\_reg7 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

ipc\_msg\_reg7

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-96. ipc\_msg\_reg7 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                        |
|-------|--------------|--------|---------|------------------------------------|
| 31-0  | ipc_msg_reg7 | R/W    | 0h      | Inter Processor Messaging Register |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.87 ddr\_cmd0\_ioctrl Register (offset = 1404h) [reset = 0h]

ddr\_cmd0\_ioctrl is shown in Figure 9-88 and described in Table 9-97.

| Figure 9-88. ddr_cmd0_ioctrl Register   | Figure 9-88. ddr_cmd0_ioctrl Register   | Figure 9-88. ddr_cmd0_ioctrl Register   | Figure 9-88. ddr_cmd0_ioctrl Register   | Figure 9-88. ddr_cmd0_ioctrl Register   | Figure 9-88. ddr_cmd0_ioctrl Register   | Figure 9-88. ddr_cmd0_ioctrl Register   | Figure 9-88. ddr_cmd0_ioctrl Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| io_config_gp_wd1                        | io_config_gp_wd1                        | io_config_gp_wd1                        | io_config_gp_wd1                        | io_config_gp_wd1                        | io_config_gp_wd1                        | io_config_gp_wd1                        | io_config_gp_wd1                        |
| R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| io_config_gp_wd1 io_config_gp_wd0       | io_config_gp_wd1 io_config_gp_wd0       | io_config_gp_wd1 io_config_gp_wd0       | io_config_gp_wd1 io_config_gp_wd0       | io_config_gp_wd1 io_config_gp_wd0       | io_config_gp_wd1 io_config_gp_wd0       | io_config_gp_wd1 io_config_gp_wd0       | io_config_gp_wd1 io_config_gp_wd0       |
| R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R/W-0h R/W-0h                           | R/W-0h R/W-0h                           |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| io_config_gp_wd0                        | io_config_gp_wd0                        | io_config_gp_wd0                        | io_config_gp_wd0                        | io_config_gp_wd0                        | io_config_gp_wd0                        | io_config_sr_clk                        | io_config_sr_clk                        |
| R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| io_config_i_clk                         | io_config_i_clk                         | io_config_i_clk                         | io_config_sr                            | io_config_sr                            | io_config_sr                            | io_config_i                             | io_config_i                             |
| R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  | R/W-0h                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 9-97. ddr\_cmd0\_ioctrl Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | io_config_gp_wd1 | R/W    | 0h      | There are 2 bits per IO: io_config_gp_wd1 and io_config_gp_wd0. For example: macro pin 0: WD1 is bit 21, WD0 is bit 10 macro pin 1: WD1 is bit 22, WD0 is bit 11 ... macro pin 10: WD1 is bit 31, WD0 is bit 20 See the DDR PHY to IO Pin Mapping table in the Control Module Functional Description section for a mapping of macro bits to I/Os. WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled                                                 |
| 20-10 | io_config_gp_wd0 | R/W    | 0h      | 11: Weak keeper enabled There are 2 bits per IO: io_config_gp_wd1 and io_config_gp_wd0. For example: macro pin 0: WD1 is bit 21, WD0 is bit 10 macro pin 1: WD1 is bit 22, WD0 is bit 11 ... macro pin 10: WD1 is bit 31, WD0 is bit 20 See the DDR PHY to IO Pin Mapping table in the Control Module Functional Description section for a mapping of macro bits to I/Os. WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled 11: Weak keeper enabled |
| 9-8   | io_config_sr_clk | R/W    | 0h      | 2 bit to program clock IO Pads (DDR_CK/DDR_CKN) output slew rate. These connect as SR1, SR0 to the corresponding DDR IO buffer. See the DDR Slew Rate Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                        |
| 7-5   | io_config_i_clk  | R/W    | 0h      | 3-bit configuration input to program clock IO pads (DDR_CK/DDR_CKN) output impedance. These connect as I2, I1, I0 to the corresponding DDR IO buffer. See the DDR Impedance Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                  |

<!-- image -->

## Table 9-97. ddr\_cmd0\_ioctrl Register Field Descriptions (continued)

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                          |
|-------|--------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 4-3   | io_config_sr | R/W    | 0h      | 2 bit to program addr/cmd IO Pads output slew rate. These connect as SR1, SR0 to the corresponding DDR IO buffer. See the DDR Slew Rate Control Settings table in the Control Module Functional Description section for a definition of these bits.                  |
| 2-0   | io_config_i  | R/W    | 0h      | 3-bit configuration input to program addr/cmd IO output impedance. These connect as I2, I1, I0 to the corresponding DDR IO buffer. See the DDR Impedance Control Settings table in the Control Module Functional Description section for a definition of these bits. |

<!-- image -->

www.ti.com

## 9.3.1.88 ddr\_cmd1\_ioctrl Register (offset = 1408h) [reset = 0h]

ddr\_cmd1\_ioctrl is shown in Figure 9-89 and described in Table 9-98.

| Figure 9-89. ddr_cmd1_ioctrl Register   | Figure 9-89. ddr_cmd1_ioctrl Register   | Figure 9-89. ddr_cmd1_ioctrl Register   | Figure 9-89. ddr_cmd1_ioctrl Register   | Figure 9-89. ddr_cmd1_ioctrl Register   | Figure 9-89. ddr_cmd1_ioctrl Register   | Figure 9-89. ddr_cmd1_ioctrl Register   | Figure 9-89. ddr_cmd1_ioctrl Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 30                                      | 29                                      | 28                                      | 31 27                                   | 26                                      | 25                                      | 24                                      | io_config_gp_wd1                        |
| 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      |
| 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      |
| 20                                      | 19 io_config_gp_wd0 R/W-0h 10           | 18                                      | 23 17 R/W-0h 15                         | 16                                      | io_config_gp_wd1                        | 14                                      | 13                                      |
| 12                                      | 12                                      | 12                                      | 11                                      | 11                                      | 11                                      | 11                                      | 11                                      |
| 9                                       | 8 R/W-0h                                | io_config_gp_wd0 io_config_sr_clk       | 7                                       | 6                                       | 5                                       | 4                                       | R/W-0h 3                                |
| 1 io_config_sr                          | 2 0 io_config_i                         | R/W-0h R/W-0h                           | io_config_i_clk R/W-0h                  |                                         |                                         |                                         |                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-98. ddr\_cmd1\_ioctrl Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | io_config_gp_wd1 | R/W    | 0h      | There are 2 bits per IO: io_config_gp_wd1 and io_config_gp_wd0. For example: macro pin 0: WD1 is bit 21, WD0 is bit 10 macro pin 1: WD1 is bit 22, WD0 is bit 11 ... macro pin 10: WD1 is bit 31, WD0 is bit 20 See the DDR PHY to IO Pin Mapping table in the Control Module Functional Description section for a mapping of macro bits to I/Os. WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled                                                 |
| 20-10 | io_config_gp_wd0 | R/W    | 0h      | 11: Weak keeper enabled There are 2 bits per IO: io_config_gp_wd1 and io_config_gp_wd0. For example: macro pin 0: WD1 is bit 21, WD0 is bit 10 macro pin 1: WD1 is bit 22, WD0 is bit 11 ... macro pin 10: WD1 is bit 31, WD0 is bit 20 See the DDR PHY to IO Pin Mapping table in the Control Module Functional Description section for a mapping of macro bits to I/Os. WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled 11: Weak keeper enabled |
| 9-8   | io_config_sr_clk | R/W    | 0h      | Only ddr_cmd0_ioctrl[9:8] are used to control io_config_sr_clk.                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 7-5   | io_config_i_clk  | R/W    | 0h      | Only ddr_cmd0_ioctrl[7:5] are used to control io_config_i_clk.                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 4-3   | io_config_sr     | R/W    | 0h      | 2 bit to program addr/cmd IO Pads output slew rate. These connect as SR1, SR0 to the corresponding DDR IO buffer. See the DDR Slew Rate Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                                      |
| 2-0   | io_config_i      | R/W    | 0h      | 3-bit configuration input to program addr/cmd IO output impedance. These connect as I2, I1, I0 to the corresponding DDR IO buffer. See the DDR Impedance Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                     |

## 9.3.1.89 ddr\_cmd2\_ioctrl Register (offset = 140Ch) [reset = 0h]

ddr\_cmd2\_ioctrl is shown in Figure 9-90 and described in Table 9-99.

| Figure 9-90. ddr_cmd2_ioctrl Register   | Figure 9-90. ddr_cmd2_ioctrl Register   | Figure 9-90. ddr_cmd2_ioctrl Register   | Figure 9-90. ddr_cmd2_ioctrl Register   | Figure 9-90. ddr_cmd2_ioctrl Register   | Figure 9-90. ddr_cmd2_ioctrl Register   | Figure 9-90. ddr_cmd2_ioctrl Register   | Figure 9-90. ddr_cmd2_ioctrl Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 30                                      | 29                                      | 28                                      | 31 27                                   | 26                                      | 25                                      | 24                                      | io_config_gp_wd1                        |
| 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      |
| 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      |
| 20                                      | 19 io_config_gp_wd0 R/W-0h 10           | 18                                      | 23 17 R/W-0h 15                         | 16                                      | io_config_gp_wd1                        | 14                                      | 13                                      |
| 12                                      | 12                                      | 12                                      | 11                                      | 11                                      | 11                                      | 11                                      | 11                                      |
| 9                                       | 8 R/W-0h                                | io_config_gp_wd0 io_config_sr_clk       | 7                                       | 6                                       | 5                                       | 4                                       | R/W-0h 3                                |
| 1 io_config_sr                          | 2 0 io_config_i                         | R/W-0h R/W-0h                           | io_config_i_clk R/W-0h                  |                                         |                                         |                                         |                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 9-99. ddr\_cmd2\_ioctrl Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | io_config_gp_wd1 | R/W    | 0h      | There are 2 bits per IO: io_config_gp_wd1 and io_config_gp_wd0. For example: macro pin 0: WD1 is bit 21, WD0 is bit 10 macro pin 1: WD1 is bit 22, WD0 is bit 11 ... macro pin 10: WD1 is bit 31, WD0 is bit 20 See the DDR PHY to IO Pin Mapping table in the Control Module Functional Description section for a mapping of macro bits to I/Os. WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled                                                 |
| 20-10 | io_config_gp_wd0 | R/W    | 0h      | 11: Weak keeper enabled There are 2 bits per IO: io_config_gp_wd1 and io_config_gp_wd0. For example: macro pin 0: WD1 is bit 21, WD0 is bit 10 macro pin 1: WD1 is bit 22, WD0 is bit 11 ... macro pin 10: WD1 is bit 31, WD0 is bit 20 See the DDR PHY to IO Pin Mapping table in the Control Module Functional Description section for a mapping of macro bits to I/Os. WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled 11: Weak keeper enabled |
| 9-8   | io_config_sr_clk | R/W    | 0h      | Only ddr_cmd0_ioctrl[9:8] are used to control io_config_sr_clk.                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 7-5   | io_config_i_clk  | R/W    | 0h      | Only ddr_cmd0_ioctrl[7:5] are used to control io_config_i_clk.                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 4-3   | io_config_sr     | R/W    | 0h      | 2 bit to program addr/cmd IO Pads output slew rate. These connect as SR1, SR0 to the corresponding DDR IO buffer. See the DDR Slew Rate Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                                      |
| 2-0   | io_config_i      | R/W    | 0h      | 3-bit configuration input to program addr/cmd IO output impedance. These connect as I2, I1, I0 to the corresponding DDR IO buffer. See the DDR Impedance Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                     |

<!-- image -->

<!-- image -->

www.ti.com

## 9.3.1.90 ddr\_data0\_ioctrl Register (offset = 1440h) [reset = 0h]

ddr\_data0\_ioctrl is shown in Figure 9-91 and described in Table 9-100.

## Figure 9-91. ddr\_data0\_ioctrl Register

| 31               | 30               | 29                 | 28                | 27                 | 26                | 25               | 24               |
|------------------|------------------|--------------------|-------------------|--------------------|-------------------|------------------|------------------|
| Reserved         | Reserved         | io_config_wd1_ dqs | io_config_wd1_ dm | io_config_wd1_dq   | io_config_wd1_dq  | io_config_wd1_dq | io_config_wd1_dq |
| R-0h             | R-0h             | R/W-0h             | R/W-0h            | R/W-0h             | R/W-0h            | R/W-0h           | R/W-0h           |
| 23               | 22               | 21                 | 20                | 19                 | 18                | 17               | 16               |
| io_config_wd1_dq | io_config_wd1_dq | io_config_wd1_dq   |                   | io_config_wd0_ dqs | io_config_wd0_ dm | io_config_wd0_dq | io_config_wd0_dq |
| R/W-0h           | R/W-0h           | R/W-0h             |                   | R/W-0h             | R/W-0h            | R/W-0h           | R/W-0h           |
| 15               | 14               | 13                 | 12                | 11                 | 10                | 9                | 8                |
| io_config_wd0_dq | io_config_wd0_dq | io_config_wd0_dq   | io_config_wd0_dq  |                    |                   | io_config_sr_clk | io_config_sr_clk |
| R/W-0h           | R/W-0h           | R/W-0h             | R/W-0h            | R/W-0h             | R/W-0h            | R/W-0h           | R/W-0h           |
| 7                | 6                | 5                  | 4                 | 3                  | 2                 | 1                | 0                |
| io_config_i_clk  | io_config_i_clk  | io_config_i_clk    | io_config_sr      | io_config_sr       | io_config_i       | io_config_i      | io_config_i      |
| R/W-0h           | R/W-0h           | R/W-0h             | R/W-0h            | R/W-0h             | R/W-0h            | R/W-0h           | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 9-100. ddr\_data0\_ioctrl Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|-------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | Reserved          | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 29    | io_config_wd1_dqs | R/W    | 0h      | Input that selects pullup or pulldown for DDR_DQS0 and DDR_DQSn0. Used with io_config_wd0_dqs to define pullup/pulldown according to the following: WD1: WD0 00b: Pullup/Pulldown disabled for both DDR_DQS0 and DDR_DQSn0 01b: Enable weak pullup for DDR_DQS0 and weak pulldown for DDR_DQSn0 10b: Enable weak pulldown for DDR_DQS0 and weak pullup for DDR_DQSn0 11b: Weak keeper enabled for both DDR_DQS0 and DDR_DQSn0                                                                                |
| 28    | io_config_wd1_dm  | R/W    | 0h      | Input that selects pullup or pulldown for DM. Used with io_config_wd0_dm to define pullup/pulldown according to the following: WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled 11: Weak keeper enabled                                                                                                                                                                                                                                                                |
| 27-20 | io_config_wd1_dq  | R/W    | 0h      | Input that selects pullup or pulldown for DQ. There are 2 bits per IO: io_config_wd1_dq and io_config_wd0_dq. For example: macro pin 0: WD1 is bit 20 WD0 is bit 10 macro pin 1: WD1 is bit 21, WD0 is bit 11 ... macro pin 7: WD1 is bit 27, WD0 is bit 17 See the DDR PHY to IO Pin Mapping table in the Control Module Functional Description section for a mapping of macro bits to I/Os. WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled 11: Weak keeper enabled |

<!-- image -->

## Table 9-100. ddr\_data0\_ioctrl Register Field Descriptions (continued)

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 19    | io_config_wd0_dqs | R/W    | 0h      | Input that selects pullup or pulldown for DDR_DQS0 and DDR_DQSn0. Used with io_config_wd1_dqs to define pullup/pulldown according to the following: WD1:WD0 00b: Pullup/Pulldown disabled for both DDR_DQS0 and DDR_DQSn0 01b: Enable weak pullup for DDR_DQS0 and weak pulldown for DDR_DQSn0 10b: Enable weak pulldown for DDR_DQS0 and weak pullup for DDR_DQSn0 11b: Weak keeper enabled for both DDR_DQS0 and DDR_DQSn0                                                                                  |
| 18    | io_config_wd0_dm  | R/W    | 0h      | Input that selects pullup or pulldown for DM. Used with io_config_wd1_dm to define pullup/pulldown according to the following: WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled 11: Weak keeper enabled                                                                                                                                                                                                                                                                 |
| 17-10 | io_config_wd0_dq  | R/W    | 0h      | Input that selects pullup or pulldown for DQ. There are 2 bits per IO: io_config_wd1_dq and io_config_wd0_dq. For example: macro pin 0: WD1 is bit 20, WD0 is bit 10 macro pin 1: WD1 is bit 21, WD0 is bit 11 ... macro pin 7: WD1 is bit 27, WD0 is bit 17 See the DDR PHY to IO Pin Mapping table in the Control Module Functional Description section for a mapping of macro bits to I/Os. WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled 11: Weak keeper enabled |
| 9-8   | io_config_sr_clk  | R/W    | 0h      | 2 bit to program clock IO Pads (DDR_DQS/DDR_DQSn) output slew rate. These connect as SR1, SR0 of the corresponding IO buffer. See the DDR Slew Rate Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                                               |
| 7-5   | io_config_i_clk   | R/W    | 0h      | 3-bit configuration input to program clock IO pads (DDR_DQS/DDR_DQSn) output impedance. These connect as I2, I1, I0 of the corresponding buffer. See the DDR Impedance Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                            |
| 4-3   | io_config_sr      | R/W    | 0h      | 2 bit to program data IO Pads output slew rate. These connect as SR1, SR0 of the corresponding IO buffer. See the DDR Slew Rate Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                                                                   |
| 2-0   | io_config_i       | R/W    | 0h      | 3-bit configuration input to program data IO output impedance. These connect as I2, I1, I0 of the corresponding IO buffer. See the DDR Impedance Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                                                  |

<!-- image -->

www.ti.com

## 9.3.1.91 ddr\_data1\_ioctrl Register (offset = 1444h) [reset = 0h]

ddr\_data1\_ioctrl is shown in Figure 9-92 and described in Table 9-101.

## Figure 9-92. ddr\_data1\_ioctrl Register

| 31              | 30               | 29                 | 28                | 27                 | 26                | 25               | 24               |
|-----------------|------------------|--------------------|-------------------|--------------------|-------------------|------------------|------------------|
| Reserved        | Reserved         | io_config_wd1_ dqs | io_config_wd1_ dm | io_config_wd1_dq   | io_config_wd1_dq  | io_config_wd1_dq | io_config_wd1_dq |
| R-0h            | R-0h             | R/W-0h             | R/W-0h            | R/W-0h             | R/W-0h            | R/W-0h           | R/W-0h           |
| 23              | 22               | 21                 | 20                | 19                 | 18                | 17               | 16               |
|                 | io_config_wd1_dq | io_config_wd1_dq   |                   | io_config_wd0_ dqs | io_config_wd0_ dm | io_config_wd0_dq | io_config_wd0_dq |
|                 | R/W-0h           | R/W-0h             |                   | R/W-0h             | R/W-0h            | R/W-0h           | R/W-0h           |
| 15              | 14               | 13                 | 12                | 11                 | 10                | 9                | 8                |
|                 |                  | io_config_wd0_dq   |                   |                    |                   | io_config_sr_clk | io_config_sr_clk |
|                 | R/W-0h           | R/W-0h             | R/W-0h            |                    |                   | R/W-0h           | R/W-0h           |
| 7               | 6                | 5                  | 4                 | 3                  | 2                 | 1                | 0                |
| io_config_i_clk | io_config_i_clk  | io_config_i_clk    | io_config_sr      | io_config_sr       | io_config_i       | io_config_i      | io_config_i      |
| R/W-0h          | R/W-0h           | R/W-0h             | R/W-0h            | R/W-0h             | R/W-0h            | R/W-0h           | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 9-101. ddr\_data1\_ioctrl Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | Reserved          | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 29    | io_config_wd1_dqs | R/W    | 0h      | Input that selects pullup or pulldown for DDR_DQS1 and DDR_DQSn1. Used with io_config_wd0_dqs to define pullup/pulldown according to the following: WD1:WD0 00b: Pullup/Pulldown disabled for both DDR_DQS1 and DDR_DQSn1 01b: Enable weak pullup for DDR_DQS1 and weak pulldown for DDR_DQSn1 10b: Enable weak pulldown for DDR_DQS1 and weak pullup for DDR_DQSn1 11b: Weak keeper enabled for both DDR_DQS1 and DDR_DQSn1                                                                                  |
| 28    | io_config_wd1_dm  | R/W    | 0h      | Input that selects pullup or pulldown for DM. Used with io_config_wd0_dm to define pullup/pulldown according to the following: WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled 11: Weak keeper enabled                                                                                                                                                                                                                                                                 |
| 27-20 | io_config_wd1_dq  | R/W    | 0h      | Input that selects pullup or pulldown for DQ. There are 2 bits per IO: io_config_wd1_dq and io_config_wd0_dq. For example: macro pin 0: WD1 is bit 20, WD0 is bit 10 macro pin 1: WD1 is bit 21, WD0 is bit 11 ... macro pin 7: WD1 is bit 27, WD0 is bit 17 See the DDR PHY to IO Pin Mapping table in the Control Module Functional Description section for a mapping of macro bits to I/Os. WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled 11: Weak keeper enabled |

<!-- image -->

Table 9-101. ddr\_data1\_ioctrl Register Field Descriptions (continued)

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 19    | io_config_wd0_dqs | R/W    | 0h      | Input that selects pullup or pulldown for DDR_DQS1 and DDR_DQSn1. Used with io_config_wd1_dqs to define pullup/pulldown according to the following: WD1:WD0 00b: Pullup/Pulldown disabled for both DDR_DQS1 and DDR_DQSn1 01b: Enable weak pullup for DDR_DQS1 and weak pulldown for DDR_DQSn1 10b: Enable weak pulldown for DDR_DQS1 and weak pullup for DDR_DQSn1 11b: Weak keeper enabled for both DDR_DQS1 and DDR_DQSn1                                                                                  |
| 18    | io_config_wd0_dm  | R/W    | 0h      | Input that selects pullup or pulldown for DM. Used with io_config_wd1_dm to define pullup/pulldown according to the following: WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled 11: Weak keeper enabled                                                                                                                                                                                                                                                                 |
| 17-10 | io_config_wd0_dq  | R/W    | 0h      | Input that selects pullup or pulldown for DQ. There are 2 bits per IO: io_config_wd1_dq and io_config_wd0_dq. For example: macro pin 0: WD1 is bit 20, WD0 is bit 10 macro pin 1: WD1 is bit 21, WD0 is bit 11 ... macro pin 7: WD1 is bit 27, WD0 is bit 17 See the DDR PHY to IO Pin Mapping table in the Control Module Functional Description section for a mapping of macro bits to I/Os. WD1:WD0 00: Pullup/Pulldown disabled 01: Weak pullup enabled 10: Weak pulldown enabled 11: Weak keeper enabled |
| 9-8   | io_config_sr_clk  | R/W    | 0h      | 2 bit to program clock IO Pads (DDR_DQS/DDR_DQSn) output slew rate. These connect as SR1, SR0 of the corresponding IO buffer. See the DDR Slew Rate Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                                               |
| 7-5   | io_config_i_clk   | R/W    | 0h      | 3-bit configuration input to program clock IO pads (DDR_DQS/DDR_DQSn) output impedance. These connect as I2, I1, I0 of the corresponding buffer. See the DDR Impedance Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                            |
| 4-3   | io_config_sr      | R/W    | 0h      | 2 bit to program data IO Pads output slew rate. These connect as SR1, SR0 of the corresponding IO buffer. See the DDR Slew Rate Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                                                                   |
| 2-0   | io_config_i       | R/W    | 0h      | 3-bit configuration input to program data IO output impedance. These connect as I2, I1, I0 of the corresponding IO buffer. See the DDR Impedance Control Settings table in the Control Module Functional Description section for a definition of these bits.                                                                                                                                                                                                                                                  |