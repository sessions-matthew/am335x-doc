12. Power Management Control Shadow register (PMCSR)
13. Interface Configuration register (OCP\_CONFIG)
14. System OCP Interrupt Enable Set Register (SOIESR)
15. DDR PHY Control 1 register (DDRPHYCR)
16. DDR PHY Control 1 Shadow register (DDRPHYCSR)
- Memory controller completes all pending transactions and drains all its FIFOs.
- Memory controller puts the SDRAM in Self Refresh.
- Memory controller copies all shadow memory mapped registers to its main registers. It is assumed that the shadow register always has the same value as its corresponding main register.
- Memory controller waits for all interrupts to be serviced.
- Memory controller acknowledges assertion of internal power down request.
- The internal module reset signal is asserted.
- The clocks and power to the memory controller can now be switched off.

To restore power to the memory controller, the following sequence of operations is followed:

- The power and clocks to the Memory controller are switched on.
- The internal module reset signal is deasserted, indicating to the Memory controller that it is waking up from off mode.
- The memory controller does not perform SDRAM initialization and forces its state machine to be in self-refresh.
- The external master restores all of the above memory mapped registers.
- The external master restores all of the above memory mapped registers.
- The system can now perform access to the external memory.

## 7.3.3.12.6 EMIF PHY Clock Gating

The clock to the DDR2/3/mDDR PHY can be gated off to achieve power saving. For more information, see the EMIF0/1 Clock Gate Control register (EMIF\_CLK\_GATE).

## 7.3.4 Use Cases

For details on connecting this device to mDDR/DDR2/DDR3 devices, see the device-specific data sheet, which will include specific instructions and routing guidelines for interfacing to mDDR (LPDDR), DDR2, and DDR3 devices.

## 7.3.5 EMIF4D Registers

Table 7-221 lists the memory-mapped registers for the EMIF4D. All register offset addresses not listed in Table 7-221 should be considered as reserved locations and the register contents should not be modified.

## Table 7-221. EMIF4D Registers

| Offset   | Acronym             | Register Name Section   |
|----------|---------------------|-------------------------|
| 0h       | EMIF_MOD_ID_REV     | Section 7.3.5.1         |
| 4h       | STATUS              | Section 7.3.5.2         |
| 8h       | SDRAM_CONFIG        | Section 7.3.5.3         |
| Ch       | SDRAM_CONFIG_2      | Section 7.3.5.4         |
| 10h      | SDRAM_REF_CTRL      | Section 7.3.5.5         |
| 14h      | SDRAM_REF_CTRL_SHDW | Section 7.3.5.6         |
| 18h      | SDRAM_TIM_1         | Section 7.3.5.7         |
| 1Ch      | SDRAM_TIM_1_SHDW    | Section 7.3.5.8         |
| 20h      | SDRAM_TIM_2         | Section 7.3.5.9         |
| 24h      | SDRAM_TIM_2_SHDW    | Section 7.3.5.10        |

<!-- image -->

<!-- image -->

Table 7-221. EMIF4D Registers (continued)

| Offset   | Acronym                                     | Section          |
|----------|---------------------------------------------|------------------|
| 28h      | SDRAM_TIM_3                                 | Section 7.3.5.11 |
| 2Ch      | SDRAM_TIM_3_SHDW                            | Section 7.3.5.12 |
| 38h      | PWR_MGMT_CTRL                               | Section 7.3.5.13 |
| 3Ch      | PWR_MGMT_CTRL_SHDW                          | Section 7.3.5.14 |
| 54h      | OCP_CONFIG                                  | Section 7.3.5.15 |
| 58h      | OCP_CFG_VAL_1                               | Section 7.3.5.16 |
| 5Ch      | OCP_CFG_VAL_2                               | Section 7.3.5.17 |
| 80h      | PERF_CNT_1                                  | Section 7.3.5.18 |
| 84h      | PERF_CNT_2                                  | Section 7.3.5.19 |
| 88h      | PERF_CNT_CFG                                | Section 7.3.5.20 |
| 8Ch      | PERF_CNT_SEL                                | Section 7.3.5.21 |
| 90h      | PERF_CNT_TIM                                | Section 7.3.5.22 |
| 98h      | READ_IDLE_CTRL                              | Section 7.3.5.23 |
| 9Ch      | READ_IDLE_CTRL_SHDW                         | Section 7.3.5.24 |
| A4h      | IRQSTATUS_RAW_SYS                           | Section 7.3.5.25 |
| ACh      | IRQSTATUS_SYS                               | Section 7.3.5.26 |
| B4h      | IRQENABLE_SET_SYS                           | Section 7.3.5.27 |
| BCh      | IRQENABLE_CLR_SYS                           | Section 7.3.5.28 |
| C8h      | ZQ_CONFIG                                   | Section 7.3.5.29 |
| D4h      | Read-Write Leveling Ramp Window             | Section 7.3.5.30 |
| D8h      | Read-Write Leveling Ramp Control            | Section 7.3.5.31 |
| DCh      | Read-Write Leveling Control                 | Section 7.3.5.32 |
| E4h      | DDR_PHY_CTRL_1                              | Section 7.3.5.33 |
| E8h      | DDR_PHY_CTRL_1_SHDW                         | Section 7.3.5.34 |
| 100h     | Priority to Class of Service Mapping        | Section 7.3.5.35 |
| 104h     | Connection ID to Class of Service 1 Mapping | Section 7.3.5.36 |
| 108h     | Connection ID to Class of Service 2 Mapping | Section 7.3.5.37 |
| 120h     | Read Write Execution Threshold              | Section 7.3.5.38 |

## 7.3.5.1 EMIF\_MOD\_ID\_REV Register (offset = 0h) [reset = 40443403h]

EMIF\_MOD\_ID\_REV is shown in Figure 7-204 and described in Table 7-222.

## Figure 7-204. EMIF\_MOD\_ID\_REV Register

| 31              | 30              | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|-----------------|-----------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| reg_scheme      | reg_scheme      | RESERVED           | RESERVED           | reg_module_id      | reg_module_id      | reg_module_id      | reg_module_id      |
| R-1h            | R-1h            | R-0h               | R-0h               | R-44h              | R-44h              | R-44h              | R-44h              |
| 23              | 22              | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| reg_module_id   | reg_module_id   | reg_module_id      | reg_module_id      | reg_module_id      | reg_module_id      | reg_module_id      | reg_module_id      |
| R-44h           | R-44h           | R-44h              | R-44h              | R-44h              | R-44h              | R-44h              | R-44h              |
| 15              | 14              | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| reg_rtl_version | reg_rtl_version | reg_rtl_version    | reg_rtl_version    | reg_rtl_version    | reg_major_revision | reg_major_revision | reg_major_revision |
| R-6h R-4h       | R-6h R-4h       | R-6h R-4h          | R-6h R-4h          | R-6h R-4h          | R-6h R-4h          | R-6h R-4h          | R-6h R-4h          |
| 7               | 6               | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RESERVED        | RESERVED        | reg_minor_revision | reg_minor_revision | reg_minor_revision | reg_minor_revision | reg_minor_revision | reg_minor_revision |
| R-0h R-3h       | R-0h R-3h       | R-0h R-3h          | R-0h R-3h          | R-0h R-3h          | R-0h R-3h          | R-0h R-3h          | R-0h R-3h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-222. EMIF\_MOD\_ID\_REV Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                          |
|-------|--------------------|--------|---------|------------------------------------------------------|
| 31-30 | reg_scheme         | R      | 1h      | Used to distinguish between old and current schemes. |
| 29-28 | RESERVED           | R      | 0h      |                                                      |
| 27-16 | reg_module_id      | R      | 44h     | EMIF module ID.                                      |
| 15-11 | reg_rtl_version    | R      | 6h      | RTL Version.                                         |
| 10-8  | reg_major_revision | R      | 4h      | Major Revision.                                      |
| 7-6   | RESERVED           | R      | 0h      |                                                      |
| 5-0   | reg_minor_revision | R      | 3h      | Minor Revision.                                      |

<!-- image -->

<!-- image -->

## 7.3.5.2 STATUS Register (offset = 4h) [reset = 40000000h]

STATUS is shown in Figure 7-205 and described in Table 7-223.

## Figure 7-205. STATUS Register

| 31       | 30                 | 29            | 28       | 27       | 26                 | 25       | 24       |
|----------|--------------------|---------------|----------|----------|--------------------|----------|----------|
| reg_be   | reg_dual_clk_m ode | reg_fast_init |          |          | RESERVED           |          |          |
| R-0h     | R-1h               | R-0h          |          |          | R-0h               |          |          |
| 23       | 22                 | 21            | 20       | 19       | 18                 | 17       | 16       |
| RESERVED | RESERVED           | RESERVED      | RESERVED | RESERVED | RESERVED           | RESERVED | RESERVED |
| R-0h     | R-0h               | R-0h          | R-0h     | R-0h     | R-0h               | R-0h     | R-0h     |
| 15       | 14                 | 13            | 12       | 11       | 10                 | 9        | 8        |
| RESERVED | RESERVED           | RESERVED      | RESERVED | RESERVED | RESERVED           | RESERVED | RESERVED |
| R-0h     | R-0h               | R-0h          | R-0h     | R-0h     | R-0h               | R-0h     | R-0h     |
| 7        | 6                  | 5             | 4        | 3        | 2                  | 1        | 0        |
|          |                    | RESERVED      |          |          | reg_phy_dll_re ady | RESERVED | RESERVED |
|          |                    | R-0h          |          |          | R-0h               | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-223. STATUS Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                |
|-------|-------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | reg_be            | R      | 0h      | Big Endian. Reflects the value on the config_big_endian port that defines whether the EMIF is in big or little endian mode. 0 = Little endian. 1 = Big endian.                             |
| 30    | reg_dual_clk_mode | R      | 1h      | Dual Clock mode. Reflects the value on the config_dual_clk_mode port that defines whether the ocp_clk and m_clk are asynchronous. 0 = ocp_clk = m_clk. 1 = Asynchronous ocp_clk and m_clk. |
| 29    | reg_fast_init     | R      | 0h      | Fast Init. Reflects the value on the config_fast_init port that defines whether the EMIF fast initialization mode has been enabled. 0 = Fast init disabled. 1 = Fast init enabled.         |
| 28-3  | RESERVED          | R      | 0h      |                                                                                                                                                                                            |
| 2     | reg_phy_dll_ready | R      | 0h      | DDR PHY Ready. Reflects the value on the phy_ready port (active high) that defines whether the DDR PHY is ready for normal operation.                                                      |
| 1-0   | RESERVED          | R      | 0h      |                                                                                                                                                                                            |

## 7.3.5.3 SDRAM\_CONFIG Register (offset = 8h) [reset = 4104BAB2h]

SDRAM\_CONFIG is shown in Figure 7-206 and described in Table 7-224.

## Figure 7-206. SDRAM\_CONFIG Register

| 31              | 30              | 29             | 28                   | 27              | 26              | 25           | 24           |
|-----------------|-----------------|----------------|----------------------|-----------------|-----------------|--------------|--------------|
| reg_sdram_type  | reg_sdram_type  | reg_sdram_type | reg_ibank_pos        | reg_ibank_pos   | reg_ddr_term    | reg_ddr_term | reg_ddr_term |
| R/W-2h          | R/W-2h          | R/W-2h         | R/W-0h               | R/W-0h          | R/W-1h          | R/W-1h       | R/W-1h       |
| 23              | 22              | 21             | 20                   | 19              | 18              | 17           | 16           |
| reg_ddr2_ddqs   | reg_dyn_odt     | reg_dyn_odt    | reg_ddr_disabl e_dll | reg_sdram_drive | reg_sdram_drive | reg_cwl      | reg_cwl      |
| R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h               | R/W-1h          | R/W-1h          | R/W-0h       | R/W-0h       |
| 15              | 14              | 13             | 12                   | 11              | 10              | 9            | 8            |
| reg_narrow_mode | reg_narrow_mode | reg_cl         | reg_cl               | reg_cl          | reg_cl          | reg_rowsize  | reg_rowsize  |
| R/W-2h          | R/W-2h          | R/W-Eh         | R/W-Eh               | R/W-Eh          | R/W-Eh          | R/W-5h       | R/W-5h       |
| 7               | 6               | 5              | 4                    | 3               | 2               | 1            | 0            |
| reg_rowsize     | reg_ibank       | reg_ibank      | reg_ebank            | reg_ebank       | reg_pagesize    | reg_pagesize | reg_pagesize |
| R/W-5h          | R/W-3h          | R/W-3h         | R/W-0h               | R/W-0h          | R/W-2h          | R/W-2h       | R/W-2h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-224. SDRAM\_CONFIG Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                      |
|-------|---------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | reg_sdram_type      | R/W    | 2h      | SDRAM Type selection. Set to 0 for DDR1, set to 1 for LPDDR1, set to 2 for DDR2, set to 3 for DDR3. All other values are reserved.                                                                                                                                                                                               |
| 28-27 | reg_ibank_pos       | R/W    | 0h      | Internal bank position. Set to 0 to assign internal bank address bits from lower OCP address bits, as shown in the tables for OCP Address to DDR2/3/mDDR Address Mapping. Set to 1, 2, or 3 to assign internal bank address bits from higher OCP address, as shown in the tables for OCP Address to DDR2/3/mDDR Address Mapping. |
| 26-24 | reg_ddr_term        | R/W    | 1h      | DDR2 and DDR3 termination resistor value. Set to 0 to disable termination. For DDR2, set to 1 for 75 ohm, set to 2 for 150 ohm, and set to 3 for 50 ohm. For DDR3, set to 1 for RZQ/4, set to 2 for RZQ/2, set to 3 for RZQ/6, set to 4 for RZQ/12, and set to 5 for RZQ/8. All other values are reserved.                       |
| 23    | reg_ddr2_ddqs       | R/W    | 0h      | DDR2 differential DQS enable. Set to 0 for single ended DQS. Set to 1 for differential DQS.                                                                                                                                                                                                                                      |
| 22-21 | reg_dyn_odt         | R/W    | 0h      | DDR3 Dynamic ODT. Set to 0 to turn off dynamic ODT. Set to 1 for RZQ/4 and set to 2 for RZQ/2. All other values are reserved.                                                                                                                                                                                                    |
| 20    | reg_ddr_disable_dll | R/W    | 0h      | Disable DLL select. Set to 1 to disable DLL inside SDRAM.                                                                                                                                                                                                                                                                        |
| 19-18 | reg_sdram_drive     | R/W    | 1h      | SDRAM drive strength. For DDR1/DDR2, set to 0 for normal, and set to 1 for weak drive strength. For DDR3, set to 0 for RZQ/6 and set to 1 for RZQ/7. For LPDDR1, set to 0 for full, set to 1 for 1/2, set to 2 for 1/4, and set to 3 for 1/8 drive strength. All other values are reserved.                                      |
| 17-16 | reg_cwl             | R/W    | 0h      | DDR3 CAS Write latency. Value of 0, 1, 2, and 3 (CAS write latency of 5, 6, 7, and 8) are supported. Use the lowest value supported for best performance. All other values are reserved.                                                                                                                                         |

<!-- image -->

<!-- image -->

## Table 7-224. SDRAM\_CONFIG Register Field Descriptions (continued)

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | reg_narrow_mode | R/W    | 2h      | SDRAM data bus width. Set to 0 for 32-bit and set to 1 for 16-bit. All other values are reserved.                                                                                                                                                                                                                                                                                                                                                                                             |
| 13-10 | reg_cl          | R/W    | Eh      | CAS Latency. The value of this field defines the CAS latency to be used when accessing connected SDRAM devices. Value of 2, 3, 5, and 6 (CAS latency of 2, 3, 1.5, and 2.5) are supported for DDR1. Value of 2, 3, 4, and 5 (CAS latency of 2, 3, 4, and 5) are supported for DDR2. Value of 2, 4, 6, 8, 10, 12, and 14 (CAS latency of 5, 6, 7, 8, 9, 10, and 11) are supported for DDR3. Value of 2 and 3 (CAS latency of 2 and 3) are supported for LPDDR1. All other values are reserved. |
| 9-7   | reg_rowsize     | R/W    | 5h      | Row Size. Defines the number of row address bits of connected SDRAM devices. Set to 0 for 9 row bits, set to 1 for 10 row bits, set to 2 for 11 row bits, set to 3 for 12 row bits, set to 4 for 13 row bits, set to 5 for 14 row bits, set to 6 for 15 row bits, and set to 7 for 16 row bits. This field is only used when reg_ibank_pos field in SDRAM Config register is set to 1, 2, or 3, or reg_ebank_pos field in SDRAM Config_2 register is set to 1.                                |
| 6-4   | reg_ibank       | R/W    | 3h      | Internal Bank setup. Defines number of banks inside connected SDRAM devices. Set to 0 for 1 bank, set to 1 for 2 banks, set to 2 for 4 banks, and set to 3 for 8 banks. All other values are reserved.                                                                                                                                                                                                                                                                                        |
| 3     | reg_ebank       | R/W    | 0h      | External chip select setup. Defines whether SDRAM accesses will use 1 or 2 chip select lines. Set to 0 to use pad_cs_o_n[0] only. All other values reserved.                                                                                                                                                                                                                                                                                                                                  |
| 2-0   | reg_pagesize    | R/W    | 2h      | Page Size. Defines the internal page size of connected SDRAM devices. Set to 0 for 256-word page (8 column bits), set to 1 for 512-word page (9 column bits), set to 2 for 1024-word page (10 column bits), and set to 3 for 2048-word page (11 column bits). All other values are reserved.                                                                                                                                                                                                  |

## 7.3.5.4 SDRAM\_CONFIG\_2 Register (offset = Ch) [reset = 0h]

SDRAM\_CONFIG\_2 is shown in Figure 7-207 and described in Table 7-225.

## Figure 7-207. SDRAM\_CONFIG\_2 Register

| 31       | 30       | 29       | 28       | 27            | 26       | 25       | 24       |
|----------|----------|----------|----------|---------------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | reg_ebank_pos |          | RESERVED |          |
| R-0h     | R/W-0h   | R-0h     | R-0h     | R/W-0h        |          | R-0h     |          |
| 23       | 22       | 21       | 20       | 19            | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11            | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3             | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      |          | RESERVED |          |
| R-0h     | R-0h     | R/W-0h   | R/W-0h   | R-0h          |          | R/W-0h   |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-225. SDRAM\_CONFIG\_2 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                             |
|-------|---------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                         |
| 30    | RESERVED      | R/W    | 0h      | Reserved.                                                                                                                                                                                                                                                                                                               |
| 29-28 | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                         |
| 27    | reg_ebank_pos | R/W    | 0h      | External bank position. Set to 0 to assign external bank address bits from lower OCP address, as shown in the tables for OCP Address to DDR2/3/mDDR Address Mapping. Set to 1 to assign external bank address bits from higher OCP address bits, as shown in the tables for OCP Address to DDR2/3/mDDR Address Mapping. |
| 26-6  | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                         |
| 5-4   | RESERVED      | R/W    | 0h      | Reserved.                                                                                                                                                                                                                                                                                                               |
| 3     | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                         |
| 2-0   | RESERVED      | R/W    | 0h      | Reserved.                                                                                                                                                                                                                                                                                                               |

<!-- image -->

<!-- image -->

## 7.3.5.5 SDRAM\_REF\_CTRL Register (offset = 10h) [reset = 80001388h]

SDRAM\_REF\_CTRL is shown in Figure 7-208 and described in Table 7-226.

## Figure 7-208. SDRAM\_REF\_CTRL Register

| 31               | 30               | 29               | 28               | 27               | 26               | 25               | 24               |
|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|
| reg_initref_dis  | RESERVED         | reg_srt          | reg_asr          | RESERVED         |                  | reg_pasr         |                  |
| R/W-1h           | R-0h             | R/W-0h           | R/W-0h           | R-0h             |                  | R/W-0h           |                  |
| 23               | 22               | 21               | 20               | 19               | 18               | 17               | 16               |
| RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         |
| R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             |
| 15               | 14               | 13               | 12               | 11               | 10               | 9                | 8                |
| reg_refresh_rate | reg_refresh_rate | reg_refresh_rate | reg_refresh_rate | reg_refresh_rate | reg_refresh_rate | reg_refresh_rate | reg_refresh_rate |
| R/W-1388h        | R/W-1388h        | R/W-1388h        | R/W-1388h        | R/W-1388h        | R/W-1388h        | R/W-1388h        | R/W-1388h        |
| 7                | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
| reg_refresh_rate | reg_refresh_rate | reg_refresh_rate | reg_refresh_rate | reg_refresh_rate | reg_refresh_rate | reg_refresh_rate | reg_refresh_rate |
| R/W-1388h        | R/W-1388h        | R/W-1388h        | R/W-1388h        | R/W-1388h        | R/W-1388h        | R/W-1388h        | R/W-1388h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-226. SDRAM\_REF\_CTRL Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | reg_initref_dis  | R/W    | 1h      | Initialization and Refresh disable. When set to 1, EMIF will disable SDRAM initialization and refreshes, but will carry out SDRAM write/read transactions.                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 30    | RESERVED         | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 29    | reg_srt          | R/W    | 0h      | DDR2 and DDR3 self-refresh temperature range. Set to 0 for normal operating temperature range. Set to 1 for extended operating temperature range. For DDR3, this bit must be set to 0 if the reg_asr field is set to 1. A write to this field will cause the EMIF to start the SDRAM initialization sequence.                                                                                                                                                                                                                                                                      |
| 28    | reg_asr          | R/W    | 0h      | DDR3 Auto Self Refresh enable. Set to 1 for auto Self Refresh enable. Set to 0 for manual Self Refresh reference indicated by the reg_srt field. A write to this field will cause the EMIF to start the SDRAM initialization sequence.                                                                                                                                                                                                                                                                                                                                             |
| 27    | RESERVED         | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 26-24 | reg_pasr         | R/W    | 0h      | Partial Array Self Refresh. These bits get loaded into the Extended Mode Register of an LPDDR1 or DDR3 during initialization. For LPDDR1, set to 0 for full array, set to 1 for 1/2 array, set to 2 for 1/4 array, set to 5 for 1/8 array, and set to 6 for 1/16 array to be refreshed. For DDR3, set to 0 for full array, set to 1 or 5 for 1/2 array, set to 2 or 6 for 1/4 array, set to 3 or 7 for 1/8 array, and set to 4 for 3/4 array to be refreshed. All other values are reserved. A write to this field will cause the EMIF to start the SDRAM initialization sequence. |
| 23-16 | RESERVED         | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 15-0  | reg_refresh_rate | R/W    | 1388h   | Refresh Rate. Value in this field is used to define the rate at which connected SDRAM devices will be refreshed. SDRAM refresh rate = EMIF rate / reg_refresh_rate where EMIF rate is equal to DDR clock rate. If reg_refresh_rate < (8*reg_t_rfc)+reg_t_rp+reg_t_rcd+20 then it will be loaded with (8*reg_t_rfc)+reg_t_rp+reg_t_rcd+20. This is done to avoid lock-up situations when illegal values are programmed.                                                                                                                                                             |

## 7.3.5.6 SDRAM\_REF\_CTRL\_SHDW Register (offset = 14h) [reset = 00001388h]

SDRAM\_REF\_CTRL\_SHDW is shown in Figure 7-209 and described in Table 7-227.

## Figure 7-209. SDRAM\_REF\_CTRL\_SHDW Register

| 31                    | 30                    | 29                    | 28                    | 27                    | 26                    | 25                    | 24                    | 23                    | 22                    | 21                    | 20                    | 19                    | 18                    | 17                    | 16                    |
|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|
| RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              |
| R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  |
| 15                    | 14                    | 13                    | 12                    | 11                    | 10                    | 9                     | 8                     | 7                     | 6                     | 5                     | 4                     | 3                     | 2                     | 1                     | 0                     |
| reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw | reg_refresh_rate_shdw |
| R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             | R/W-1388h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-227. SDRAM\_REF\_CTRL\_SHDW Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                     |
|-------|-----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED              | R      | 0h      |                                                                                                                                                                                                                 |
| 15-0  | reg_refresh_rate_shdw | R/W    | 1388h   | Shadow field for reg_refresh_rate. This field is loaded into reg_refresh_rate field in SDRAM Refresh Control register when SIdleAck is asserted. This register is not auto corrected when the value is invalid. |

<!-- image -->

<!-- image -->

## 7.3.5.7 SDRAM\_TIM\_1 Register (offset = 18h) [reset = 08891599h]

SDRAM\_TIM\_1 is shown in Figure 7-210 and described in Table 7-228.

## Figure 7-210. SDRAM\_TIM\_1 Register

| 31   | 30        | 29        | 28   | 27       | 26       | 25       | 24        | 23        | 22        | 21        | 20   | 19       | 18        | 17        | 16         |
|------|-----------|-----------|------|----------|----------|----------|-----------|-----------|-----------|-----------|------|----------|-----------|-----------|------------|
|      | RESERVED  | RESERVED  |      | reg_t_rp | reg_t_rp | reg_t_rp | reg_t_rcd | reg_t_rcd | reg_t_rcd |           |      | reg_t_wr | reg_t_wr  |           | reg_t_r as |
|      | R-0h      |           |      | R/W-4h   | R/W-4h   | R/W-4h   | R/W-4h    | R/W-4h    | R/W-4h    |           |      | R/W-4h   | R/W-4h    |           | R/W- 11h   |
| 15   | 14        | 13        | 12   | 11       | 10       | 9        | 8 7       |           | 6         | 5         | 4    | 3        | 2         | 1         | 0          |
|      | reg_t_ras | reg_t_ras |      |          |          | reg_t_rc |           |           |           | reg_t_rrd |      |          | reg_t_wtr | reg_t_wtr | reg_t_wtr  |
|      | R/W-11h   | R/W-11h   |      |          |          | R/W-16h  |           |           |           | R/W-3h    |      |          | R/W-1h    | R/W-1h    | R/W-1h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-228. SDRAM\_TIM\_1 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                   |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                               |
| 28-25 | reg_t_rp  | R/W    | 4h      | Minimum number of DDR clock cycles from Precharge to Activate or Refresh, minus one.                                                                                                                                                          |
| 24-21 | reg_t_rcd | R/W    | 4h      | Minimum number of DDR clock cycles from Activate to Read or Write, minus one.                                                                                                                                                                 |
| 20-17 | reg_t_wr  | R/W    | 4h      | Minimum number of DDR clock cycles from last Write transfer to Pre-charge, minus one. The SDRAM initialization sequence will be started when the value of this field is changed from the previous value and the EMIF is in DDR2 mode.         |
| 16-12 | reg_t_ras | R/W    | 11h     | Minimum number of DDR clock cycles from Activate to Pre-charge, minus one. reg_t_ras >= reg_t_rcd.                                                                                                                                            |
| 11-6  | reg_t_rc  | R/W    | 16h     | Minimum number of DDR clock cycles from Activate to Activate, minus one.                                                                                                                                                                      |
| 5-3   | reg_t_rrd | R/W    | 3h      | Minimum number of DDR clock cycles from Activate to Activate for a different bank, minus one. For an 8-bank DDR2 or DDR3, this field must be equal to ((tFAW/(4*tCK))-1). For 4-bank DDR2 or LPDDR1, the field must be equal to (tRRD/tCK)-1. |
| 2-0   | reg_t_wtr | R/W    | 1h      | Minimum number of DDR clock cycles from last Write to Read, minus one.                                                                                                                                                                        |

## 7.3.5.8 SDRAM\_TIM\_1\_SHDW Register (offset = 1Ch) [reset = 08891599h]

SDRAM\_TIM\_1\_SHDW is shown in Figure 7-211 and described in Table 7-229.

## Figure 7-211. SDRAM\_TIM\_1\_SHDW Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25             | 24             |
|----------------|----------------|----------------|----------------|----------------|----------------|----------------|----------------|
| RESERVED       | RESERVED       | RESERVED       | reg_t_rp_shdw  | reg_t_rp_shdw  | reg_t_rp_shdw  | reg_t_rp_shdw  | reg_t_rcd_shdw |
| R-0h           | R-0h           | R-0h           | R/W-4h         | R/W-4h         | R/W-4h         | R/W-4h         | R/W-4h         |
| 23             | 22             | 21             | 20             | 19             | 18             | 17             | 16             |
| reg_t_rcd_shdw | reg_t_rcd_shdw | reg_t_rcd_shdw | reg_t_wr_shdw  | reg_t_wr_shdw  | reg_t_wr_shdw  | reg_t_wr_shdw  | reg_t_ras_shdw |
| R/W-4h         | R/W-4h         | R/W-4h         | R/W-4h         | R/W-4h         | R/W-4h         | R/W-4h         | R/W-11h        |
| 15             | 14             | 13             | 12             | 11             | 10             | 9              | 8              |
| reg_t_ras_shdw | reg_t_ras_shdw | reg_t_ras_shdw | reg_t_rc_shdw  | reg_t_rc_shdw  | reg_t_rc_shdw  | reg_t_rc_shdw  | reg_t_rc_shdw  |
| R/W-11h        | R/W-11h        | R/W-11h        | R/W-16h        | R/W-16h        | R/W-16h        | R/W-16h        | R/W-16h        |
| 7              | 6              | 5              | 4              | 3              | 2              | 1              | 0              |
| reg_t_rc_shdw  | reg_t_rc_shdw  | reg_t_rrd_shdw | reg_t_rrd_shdw | reg_t_rrd_shdw | reg_t_wtr_shdw | reg_t_wtr_shdw | reg_t_wtr_shdw |
| R/W-16h        | R/W-16h        | R/W-3h         | R/W-3h         | R/W-3h         | R/W-1h         | R/W-1h         | R/W-1h         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-229. SDRAM\_TIM\_1\_SHDW Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                     |
|-------|----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                 |
| 28-25 | reg_t_rp_shdw  | R/W    | 4h      | Shadow field for reg_t_rp. This field is loaded into reg_t_rp field in SDRAM Timing 1 register when SIdleAck is asserted.                                                                                                                                       |
| 24-21 | reg_t_rcd_shdw | R/W    | 4h      | Shadow field for reg_t_rcd. This field is loaded into reg_t_rcd field in SDRAM Timing 1 register when SIdleAck is asserted.                                                                                                                                     |
| 20-17 | reg_t_wr_shdw  | R/W    | 4h      | Shadow field for reg_t_wr. This field is loaded into reg_t_wr field in SDRAM Timing 1 register when SIdleAck is asserted. initialization sequence will be started when the value of this field is changed from the previous value and the EMIF is in DDR2 mode. |
| 16-12 | reg_t_ras_shdw | R/W    | 11h     | Shadow field for reg_t_ras. This field is loaded into reg_t_ras field in SDRAM Timing 1 register when SIdleAck is asserted.                                                                                                                                     |
| 11-6  | reg_t_rc_shdw  | R/W    | 16h     | Shadow field for reg_t_rc. This field is loaded into reg_t_rc field in SDRAM Timing 1 register when SIdleAck is asserted.                                                                                                                                       |
| 5-3   | reg_t_rrd_shdw | R/W    | 3h      | Shadow field for reg_t_rrd. This field is loaded into reg_t_rrd field in SDRAM Timing 1 register when SIdleAck is asserted.                                                                                                                                     |
| 2-0   | reg_t_wtr_shdw | R/W    | 1h      | Shadow field for reg_t_wtr. This field is loaded into reg_t_wtr field in SDRAM Timing 1 register when SIdleAck is asserted.                                                                                                                                     |

<!-- image -->

<!-- image -->

## 7.3.5.9 SDRAM\_TIM\_2 Register (offset = 20h) [reset = 148B31CAh]

SDRAM\_TIM\_2 is shown in Figure 7-212 and described in Table 7-230.

## Figure 7-212. SDRAM\_TIM\_2 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| RESERVED   |            | reg_t_xp   |            |            | RESERVED   |            | reg_t_xsnr |
| R-0h       |            | R/W-1h     |            |            | R/W-2h     |            | R/W-8Bh    |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| reg_t_xsnr | reg_t_xsnr | reg_t_xsnr | reg_t_xsnr | reg_t_xsnr | reg_t_xsnr | reg_t_xsnr | reg_t_xsnr |
| R/W-8Bh    | R/W-8Bh    | R/W-8Bh    | R/W-8Bh    | R/W-8Bh    | R/W-8Bh    | R/W-8Bh    | R/W-8Bh    |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| reg_t_xsrd | reg_t_xsrd | reg_t_xsrd | reg_t_xsrd | reg_t_xsrd | reg_t_xsrd | reg_t_xsrd | reg_t_xsrd |
| R/W-C7h    | R/W-C7h    | R/W-C7h    | R/W-C7h    | R/W-C7h    | R/W-C7h    | R/W-C7h    | R/W-C7h    |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| reg_t_xsrd | reg_t_xsrd | reg_t_rtp  | reg_t_rtp  | reg_t_rtp  | reg_t_cke  | reg_t_cke  | reg_t_cke  |
| R/W-C7h    | R/W-C7h    | R/W-1h     | R/W-1h     | R/W-1h     | R/W-2h     | R/W-2h     | R/W-2h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-230. SDRAM\_TIM\_2 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                      |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED   | R      | 0h      |                                                                                                                                                                                  |
| 30-28 | reg_t_xp   | R/W    | 1h      | Minimum number of DDR clock cycles from Powerdown exit to any command other than a Read command, minus one. For DDR2 and LPDDR1, this field must satisfy greater of tXP or tCKE. |
| 27-25 | RESERVED   | R/W    | 2h      |                                                                                                                                                                                  |
| 24-16 | reg_t_xsnr | R/W    | 8Bh     | Minimum number of DDR clock cycles from Self-Refresh exit to any command other than a Read command, minus one.                                                                   |
| 15-6  | reg_t_xsrd | R/W    | C7h     | Minimum number of DDR clock cycles from Self-Refresh exit to a Read command, minus one.                                                                                          |
| 5-3   | reg_t_rtp  | R/W    | 1h      | Minimum number of DDR clock cycles from the last Read command to a Pre-charge command for DDR2 and DDR3, minus one.                                                              |
| 2-0   | reg_t_cke  | R/W    | 2h      | Minimum number of DDR clock cycles between pad_cke_o changes, minus one.                                                                                                         |

## 7.3.5.10 SDRAM\_TIM\_2\_SHDW Register (offset = 24h) [reset = 148B31CAh]

SDRAM\_TIM\_2\_SHDW is shown in Figure 7-213 and described in Table 7-231.

## Figure 7-213. SDRAM\_TIM\_2\_SHDW Register

| 31              | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED        | reg_t_xp_shdw   | reg_t_xp_shdw   | reg_t_xp_shdw   | RESERVED        | RESERVED        | RESERVED        | reg_t_xsnr_shd w |
| R-0h            | R/W-1h          | R/W-1h          | R/W-1h          | R/W-2h          | R/W-2h          | R/W-2h          | R/W-8Bh          |
| 23              | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| reg_t_xsnr_shdw | reg_t_xsnr_shdw | reg_t_xsnr_shdw | reg_t_xsnr_shdw | reg_t_xsnr_shdw | reg_t_xsnr_shdw | reg_t_xsnr_shdw | reg_t_xsnr_shdw  |
| R/W-8Bh         | R/W-8Bh         | R/W-8Bh         | R/W-8Bh         | R/W-8Bh         | R/W-8Bh         | R/W-8Bh         | R/W-8Bh          |
| 15              | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| reg_t_xsrd_shdw | reg_t_xsrd_shdw | reg_t_xsrd_shdw | reg_t_xsrd_shdw | reg_t_xsrd_shdw | reg_t_xsrd_shdw | reg_t_xsrd_shdw | reg_t_xsrd_shdw  |
| R/W-C7h         | R/W-C7h         | R/W-C7h         | R/W-C7h         | R/W-C7h         | R/W-C7h         | R/W-C7h         | R/W-C7h          |
| 7               | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| reg_t_xsrd_shdw | reg_t_xsrd_shdw | reg_t_rtp_shdw  | reg_t_rtp_shdw  | reg_t_rtp_shdw  | reg_t_cke_shdw  | reg_t_cke_shdw  | reg_t_cke_shdw   |
| R/W-C7h         | R/W-C7h         | R/W-1h          | R/W-1h          | R/W-1h          | R/W-2h          | R/W-2h          | R/W-2h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-231. SDRAM\_TIM\_2\_SHDW Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                   |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED        | R      | 0h      |                                                                                                                               |
| 30-28 | reg_t_xp_shdw   | R/W    | 1h      | Shadow field for reg_t_xp. This field is loaded into reg_t_xp field in SDRAM Timing 2 register when SIdleAck is asserted.     |
| 27-25 | RESERVED        | R/W    | 2h      |                                                                                                                               |
| 24-16 | reg_t_xsnr_shdw | R/W    | 8Bh     | Shadow field for reg_t_xsnr. This field is loaded into reg_t_xsnr field in SDRAM Timing 2 register when SIdleAck is asserted. |
| 15-6  | reg_t_xsrd_shdw | R/W    | C7h     | Shadow field for reg_t_xsrd. This field is loaded into reg_t_xsrd field in SDRAM Timing 2 register when SIdleAck is asserted. |
| 5-3   | reg_t_rtp_shdw  | R/W    | 1h      | Shadow field for reg_t_rtp. This field is loaded into reg_t_rtp field in SDRAM Timing 2 register when SIdleAck is asserted.   |
| 2-0   | reg_t_cke_shdw  | R/W    | 2h      | Shadow field for reg_t_cke. This field is loaded into reg_t_cke field in SDRAM Timing 2 register when SIdleAck is asserted.   |

<!-- image -->

<!-- image -->

## 7.3.5.11 SDRAM\_TIM\_3 Register (offset = 28h) [reset = 00FFE82Fh]

SDRAM\_TIM\_3 is shown in Figure 7-214 and described in Table 7-232.

## Figure 7-214. SDRAM\_TIM\_3 Register

| 31            | 30            | 29            | 28            | 27   | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|------|---------------|---------------|---------------|
| reg_t_pdll_ul | reg_t_pdll_ul | reg_t_pdll_ul | reg_t_pdll_ul |      | RESERVED      | RESERVED      | RESERVED      |
| R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R-0h |               |               |               |
| 23            | 22            | 21            | 20            | 19   | 18            | 17            | 16            |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      |      | reg_zq_zqcs   | reg_zq_zqcs   | reg_zq_zqcs   |
| R/W-7h        | R/W-7h        | R/W-7h        | R/W-7h        |      | R/W-3Fh       | R/W-3Fh       | R/W-3Fh       |
| 15            | 14            | 13            | 12            | 11   | 10            | 9             | 8             |
| reg_zq_zqcs   | RESERVED      | RESERVED      | RESERVED      |      | reg_t_rfc     | reg_t_rfc     | reg_t_rfc     |
| R/W-3Fh       | R/W-3h        | R/W-3h        | R/W-3h        |      | R/W-82h       |               |               |
| 7             | 6             | 5             | 4             | 3    | 2             | 1             | 0             |
| reg_t_rfc     | reg_t_rfc     | reg_t_rfc     | reg_t_rfc     |      | reg_t_ras_max | reg_t_ras_max | reg_t_ras_max |
| R/W-82h       | R/W-82h       | R/W-82h       | R/W-82h       |      | R/W-Fh        | R/W-Fh        | R/W-Fh        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-232. SDRAM\_TIM\_3 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                    |
|-------|---------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-28 | reg_t_pdll_ul | R/W    | 0h      | Minimum number of DDR clock cycles for PHY DLL to unlock. A value of N will be equal to N x 128 clocks.                                                                                                                                                                        |
| 27-24 | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                |
| 23-21 | RESERVED      | R/W    | 7h      | Reserved.                                                                                                                                                                                                                                                                      |
| 20-15 | reg_zq_zqcs   | R/W    | 3Fh     | Number of DDR clock clock cycles for a ZQCS command, minus one.                                                                                                                                                                                                                |
| 14-13 | RESERVED      | R/W    | 3h      | Reserved.                                                                                                                                                                                                                                                                      |
| 12-4  | reg_t_rfc     | R/W    | 82h     | Minimum number of DDR clock cycles from Refresh or Load Mode to Refresh or Activate, minus one.                                                                                                                                                                                |
| 3-0   | reg_t_ras_max | R/W    | Fh      | Maximum number of reg_refresh_rate intervals from Activate to Precharge command. This field must be equal to ((tRASmax / tREFI)-1) rounded down to the next lower integer. This field is only applicable for mDDR. This field must be programmed to 0xF for other SDRAM types. |

<!-- image -->

## 7.3.5.12 SDRAM\_TIM\_3\_SHDW Register (offset = 2Ch) [reset = 00FFE82F 00000000 00000000h]

SDRAM\_TIM\_3\_SHDW is shown in Figure 7-215 and described in Table 7-233.

## Figure 7-215. SDRAM\_TIM\_3\_SHDW Register

| 31                 | 30                 | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| reg_t_pdll_ul_shdw | reg_t_pdll_ul_shdw | reg_t_pdll_ul_shdw | reg_t_pdll_ul_shdw |                    | RESERVED           | RESERVED           | RESERVED           |
| R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |                    | R-0h               | R-0h               | R-0h               |
| 23                 | 22                 | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RESERVED           | RESERVED           | RESERVED           |                    |                    | reg_zq_zqcs_shdw   | reg_zq_zqcs_shdw   | reg_zq_zqcs_shdw   |
| R/W-7h             | R/W-7h             | R/W-7h             | R/W-7h             |                    | R/W-3Fh            | R/W-3Fh            | R/W-3Fh            |
| 15                 | 14                 | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| reg_zq_zqcs_s hdw  | RESERVED           | RESERVED           |                    |                    | reg_t_rfc_shdw     |                    |                    |
| R/W-3Fh            | R/W-3h             | R/W-3h             |                    |                    | R/W-82h            |                    |                    |
| 7                  | 6                  | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| reg_t_rfc_shdw     | reg_t_rfc_shdw     | reg_t_rfc_shdw     | reg_t_rfc_shdw     | reg_t_ras_max_shdw | reg_t_ras_max_shdw | reg_t_ras_max_shdw | reg_t_ras_max_shdw |
| R/W-82h            | R/W-82h            | R/W-82h            | R/W-82h            | R/W-Fh             | R/W-Fh             | R/W-Fh             | R/W-Fh             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-233. SDRAM\_TIM\_3\_SHDW Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                         |
|-------|--------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------|
| 31-28 | reg_t_pdll_ul_shdw | R/W    | 0h      | Shadow field for reg_t_pdll_ul. This field is loaded into reg_t_pdll_ul field in SDRAM Timing 3 register when SIdleAck is asserted. |
| 27-24 | RESERVED           | R      | 0h      |                                                                                                                                     |
| 23-21 | RESERVED           | R/W    | 7h      | Reserved.                                                                                                                           |
| 20-15 | reg_zq_zqcs_shdw   | R/W    | 3Fh     | Shadow field for reg_zq_zqcs. This field is loaded into reg_zq_zqcs field in SDRAM Timing 3 register when SIdleAck is asserted.     |
| 14-13 | RESERVED           | R/W    | 3h      | Reserved.                                                                                                                           |
| 12-4  | reg_t_rfc_shdw     | R/W    | 82h     | Shadow field for reg_t_rfc. This field is loaded into reg_t_rfc field in SDRAM Timing 3 register when SIdleAck is asserted.         |
| 3-0   | reg_t_ras_max_shdw | R/W    | Fh      | Shadow field for reg_t_ras_max. This field is loaded into reg_t_ras_max field in SDRAM Timing 3 register when SIdleAck is asserted. |

<!-- image -->

## 7.3.5.13 PWR\_MGMT\_CTRL Register (offset = 38h) [reset = 00000000h]

PWR\_MGMT\_CTRL is shown in Figure 7-216 and described in Table 7-234.

## Figure 7-216. PWR\_MGMT\_CTRL Register

| 31         | 30         | 29         | 28         | 27         | 26          | 25          | 24          |
|------------|------------|------------|------------|------------|-------------|-------------|-------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED    | RESERVED    | RESERVED    |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h        | R-0h        | R-0h        |
| 23         | 22         | 21         | 20         | 19         | 18          | 17          | 16          |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED    | RESERVED    | RESERVED    |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h        | R-0h        | R-0h        |
| 15         | 14         | 13         | 12         | 11         | 10          | 9           | 8           |
| reg_pd_tim | reg_pd_tim | reg_pd_tim | reg_pd_tim | reg_dpd_en | reg_lp_mode | reg_lp_mode | reg_lp_mode |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h      | R/W-0h      | R/W-0h      |
| 7          | 6          | 5          | 4          | 3          | 2           | 1           | 0           |
| reg_sr_tim | reg_sr_tim | reg_sr_tim | reg_sr_tim | reg_cs_tim | reg_cs_tim  | reg_cs_tim  | reg_cs_tim  |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-234. PWR\_MGMT\_CTRL Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 15-12 | reg_pd_tim  | R/W    | 0h      | Power Mangement timer for Power-Down. The EMIF will put the external SDRAM in Power-Down mode after the EMIF is idle for these number of DDR clock cycles and if reg_lp_mode field is set to 4. Set to 0 to immediately enter Power-Down mode. Set to 1 for 16 clocks. Set to 2 for 32 clocks. Set to 3 for 64 clocks. Set to 4 for 128 clocks. Set to 5 for 256 clocks. Set to 6 for 512 clocks. Set to 7 for 1024 clocks. Set to 8 for 2048 clocks. Set to 9 for 4096 clocks. Set to 10 for 8192 clocks. Set to 11 for 16384 clocks. Set to 12 for 32768 clocks. Set to 13 for 65536 clocks. Set to 14 for 131072 clocks. Set to 15 for 262144 clocks. Note: After updating this field, at least one dummy read access to SDRAM is required for the new value to take affect. |
| 11    | reg_dpd_en  | R/W    | 0h      | Deep Power Down enable. Set to 0 for normal operation. Set to 1 to enter deep power down mode. This mode will override the reg_lp_mode field setting.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 10-8  | reg_lp_mode | R/W    | 0h      | Automatic Power Management enable. Set to 1 for Clock Stop, set to 2 for Self Refresh, and set to 4 for Power-Down. All other values will disable automatic power management.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |

<!-- image -->

## Table 7-234. PWR\_MGMT\_CTRL Register Field Descriptions (continued)

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 7-4   | reg_sr_tim | R/W    | 0h      | Power Mangement timer for Self Refresh. The EMIF will put the external SDRAM in Self Refresh mode after the EMIF is idle for these number of DDR clock cycles and if reg_lp_mode field is set to 2. Set to 0 to immediately enter Self Refresh mode. Set to 1 for 16 clocks. Set to 2 for 32 clocks. Set to 3 for 64 clocks. Set to 4 for 128 clocks. Set to 5 for 256 clocks. Set to 6 for 512 clocks. Set to 7 for 1024 clocks. Set to 8 for 2048 clocks. Set to 9 for 4096 clocks. Set to 10 for 8192 clocks. Set to 11 for 16384 clocks. Set to 12 for 32768 clocks. Set to 13 for 65536 clocks. Set to 14 for 131072 clocks. Set to 15 for 262144 clocks. Note: After updating this field, at least one dummy read access to                                               |
| 3-0   | reg_cs_tim | R/W    | 0h      | Power Mangement timer for Clock Stop. The EMIF will put the external SDRAM in Clock Stop mode after the EMIF is idle for these number of DDR clock cycles and if reg_lp_mode field is set to 1. Set to 0 to immediately enter Clock Stop mode. Set to 1 for 16 clocks. Set to 2 for 32 clocks. Set to 3 for 64 clocks. Set to 4 for 128 clocks. Set to 5 for 256 clocks. Set to 6 for 512 clocks. Set to 7 for 1024 clocks. Set to 8 for 2048 clocks. Set to 9 for 4096 clocks. Set to 10 for 8192 clocks. Set to 11 for 16384 clocks. Set to 12 for 32768 clocks. Set to 13 for 65536 clocks. Set to 14 for 131072 clocks. Set to 15 for 262144 clocks. Note: After updating this field, at least one dummy read access to SDRAM is required for the new value to take affect. |

<!-- image -->

## 7.3.5.14 PWR\_MGMT\_CTRL\_SHDW Register (offset = 3Ch) [reset = 00000000 00000000 00000000 00000000 00000000 00000000h]

PWR\_MGMT\_CTRL\_SHDW is shown in Figure 7-217 and described in Table 7-235.

## Figure 7-217. PWR\_MGMT\_CTRL\_SHDW Register

| 31                       | 30       | 29       | 28                       | 27       | 26       | 25       | 24       |
|--------------------------|----------|----------|--------------------------|----------|----------|----------|----------|
| RESERVED                 | RESERVED | RESERVED | RESERVED                 | RESERVED | RESERVED | RESERVED | RESERVED |
| 22                       | 22       | 22       | 22                       | 22       | 22       | 22       | 22       |
| 23 21 15                 | 20       | 19       | 18                       | 17       | 16 R-0h  | RESERVED | 14       |
| 13                       | 13       | 13       | 13                       | 13       | 13       | 13       | 13       |
| 12                       | 12       | 12       | 12                       | 12       | 12       | 12       | 12       |
| 11 R-0h                  | 10       | 9        | 8 reg_pd_tim_shdw R/W-0h | RESERVED | 7        | 6        | 5        |
| 4                        | 4        | 4        | 4                        | 3        | 3        | 3        | 3        |
|                          |          |          |                          | 2        | 2        | 2        | 2        |
| 1 reg_sr_tim_shdw R/W-0h | 0        | R/W-0h   | reg_cs_tim_shdw          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-235. PWR\_MGMT\_CTRL\_SHDW Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                             |
|-------|-----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED        | R      | 0h      |                                                                                                                                         |
| 11-8  | reg_pd_tim_shdw | R/W    | 0h      | Shadow field for reg_pd_tim. This field is loaded into reg_pd_tim field in Power Management Control register when SIdleAck is asserted. |
| 7-4   | reg_sr_tim_shdw | R/W    | 0h      | Shadow field for reg_sr_tim. This field is loaded into reg_sr_tim field in Power Management Control register when SIdleAck is asserted. |
| 3-0   | reg_cs_tim_shdw | R/W    | 0h      | Shadow field for reg_cs_tim. This field is loaded into reg_cs_tim field in Power Management Control register when SIdleAck is asserted. |

## 7.3.5.15 OCP\_CONFIG Register (offset = 54h) [reset = 00FFFFFFh]

OCP\_CONFIG (Interface Configuration) is shown in Figure 7-218 and described in Table 7-236.

## Figure 7-218. OCP\_CONFIG Register

| 31              | 30              | 29              | 28              | 27              | 26              | 25   | 24   |    | 23   | 22               | 21               | 20               | 19               | 18   | 17   | 16   |
|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------|------|----|------|------------------|------------------|------------------|------------------|------|------|------|
|                 |                 |                 | Reserved        |                 |                 |      |      |    |      | REG_COS_COUNT_1  | REG_COS_COUNT_1  | REG_COS_COUNT_1  | REG_COS_COUNT_1  |      |      |      |
|                 |                 |                 | R-0h            |                 |                 |      |      |    |      | R/W-FFh          | R/W-FFh          | R/W-FFh          | R/W-FFh          |      |      |      |
| 15              | 14              | 13              | 12              | 11              | 10              | 9    | 8    | 7  | 6    | 5                | 4                |                  | 3 2              |      | 1    | 0    |
| REG_COS_COUNT_2 | REG_COS_COUNT_2 | REG_COS_COUNT_2 | REG_COS_COUNT_2 | REG_COS_COUNT_2 | REG_COS_COUNT_2 |      |      |    |      | REG_PR_OLD_COUNT | REG_PR_OLD_COUNT | REG_PR_OLD_COUNT | REG_PR_OLD_COUNT |      |      |      |
| R/W-FFh         | R/W-FFh         | R/W-FFh         | R/W-FFh         | R/W-FFh         | R/W-FFh         |      |      |    |      | R/W-FFh          | R/W-FFh          | R/W-FFh          | R/W-FFh          |      |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-236. OCP\_CONFIG Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                     |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | Reserved         | R      | 0h      | Reserved for future use.                                                                                                                                                                                                        |
| 23-16 | REG_COS_COUNT_1  | R/W    | FFh     | Priority Raise Counter for class of service 1. Number of m_clk cycles after which the EMIF momentarily raises the priority of the class of service 1 commands in the Command FIFO. A value of N will be equal to N x 16 clocks. |
| 15-8  | REG_COS_COUNT_2  | R/W    | FFh     | Priority Raise Counter for class of service 2. Number of m_clk cycles after which the EMIF momentarily raises the priority of the class of service 2 commands in the Command FIFO. A value of N will be equal to N x 16 clocks. |
| 7-0   | REG_PR_OLD_COUNT | R/W    | FFh     | Priority Raise Old Counter. Number of m_clk cycles after which the EMIF momentarily raises the priority of the oldest command in the OCP Command FIFO. A value of N will be equal to N x 16 clocks.                             |

<!-- image -->

<!-- image -->

## 7.3.5.16 OCP\_CFG\_VAL\_1 Register (offset = 58h) [reset = 8000140Ah]

OCP\_CFG\_VAL\_1 (Interface Configuration Value 1) is shown in Figure 7-219 and described in Table 7237.

## Figure 7-219. OCP\_CFG\_VAL\_1 Register

| 31                 | 30                 | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| REG_SYS_BUS_WIDTH  | REG_SYS_BUS_WIDTH  | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           |
| R-2h               | R-2h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               |
| 23                 | 22                 | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           |
| R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               |
| 15                 | 14                 | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| REG_WR_FIFO_DEPTH  | REG_WR_FIFO_DEPTH  | REG_WR_FIFO_DEPTH  | REG_WR_FIFO_DEPTH  | REG_WR_FIFO_DEPTH  | REG_WR_FIFO_DEPTH  | REG_WR_FIFO_DEPTH  | REG_WR_FIFO_DEPTH  |
| R-14h              | R-14h              | R-14h              | R-14h              | R-14h              | R-14h              | R-14h              | R-14h              |
| 7                  | 6                  | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| REG_CMD_FIFO_DEPTH | REG_CMD_FIFO_DEPTH | REG_CMD_FIFO_DEPTH | REG_CMD_FIFO_DEPTH | REG_CMD_FIFO_DEPTH | REG_CMD_FIFO_DEPTH | REG_CMD_FIFO_DEPTH | REG_CMD_FIFO_DEPTH |
| R-Ah               | R-Ah               | R-Ah               | R-Ah               | R-Ah               | R-Ah               | R-Ah               | R-Ah               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-237. OCP\_CFG\_VAL\_1 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                 |
|-------|--------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-30 | REG_SYS_BUS_WIDTH  | R      | 2h      | L3 OCP data bus width for a particular configuration. 0 = 32 bit wide. 1 = 64 bit wide. 2 = 128 bit wide. 3 = 256 bit wide. |
| 29-16 | RESERVED           | R      | 0h      | Reserved for future use.                                                                                                    |
| 15-8  | REG_WR_FIFO_DEPTH  | R      | 14h     | Write Data FIFO depth for a particular configuration.                                                                       |
| 7-0   | REG_CMD_FIFO_DEPTH | R      | Ah      | Command FIFO depth for a particular configuration.                                                                          |

<!-- image -->

## 7.3.5.17 OCP\_CFG\_VAL\_2 Register (offset = 5Ch) [reset = 00021616 00002011 00000000 00000000 00000000h]

OCP\_CFG\_VAL\_2 (Interface Configuration Value 2) is shown in Figure 7-220 and described in Table 7238.

## Figure 7-220. OCP\_CFG\_VAL\_2 Register

| 31                 | 30                 | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 | 23                 | 22                  | 21                  | 20                  |                     | 19                  | 18                  | 17                  | 16                  |
|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
|                    | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | REG_RREG_FIFO_DEPTH | REG_RREG_FIFO_DEPTH | REG_RREG_FIFO_DEPTH | REG_RREG_FIFO_DEPTH | REG_RREG_FIFO_DEPTH | REG_RREG_FIFO_DEPTH | REG_RREG_FIFO_DEPTH | REG_RREG_FIFO_DEPTH |
| R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-2h                | R-2h                | R-2h                | R-2h                | R-2h                | R-2h                | R-2h                | R-2h                |
| 15                 | 14                 | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  | 7                  | 6                   |                     | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| REG_RSD_FIFO_DEPTH | REG_RSD_FIFO_DEPTH | REG_RSD_FIFO_DEPTH | REG_RSD_FIFO_DEPTH | REG_RSD_FIFO_DEPTH | REG_RSD_FIFO_DEPTH | REG_RSD_FIFO_DEPTH | REG_RSD_FIFO_DEPTH | REG_RSD_FIFO_DEPTH | REG_RCMD_FIFO_DEPTH | REG_RCMD_FIFO_DEPTH | REG_RCMD_FIFO_DEPTH | REG_RCMD_FIFO_DEPTH | REG_RCMD_FIFO_DEPTH | REG_RCMD_FIFO_DEPTH | REG_RCMD_FIFO_DEPTH | REG_RCMD_FIFO_DEPTH |
| R-16h              | R-16h              | R-16h              | R-16h              | R-16h              | R-16h              | R-16h              | R-16h              | R-16h              | R-16h               | R-16h               | R-16h               | R-16h               | R-16h               | R-16h               | R-16h               | R-16h               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-238. OCP\_CFG\_VAL\_2 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                   |
|-------|----------------------|--------|---------|---------------------------------------------------------------|
| 31-24 | RESERVED             | R      | 0h      | Reserved for future use.                                      |
| 23-16 | REG_RREG_FIFO_DEPT H | R      | 2h      | Register Read Data FIFO depth for a particular configuration. |
| 15-8  | REG_RSD_FIFO_DEPTH   | R      | 16h     | SDRAM Read Data FIFO depth for a particular configuration.    |
| 7-0   | REG_RCMD_FIFO_DEPT H | R      | 16h     | Read Command FIFO depth for a particular configuration.       |

<!-- image -->

## 7.3.5.18 PERF\_CNT\_1 Register (offset = 80h) [reset = 00592A49h]

PERF\_CNT\_1 is shown in Figure 7-221 and described in Table 7-239.

## Figure 7-221. PERF\_CNT\_1 Register

| 31           | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|--------------|------------------------------------------------------------------------------------|
| reg_counter1 | reg_counter1                                                                       |
| R-00592A49h  | R-00592A49h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-239. PERF\_CNT\_1 Register Field Descriptions

| Bit   | Field        | Type   | Reset     | Description                                                                                                                                          |
|-------|--------------|--------|-----------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | reg_counter1 | R      | 00592A49h | 32-bit counter that can be configured as specified in the Performance Counter Config Register and Performance Counter Master Region Select Register. |

## 7.3.5.19 PERF\_CNT\_2 Register (offset = 84h) [reset = 0001FEB9h]

PERF\_CNT\_2 is shown in Figure 7-222 and described in Table 7-240.

## Figure 7-222. PERF\_CNT\_2 Register

| 31           | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|--------------|------------------------------------------------------------------------------------|
| reg_counter2 | reg_counter2                                                                       |
| R-0001FEB9h  | R-0001FEB9h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-240. PERF\_CNT\_2 Register Field Descriptions

| Bit   | Field        | Type   | Reset     | Description                                                                                                                                          |
|-------|--------------|--------|-----------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | reg_counter2 | R      | 0001FEB9h | 32-bit counter that can be configured as specified in the Performance Counter Config Register and Performance Counter Master Region Select Register. |

<!-- image -->

<!-- image -->

## 7.3.5.20 PERF\_CNT\_CFG Register (offset = 88h) [reset = 10000h]

PERF\_CNT\_CFG is shown in Figure 7-223 and described in Table 7-241.

## Figure 7-223. PERF\_CNT\_CFG Register

| 31                    | 30                   | 29       | 28       | 27            | 26            | 25            | 24            |
|-----------------------|----------------------|----------|----------|---------------|---------------|---------------|---------------|
| reg_cntr2_mco nnid_en | reg_cntr2_regio n_en | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| R/W-0h                | R/W-0h               | R-0h     | R-0h     | R-0h          | R-0h          | R-0h          | R-0h          |
| 23                    | 22                   | 21       | 20       | 19            | 18            | 17            | 16            |
| RESERVED              | RESERVED             | RESERVED | RESERVED | reg_cntr2_cfg | reg_cntr2_cfg | reg_cntr2_cfg | reg_cntr2_cfg |
| R-0h                  | R-0h                 | R-0h     | R-0h     | R/W-1h        | R/W-1h        | R/W-1h        | R/W-1h        |
| 15                    | 14                   | 13       | 12       | 11            | 10            | 9             | 8             |
| reg_cntr1_mco nnid_en | reg_cntr1_regio n_en | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| R/W-0h                | R/W-0h               | R-0h     | R-0h     | R-0h          | R-0h          | R-0h          | R-0h          |
| 7                     | 6                    | 5        | 4        | 3             | 2             | 1             | 0             |
| RESERVED              | RESERVED             | RESERVED | RESERVED | reg_cntr1_cfg | reg_cntr1_cfg | reg_cntr1_cfg | reg_cntr1_cfg |
| R-0h                  | R-0h                 | R-0h     | R-0h     | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-241. PERF\_CNT\_CFG Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                         |
|-------|----------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------|
| 31    | reg_cntr2_mconnid_en | R/W    | 0h      | MConnID filter enable for Performance Counter 2 register.                                                                           |
| 30    | reg_cntr2_region_en  | R/W    | 0h      | Chip Select filter enable for Performance Counter 2 register.                                                                       |
| 29-20 | RESERVED             | R      | 0h      |                                                                                                                                     |
| 19-16 | reg_cntr2_cfg        | R/W    | 1h      | Filter configuration for Performance Counter 2. Refer to table for details.                                                         |
| 15    | reg_cntr1_mconnid_en | R/W    | 0h      | MConnID filter enable for Performance Counter 1 register.                                                                           |
| 14    | reg_cntr1_region_en  | R/W    | 0h      | Chip Select filter enable for Performance Counter 1 register.                                                                       |
| 13-4  | RESERVED             | R      | 0h      |                                                                                                                                     |
| 3-0   | reg_cntr1_cfg        | R/W    | 0h      | Filter configuration for Performance Counter 1. For details, see the table titled "Filter Configurations for Performance Counters". |

## 7.3.5.21 PERF\_CNT\_SEL Register (offset = 8Ch) [reset = 0h]

PERF\_CNT\_SEL is shown in Figure 7-224 and described in Table 7-242.

## Figure 7-224. PERF\_CNT\_SEL Register

| 31           | 30           | 29           | 28           | 27           | 26           | 25              | 24              |
|--------------|--------------|--------------|--------------|--------------|--------------|-----------------|-----------------|
| reg_mconnid2 | reg_mconnid2 | reg_mconnid2 | reg_mconnid2 | reg_mconnid2 | reg_mconnid2 | reg_mconnid2    | reg_mconnid2    |
| R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h          | R/W-0h          |
| 23           | 22           | 21           | 20           | 19           | 18           | 17              | 16              |
| RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | reg_region_sel2 | reg_region_sel2 |
| R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R/W-0h          | R/W-0h          |
| 15           | 14           | 13           | 12           | 11           | 10           | 9               | 8               |
| reg_mconnid1 | reg_mconnid1 | reg_mconnid1 | reg_mconnid1 | reg_mconnid1 | reg_mconnid1 | reg_mconnid1    | reg_mconnid1    |
| R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h          | R/W-0h          |
| 7            | 6            | 5            | 4            | 3            | 2            | 1               | 0               |
| RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | reg_region_sel1 | reg_region_sel1 |
| R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R/W-0h          | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-242. PERF\_CNT\_SEL Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                    |
|-------|-----------------|--------|---------|------------------------------------------------|
| 31-24 | reg_mconnid2    | R/W    | 0h      | MConnID for Performance Counter 2 register.    |
| 23-18 | RESERVED        | R      | 0h      |                                                |
| 17-16 | reg_region_sel2 | R/W    | 0h      | MAddrSpace for Performance Counter 2 register. |
| 15-8  | reg_mconnid1    | R/W    | 0h      | MConnID for Performance Counter 1 register.    |
| 7-2   | RESERVED        | R      | 0h      |                                                |
| 1-0   | reg_region_sel1 | R/W    | 0h      | MAddrSpace for Performance Counter 1 register. |

<!-- image -->

<!-- image -->

## 7.3.5.22 PERF\_CNT\_TIM Register (offset = 90h) [reset = A484D432 00000000h]

PERF\_CNT\_TIM is shown in Figure 7-225 and described in Table 7-243.

## Figure 7-225. PERF\_CNT\_TIM Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 reg_total_time   |
|------|---------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-243. PERF\_CNT\_TIM Register Field Descriptions

| Bit   | Field          | Type   | Reset     | Description                                                                                                 |
|-------|----------------|--------|-----------|-------------------------------------------------------------------------------------------------------------|
| 31-0  | reg_total_time | R      | A484D432h | 32-bit counter that continuously counts number for m_clk cycles elapsed after EMIF is brought out of reset. |

## 7.3.5.23 READ\_IDLE\_CTRL Register (offset = 98h) [reset = 50000h]

READ\_IDLE\_CTRL is shown in Figure 7-226 and described in Table 7-244.

## Figure 7-226. READ\_IDLE\_CTRL Register

| 31         | 30       | 29       | 28       | 27        | 26       | 25                         | 24                   |
|------------|----------|----------|----------|-----------|----------|----------------------------|----------------------|
| RESERVED   | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED | RESERVED                   | RESERVED             |
| 22         | 22       | 22       | 22       | 22        | 22       | 22                         | 22                   |
| 23 21 R-0h | 20       | 19       | 18       | 17 R/W-5h | 16       | RESERVED reg_read_idle_len | 15                   |
| 14         | 14       | 14       | 14       | 14        | 14       | 14                         | 14                   |
| 13         | 12       | 11       | 10       | 9         | 8        | reg_read_idle_i nterval    | RESERVED R-0h R/W-0h |
| 7          | 7        | 7        | 7        | 7         | 7        | 7                          | 2                    |
| 6 5        | 6 5      | 6 5      | 6 5      | 6 5       | 6 5      | 6 5                        | 4                    |
| 3          |          | 1        | 0        |           |          |                            |                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-244. READ\_IDLE\_CTRL Register Field Descriptions

| Bit   | Field                  | Type   | Reset   | Description                                                                                                                                                                                       |
|-------|------------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-20 | RESERVED               | R      | 0h      |                                                                                                                                                                                                   |
| 19-16 | reg_read_idle_len      | R/W    | 5h      | The Read Idle Length field determines the minimum size (reg_read_idle_len-1 clock cycles) of Read Idle window for the read idle detection as well as the force read idle time.                    |
| 15-9  | RESERVED               | R      | 0h      |                                                                                                                                                                                                   |
| 8-0   | reg_read_idle_interval | R/W    | 0h      | The Read Idle Interval field determines the maximum interval ((reg_read_idle_interval-1)*64 clock cycles) between read idle detections or force. A value of zero disables the read idle function. |

<!-- image -->

<!-- image -->

## 7.3.5.24 READ\_IDLE\_CTRL\_SHDW Register (offset = 9Ch) [reset = 0050000 00000000h]

READ\_IDLE\_CTRL\_SHDW is shown in Figure 7-227 and described in Table 7-245.

## Figure 7-227. READ\_IDLE\_CTRL\_SHDW Register

| 31       | 30       | 29            | 28       | 27                           | 26       | 25       | 24                     |
|----------|----------|---------------|----------|------------------------------|----------|----------|------------------------|
| RESERVED | RESERVED | RESERVED      | RESERVED | RESERVED                     | RESERVED | RESERVED | RESERVED               |
| 22       | 22       | 22            | 22       | 22                           | 22       | 22       | 22                     |
| 23 21    | 20       | 19            | 18       | 17                           | 16       | RESERVED | reg_read_idle_len_shdw |
|          |          |               |          | 10                           | 14       | 14       | 14                     |
| 15       |          | 12            |          | 13                           | 9        | 9        | 9                      |
| 11       |          | RESERVED R-0h | 8        | reg_read_idle_i nterval_shdw |          | R/W-0h   | 7                      |
| 6        | 6        | 6             | 2        | 6                            | 6        | 6        | 5                      |
| 4        | 4        | 4             | 4        | 3                            | 1        | 1        |                        |
| 0        |          |               |          |                              |          |          |                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-245. READ\_IDLE\_CTRL\_SHDW Register Field Descriptions

| Bit   | Field                        | Type   | Reset   | Description                                                                                                                                              |
|-------|------------------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-20 | RESERVED                     | R      | 0h      |                                                                                                                                                          |
| 19-16 | reg_read_idle_len_shdw       | R/W    | 5h      | Shadow field for reg_read_idle_len. This field is loaded into reg_read_idle_len field in Read Idle Control register when SIdleAck is asserted            |
| 15-9  | RESERVED                     | R      | 0h      |                                                                                                                                                          |
| 8-0   | reg_read_idle_interval_sh dw | R/W    | 0h      | Shadow field for reg_read_idle_interval. This field is loaded into reg_read_idle_interval field in Read Idle Control register when SIdleAck is asserted. |

## 7.3.5.25 IRQSTATUS\_RAW\_SYS Register (offset = A4h) [reset = 0h]

IRQSTATUS\_RAW\_SYS is shown in Figure 7-228 and described in Table 7-246.

## Figure 7-228. IRQSTATUS\_RAW\_SYS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24          |
|----------|----------|----------|----------|----------|----------|------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h        |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h        |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h        |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0           |
|          |          | RESERVED |          |          | RESERVED | reg_ta_sys | reg_err_sys |
|          |          | R-0h     |          |          | R/W-0h   | R/W-0h     | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-246. IRQSTATUS\_RAW\_SYS Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                       |
|-------|-------------|--------|---------|-------------------------------------------------------------------------------------------------------------------|
| 31-3  | RESERVED    | R      | 0h      |                                                                                                                   |
| 2     | RESERVED    | R/W    | 0h      | Reserved.                                                                                                         |
| 1     | reg_ta_sys  | R/W    | 0h      | Raw status of system OCP interrupt. Write 1 to set the (raw) status, mostly for debug. Writing a 0 has no effect. |
| 0     | reg_err_sys | R/W    | 0h      | Raw status of system OCP interrupt. Write 1 to set the (raw) status, mostly for debug. Writing a 0 has no effect. |

<!-- image -->

<!-- image -->

## 7.3.5.26 IRQSTATUS\_SYS Register (offset = ACh) [reset = 0h]

IRQSTATUS\_SYS is shown in Figure 7-229 and described in Table 7-247.

## Figure 7-229. IRQSTATUS\_SYS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24          |
|----------|----------|----------|----------|----------|----------|------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h        |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h        |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h        |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0           |
|          |          | RESERVED |          |          | RESERVED | reg_ta_sys | reg_err_sys |
|          |          | R-0h     |          |          | R/W-0h   | R/W-0h     | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-247. IRQSTATUS\_SYS Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                           |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | RESERVED    | R      | 0h      |                                                                                                                                                                                       |
| 2     | RESERVED    | R/W    | 0h      | Reserved.                                                                                                                                                                             |
| 1     | reg_ta_sys  | R/W    | 0h      | Enabled status of system OCP interrupt. Write 1 to clear the status after interrupt has been serviced (raw status gets cleared, i.e. even if not enabled). Writing a 0 has no effect. |
| 0     | reg_err_sys | R/W    | 0h      | Enabled status of system OCP interrupt. Write 1 to clear the status after interrupt has been serviced (raw status gets cleared, i.e. even if not enabled). Writing a 0 has no effect. |

## 7.3.5.27 IRQENABLE\_SET\_SYS Register (offset = B4h) [reset = 0h]

IRQENABLE\_SET\_SYS is shown in Figure 7-230 and described in Table 7-248.

## Figure 7-230. IRQENABLE\_SET\_SYS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25            | 24             |
|----------|----------|----------|----------|----------|----------|---------------|----------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h           |
| 23       | 22       | 21       | 20       | 19       | 18       | 17            | 16             |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h           |
| 15       | 14       | 13       | 12       | 11       | 10       | 9             | 8              |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h           |
| 7        | 6        | 5        | 4        | 3        | 2        | 1             | 0              |
|          |          | RESERVED |          |          | RESERVED | reg_en_ta_sys | reg_en_err_sys |
|          |          | R-0h     |          |          | R/W-0h   | R/W-0h        | R/W-0h         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-248. IRQENABLE\_SET\_SYS Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                           |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | RESERVED       | R      | 0h      |                                                                                                                                                                                       |
| 2     | RESERVED       | R/W    | 0h      | Reserved.                                                                                                                                                                             |
| 1     | reg_en_ta_sys  | R/W    | 0h      | Enable set for system OCP interrupt. Writing a 1 will enable the interrupt, and set this bit as well as the corresponding Interrupt Enable Clear Register. Writing a 0 has no effect. |
| 0     | reg_en_err_sys | R/W    | 0h      | Enable set for system OCP interrupt. Writing a 1 will enable the interrupt, and set this bit as well as the corresponding Interrupt Enable Clear Register. Writing a 0 has no effect. |

<!-- image -->

<!-- image -->

## 7.3.5.28 IRQENABLE\_CLR\_SYS Register (offset = BCh) [reset = 0h]

IRQENABLE\_CLR\_SYS is shown in Figure 7-231 and described in Table 7-249.

## Figure 7-231. IRQENABLE\_CLR\_SYS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25            | 24             |
|----------|----------|----------|----------|----------|----------|---------------|----------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h           |
| 23       | 22       | 21       | 20       | 19       | 18       | 17            | 16             |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h           |
| 15       | 14       | 13       | 12       | 11       | 10       | 9             | 8              |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h           |
| 7        | 6        | 5        | 4        | 3        | 2        | 1             | 0              |
|          |          | RESERVED |          |          | RESERVED | reg_en_ta_sys | reg_en_err_sys |
|          |          | R-0h     |          |          | R/W-0h   | R/W-0h        | R/W-0h         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-249. IRQENABLE\_CLR\_SYS Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                              |
|-------|----------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | RESERVED       | R      | 0h      |                                                                                                                                                                                          |
| 2     | RESERVED       | R/W    | 0h      | Reserved.                                                                                                                                                                                |
| 1     | reg_en_ta_sys  | R/W    | 0h      | Enable clear for system OCP interrupt. Writing a 1 will disable the interrupt, and clear this bit as well as the corresponding Interrupt Enable Set Register. Writing a 0 has no effect. |
| 0     | reg_en_err_sys | R/W    | 0h      | Enable clear for system OCP interrupt. Writing a 1 will disable the interrupt, and clear this bit as well as the corresponding Interrupt Enable Set Register. Writing a 0 has no effect. |

## 7.3.5.29 ZQ\_CONFIG Register (offset = C8h) [reset = 0h]

ZQ\_CONFIG is shown in Figure 7-232 and described in Table 7-250.

## Figure 7-232. ZQ\_CONFIG Register

| 31                 | 30                 | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| reg_zq_cs1en       | reg_zq_cs0en       | reg_zq_dualcal en  | reg_zq_sfexiten    | RESERVED           | RESERVED           | RESERVED           |                    |
| R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R-0h               | R-0h               | R-0h               |                    |
| 23                 | 22                 | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RESERVED           | RESERVED           | RESERVED           |                    | reg_zq_zqinit_mult | reg_zq_zqinit_mult | reg_zq_zqcl_mult   | reg_zq_zqcl_mult   |
| R-0h               | R-0h               | R-0h               |                    | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |
| 15                 | 14                 | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval |
| R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |
| 7                  | 6                  | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval | reg_zq_refinterval |
| R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-250. ZQ\_CONFIG Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                                  |
|-------|--------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | reg_zq_cs1en       | R/W    | 0h      | Writing a 1 enables ZQ calibration for CS1.                                                                                                                                                                                  |
| 30    | reg_zq_cs0en       | R/W    | 0h      | Writing a 1 enables ZQ calibration for CS0.                                                                                                                                                                                  |
| 29    | reg_zq_dualcalen   | R/W    | 0h      | ZQ Dual Calibration enable. Allows both ranks to be ZQ calibrated simultaneously. Setting this bit requires both chip selects to have a seerate calibration resistor per device.                                             |
| 28    | reg_zq_sfexiten    | R/W    | 0h      | ZQCL on Self Refresh, Active Power-Down, and Precharge Power- Down exit enable. Writing a 1 enables the issuing of ZQCL on Self-Refresh, Active Power-Down, and Precharge Power-Down exit.                                   |
| 27-20 | RESERVED           | R      | 0h      |                                                                                                                                                                                                                              |
| 19-18 | reg_zq_zqinit_mult | R/W    | 0h      | Indicates the number of ZQCL intervals that make up a ZQINIT interval, minus one.                                                                                                                                            |
| 17-16 | reg_zq_zqcl_mult   | R/W    | 0h      | Indicates the number of ZQCS intervals that make up a ZQCL interval, minus one. ZQCS interval is defined by reg_zq_zqcs in SDRAM Timing 3 Register.                                                                          |
| 15-0  | reg_zq_refinterval | R/W    | 0h      | Number of refresh periods between ZQCS commans. This field supports between one refresh period to 256 ms between ZQCS calibration commands. Refresh period is defined by reg_refresh_rate in SDRAM Refresh Control register. |

<!-- image -->

<!-- image -->

## 7.3.5.30 Read-Write Leveling Ramp Window Register (offset = D4h) [reset = 0h]

Read-Write Leveling Ramp Window is shown in Figure 7-233 and described in Table 7-251.

## Figure 7-233. Read-Write Leveling Ramp Window Register

| 31       | 30       | 29       | 28                     | 27                     | 26                     | 25                     | 24                     | 23                     | 22                     | 21                     | 20                     | 19                     | 18                     | 17                     | 16                     |
|----------|----------|----------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|
| RESERVED | RESERVED | RESERVED | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               |
| R-       | R-       | R-       | R-                     | R-                     | R-                     | R-                     | R-                     | R-                     | R-                     | R-                     | R-                     | R-                     | R-                     | R-                     | R-                     |
| 15       | 14       | 13       | 12                     | 11                     | 10                     | 9                      | 8                      | 7                      | 6                      | 5                      | 4                      | 3                      | 2                      | 1                      | 0                      |
| RESERVED | RESERVED | RESERVED | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN | REG_RDWRLVLINC_RMP_WIN |
| R- R-    | R- R-    | R- R-    | R- R-                  | R- R-                  | R- R-                  | R- R-                  | R- R-                  | R- R-                  | R- R-                  | R- R-                  | R- R-                  | R- R-                  | R- R-                  | R- R-                  | R- R-                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-251. Read-Write Leveling Ramp Window Register Field Descriptions

| Bit   | Field                   | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-------------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED                | R      |         | Reserved.                                                                                                                                                                                             |
| 12-0  | REG_RDWRLVLINC_RM P_WIN | R      |         | Incremental leveling ramp window in number of refresh periods. The value programmed is minus one the required value. Refresh period is defined by reg_refresh_rate in SDRAM Refresh Control register. |

<!-- image -->

## 7.3.5.31 Read-Write Leveling Ramp Control Register (offset = D8h) [reset = 0h]

Read-Write Leveling Ramp Control is shown in Figure 7-234 and described in Table 7-252.

## Figure 7-234. Read-Write Leveling Ramp Control Register

| 31                       | 30                       | 29                       | 28                       | 27                       | 26                       | 25                       | 24                       |
|--------------------------|--------------------------|--------------------------|--------------------------|--------------------------|--------------------------|--------------------------|--------------------------|
| REG_RDWRLV L_EN          | REG_RDWRLVLINC_RMP_PRE   | REG_RDWRLVLINC_RMP_PRE   | REG_RDWRLVLINC_RMP_PRE   | REG_RDWRLVLINC_RMP_PRE   | REG_RDWRLVLINC_RMP_PRE   | REG_RDWRLVLINC_RMP_PRE   | REG_RDWRLVLINC_RMP_PRE   |
| R/W-                     |                          |                          |                          |                          |                          |                          |                          |
| 23                       | 22                       | 21                       | 20                       | 19                       | 18                       | 17                       | 16                       |
| REG_RDLVLINC_RMP_INT     | REG_RDLVLINC_RMP_INT     | REG_RDLVLINC_RMP_INT     | REG_RDLVLINC_RMP_INT     | REG_RDLVLINC_RMP_INT     | REG_RDLVLINC_RMP_INT     | REG_RDLVLINC_RMP_INT     | REG_RDLVLINC_RMP_INT     |
| R/W-                     | R/W-                     | R/W-                     | R/W-                     | R/W-                     | R/W-                     | R/W-                     | R/W-                     |
| 15                       | 14                       | 13                       | 12                       | 11                       | 10                       | 9                        | 8                        |
| REG_RDLVLGATEINC_RMP_INT | REG_RDLVLGATEINC_RMP_INT | REG_RDLVLGATEINC_RMP_INT | REG_RDLVLGATEINC_RMP_INT | REG_RDLVLGATEINC_RMP_INT | REG_RDLVLGATEINC_RMP_INT | REG_RDLVLGATEINC_RMP_INT | REG_RDLVLGATEINC_RMP_INT |
| R/W-                     | R/W-                     | R/W-                     | R/W-                     | R/W-                     | R/W-                     | R/W-                     | R/W-                     |
| 7                        | 6                        | 5                        | 4                        | 3                        | 2                        | 1                        | 0                        |
| REG_WRLVLINC_RMP_INT     | REG_WRLVLINC_RMP_INT     | REG_WRLVLINC_RMP_INT     | REG_WRLVLINC_RMP_INT     | REG_WRLVLINC_RMP_INT     | REG_WRLVLINC_RMP_INT     | REG_WRLVLINC_RMP_INT     | REG_WRLVLINC_RMP_INT     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-252. Read-Write Leveling Ramp Control Register Field Descriptions

| Bit   | Field                     | Type   | Reset   | Description                                                                                                                                                                                                                             |
|-------|---------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | REG_RDWRLVL_EN            | R/W    |         | Read-Write Leveling enable. Set 1 to enable leveling. Set 0 to disable leveling.                                                                                                                                                        |
| 30-24 | REG_RDWRLVLINC_RM P_PRE   |        |         | Incremental leveling pre-scalar in number of refresh periods during ramp window. The value programmed is minus one the required value. Refresh period is defined by reg_refresh_rate in SDRAM Refresh Control register.                 |
| 23-16 | REG_RDLVLINC_RMP_I NT     | R/W    |         | Incremental read data eye training interval during ramp window. Number of reg_rdwrlvlinc_rmp_pre intervals between incremental read data eye training. A value of 0 will disable incremental read data eye training during ramp window. |
| 15-8  | REG_RDLVLGATEINC_R MP_INT | R/W    |         | Incremental read DQS gate training interval during ramp window. Number of reg_rdwrlvlinc_rmp_pre intervals between incremental read DQS gate training. A value of 0 will disable incremental read DQS gate training during ramp window. |
| 7-0   | REG_WRLVLINC_RMP_I NT     |        |         | Incremental write leveling interval during ramp window. Number of reg_rdwrlvlinc_rmp_pre intervals between incremental write leveling. A value of 0 will disable incremental write leveling during ramp window.                         |

<!-- image -->

## 7.3.5.32 Read-Write Leveling Control Register (offset = DCh) [reset = 0h]

Read-Write Leveling Control is shown in Figure 7-235 and described in Table 7-253.

Read-Write Leveling Control Register

Figure 7-235. Read-Write Leveling Control Register

| 31                     | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|------------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| REG_RDWRLV LFULL_START | REG_RDWRLVLINC_PRE   | REG_RDWRLVLINC_PRE   | REG_RDWRLVLINC_PRE   | REG_RDWRLVLINC_PRE   | REG_RDWRLVLINC_PRE   | REG_RDWRLVLINC_PRE   | REG_RDWRLVLINC_PRE   |
| R/W-                   | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 |
| 23                     | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| REG_RDLVLINC_INT       | REG_RDLVLINC_INT     | REG_RDLVLINC_INT     | REG_RDLVLINC_INT     | REG_RDLVLINC_INT     | REG_RDLVLINC_INT     | REG_RDLVLINC_INT     | REG_RDLVLINC_INT     |
| R/W-                   | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 |
| 15                     | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| REG_RDLVLGATEINC_INT   | REG_RDLVLGATEINC_INT | REG_RDLVLGATEINC_INT | REG_RDLVLGATEINC_INT | REG_RDLVLGATEINC_INT | REG_RDLVLGATEINC_INT | REG_RDLVLGATEINC_INT | REG_RDLVLGATEINC_INT |
| R/W-                   | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 |
| 7                      | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| REG_WRLVLINC_INT       | REG_WRLVLINC_INT     | REG_WRLVLINC_INT     | REG_WRLVLINC_INT     | REG_WRLVLINC_INT     | REG_WRLVLINC_INT     | REG_WRLVLINC_INT     | REG_WRLVLINC_INT     |
| R/W-                   | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 | R/W-                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-253. Read-Write Leveling Control Register Field Descriptions

| Bit   | Field                  | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|------------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | REG_RDWRLVLFULL_S TART | R/W    |         | Full leveling trigger. Writing a 1 to this field triggers full read and write leveling. This bit will self-clear to 0.                                                                               |
| 30-24 | REG_RDWRLVLINC_PR E    | R/W    |         | Incremental leveling pre-scalar in number of refresh periods. The value programmed is minus one the required value. Refresh period is defined by reg_refresh_rate in SDRAM Refresh Control register. |
| 23-16 | REG_RDLVLINC_INT       | R/W    |         | Incremental read data eye training interval. Number of reg_rdwrlvlinc_pre intervals between incremental read data eye training. A value of 0 will disable incremental read data eye training.        |
| 15-8  | REG_RDLVLGATEINC_I NT  | R/W    |         | Incremental read DQS gate training interval. Number of reg_rdwrlvlinc_pre intervals between incremental read DQS gate training. A value of 0 will disable incremental read DQS gate training.        |
| 7-0   | REG_WRLVLINC_INT       | R/W    |         | Incremental write leveling interval. Number of reg_rdwrlvlinc_pre intervals between incremental write leveling. A value of 0 will disable incremental write leveling.                                |

## 7.3.5.33 DDR\_PHY\_CTRL\_1 Register (offset = E4h) [reset = 0h]

DDR\_PHY\_CTRL\_1 is shown in Figure 7-236 and described in Table 7-254.

A write to the DDR PHY Control 1 register must be followed by a write to the SDRAM\_CONFIG register to ensure that the control update/acknowledge protocol is performed on the DID. If CAS latency = 5, the minimum read latency = 5 + 2 = 7 and reg\_read\_latency must be programmed as 7 - 1 = 6. The maximum read latency = 5 + 7 = 12 and reg\_read\_latency must be programmed as 12 - 1 = 11.

Figure 7-236. DDR\_PHY\_CTRL\_1 Register

| 31            | 30                          | 29       | 28                                          | 27                        | 26                        | 25                     | 24       |
|---------------|-----------------------------|----------|---------------------------------------------|---------------------------|---------------------------|------------------------|----------|
| RESERVED      | RESERVED                    | RESERVED | RESERVED                                    | RESERVED                  | RESERVED                  | RESERVED               | RESERVED |
| 22            | 22                          | 22       | 22                                          | 22                        | 22                        | 22                     | 22       |
| 23 21         | 20                          | 19       | 18                                          | 17                        | 16                        |                        | RESERVED |
|               | reg_phy_enabl e_dynamic_pwr | dn       | RESERVED                                    | R/W-0h R/W-0h R/W-0h      | 14                        | 14                     |          |
| 12            | 12                          | 12       | 12                                          | 12                        | 12                        | 12                     | 12       |
| 15 13 11      | 10                          | 9        | 8 reg_phy_wr_local_odt reg_phy_rd_local_odt | reg_phy_rst_n             | RESERVED                  | reg_phy_idle_local_odt | R/W-0h   |
| R/W-0h R/W-0h | 6                           | 5        | 5                                           | 4                         | 4                         | 3                      | 3        |
| 7 2           | 1                           | 0        | 0                                           | RESERVED reg_read_latency | RESERVED reg_read_latency |                        |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-254. DDR\_PHY\_CTRL\_1 Register Field Descriptions

| Bit   | Field                         | Type   | Reset   | Description                                                                                                                                                                                                                                                                    |
|-------|-------------------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | RESERVED                      | R/W    | 0h      | Reserved.                                                                                                                                                                                                                                                                      |
| 20    | reg_phy_enable_dynamic _pwrdn | R/W    | 0h      | Dynamically enables powering down the IO receiver when not performing a read. 0 = IO receivers always powered up. 1 = IO receives only powered up during a read.                                                                                                               |
| 19-16 | RESERVED                      | R/W    | 0h      | Reserved.                                                                                                                                                                                                                                                                      |
| 15    | reg_phy_rst_n                 | R/W    | 0h      | Writing a 1 to this bit will hold the PHY macros in reset. Writing a 0 will bring PHY macros out of reset.                                                                                                                                                                     |
| 14    | RESERVED                      | R/W    | 0h      | Reserved.                                                                                                                                                                                                                                                                      |
| 13-12 | reg_phy_idle_local_odt        | R/W    | 0h      | Value to drive on the 2-bit local_odt (On-Die Termination) PHY outputs when reg_phy_dynamic_pwrdn_enable is asserted and a read is not in progress and reg_phy_dynamic_pwrdn_enable. Typically this is the value required to disable termination (00) to save power when idle. |
| 11-10 | reg_phy_wr_local_odt          | R/W    | 0h      | This bit controls the value assigned to the reg_phy_wr_local_odt input on the data macros. Always set to 00.                                                                                                                                                                   |

<!-- image -->

<!-- image -->

## Table 7-254. DDR\_PHY\_CTRL\_1 Register Field Descriptions (continued)

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|----------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 9-8   | reg_phy_rd_local_odt | R/W    | 0h      | Value to drive on the 2-bit local_odt (On-Die Termination) PHY outputs when output enable is not asserted and a read is in progress (where in progress is defined as after a read command is issued and until all read data has been returned all the way to the controller.) Typically this is set to the value required to enable termination at the desired strength for read usage. 00 = ODT off. 01 = ODT off. 10 = Full thevenin load Effective ODT is equivalent to 1x the output driver impedance setting in DDR_DATAx_IOCTRL.io_config_i register bits. 11 = Half thevenin load Effective ODT is equivalent to 2x the output driver impedance setting in DDR_DATAx_IOCTRL.io_config_i register bits.. |
| 7-5   | RESERVED             | R/W    | 0h      | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 4-0   | reg_read_latency     | R/W    | 0h      | This field defines the latency for read data from DDR SDRAM in number of DDR clock cycles. The value applied should be equal to the required value minus one. The maximum read latency supported by the DDR PHY is equal to CAS latency plus 7 clock cycles. The minimum read latency must be equal to CAS latency plus 2 clock cycle.                                                                                                                                                                                                                                                                                                                                                                         |

## 7.3.5.34 DDR\_PHY\_CTRL\_1\_SHDW Register (offset = E8h) [reset = 0h]

DDR\_PHY\_CTRL\_1\_SHDW is shown in Figure 7-237 and described in Table 7-255.

A write to the DDR PHY Control 1 register must be followed by a write to the SDRAM\_CONFIG register to ensure that the control update/acknowledge protocol is performed on the DID. If CAS latency = 5, the minimum read latency = 5 + 2 = 7 and reg\_read\_latency must be programmed as 7 - 1 = 6. The maximum read latency = 5 + 7 = 12 and reg\_read\_latency must be programmed as 12 - 1 = 11.

Figure 7-237. DDR\_PHY\_CTRL\_1\_SHDW Register

| 31            | 30                          | 29       | 28                                          | 27                        | 26                        | 25                     | 24       |
|---------------|-----------------------------|----------|---------------------------------------------|---------------------------|---------------------------|------------------------|----------|
| RESERVED      | RESERVED                    | RESERVED | RESERVED                                    | RESERVED                  | RESERVED                  | RESERVED               | RESERVED |
| 22            | 22                          | 22       | 22                                          | 22                        | 22                        | 22                     | 22       |
| 23 21         | 20                          | 19       | 18                                          | 17                        | 16                        |                        | RESERVED |
|               | reg_phy_enabl e_dynamic_pwr | dn       | RESERVED                                    | R/W-0h R/W-0h R/W-0h      | 14                        | 14                     |          |
| 12            | 12                          | 12       | 12                                          | 12                        | 12                        | 12                     | 12       |
| 15 13 11      | 10                          | 9        | 8 reg_phy_wr_local_odt reg_phy_rd_local_odt | reg_phy_rst_n             | RESERVED                  | reg_phy_idle_local_odt | R/W-0h   |
| R/W-0h R/W-0h | 6                           | 5        | 5                                           | 4                         | 4                         | 3                      | 3        |
| 7 2           | 1                           | 0        | 0                                           | RESERVED reg_read_latency | RESERVED reg_read_latency |                        |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-255. DDR\_PHY\_CTRL\_1\_SHDW Register Field Descriptions

| Bit   | Field                         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|-------------------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | RESERVED                      | R/W    | 0h      | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 20    | reg_phy_enable_dynamic _pwrdn | R/W    | 0h      | Dynamically enables powering down the IO receiver when not performing a read. 0 = IO receivers always powered up. 1 = IO receives only powered up during a read.                                                                                                                                                                                                                                                                                 |
| 19-16 | RESERVED                      | R/W    | 0h      | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 15    | reg_phy_rst_n                 | R/W    | 0h      | Writing a 1 to this bit will hold the PHY macros in reset. Writing a 0 will bring PHY macros out of reset.                                                                                                                                                                                                                                                                                                                                       |
| 14    | RESERVED                      | R/W    | 0h      | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 13-12 | reg_phy_idle_local_odt        | R/W    | 0h      | Value to drive on the 2-bit local_odt PHY outputs when reg_phy_dynamic_pwrdn_enable is asserted and a read is not in progress and reg_phy_dynamic_pwrdn_enable. Typically this is the value required to disable termination (00) to save power when idle.                                                                                                                                                                                        |
| 11-10 | reg_phy_wr_local_odt          | R/W    | 0h      | This bit controls the value assigned to the reg_phy_wr_local_odt input on the data macros. Always set to 00.                                                                                                                                                                                                                                                                                                                                     |
| 9-8   | reg_phy_rd_local_odt          | R/W    | 0h      | Value to drive on the 2-bit local_odt PHY outputs when output enable is not asserted and a read is in progress (where in progress is defined as after a read command is issued and until all read data has been returned all the way to the controller.) Typically this is set to the value required to enable termination at the desired strength for read usage. 00 = ODT off. 01 = ODT off. 10 = Full thevenin load. 11 = Half thevenin load. |
| 7-5   | RESERVED                      | R/W    | 0h      | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                        |

<!-- image -->

<!-- image -->

## Table 7-255. DDR\_PHY\_CTRL\_1\_SHDW Register Field Descriptions (continued)

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                            |
|-------|------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 4-0   | reg_read_latency | R/W    | 0h      | This field defines the latency for read data from DDR SDRAM in number of DDR clock cycles. The value applied should be equal to the required value minus one. The maximum read latency supported by the DDR PHY is equal to CAS latency plus 7 clock cycles. The minimum read latency must be equal to CAS latency plus 2 clock cycle. |

<!-- image -->

## 7.3.5.35 Priority to Class of Service Mapping Register (offset = 100h) [reset = 0h]

Priority to Class of Service Mapping is shown in Figure 7-238 and described in Table 7-256.

Figure 7-238. Priority to Class of Service Mapping Register

| 31                  | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| REG_PRI_COS _MAP_EN | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| R/W-                | R-            | R-            | R-            | R-            | R-            | R-            | R-            |
| 23                  | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| RESERVED            | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| R-                  | R-            | R-            | R-            | R-            | R-            | R-            | R-            |
| 15                  | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| REG_PRI_7_COS       | REG_PRI_7_COS | REG_PRI_6_COS | REG_PRI_6_COS | REG_PRI_5_COS | REG_PRI_5_COS | REG_PRI_4_COS | REG_PRI_4_COS |
| R/W-                | R/W-          | R/W-          | R/W-          | R/W-          | R/W-          | R/W-          | R/W-          |
| 7                   | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| REG_PRI_3_COS       | REG_PRI_3_COS | REG_PRI_2_COS | REG_PRI_2_COS | REG_PRI_1_COS | REG_PRI_1_COS | REG_PRI_0_COS | REG_PRI_0_COS |
| R/W-                | R/W-          | R/W-          | R/W-          | R/W-          | R/W-          | R/W-          | R/W-          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-256. Priority to Class of Service Mapping Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                            |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------|
| 31    | REG_PRI_COS_MAP_EN | R/W    |         | Set 1 to enable priority to class of service mapping. Set 0 to disable mapping.                                                        |
| 30-16 | RESERVED           | R      |         | Reserved.                                                                                                                              |
| 15-14 | REG_PRI_7_COS      | R/W    |         | Class of service for commands with priority of 7. Value can be 1 or 2. Setting a value of 0 or 3 will not assign any class of service. |
| 13-12 | REG_PRI_6_COS      | R/W    |         | Class of service for commands with priority of 6. Value can be 1 or 2. Setting a value of 0 or 3 will not assign any class of service. |
| 11-10 | REG_PRI_5_COS      | R/W    |         | Class of service for commands with priority of 5. Value can be 1 or 2. Setting a value of 0 or 3 will not assign any class of service. |
| 9-8   | REG_PRI_4_COS      | R/W    |         | Class of service for commands with priority of 4. Value can be 1 or 2. Setting a value of 0 or 3 will not assign any class of service. |
| 7-6   | REG_PRI_3_COS      | R/W    |         | Class of service for commands with priority of 3. Value can be 1 or 2. Setting a value of 0 or 3 will not assign any class of service. |
| 5-4   | REG_PRI_2_COS      | R/W    |         | Class of service for commands with priority of 2. Value can be 1 or 2. Setting a value of 0 or 3 will not assign any class of service. |
| 3-2   | REG_PRI_1_COS      | R/W    |         | Class of service for commands with priority of 1. Value can be 1 or 2. Setting a value of 0 or 3 will not assign any class of service. |
| 1-0   | REG_PRI_0_COS      | R/W    |         | Class of service for commands with priority of 0. Value can be 1 or 2. Setting a value of 0 or 3 will not assign any class of service. |

<!-- image -->

## 7.3.5.36 Connection ID to Class of Service 1 Mapping Register (offset = 104h) [reset = 0h]

Connection ID to Class of Service 1 Mapping is shown in Figure 7-239 and described in Table 7-257.

Figure 7-239. Connection ID to Class of Service 1 Mapping Register

| 31                        | 30                 | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|---------------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| REG_CONNID _COS_1_MAP_ EN | REG_CONNID_1_COS_1 | REG_CONNID_1_COS_1 | REG_CONNID_1_COS_1 | REG_CONNID_1_COS_1 | REG_CONNID_1_COS_1 | REG_CONNID_1_COS_1 | REG_CONNID_1_COS_1 |
| R/W-                      | R/W-               | R/W-               | R/W-               | R/W-               | R/W-               | R/W-               | R/W-               |
| 23                        | 22                 | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| REG_CONNID _1_COS_1       | REG_MSK_1_COS_1    | REG_MSK_1_COS_1    | REG_MSK_1_COS_1    | REG_CONNID_2_COS_1 | REG_CONNID_2_COS_1 | REG_CONNID_2_COS_1 | REG_CONNID_2_COS_1 |
| R/W-                      | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          |
| 15                        | 14                 | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| REG_CONNID_2_COS_1        | REG_CONNID_2_COS_1 | REG_CONNID_2_COS_1 | REG_CONNID_2_COS_1 | REG_MSK_2_COS_1    | REG_MSK_2_COS_1    | REG_CONNID_3_COS_1 | REG_CONNID_3_COS_1 |
| R/W- R/W-                 | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W-               | R/W-               |
| 7                         | 6                  | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| REG_CONNID_3_COS_1        | REG_CONNID_3_COS_1 | REG_CONNID_3_COS_1 | REG_CONNID_3_COS_1 | REG_CONNID_3_COS_1 | REG_CONNID_3_COS_1 | REG_MSK_3_COS_1    | REG_MSK_3_COS_1    |
| R/W- R/W-                 | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-257. Connection ID to Class of Service 1 Mapping Register Field Descriptions

| Bit   | Field                    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                |
|-------|--------------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | REG_CONNID_COS_1_ MAP_EN | R/W    |         | Set 1 to enable connection ID to class of service 1 mapping. Set 0 to disable mapping.                                                                                                                                                                                                                     |
| 30-23 | REG_CONNID_1_COS_1       | R/W    |         | Connection ID value 1 for class of service 1.                                                                                                                                                                                                                                                              |
| 22-20 | REG_MSK_1_COS_1          | R/W    |         | Mask for connection ID value 1 for class of service 1. 0 = disable masking. 1 = mask connection ID bit 0. 2 = mask connection ID bits 1:0. 3 = mask connection ID bits 2:0. 4 = mask connection ID bits 3:0. 5 = mask connection ID bits 4:0. 6 = mask connection ID bits 5:0. 7 = mask connection ID bits |
| 19-12 | REG_CONNID_2_COS_1       | R/W    |         | Connection ID value 2 for class of service 1.                                                                                                                                                                                                                                                              |
| 11-10 | REG_MSK_2_COS_1          | R/W    |         | Mask for connection ID value 2 for class of service 1. 0 = disable masking. 1 = mask connection ID bit 0. 2 = mask connection ID bits 1:0. 3 = mask connection ID bits 2:0.                                                                                                                                |
| 9-2   | REG_CONNID_3_COS_1       | R/W    |         | Connection ID value 3 for class of service 1.                                                                                                                                                                                                                                                              |
| 1-0   | REG_MSK_3_COS_1          | R/W    |         | Mask for connection ID. Value 3 for class of service 1. 0 = disable masking. 1 = mask connection ID bit 0. 2 = mask connection ID bits 1:0. 3 = mask connection ID bits 2:0.                                                                                                                               |

<!-- image -->

## 7.3.5.37 Connection ID to Class of Service 2 Mapping Register (offset = 108h) [reset = 0h]

Connection ID to Class of Service 2 Mapping is shown in Figure 7-240 and described in Table 7-258.

Figure 7-240. Connection ID to Class of Service 2 Mapping Register

| 31                        | 30                 | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|---------------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| REG_CONNID _COS_2_MAP_ EN | REG_CONNID_1_COS_2 | REG_CONNID_1_COS_2 | REG_CONNID_1_COS_2 | REG_CONNID_1_COS_2 | REG_CONNID_1_COS_2 | REG_CONNID_1_COS_2 | REG_CONNID_1_COS_2 |
| R/W-                      | R/W-               | R/W-               | R/W-               | R/W-               | R/W-               | R/W-               | R/W-               |
| 23                        | 22                 | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| REG_CONNID _1_COS_2       | REG_MSK_1_COS_2    | REG_MSK_1_COS_2    | REG_MSK_1_COS_2    | REG_CONNID_2_COS_2 | REG_CONNID_2_COS_2 | REG_CONNID_2_COS_2 | REG_CONNID_2_COS_2 |
| R/W-                      | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          |
| 15                        | 14                 | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| REG_CONNID_2_COS_2        | REG_CONNID_2_COS_2 | REG_CONNID_2_COS_2 | REG_CONNID_2_COS_2 | REG_MSK_2_COS_2    | REG_MSK_2_COS_2    | REG_CONNID_3_COS_2 | REG_CONNID_3_COS_2 |
| R/W- R/W-                 | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W-               | R/W-               |
| 7                         | 6                  | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| REG_CONNID_3_COS_2        | REG_CONNID_3_COS_2 | REG_CONNID_3_COS_2 | REG_CONNID_3_COS_2 | REG_CONNID_3_COS_2 | REG_CONNID_3_COS_2 | REG_MSK_3_COS_2    | REG_MSK_3_COS_2    |
| R/W- R/W-                 | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          | R/W- R/W-          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-258. Connection ID to Class of Service 2 Mapping Register Field Descriptions

| Bit   | Field                    | Type   | Reset   | Description                                                                                                                                                                                                                                                                   |
|-------|--------------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | REG_CONNID_COS_2_ MAP_EN | R/W    |         | Set 1 to enable connection ID to class of service 2 mapping. Set 0 to disable mapping.                                                                                                                                                                                        |
| 30-23 | REG_CONNID_1_COS_2       | R/W    |         | Connection ID value 1 for class of service 2.                                                                                                                                                                                                                                 |
| 22-20 | REG_MSK_1_COS_2          | R/W    |         | Mask for connection ID. Value 1 for class of service 2. 0 = disable masking. 1 = mask connection ID bit 0. 2= mask connection ID bits 1:0. 3= mask connection ID bits 2:0. 4 = mask connection ID bits 3:0. 5 = mask connection ID bits 4:0. 6 = mask connection ID bits 5:0. |
| 19-12 | REG_CONNID_2_COS_2       | R/W    |         | Connection ID value 2 for class of service 2.                                                                                                                                                                                                                                 |
| 11-10 | REG_MSK_2_COS_2          | R/W    |         | Mask for connection ID. Value 2 for class of service 2. 0 = disable masking. 1 = mask connection ID bit 0. 2 = mask connection ID bits 1:0. 3 = mask connection ID bits 2:0.                                                                                                  |
| 9-2   | REG_CONNID_3_COS_2       | R/W    |         | Connection ID value 3 for class of service 2.                                                                                                                                                                                                                                 |
| 1-0   | REG_MSK_3_COS_2          | R/W    |         | Mask for connection ID. Value 3 for class of service 2. 0 = disable masking. 1 = mask connection ID bit 0. 2 = mask connection ID bits 1:0. 3 = mask connection ID bits 2:0.                                                                                                  |

<!-- image -->

## 7.3.5.38 Read Write Execution Threshold Register (offset = 120h) [reset = 00000305h]

Read Write Execution Threshold is shown in Figure 7-241 and described in Table 7-259.

## Figure 7-241. Read Write Execution Threshold Register

| 31       | 30       | 29       | 28       | 27           | 26           | 25           | 24           | 23           | 22       | 21       | 20       | 19       | 18           | 17           |              | 16           |
|----------|----------|----------|----------|--------------|--------------|--------------|--------------|--------------|----------|----------|----------|----------|--------------|--------------|--------------|--------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     | RESERVED     |
| R-       | R-       | R-       | R-       | R-           | R-           | R-           | R-           | R-           | R-       | R-       | R-       | R-       | R-           | R-           | R-           | R-           |
| 15       | 14       | 13       | 12       | 11           | 10           | 9            | 8            | 7            | 6        | 5        | 4        | 3        | 2            |              | 1            | 0            |
| RESERVED | RESERVED | RESERVED | RESERVED | REG_WR_THRSH | REG_WR_THRSH | REG_WR_THRSH | REG_WR_THRSH | REG_WR_THRSH | RESERVED | RESERVED | RESERVED | RESERVED | REG_RD_THRSH | REG_RD_THRSH | REG_RD_THRSH | REG_RD_THRSH |
| R-       | R-       | R-       | R-       | R/W-         | R/W-         | R/W-         | R/W-         | R/W-         | R-       | R-       | R-       | R-       | R/W-         | R/W-         | R/W-         | R/W-         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-259. Read Write Execution Threshold Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                          |
|-------|--------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED     | R      |         | Reserved.                                                                                                                                                                            |
| 12-8  | REG_WR_THRSH | R/W    |         | Write Threshold. Number of SDRAM write bursts after which the EMIF arbitration will switch to executing read commands. The value programmed is always minus one the required number. |
| 7-5   | RESERVED     | R      |         | Reserved.                                                                                                                                                                            |
| 4-0   | REG_RD_THRSH | R/W    |         | Read Threshold. Number of SDRAM read bursts after which the EMIF arbitration will switch to executing write commands. The value programmed is always minus one the required number.  |