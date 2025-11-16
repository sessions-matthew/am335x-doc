<!-- image -->

## 13.5 Registers

## 13.5.1 LCD Registers

Table 13-13 lists the memory-mapped registers for the LCD. All register offset addresses not listed in Table 13-13 should be considered as reserved locations and the register contents should not be modified.

## Table 13-13. LCD Registers

| Offset   | Acronym            | Register Name   | Section           |
|----------|--------------------|-----------------|-------------------|
| 0h       | PID                |                 | Section 13.5.1.1  |
| 4h       | CTRL               |                 | Section 13.5.1.2  |
| Ch       | LIDD_CTRL          |                 | Section 13.5.1.3  |
| 10h      | LIDD_CS0_CONF      |                 | Section 13.5.1.4  |
| 14h      | LIDD_CS0_ADDR      |                 | Section 13.5.1.5  |
| 18h      | LIDD_CS0_DATA      |                 | Section 13.5.1.6  |
| 1Ch      | LIDD_CS1_CONF      |                 | Section 13.5.1.7  |
| 20h      | LIDD_CS1_ADDR      |                 | Section 13.5.1.8  |
| 24h      | LIDD_CS1_DATA      |                 | Section 13.5.1.9  |
| 28h      | RASTER_CTRL        |                 | Section 13.5.1.10 |
| 2Ch      | RASTER_TIMING_0    |                 | Section 13.5.1.11 |
| 30h      | RASTER_TIMING_1    |                 | Section 13.5.1.12 |
| 34h      | RASTER_TIMING_2    |                 | Section 13.5.1.13 |
| 38h      | RASTER_SUBPANEL    |                 | Section 13.5.1.14 |
| 3Ch      | RASTER_SUBPANEL2   |                 | Section 13.5.1.15 |
| 40h      | LCDDMA_CTRL        |                 | Section 13.5.1.16 |
| 44h      | LCDDMA_FB0_BASE    |                 | Section 13.5.1.17 |
| 48h      | LCDDMA_FB0_CEILING |                 | Section 13.5.1.18 |
| 4Ch      | LCDDMA_FB1_BASE    |                 | Section 13.5.1.19 |
| 50h      | LCDDMA_FB1_CEILING |                 | Section 13.5.1.20 |
| 54h      | SYSCONFIG          |                 | Section 13.5.1.21 |
| 58h      | IRQSTATUS_RAW      |                 | Section 13.5.1.22 |
| 5Ch      | IRQSTATUS          |                 | Section 13.5.1.23 |
| 60h      | IRQENABLE_SET      |                 | Section 13.5.1.24 |
| 64h      | IRQENABLE_CLEAR    |                 | Section 13.5.1.25 |
| 6Ch      | CLKC_ENABLE        |                 | Section 13.5.1.26 |
| 70h      | CLKC_RESET         |                 | Section 13.5.1.27 |

## 13.5.1.1 PID Register (offset = 0h) [reset = 0h]

PID is shown in Figure 13-29 and described in Table 13-14.

## Figure 13-29. PID Register

| 31           | 30           | 29           | 28           | 27           | 26           | 25           | 24           |
|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| scheme       | scheme       | RESERVED     | RESERVED     | func         | func         | func         | func         |
| R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 23           | 22           | 21           | 20           | 19           | 18           | 17           | 16           |
| func         | func         | func         | func         | func         | func         | func         | func         |
| R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 15           | 14           | 13           | 12           | 11           | 10           | 9            | 8            |
| rtl          | rtl          | rtl          | rtl          | rtl          | major        | major        | major        |
| R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h R-0h    |
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
| custom minor | custom minor | custom minor | custom minor | custom minor | custom minor | custom minor | custom minor |
| R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h R-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-14. PID Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                           |
|-------|----------|--------|---------|-----------------------------------------------------------------------|
| 31-30 | scheme   | R      | 0h      | The scheme of the register used. This field indicates the 3.5 Method. |
| 29-28 | RESERVED | R      | 0h      |                                                                       |
| 27-16 | func     | R      | 0h      | The function of the module being used.                                |
| 15-11 | rtl      | R      | 0h      | The Release number for this IP.                                       |
| 10-8  | major    | R      | 0h      | Major Release Number                                                  |
| 7-6   | custom   | R      | 0h      | Custom IP                                                             |
| 5-0   | minor    | R      | 0h      | Minor Release Number                                                  |

<!-- image -->

<!-- image -->

## 13.5.1.2 CTRL Register (offset = 4h) [reset = 0h]

CTRL is shown in Figure 13-30 and described in Table 13-15.

## Figure 13-30. CTRL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25                  | 24       |
|----------|----------|----------|----------|----------|----------|---------------------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17                  | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9                   | 8        |
| clkdiv   | clkdiv   | clkdiv   | clkdiv   | clkdiv   | clkdiv   | clkdiv              | clkdiv   |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h              | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1                   | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | auto_uflow_rest art | modesel  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h              | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 13-15. CTRL Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                                                                                 |
|-------|--------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED           | R      | 0h      |                                                                                                                                                                                                                                                                             |
| 15-8  | clkdiv             | R/W    | 0h      | Clock divisor. Raster mode: Values of 2 through 255 are permitted and resulting pixel clock is lcd_clk/2 through lcd_clk/255. LIDD mode: Values of 0 through 255 are permitted with resulting MCLK of lcd_clk/1 through lcd_clk/255 where both 0 and 1 result in lcd_clk/1. |
| 7-2   | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                                                             |
| 1     | auto_uflow_restart | R/W    | 0h      | 0 = On an underflow, the software has to restart the module. 1 = On an underflow, the hardware will restart on the next frame.                                                                                                                                              |
| 0     | modesel            | R/W    | 0h      | LCD Mode select. 0 = LCD Controller in LIDD Mode. 1 = LCD Controller in Raster Mode.                                                                                                                                                                                        |

## 13.5.1.3 LIDD\_CTRL Register (offset = Ch) [reset = 0h]

LIDD\_CTRL is shown in Figure 13-31 and described in Table 13-16.

## Figure 13-31. LIDD\_CTRL Register

| 31         | 30         | 29         | 28        | 27       | 26       | 25            | 24          |
|------------|------------|------------|-----------|----------|----------|---------------|-------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED  | RESERVED | RESERVED | RESERVED      | RESERVED    |
| R-0h       | R-0h       | R-0h       | R-0h      | R-0h     | R-0h     | R-0h          | R-0h        |
| 23         | 22         | 21         | 20        | 19       | 18       | 17            | 16          |
| RESERVED   | RESERVED   | RESERVED   | RESERVED  | RESERVED | RESERVED | RESERVED      | RESERVED    |
| R-0h       | R-0h       | R-0h       | R-0h      | R-0h     | R-0h     | R-0h          | R-0h        |
| 15         | 14         | 13         | 12        | 11       | 10       | 9             | 8           |
| RESERVED   | RESERVED   | RESERVED   | RESERVED  | RESERVED | RESERVED | dma_cs0_cs1   | lidd_dma_en |
| R-0h       | R-0h       | R-0h       | R-0h      | R-0h     | R-0h     | R/W-0h        | R/W-0h      |
| 7          | 6          | 5          | 4         | 3        | 2        | 1             | 0           |
| cs1_e1_pol | cs0_e0_pol | ws_dir_pol | rs_en_pol | alepol   |          | lidd_mode_sel |             |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h   |          | R/W-0h        |             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-16. LIDD\_CTRL Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                         |
| 9     | dma_cs0_cs1 | R/W    | 0h      | CS0/CS1 Select for LIDD DMA writes. 0 = DMA writes to LIDD CS0. 1 = DMA writes for LIDD CS1.                                                                                                                                                                                                                                                                                                            |
| 8     | lidd_dma_en | R/W    | 0h      | LIDD DMA Enable. 0 = Deactivate DMA control of LIDD interface. DMA control is released upon completion of transfer of the current frame of data (LIDD Frame Done) after this bit is cleared. The MPU has direct read/write access to the panel in this mode. 1 = Activate DMA to drive LIDD interface to support streaming data to smart panels. The MPU cannot access the panel directly in this mode. |
| 7     | cs1_e1_pol  | R/W    | 0h      | Chip Select 1/Enable 1 (Secondary) Polarity Control. 0 = Do Not Invert Chip Select 1/Enable 1. Chip Select 1 is active low by default. Enable 1 is active high by default. 1 = Invert Chip Select 1/Enable 1.                                                                                                                                                                                           |
| 6     | cs0_e0_pol  | R/W    | 0h      | Chip Select 0/Enable 0 (Secondary) Polarity Control. 0 = Do Not Invert Chip Select 0/Enable 0. Chip Select 0 is active low by default. Enable 0 is active high by default. 1 = Invert Chip Select 0/Enable 0.                                                                                                                                                                                           |
| 5     | ws_dir_pol  | R/W    | 0h      | Write Strobe/Direction Polarity Control. 0 = Do Not Invert Write Strobe/Direction. Write Strobe/Direction is active low/write low by default. 1 = Invert Write Strobe/Direction.                                                                                                                                                                                                                        |
| 4     | rs_en_pol   | R/W    | 0h      | Read Strobe/Direction Polarity Control. 0 = Do Not Invert Read Strobe/Direction. Read Strobe/Direction is active low/write low by default. 1 = Invert Read Strobe/Direction.                                                                                                                                                                                                                            |
| 3     | alepol      | R/W    | 0h      | Address Latch Enable (ALE) Polarity Control. 0 = Do Not Invert ALE. ALE is active low by default. 1 = Invert.                                                                                                                                                                                                                                                                                           |

<!-- image -->

<!-- image -->

## Table 13-16. LIDD\_CTRL Register Field Descriptions (continued)

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|---------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 2-0   | lidd_mode_sel | R/W    | 0h      | LIDD Mode Select. Selects type of LCD display interface for the LIDD to drive. 000b = Sync MPU68. 001b = Async MPU68. 010b = Sync MPU80. 011b = Async MPU80. 100b = Hitachi (Async). 101b = N/A. 110b = N/A. 111b = N/A. |

## 13.5.1.4 LIDD\_CS0\_CONF Register (offset = 10h) [reset = 0h]

LIDD\_CS0\_CONF is shown in Figure 13-32 and described in Table 13-17.

## Figure 13-32. LIDD\_CS0\_CONF Register

| 31   | 30 29   | 28   | 27   | 26   | 25       | 24   | 23   | 22   | 21     | 20     | 19 18   | 17     | 16      |
|------|---------|------|------|------|----------|------|------|------|--------|--------|---------|--------|---------|
|      | w_su    |      |      |      | w_strobe |      |      |      |        | w_hold |         |        | r_su    |
|      | R/W-0h  |      |      |      | R/W-0h   |      |      |      |        | R/W-0h |         |        | R/W- 0h |
| 15   | 14 13   | 12   | 11   | 10   | 9 8      | 7    | 6    | 5    | 4      | 3      | 2       | 1      | 0       |
|      | r_su    |      |      |      | r_strobe |      |      |      | r_hold |        |         | ta     |         |
|      | R/W-0h  |      |      |      | R/W-0h   |      |      |      | R/W-0h |        |         | R/W-0h |         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 13-17. LIDD\_CS0\_CONF Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-27 | w_su     | R/W    | 0h      | Write Strobe Set-Up cycles. When performing a write access, this field defines the number of memclk cycles that Data Bus/Pad Output Enable, the Direction bit, and Chip Select 0 have to be ready before the Write Strobe is asserted. The minimum value is 0x0. |
| 26-21 | w_strobe | R/W    | 0h      | Write Strobe Duration cycles. Field value defines the number of memclk cycles for which the Write Strobe is held active when performing a write access. The minimum value is 0x1.                                                                                |
| 20-17 | w_hold   | R/W    | 0h      | Write Strobe Hold cycles. Field value defines the number of memclk cycles for which Data Bus/Pas Output Enable, ALE, the Direction bit, and Chip Select 0 are held after the Write Strobe is de-asserted when performing write access. The minimum value is 0x1. |
| 16-12 | r_su     | R/W    | 0h      | Read Strobe Set-Up cycles. When performing a read access, this field defines the number of memclk cycles that Data Bus/Pad Output Enable, the Direction bit, and Chip Select 0 have to be ready before the Read Strobe is asserted.                              |
| 11-6  | r_strobe | R/W    | 0h      | Read Strobe Duration cycles. Field value defines the number of memclk cycles for which the Read Strobe is held active when performing a read access. The minimum value is 0x1.                                                                                   |
| 5-2   | r_hold   | R/W    | 0h      | Read Strobe Hold cycles. Field value defines the number of memclk cycles for which Data Bus/Pad Output Enable, the Direction bit, and Chip Select 0 are held after the Read Strobe is deasserted when performing a read access. The minimum value is 0x1.        |
| 1-0   | ta       | R/W    | 0h      | Field value defines the number of memclk (ta+1) cycles between the end of one CS0 device access and the start of another CS0 device access unless the two accesses are both Reads. In this case, this delay is not incurred. The minimum value is 0x0.           |

<!-- image -->

<!-- image -->

www.ti.com

## 13.5.1.5 LIDD\_CS0\_ADDR Register (offset = 14h) [reset = 0h]

LIDD\_CS0\_ADDR is shown in Figure 13-33 and described in Table 13-18.

## Figure 13-33. LIDD\_CS0\_ADDR Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | adr_indx                                                                              |
| R-0h                                                                                  | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-18. LIDD\_CS0\_ADDR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 15-0  | adr_indx | R/W    | 0h      | The LCD Controller supports a shared Address/Data output bus. A write to this register would initiate a bus write transaction. A read from this register would initiate a bus read transaction. CPU reads and writes to this register are not permitted if the LIDD module is in DMA mode (cfg_lidd_dma_en = 1). If the LIDD is being used as a generic bus interface, writing to this register can store adr_indx to an external transparent latch holding a 16-bit address. If the LIDD is being used to interface with a character based LCD panel in configuration mode, reading and writing to this register can be used to access the command instruction area of the panel. |

## 13.5.1.6 LIDD\_CS0\_DATA Register (offset = 18h) [reset = 0h]

LIDD\_CS0\_DATA is shown in Figure 13-34 and described in Table 13-19.

## Figure 13-34. LIDD\_CS0\_DATA Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | data                                                                                  |
| R-0h                                                                                  | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-19. LIDD\_CS0\_DATA Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 15-0  | data     | R/W    | 0h      | The LCD Controller supports a shared Address/Data output bus. A write to this register would initiate a bus write transaction. A read from this register would initiate a bus read transaction. CPU reads and writes to this register are not permitted if the LIDD module is in DMA mode (cfg_lidd_dma_en = 1). If the LIDD is being used as a generic bus interface, writing to this register can store adr_indx to an external transparent latch holding a 16-bit address. If the LIDD is being used to interface with a character based LCD panel in configuration mode, reading and writing to this register can be used to access the command instruction area of the panel. |

<!-- image -->

<!-- image -->

## 13.5.1.7 LIDD\_CS1\_CONF Register (offset = 1Ch) [reset = 0h]

LIDD\_CS1\_CONF is shown in Figure 13-35 and described in Table 13-20.

## Figure 13-35. LIDD\_CS1\_CONF Register

| 31   | 30 29   | 28   | 27   | 26   | 25       | 24   | 23   | 22   | 21     | 20     | 19 18   | 17     | 16      |
|------|---------|------|------|------|----------|------|------|------|--------|--------|---------|--------|---------|
|      | w_su    |      |      |      | w_strobe |      |      |      |        | w_hold |         |        | r_su    |
|      | R/W-0h  |      |      |      | R/W-0h   |      |      |      |        | R/W-0h |         |        | R/W- 0h |
| 15   | 14 13   | 12   | 11   | 10   | 9 8      | 7    | 6    | 5    | 4      | 3      | 2       | 1      | 0       |
|      | r_su    |      |      |      | r_strobe |      |      |      | r_hold |        |         | ta     |         |
|      | R/W-0h  |      |      |      | R/W-0h   |      |      |      | R/W-0h |        |         | R/W-0h |         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-20. LIDD\_CS1\_CONF Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-27 | w_su     | R/W    | 0h      | Write Strobe Set-Up cycles. When performing a write access, this field defines the number of memclk cycles that Data Bus/Pad Output Enable, , the Direction bit, and Chip Select 1 have to be ready before the Write Strobe is asserted. The minimum value is 0x0. |
| 26-21 | w_strobe | R/W    | 0h      | Write Strobe Duration cycles. Field value defines the number of memclk cycles for which the Write Strobe is held active when performing a write access. The minimum value is 0x1.                                                                                  |
| 20-17 | w_hold   | R/W    | 0h      | Write Strobe Hold cycles. Field value defines the number of memclk cycles for which Data Bus/Pad Output Enable, ALE, the Direction bit, and Chip Select 1 are held after the Write Strobe is deasserted when performing a write access. The minimum value is 0x1.  |
| 16-12 | r_su     | R/W    | 0h      | Read Strobe Set-Up cycles. When performing a read access, this field defines the number of memclk cycles that Data Bus/Pad Output Enable, , the Direction bit, and Chip Select 1 have to be ready before the Read Strobe is asserted. The minimum value is 0x0.    |
| 11-6  | r_strobe | R/W    | 0h      | Read Strobe Duration cycles. Field value defines the number of memclk cycles for which the Read Strobe is held active when performing a read access. The minimum value is 0x1.                                                                                     |
| 5-2   | r_hold   | R/W    | 0h      | Read Strobe Hold cycles. Field value defines the number of memclk cycles for which Data Bus/Pad Output Enable, , the Direction bit, and Chip Select 1 are held after the Read Strobe is deasserted when performing a read access. The minimum value is 0x1.        |
| 1-0   | ta       | R/W    | 0h      | Field value defines the number of memclk (ta+1) cycles between the end of one CS1 device access and the start of another CS1 device access unless the two accesses are both Reads. In this case, this delay is not incurred. The minimum value is 0x0.             |

## 13.5.1.8 LIDD\_CS1\_ADDR Register (offset = 20h) [reset = 0h]

LIDD\_CS1\_ADDR is shown in Figure 13-36 and described in Table 13-21.

## Figure 13-36. LIDD\_CS1\_ADDR Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | adr_indx                                                                              |
| R-0h                                                                                  | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-21. LIDD\_CS1\_ADDR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 15-0  | adr_indx | R/W    | 0h      | The LCD Controller supports a shared Address/Data output bus. A write to this register would initiate a bus write transaction. A read from this register would initiate a bus read transaction. CPU reads and writes to this register are not permitted if the LIDD module is in DMA mode (cfg_lidd_dma_en = 1). If the LIDD is being used as a generic bus interface, writing to this register can store adr_indx to an external transparent latch holding a 16-bit address. If the LIDD is being used to interface with a character based LCD panel in configuration mode, reading and writing to this register can be used to access the command instruction area of the panel. |

<!-- image -->

<!-- image -->

www.ti.com

## 13.5.1.9 LIDD\_CS1\_DATA Register (offset = 24h) [reset = 0h]

LIDD\_CS1\_DATA is shown in Figure 13-37 and described in Table 13-22.

## Figure 13-37. LIDD\_CS1\_DATA Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | data                                                                                  |
| R-0h                                                                                  | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-22. LIDD\_CS1\_DATA Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 15-0  | data     | R/W    | 0h      | The LCD Controller supports a shared Address/Data output bus. A write to this register would initiate a bus write transaction. A read from this register would initiate a bus read transaction. CPU reads and writes to this register are not permitted if the LIDD module is in DMA mode (cfg_lidd_dma_en = 1). If the LIDD is being used as a generic bus interface, writing to this register can store adr_indx to an external transparent latch holding a 16-bit address. If the LIDD is being used to interface with a character based LCD panel in configuration mode, reading and writing to this register can be used to access the command instruction area of the panel. |

## 13.5.1.10 RASTER\_CTRL Register (offset = 28h) [reset = 0h]

RASTER\_CTRL is shown in Figure 13-38 and described in Table 13-23.

## Figure 13-38. RASTER\_CTRL Register

| 31     | 30       | 29       | 28       | 27       | 26            | 25     | 24      | 24      | 24      |
|--------|----------|----------|----------|----------|---------------|--------|---------|---------|---------|
|        | RESERVED | RESERVED | RESERVED |          | tft24unpacked | tft24  | stn565  | stn565  | stn565  |
|        |          | R/W-0h   |          |          | R/W-0h        | R/W-0h | R/W-0h  | R/W-0h  | R/W-0h  |
| 23     | 22       | 21       | 20       | 19       | 18            | 17     | 16      | 16      | 16      |
| tftmap | nibmode  | palmode  |          |          | reqdly        | reqdly |         |         |         |
| R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   |          | R/W-0h        | R/W-0h |         |         |         |
| 15     | 14       | 13       | 12       | 11       | 10            | 9      | 8       | 8       | 8       |
| reqdly | reqdly   | reqdly   |          | RESERVED | RESERVED      | mono8b | rdorder | rdorder | rdorder |
| R/W-0h | R/W-0h   | R/W-0h   |          | R/W-0h   | R/W-0h        | R/W-0h | R/W-0h  | R/W-0h  | R/W-0h  |
| 7      | 6        | 5        | 4        | 3        | 2             | 1      | 0       | 0       | 0       |
| lcdtft | RESERVED |          |          |          |               | lcdbw  | lcden   | lcden   | lcden   |
| R/W-0h |          |          | R/W-0h   |          |               | R/W-0h | R/W-0h  | R/W-0h  | R/W-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 13-23. RASTER\_CTRL Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-27 | RESERVED      | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 26    | tft24unpacked | R/W    | 0h      | 24 bit Mode Packing. Only used when cfg_tft 24=1 and cfg_lcdtft=1. 0 = 24-bit pixels are packed into 32 bit boundaries, which means 4 pixels are saved in every three words. Word 0: pix1 [7:0], pix0 [23:0]. Word 1: pix2 [15:0], pix1 [23:8]. Word 2: pix3 [23:0], pix2 [23:16]. 1 = 24-bit pixels are stored unpacked in with the uppermost byte unused. Word 0: Unused [7:0], pix0 [23:0]. Word 1: Unused [7:0], pix1 [23:0]. Word 2: Unused [7:0], pix2 [23:0]. Word 3: Unused [7:0], pix3 [23:0]. |
| 25    | tft24         | R/W    | 0h      | 24 bit mode. 0 = off 1 = on ( 24-bit data in active mode). The format of the framebuffer data depends on cfg_tft24unpacked.                                                                                                                                                                                                                                                                                                                                                                             |

<!-- image -->

<!-- image -->

www.ti.com

Table 13-23. RASTER\_CTRL Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 24    | stn565   | R/W    | 0h      | Passive Matrix Mode only (cfg_lcdtft='0') and 16 bpp raw data framebuffers (bpp = '00'). If the bpp field in the framebuffer palette header is '00' (12/16/24 bpp source), then the DDR contains raw data and the palette lookup is bypassed. Only for this case, this bit selects whether the framebuffer format is 16 bpp 565 or 12 bpp. The Grayscaler can only take 12 bits per pixel. The framebuffer data is 16 bits per pixel 565 when stn565 is set to '1' and only the 4 most significant bits of each color component are sent to the Grayscaler input. 0 = Framebuffer is 12 bpp packed in bits [11:0].                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 23    | tftmap   | R/W    | 0h      | TFT Mode Alternate Signal Mapping for Palettized framebuffer. Must be '0' for all 12/16/24 bpp raw data formats. Can only be '1' for 1/2/4/8 bpp Palette Lookup data. Valid only in Active Matrix mode when cfg_lcdtft='1'. 0 = 4 bits per component output data for 1, 2, 4, and 8 bpp modes will be right aligned on lcd_pins ( 11:0). 1 = 4 bits per component output data for 1, 2, 4, and 8 bpp will be converted to 5,6,5, format and use pins ( 15:0) R3 R2 R1 R0 R3 G3 G2 G1 G0 G3 G2 B3 B2 B1 B0 B3                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 22    | nibmode  | R/W    | 0h      | Nibble Mode. This bit is used to determine palette indexing and is used in conjunction with cfg_rdorder. 0 = Nibble mode is disabled. 1 = Nibble mode is enabled.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 21-20 | palmode  | R/W    | 0h      | Palette Loading Mode. 00 = Palette and data loading, reset value. 01 = Palette loading only. 10 = Data loading only For Raw Data (12/16/24 bpp) framebuffers, no palette lookup is employed. Thus, these framebuffers should use the data-only loading mode.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 19-12 | reqdly   | R/W    | 0h      | Palette Loading Delay When loading the Palette from DDR, palette data is burst into the internal Palette SRAM from the Async FIFO. 1-, 2-, and 4-bit per pixel framebuffer encodings use a fixed 16-word entry palette residing above the video data. The 8 bit per pixel framebuffer encoding uses a 256-word entry palette residing above the video data. Likewise, 12, 16, and 24 bit per pixel framebuffer encodings also define a 256-word entry palette even though these encodings will not do a full bit-depth palette lookup. However, the 256-word palette entry must still be read from DDR as a framebuffer is fetched. Bursting in 256 words in sequential lcd_clk cycles may cause the Async FIFO to underflow depending on the SOC DDR burst bandwidth. This 8-bit reqdly parameter pauses reading of the Palette data from the Async FIFO between each burst of 16 words. The delay is in terms of lcd_clk (system clock) cycles. Value ( 0-255) used to specify the number of system clock cycles that should be paused between bursts of 16 word reads from the Async FIFO while loading the Palette SRAM. |
| 11-10 | RESERVED | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |

<!-- image -->

Table 13-23. RASTER\_CTRL Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 9     | mono8b   | R/W    | 0h      | Mono 8 bit. 0 = lcd_pixel_o [3:0] is used to output four pixel values to the panel each pixel clock transition. 1 = lcd_pixel_o [7:0] is used to output eight pixel values to the panel each pixel clock transition. This bit is ignored in all other modes.                                                                                                                                                                 |
| 8     | rdorder  | R/W    | 0h      | Raster Data Order Select. 0 = The frame buffer parsing for Palette Data lookup is from Bit 0 to bit 31 of the input word from the DMA output. 1 = The fame buffer parsing for Palette Data lookup is from Bit 31 to Bit 0 of the input word from the DMA output. This bit has no effect on raw data framebuffers (12/16/24 bpp). This bit is used to determine palette indexing and is used in conjunction with cfg_nibmode. |
| 7     | lcdtft   | R/W    | 0h      | 0 = Passive or display operation enabled, dither logic is enabled. 1 = Active or display operation enabled, external palette and DAC required, dither logic bypassed, pin timing changes to support continuous pixel clock, output enable, vsync, and hsync.                                                                                                                                                                 |
| 6-2   | RESERVED | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 1     | lcdbw    | R/W    | 0h      | Only Applies for Passive Matrix Panels LCD Monochrome. 0 = Color operation enabled. 1 = Monochrome operation enabled.                                                                                                                                                                                                                                                                                                        |
| 0     | lcden    | R/W    | 0h      | LCD Controller Enable. 0 = LCD controller disabled. 1 = LCD controller enabled.                                                                                                                                                                                                                                                                                                                                              |

<!-- image -->

www.ti.com

## 13.5.1.11 RASTER\_TIMING\_0 Register (offset = 2Ch) [reset = 0h]

RASTER\_TIMING\_0 is shown in Figure 13-39 and described in Table 13-24.

## Figure 13-39. RASTER\_TIMING\_0 Register

| 31     | 30     | 29     | 28     | 27     | 26       | 25       | 24       |
|--------|--------|--------|--------|--------|----------|----------|----------|
| hbp    | hbp    | hbp    | hbp    | hbp    | hbp      | hbp      | hbp      |
| R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   |
| 23     | 22     | 21     | 20     | 19     | 18       | 17       | 16       |
| hfp    | hfp    | hfp    | hfp    | hfp    | hfp      | hfp      | hfp      |
| R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   |
| 15     | 14     | 13     | 12     | 11     | 10       | 9        | 8        |
|        |        |        |        |        |          | ppllsb   | ppllsb   |
| R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   |
| 7      | 6      | 5      | 4      | 3      | 2        | 1        | 0        |
| ppllsb | ppllsb | ppllsb | ppllsb | pplmsb | RESERVED | RESERVED | RESERVED |
| R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-24. RASTER\_TIMING\_0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | hbp      | R/W    | 0h      | Horizontal Back Porch Lowbits Bits 7 to 0 of the horizontal back porch field. Encoded value (from 1-1024) used to specify the number of pixel clock periods to add to the beginning of a line transmission before the first set of pixels is output to the display (programmed value plus 1). Note that pixel clock is held in its inactive state during the beginning of the line wait period in passive display mode, and is permitted to transition in active display mode. |
| 23-16 | hfp      | R/W    | 0h      | Horizontal Front Porch Lowbits Encoded value (from 1 to 1024) used to specify the number of pixel clock periods to add to the end of a line transmission before line clock is asserted (programmed value plus 1). Note that pixel clock is held in its inactive state during the end of line wait period in passive display mode, and is permitted to transition in active display mode.                                                                                       |
| 15-10 | hsw      | R/W    | 0h      | Horizontal Sync Pulse Width Lowbits Bits 5 to 0 of the horizontal sync pulse width field. Encoded value (from 1-1024) used to specify the number of pixel clock periods to pulse the line clock at the end of each line (programmed value plus 1). Note that pixel clock is held in its inactive state during the generation of line clock in passive display mode, and is permitted to transition in active display mode.                                                     |
| 9-4   | ppllsb   | R/W    | 0h      | Pixels-per-line LSB [9:4]. Encoded LSB value (from 1-1024) used to specify the number of pixels contained within each line on the LCD display (programmed to value minus one). PPL = 11'b{pplmsb, ppllsb, 4'b1111} + 1 ex: pplmsb=1'b1, pppllsb=6'0001000 PPL = 11'b{1, 000100, 1111}+ 1 = 1104d (decimal) pixels per line. In other words, PPL = 16*({pplmsb, ppllsb}+1).                                                                                                     |
| 3     | pplmsb   | R/W    | 0h      | Pixels-per-line MSB[10]. Needed in order to support up to 2048 ppl.                                                                                                                                                                                                                                                                                                                                                                                                            |
| 2-0   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |

## 13.5.1.12 RASTER\_TIMING\_1 Register (offset = 30h) [reset = 0h]

RASTER\_TIMING\_1 is shown in Figure 13-40 and described in Table 13-25.

## Figure 13-40. RASTER\_TIMING\_1 Register

| 31 30 vbp   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 vfp   | vsw    | 6 5 4 3 2 lpp   |
|-------------|-----------------------------------------------------------------------|--------|-----------------|
| R/W-0h      | R/W-0h                                                                | R/W-0h | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-25. RASTER\_TIMING\_1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | vbp     | R/W    | 0h      | Vertical Back Porch Value (from 0-255) use to specify the number of line clock periods to add to the beginning of a frame before the first set of pixels is output to the display. Note that line clock transitions during the insertion of the extra line clock periods.                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 23-16 | vfp     | R/W    | 0h      | Vertical Front Porch Value (from 0-255) used to specify the number of line clock periods to add to the end of each frame. Note that the line clock transitions during the insertion of the extra line clock periods.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 15-10 | vsw     | R/W    | 0h      | Vertical Sync Width Pulse In active mode (lcdtft=1), encoded value (from 1-64) used to specify the number of line clock periods to set the lcd_fp pin active at the end of each frame after the (vfp) period elapses. The number of clock cycles is programmed value plus one. The frame clock is used as the VSYNC signal in active mode. In passive mode (lcdtft=0), encoded value (from 1-64) used to specify the number of extra line clock periods to insert after the vertical front porch (vfp) period has elapsed. Note that the width of lcd_fp is not affected by vsw in passive mode and line clock transitions during the insertion of the extra line clock periods (programmed value plus one). |
| 9-0   | lpp     | R/W    | 0h      | Lines Per Panel Encoded value (programmed value range of { 0:2047} represents an actual range of { 1:2048}) used to specify the number of lines per panel. It represents the total number of lines on the LCD (programmed value plus one). Bit 10 of this field is in RASTER_TIMING_2.                                                                                                                                                                                                                                                                                                                                                                                                                       |

<!-- image -->

<!-- image -->

www.ti.com

## 13.5.1.13 RASTER\_TIMING\_2 Register (offset = 34h) [reset = 0h]

RASTER\_TIMING\_2 is shown in Figure 13-41 and described in Table 13-26.

## Figure 13-41. RASTER\_TIMING\_2 Register

| 31       | 30           | 29           | 28           | 27           | 26       | 25           | 24           |
|----------|--------------|--------------|--------------|--------------|----------|--------------|--------------|
| RESERVED | hsw_highbits | hsw_highbits | hsw_highbits | hsw_highbits | lpp_b10  | phsvs_on_off | phsvs_rf     |
| R-0h     | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h   | R/W-0h       | R/W-0h       |
| 23       | 22           | 21           | 20           | 19           | 18       | 17           | 16           |
| ieo      | ipc          | ihs          | ivs          |              | acbi     | acbi         |              |
| R/W-0h   | R/W-0h       | R/W-0h       | R/W-0h       |              | R/W-0h   | R/W-0h       |              |
| 15       | 14           | 13           | 12           | 11           | 10       | 9            | 8            |
| acb      | acb          | acb          | acb          | acb          | acb      | acb          | acb          |
| R/W-0h   | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h   | R/W-0h       | R/W-0h       |
| 7        | 6            | 5            | 4            | 3            | 2        | 1            | 0            |
| RESERVED | RESERVED     | hbp_highbits | hbp_highbits | RESERVED     | RESERVED | hfp_highbits | hfp_highbits |
| R-0h     | R-0h         | R/W-0h       | R/W-0h       | R-0h         | R-0h     | R/W-0h       | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-26. RASTER\_TIMING\_2 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|--------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 30-27 | hsw_highbits | R/W    | 0h      | Bits 9 to 6 of the horizontal sync width field.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 26    | lpp_b10      | R/W    | 0h      | Lines Per Panel Bit 10. Bit 10 of the lpp field in RASTER_TIMING_1.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 25    | phsvs_on_off | R/W    | 0h      | Hsync/Vsync Pixel Clock Control On/Off. 0 = lcd_lp and lcd_fp are driven on opposite edges of pixel clock than the lcd_pixel_o. 1 = lcd_lp and lcd_fp are driven according to bit 24. Note that this bit MUST be set to '0' for Passive Matrix displays. The edge timing is fixed.                                                                                                                                                                                                                                                                                                                                              |
| 24    | phsvs_rf     | R/W    | 0h      | Program HSYNC/VSYNC Rise or Fall. 0 = lcd_lp and lcd_fp are driven on the rising edge of pixel clock (bit 25 must be set to 1). 1 = lcd_lp and lcd_fp are driven on the falling edge of pixel clock (bit 25 must be set to 1).                                                                                                                                                                                                                                                                                                                                                                                                  |
| 23    | ieo          | R/W    | 0h      | Invert Output Enable. 0 = lcd_ac pin is active high in active display mode. 1 = lcd_ac pin is active low in active display mode. Active display mode: data driven out of the LCD's data lines on programmed pixel clock edge where AC-bias is active. Note that ieo is ignored in passive display mode.                                                                                                                                                                                                                                                                                                                         |
| 22    | ipc          | R/W    | 0h      | Invert Pixel Clock. 0 = Data is driven on the LCD's data lines on the rising edge of lcd_cp. 1 = Data is driven on the LCD's data lines in the falling edge of lcd_cp. For Active Matrix output (cfg_lcdtft='1'), the Output Pixel Clock is a free running clock in that it transitions in horizontal blanking (including horizontal front porch, horizontal back porch) areas and all vertical blanking times. For Passive Matrix output (cfg_lcdtft='0'), the Output Pixel Clock on occurs when an output data value is written. It is in a return-to-zero state when cfg_ipc='0' and a return-to-one state when cfg_ipc='1'. |
| 21    | ihs          | R/W    | 0h      | Invert Hsync. 0 = lcd_lp pin is active high and inactive low. 1 = lcd_lp pin is active low and inactive high. Active and passive mode: horizontal sync pulse/line clock active between lines, after the end of line wait period                                                                                                                                                                                                                                                                                                                                                                                                 |

<!-- image -->

## Table 13-26. RASTER\_TIMING\_2 Register Field Descriptions (continued)

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                  |
|-------|--------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 20    | ivs          | R/W    | 0h      | Invert Vsync. 0 = lcd_fp pin is active high and inactive low. 1 = lcd_fp pin is active low and inactive high. Active mode: vertical sync pulse active between frames, after end of frame wait period. Passive mode: frame clock active during first line of each frame.                                                                      |
| 19-16 | acbi         | R/W    | 0h      | AC Bias Pins Transitions per Interrupt. Value (from 0 to 15) used to specify the number of AC Bias pin transitions to count before setting the line count status (lcs) bit, signaling an interrupt request. Counter frozen when lcd is set, and is restarted when lcs is cleared by software. This function is disabled when acbi = b'0000'. |
| 15-8  | acb          | R/W    | 0h      | AC Bias Pin Frequency. Value (from 0-255) used to specify the number of line clocks to count before transitioning the AC Bias pin. This pin is used to periodically invert the polarity of the power supply to prevent DC charge build-up within the display. acb = Number of line clocks/toggle of the lcd_ac pin.                          |
| 7-6   | RESERVED     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                              |
| 5-4   | hbp_highbits | R/W    | 0h      | Bits 9:8 of the horizontal back porch field.                                                                                                                                                                                                                                                                                                 |
| 3-2   | RESERVED     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                              |
| 1-0   | hfp_highbits | R/W    | 0h      | Bits 9:8 of the horizontal front porch field.                                                                                                                                                                                                                                                                                                |

<!-- image -->

www.ti.com

## 13.5.1.14 RASTER\_SUBPANEL Register (offset = 38h) [reset = 0h]

RASTER\_SUBPANEL is shown in Figure 13-42 and described in Table 13-27.

## Figure 13-42. RASTER\_SUBPANEL Register

| 31     | 30       | 29     | 28       | 27       | 26       | 25     | 24     |
|--------|----------|--------|----------|----------|----------|--------|--------|
| spen   | RESERVED | hols   | RESERVED | RESERVED | RESERVED | lppt   | lppt   |
| R/W-0h | R-0h     | R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h |
| 23     | 22       | 21     | 20       | 19       | 18       | 17     | 16     |
| lppt   | lppt     | lppt   | lppt     | lppt     | lppt     | lppt   | lppt   |
| R/W-0h | R/W-0h   | R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h |
| 15     | 14       | 13     | 12       | 11       | 10       | 9      | 8      |
| dpdlsb | dpdlsb   | dpdlsb | dpdlsb   | dpdlsb   | dpdlsb   | dpdlsb | dpdlsb |
| R/W-0h | R/W-0h   | R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h |
| 7      | 6        | 5      | 4        | 3        | 2        | 1      | 0      |
| dpdlsb | dpdlsb   | dpdlsb | dpdlsb   | dpdlsb   | dpdlsb   | dpdlsb | dpdlsb |
| R/W-0h | R/W-0h   | R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-27. RASTER\_SUBPANEL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | spen     | R/W    | 0h      | Sub Panel Enable. 0 = function disabled. 1 = sub-panel function mode enabled.                                                                                                                                                                                                                                                                                                                              |
| 30    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                            |
| 29    | hols     | R/W    | 0h      | High or Low Signal This field indicates the position of the sub-panel based on the LPPT value. 0 = Default Pixel Data lines are at the top of the screen and the active video lines are at the bottom of the screen. 1 = Active video lines are at the top of the screen and Default Pixel Data lines are at the bottom of the screen.                                                                     |
| 28-26 | RESERVED | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                            |
| 25-16 | lppt     | R/W    | 0h      | Line Per Panel Threshold Encoded value (programmed value range of { 0:2047} represents an actual range of { 1:2048}) used to specify the number of lines on the bottom part of the panel. Bit10 of this field is in RASTER_SUBPANEL2. Hols determines whether Default Pixel Data is on the top (hols=''0') or on the bottom (hols='1'). Lppt defines the number of lines on the bottom part of the output. |
| 15-0  | dpdlsb   | R/W    | 0h      | Default Pixel Data LSB [15:0] DPD defines the default value of the pixel data sent to the panel for the lines until LPPT is reach or after passing LPPT.                                                                                                                                                                                                                                                   |

## 13.5.1.15 RASTER\_SUBPANEL2 Register (offset = 3Ch) [reset = 0h]

RASTER\_SUBPANEL2 is shown in Figure 13-43 and described in Table 13-28.

## Figure 13-43. RASTER\_SUBPANEL2 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | lppt_b10 |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| dpdmsb   | dpdmsb   | dpdmsb   | dpdmsb   | dpdmsb   | dpdmsb   | dpdmsb   | dpdmsb   |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-28. RASTER\_SUBPANEL2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                     |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED | R      | 0h      |                                                                                                                                                                 |
| 8     | lppt_b10 | R/W    | 0h      | Lines Per Panel Threshold Bit 10 This register is Bit 10 of the lppt field in RASTER_SUBPANEL.                                                                  |
| 7-0   | dpdmsb   | R/W    | 0h      | Default Pixel Data MSB [23:16] DPD defines the default value of the pixel data sent to the panel for the lines until LPPT is reached or after passing the LPPT. |

<!-- image -->

<!-- image -->

www.ti.com

## 13.5.1.16 LCDDMA\_CTRL Register (offset = 40h) [reset = 0h]

LCDDMA\_CTRL is shown in Figure 13-44 and described in Table 13-29.

## Figure 13-44. LCDDMA\_CTRL Register

| 31       | 30       | 29         | 28       | 27        | 26       | 25              | 24         |
|----------|----------|------------|----------|-----------|----------|-----------------|------------|
| RESERVED | RESERVED | RESERVED   | RESERVED | RESERVED  | RESERVED | RESERVED        | RESERVED   |
| R/W-0h   | R/W-0h   | R/W-0h     | R/W-0h   | R/W-0h    | R/W-0h   | R/W-0h          | R/W-0h     |
| 23       | 22       | 21         | 20       | 19        | 18       | 17              | 16         |
|          |          | RESERVED   |          |           |          | dma_master_prio |            |
|          |          | R/W-0h     |          |           |          | R/W-0h          |            |
| 15       | 14       | 13         | 12       | 11        | 10       | 9               | 8          |
|          |          | RESERVED   |          |           |          | th_fifo_ready   |            |
|          |          | R/W-0h     |          |           |          | R/W-0h          |            |
| 7        | 6        | 5          | 4        | 3         | 2        | 1               | 0          |
| RESERVED |          | burst_size |          | byte_swap | RESERVED | bigendian       | frame_mode |
| R/W-0h   |          | R/W-0h     |          | R/W-0h    | R-0h     | R/W-0h          | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 13-29. LCDDMA\_CTRL Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|-----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED        | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 18-16 | dma_master_prio | R/W    | 0h      | Priority for the L3 OCP Master Bus. 000b = Highest priority. 111b = Lowest priority.                                                                                                                                                                                                                                                                                                                                                             |
| 15-11 | RESERVED        | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 10-8  | th_fifo_ready   | R/W    | 0h      | DMA FIFO threshold. The DMA FIFO becomes ready when the number of words specified by this register from the frame buffer have been loaded. 000b = 8. 001b = 16. 010b = 32. 011b = 64. 100b = 128. 101b = 256. 110b = 512. 111b = Reserved.                                                                                                                                                                                                       |
| 7     | RESERVED        | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 6-4   | burst_size      | R/W    | 0h      | Burst Size setting for DMA transfers (all DMA transfers are 32 bits wide). 000b = burst size of 1. 001b = burst size of 2. 010b = burst size of 4. 011b = burst size of 8. 100b = burst size of 16. 101b = N/A. 110b = N/A. 111b = N/A. burst_size cannot be changed once the DMA is enabled in LIDD or Raster modes. In this case, the DMA must be disabled and the Done Interrupt must occur before the value in this register can be changed. |
| 3     | byte_swap       | R/W    | 0h      | This bit controls the bytelane ordering of the data on the output of the DMA module. It works in conjunction with the big-endian bit. See the big-endian description for configuration guidelines.                                                                                                                                                                                                                                               |
| 2     | RESERVED        | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                  |

<!-- image -->

## Table 13-29. LCDDMA\_CTRL Register Field Descriptions (continued)

|   Bit | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | bigendian  | R/W    | 0h      | Big Endian Enable. Use this bit when the processor is operating in Big Endian mode AND writes to the frame buffer(s) are less than 32 bits wide. Only in this scenario do we need to change the byte alignment for data coming into the FIFO from the frame buffer(s). 0 = Big Endian data reordering disabled. 1 = Big Endian data reordering enabled. |
|     0 | frame_mode | R/W    | 0h      | Frame Mode. 0 = one frame buffer (FB0 only) used. 1 = two frame buffers used DMA ping-pongs between FB0 and FB1 in this mode.                                                                                                                                                                                                                           |

<!-- image -->

www.ti.com

## 13.5.1.17 LCDDMA\_FB0\_BASE Register (offset = 44h) [reset = 0h]

LCDDMA\_FB0\_BASE is shown in Figure 13-45 and described in Table 13-30.

## Figure 13-45. LCDDMA\_FB0\_BASE Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| fb0_base | fb0_base | fb0_base | fb0_base | fb0_base | fb0_base | fb0_base | fb0_base |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| fb0_base | fb0_base | fb0_base | fb0_base | fb0_base | fb0_base | fb0_base | fb0_base |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| fb0_base | fb0_base | fb0_base | fb0_base | fb0_base | fb0_base | fb0_base | fb0_base |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| fb0_base | fb0_base | fb0_base | fb0_base | fb0_base | fb0_base | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-30. LCDDMA\_FB0\_BASE Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                          |
|-------|----------|--------|---------|--------------------------------------|
| 31-2  | fb0_base | R/W    | 0h      | Frame Buffer 0 Base Address pointer. |
| 1-0   | RESERVED | R      | 0h      |                                      |

## 13.5.1.18 LCDDMA\_FB0\_CEILING Register (offset = 48h) [reset = 0h]

LCDDMA\_FB0\_CEILING is shown in Figure 13-46 and described in Table 13-31.

## Figure 13-46. LCDDMA\_FB0\_CEILING Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | fb0_ceil | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-31. LCDDMA\_FB0\_CEILING Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                             |
|-------|----------|--------|---------|-----------------------------------------|
| 31-2  | fb0_ceil | R/W    | 0h      | Frame Buffer 0 Ceiling Address pointer. |
| 1-0   | RESERVED | R      | 0h      |                                         |

<!-- image -->

<!-- image -->

www.ti.com

## 13.5.1.19 LCDDMA\_FB1\_BASE Register (offset = 4Ch) [reset = 0h]

LCDDMA\_FB1\_BASE is shown in Figure 13-47 and described in Table 13-32.

## Figure 13-47. LCDDMA\_FB1\_BASE Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| fb1_base | fb1_base | fb1_base | fb1_base | fb1_base | fb1_base | fb1_base | fb1_base |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| fb1_base | fb1_base | fb1_base | fb1_base | fb1_base | fb1_base | fb1_base | fb1_base |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| fb1_base | fb1_base | fb1_base | fb1_base | fb1_base | fb1_base | fb1_base | fb1_base |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| fb1_base | fb1_base | fb1_base | fb1_base | fb1_base | fb1_base | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-32. LCDDMA\_FB1\_BASE Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                          |
|-------|----------|--------|---------|--------------------------------------|
| 31-2  | fb1_base | R/W    | 0h      | Frame Buffer 1 Base Address pointer. |
| 1-0   | RESERVED | R      | 0h      |                                      |

## 13.5.1.20 LCDDMA\_FB1\_CEILING Register (offset = 50h) [reset = 0h]

LCDDMA\_FB1\_CEILING is shown in Figure 13-48 and described in Table 13-33.

## Figure 13-48. LCDDMA\_FB1\_CEILING Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | fb1_ceil | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-33. LCDDMA\_FB1\_CEILING Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                             |
|-------|----------|--------|---------|-----------------------------------------|
| 31-2  | fb1_ceil | R/W    | 0h      | Frame Buffer 1 Ceiling Address pointer. |
| 1-0   | RESERVED | R      | 0h      |                                         |

<!-- image -->

<!-- image -->

## 13.5.1.21 SYSCONFIG Register (offset = 54h) [reset = 0h]

SYSCONFIG is shown in Figure 15-4 and described in Table 15-7.

## Figure 13-49. SYSCONFIG Register

| 31       | 30       | 29          | 28          | 27       | 26       | 25       | 24       |
|----------|----------|-------------|-------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21          | 20          | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13          | 12          | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5           | 4           | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | standbymode | standbymode | idlemode | idlemode | RESERVED | RESERVED |
| R-0h     | R-0h     | R/W-0h      | R/W-0h      | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-34. SYSCONFIG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|-------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 5-4   | standbymode | R/W    | 0h      | Configuration of the local initiator state management mode. By definition, initiator may generate read/write transaction as long as it is out of STANDBY state. 0 = Force-standby mode: local initiator is unconditionally placed in standby state. Backup mode, for debug only. 1 = No-standby mode: local initiator is unconditionally placed out of standby state. Backup mode, for debug only. 2 = Smart-standby mode: local initiator standby status depends on local conditions, that is, the module's functional requirement from the initiator. IP module shall not generate (initiator-related) wakeup events. 3 = Reserved.                                                                       |
| 3-2   | idlemode    | R/W    | 0h      | Configuration of the local target state management mode. By definition, target can handle read/write transaction as long as it is out of IDLE state. 0 = Force-idle mode: local target's idle state follows (acknowledges) the system's idle requests unconditionally, i.e. regardless of the IP module's internal requirements. Backup mode, for debug only. 1 = No-idle mode: local target never enters idle state. Backup mode, for debug only. 2 = Smart-idle mode: local target's idle state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements. IP module shall not generate (IRQ- or DMA-request-related) wakeup events. 3 = Reserved. |
| 1-0   | RESERVED    | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |

## 13.5.1.22 IRQSTATUS\_RAW Register (offset = 58h) [reset = 0h]

IRQSTATUS\_RAW is shown in Figure 20-12 and described in Table 20-14.

## Figure 13-50. IRQSTATUS\_RAW Register

| 31       | 30         | 29          | 28       | 27          | 26           | 25                             | 24           |
|----------|------------|-------------|----------|-------------|--------------|--------------------------------|--------------|
| RESERVED | RESERVED   | RESERVED    | RESERVED | RESERVED    | RESERVED     | RESERVED                       | RESERVED     |
| R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h   | R/W-0h      | R/W-0h       | R/W-0h                         | R/W-0h       |
| 23       | 22         | 21          | 20       | 19          | 18           | 17                             | 16           |
| RESERVED | RESERVED   | RESERVED    | RESERVED | RESERVED    | RESERVED     | RESERVED                       | RESERVED     |
| R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h   | R/W-0h      | R/W-0h       | R/W-0h                         | R/W-0h       |
| 15       | 14         | 13          | 12       | 11          | 10           | 9                              | 8            |
| RESERVED | RESERVED   | RESERVED    | RESERVED | RESERVED    | RESERVED     | eof1_raw_set                   | eof0_raw_set |
| R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h   | R/W-0h      | R/W-0h       | R/W-0h                         | R/W-0h       |
| 7        | 6          | 5           | 4        | 3           | 2            | 1                              | 0            |
| RESERVED | pl_raw_set | fuf_raw_set | RESERVED | acb_raw_set | sync_raw_set | recurrent_raster _done_raw_set | done_raw_set |
| R/W-0h   | R/W-0h     | R/W-0h      | R-0h     | R/W-0h      | R/W-0h       | R/W-0h                         | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-35. IRQSTATUS\_RAW Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                     |
|-------|--------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED     | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                 |
| 9     | eof1_raw_set | R/W    | 0h      | DMA End-of-Frame 1 Raw Interrupt Status and Set Read indicates raw status. 0 = Inactive. 1 = Active. Writing 1 will set status. Writing 0 has no effect.                                                                                                                                                                        |
| 8     | eof0_raw_set | R/W    | 0h      | DMA End-of-Frame 0 Raw Interrupt Status and Set Read indicates raw status. 0 = inactive. 1 = active. Writing 1 will set status. Writing 0 has no effect.                                                                                                                                                                        |
| 7     | RESERVED     | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                 |
| 6     | pl_raw_set   | R/W    | 0h      | DMA Palette Loaded Raw Interrupt Status and Set Read indicates raw status. 0 = inactive. 1 = active. Writing 1 will set status. Writing 0 has no effect.                                                                                                                                                                        |
| 5     | fuf_raw_set  | R/W    | 0h      | DMA FIFO Underflow Raw Interrupt Status and Set LCD dithering logic not supplying data to FIFO at a sufficient rate, FIFO has completely emptied and data pin driver logic has attempted to take added data from FIFO. Read indicates raw status. 0 = Inactive. 1 = Active. Writing 1 will set status. Writing 0 has no effect. |
| 4     | RESERVED     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                 |

<!-- image -->

<!-- image -->

## Table 13-35. IRQSTATUS\_RAW Register Field Descriptions (continued)

|   Bit | Field                          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|--------------------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | acb_raw_set                    | R/W    | 0h      | For Passive Matrix Panels Only AC Bias Count Raw Interrupt Status and Set AC bias transition counter has decremented to zero, indicating that the lcd_ac_o line has transitioned the number of times which is specified by the acbi control bit-field. The counter is reloaded with the value in acbi but it is disabled until the user clears ABC. Read indicates raw status. 0 = inactive. 1 = active. Writing 1 will set status. Writing 0 has no effect. |
|     2 | sync_raw_set                   | R/W    | 0h      | Frame Synchronization Lost Raw Interrupt Status and Set Read indicates raw status. 0 = inactive. 1 = active. Writing 1 will set status. Writing 0 has no effect.                                                                                                                                                                                                                                                                                             |
|     1 | recurrent_raster_done_ra w_set | R/W    | 0h      | Raster Mode Frame Done Interrupt. Read indicates raw status. 0 = Inactive. 1 = Active. Writing 1 will set status. Writing 0 has no effect.                                                                                                                                                                                                                                                                                                                   |
|     0 | done_raw_set                   | R/W    | 0h      | Raster or LIDD Frame Done (shared, depends on whether Raster or LIDD mode enabled). Raw Interrupt Status and Set Read indicates raw status. 0 = inactive. 1 = active. Writing 1 will set status. Writing 0 has no effect.                                                                                                                                                                                                                                    |

## 13.5.1.23 IRQSTATUS Register (offset = 5Ch) [reset = 0h]

IRQSTATUS is shown in Figure 20-13 and described in Table 20-15.

## Figure 13-51. IRQSTATUS Register

| 31       | 30        | 29         | 28       | 27         | 26          | 25                            | 24          |
|----------|-----------|------------|----------|------------|-------------|-------------------------------|-------------|
| RESERVED | RESERVED  | RESERVED   | RESERVED | RESERVED   | RESERVED    | RESERVED                      | RESERVED    |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |
| 23       | 22        | 21         | 20       | 19         | 18          | 17                            | 16          |
| RESERVED | RESERVED  | RESERVED   | RESERVED | RESERVED   | RESERVED    | RESERVED                      | RESERVED    |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |
| 15       | 14        | 13         | 12       | 11         | 10          | 9                             | 8           |
| RESERVED | RESERVED  | RESERVED   | RESERVED | RESERVED   | RESERVED    | eof1_en_clr                   | eof0_en_clr |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |
| 7        | 6         | 5          | 4        | 3          | 2           | 1                             | 0           |
| RESERVED | pl_en_clr | fuf_en_clr | RESERVED | acb_en_clr | sync_en_clr | recurrent_raster _done_en_clr | done_en_clr |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 13-36. IRQSTATUS Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                             |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED    | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                         |
| 9     | eof1_en_clr | R/W    | 0h      | DMA End-of-Frame 1 Enabled Interrupt and Clear Read indicates enabled (masked) status. 0 = inactive. 1 = active. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                        |
| 8     | eof0_en_clr | R/W    | 0h      | DMA End-of-Frame 0 Enabled Interrupt and Clear Read indicates enabled (masked) status. 0 = inactive. 1 = active. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                        |
| 7     | RESERVED    | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                         |
| 6     | pl_en_clr   | R/W    | 0h      | DMA Palette Loaded Enabled Interrupt and Clear Read indicates enabled (masked) status. 0 = inactive. 1 = active. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                        |
| 5     | fuf_en_clr  | R/W    | 0h      | DMA FIFO Underflow Enabled Interrupt and Clear LCD dithering logic not supplying data to FIFO at a sufficient rate, FIFO has completely emptied and data pin driver logic has attempted to take added data from FIFO. Read indicates enabled (masked) status. 0 = inactive. 1 = active. Writing 1 will clear interrupt enable. Writing 0 has no effect. |
| 4     | RESERVED    | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                         |

<!-- image -->

<!-- image -->

## Table 13-36. IRQSTATUS Register Field Descriptions (continued)

|   Bit | Field                         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|-------------------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | acb_en_clr                    | R/W    | 0h      | For Passive Matrix Panels Only. AC Bias Count Enabled Interrupt and Clear AC bias transition counter has decremented to zero, indicating that the lcd_ac_o line has transitioned the number of times which is specified by the acbi control bit-field. The counter is reloaded with the value in acbi but it is disabled until the user clears ABC. Read indicates enabled (masked) status. 0 = inactive. 1 = active. Writing 1 will clear interrupt enable. Writing 0 has no effect. |
|     2 | sync_en_clr                   | R/W    | 0h      | Frame Synchronization Lost Enabled Interrupt and Clear Read indicates enabled status. 0 = inactive. 1 = active. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                                                                                                                                                       |
|     1 | recurrent_raster_done_en _clr | R/W    | 0h      | Raster Frame Done Interrupt. Read indicates enabled status. 0 = Inactive. 1 = Active. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                                                                                                                                                                                 |
|     0 | done_en_clr                   | R/W    | 0h      | Raster or LIDD Frame Done (shared, depends on whether Raster or LIDD mode enabled) Enabled Interrupt and Clear Read indicates enabled status. 0 = inactive. 1 = active. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                                                                                               |

## 13.5.1.24 IRQENABLE\_SET Register (offset = 60h) [reset = 0h]

IRQENABLE\_SET is shown in Figure 20-14 and described in Table 20-16.

## Figure 13-52. IRQENABLE\_SET Register

| 31       | 30        | 29         | 28       | 27         | 26          | 25                            | 24          |
|----------|-----------|------------|----------|------------|-------------|-------------------------------|-------------|
| RESERVED | RESERVED  | RESERVED   | RESERVED | RESERVED   | RESERVED    | RESERVED                      | RESERVED    |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |
| 23       | 22        | 21         | 20       | 19         | 18          | 17                            | 16          |
| RESERVED | RESERVED  | RESERVED   | RESERVED | RESERVED   | RESERVED    | RESERVED                      | RESERVED    |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |
| 15       | 14        | 13         | 12       | 11         | 10          | 9                             | 8           |
| RESERVED | RESERVED  | RESERVED   | RESERVED | RESERVED   | RESERVED    | eof1_en_set                   | eof0_en_set |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |
| 7        | 6         | 5          | 4        | 3          | 2           | 1                             | 0           |
| RESERVED | pl_en_set | fuf_en_set | RESERVED | acb_en_set | sync_en_set | recurrent_raster _done_en_set | done_en_set |
| R/W-0h   | R/W-0h    | R/W-0h     | R-0h     | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 13-37. IRQENABLE\_SET Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                   |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED    | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                               |
| 9     | eof1_en_set | R/W    | 0h      | DMA End-of-Frame 1 Interrupt Enable Set Read indicates enabled (mask) status. 0 = disabled. 1 = enabled. Writing 1 will set interrupt enable. Writing 0 has no effect.                                                                                                                                                                        |
| 8     | eof0_en_set | R/W    | 0h      | DMA End-of-Frame 0 Interrupt Enable Set Read indicates enabled (mask) status. 0 = disabled. 1 = enabled. Writing 1 will set interrupt enable. Writing 0 has no effect.                                                                                                                                                                        |
| 7     | RESERVED    | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                               |
| 6     | pl_en_set   | R/W    | 0h      | DMA Palette Loaded Interrupt Enable Set Read indicates enabled (mask) status. 0 = disabled. 1 = enabled. Writing 1 will set interrupt enable. Writing 0 has no effect.                                                                                                                                                                        |
| 5     | fuf_en_set  | R/W    | 0h      | DMA FIFO Underflow Interrupt Enable Set LCD dithering logic not supplying data to FIFO at a sufficient rate, FIFO has completely emptied and data pin driver logic has attempted to take added data from FIFO. Read indicates enabled (mask) status. 0 = disabled. 1 = enabled. Writing 1 will set interrupt enable. Writing 0 has no effect. |
| 4     | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                               |

<!-- image -->

<!-- image -->

## Table 13-37. IRQENABLE\_SET Register Field Descriptions (continued)

|   Bit | Field                         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|-------------------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | acb_en_set                    | R/W    | 0h      | For Passive Matrix Panels Only AC Bias Count Interrupt Enable Set AC bias transition counter has decremented to zero, indicating that the lcd_ac_o line has transitioned the number of times which is specified by the acbi control bit-field. The counter is reloaded with the value in acbi but it is disabled until the user clears ABC. Read indicates enabled (mask) status. 0 = disabled. 1 = enabled. Writing 1 will set interrupt enable. Writing 0 has no effect. |
|     2 | sync_en_set                   | R/W    | 0h      | Frame Synchronization Lost Interrupt Enable Set Read indicates enabled (mask) status. 0 = disabled. 1 = enabled. Writing 1 will set interrupt enable. Writing 0 has no effect.                                                                                                                                                                                                                                                                                             |
|     1 | recurrent_raster_done_en _set | R/W    | 0h      | Raster Done Interrupt Enable Set. Read indicates enabled (mask) status. 0 = Disabled. 1 = Enabled. Writing 1 will set interrupt enable. Writing 0 has no effect.                                                                                                                                                                                                                                                                                                           |
|     0 | done_en_set                   | R/W    | 0h      | Raster or LIDD Frame Done (shared, depends on whether Raster or LIDD mode enabled) Interrupt Enable Set Read indicates enabled (mask) status. 0 = disabled. 1 = enabled. Writing 1 will set interrupt enable.                                                                                                                                                                                                                                                              |

## 13.5.1.25 IRQENABLE\_CLEAR Register (offset = 64h) [reset = 0h]

IRQENABLE\_CLEAR is shown in Figure 13-53 and described in Table 13-38.

## Figure 13-53. IRQENABLE\_CLEAR Register

| 31       | 30        | 29         | 28       | 27         | 26          | 25                            | 24          |
|----------|-----------|------------|----------|------------|-------------|-------------------------------|-------------|
| RESERVED | RESERVED  | RESERVED   | RESERVED | RESERVED   | RESERVED    | RESERVED                      | RESERVED    |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |
| 23       | 22        | 21         | 20       | 19         | 18          | 17                            | 16          |
| RESERVED | RESERVED  | RESERVED   | RESERVED | RESERVED   | RESERVED    | RESERVED                      | RESERVED    |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |
| 15       | 14        | 13         | 12       | 11         | 10          | 9                             | 8           |
| RESERVED | RESERVED  | RESERVED   | RESERVED | RESERVED   | RESERVED    | eof1_en_clr                   | eof0_en_clr |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |
| 7        | 6         | 5          | 4        | 3          | 2           | 1                             | 0           |
| RESERVED | pl_en_clr | fuf_en_clr | RESERVED | acb_en_clr | sync_en_clr | recurrent_raster _done_en_clr | done_en_clr |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h      | R/W-0h                        | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-38. IRQENABLE\_CLEAR Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                 |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED    | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                             |
| 9     | eof1_en_clr | R/W    | 0h      | DMA End-of-Frame 1 Interrupt Enable Clear. Read indicates enabled status. 0 = disabled. 1 = enabled. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                        |
| 8     | eof0_en_clr | R/W    | 0h      | DMA End-of-Frame 0 Interrupt Enable Clear. Read indicates enabled status. 0 = disabled. 1 = enabled. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                        |
| 7     | RESERVED    | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                             |
| 6     | pl_en_clr   | R/W    | 0h      | DMA Palette Loaded Interrupt Enable Clear. Read indicates enabled status. 0 = disabled. 1 = enabled. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                        |
| 5     | fuf_en_clr  | R/W    | 0h      | DMA FIFO Underflow Interrupt Enable Clear. LCD dithering logic not supplying data to FIFO at a sufficient rate, FIFO has completely emptied and data pin driver logic has attempted to take added data from FIFO. Read indicates enabled status. 0 = disabled. 1 = enabled. Writing 1 will clear interrupt enable. Writing 0 has no effect. |
| 4     | RESERVED    | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                             |

<!-- image -->

<!-- image -->

## Table 13-38. IRQENABLE\_CLEAR Register Field Descriptions (continued)

|   Bit | Field                         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|-------------------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | acb_en_clr                    | R/W    | 0h      | For Passive Matrix Panels Only. AC Bias Count Interrupt Enable Clear AC bias transition counter has decremented to zero, indicating that the lcd_ac_o line has transitioned the number of times which is specified by the acbi control bit-field. The counter is reloaded with the value in acbi but it is disabled until the user clears ABC. Read indicates enabled status. 0 = disabled. 1 = enabled. Writing 1 will clear interrupt enable. Writing 0 has no effect. |
|     2 | sync_en_clr                   | R/W    | 0h      | Frame Synchronization Lost Interrupt Enable Clear Read indicates enabled status. 0 = disabled. 1 = enabled. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                                                                                                                                              |
|     1 | recurrent_raster_done_en _clr | R/W    | 0h      | Raster Done Interrupt Enable Clear. Read indicates enabled status. 0 = Disabled. 1 = Enabled. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                                                                                                                                                            |
|     0 | done_en_clr                   | R/W    | 0h      | Raster or LIDD Frame Done (shared, depends on whether Raster or LIDD mode enabled) Interrupt Enable Clear. Read indicates enabled status. 0 = disabled. 1 = enabled. Writing 1 will clear interrupt enable. Writing 0 has no effect.                                                                                                                                                                                                                                     |

## 13.5.1.26 CLKC\_ENABLE Register (offset = 6Ch) [reset = 0h]

CLKC\_ENABLE is shown in Figure 13-54 and described in Table 13-39.

## Figure 13-54. CLKC\_ENABLE Register

| 31       | 30       | 29       | 28       | 27       | 26         | 25          | 24          |
|----------|----------|----------|----------|----------|------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h        | R-0h        |
| 23       | 22       | 21       | 20       | 19       | 18         | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11       | 10         | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h        | R-0h        |
| 7        | 6        | 5        | 4        | 3        | 2          | 1           | 0           |
|          |          | RESERVED |          |          | dma_clk_en | lidd_clk_en | core_clk_en |
|          |          | R-0h     |          |          | R/W-0h     | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-39. CLKC\_ENABLE Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                  |
|-------|-------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | RESERVED    | R      | 0h      |                                                                                                                                                              |
| 2     | dma_clk_en  | R/W    | 0h      | Software Clock Enable for the DMA submodule. The DMA submodule runs on the L3 Clock domain.                                                                  |
| 1     | lidd_clk_en | R/W    | 0h      | Software Clock Enable for the LIDD submodule (character displays). The LIDD submodule runs on the System Clock (lcd_clk) domain                              |
| 0     | core_clk_en | R/W    | 0h      | Software Clock Enable for the Core, which encompasses the Raster Active Matrix and Passive Matrix logic. The Core runs on the System Clock (lcd_clk) domain. |

<!-- image -->

<!-- image -->

www.ti.com

## 13.5.1.27 CLKC\_RESET Register (offset = 70h) [reset = 0h]

CLKC\_RESET is shown in Figure 13-55 and described in Table 13-40.

## Figure 13-55. CLKC\_RESET Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          | RESERVED |          |          | main_rst | dma_rst  | lidd_rst | core_rst |
|          | R/W-0h   |          |          | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 13-40. CLKC\_RESET Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                            |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED | R/W    | 0h      |                                                                                                                                        |
| 3     | main_rst | R/W    | 0h      | Software Reset for the entire LCD module. 1 = Reset Enable. 0 = Reset Disable.                                                         |
| 2     | dma_rst  | R/W    | 0h      | Software Reset for the DMA submodule. 1 = Reset Enable. 0 = Reset Disable.                                                             |
| 1     | lidd_rst | R/W    | 0h      | Software Reset for the LIDD submodule (character displays). 1 = Reset Enable. 0 = Reset Disable.                                       |
| 0     | core_rst | R/W    | 0h      | Software Reset for the Core, which encompasses the Raster Active Matrix and Passive Matrix logic. 1 = Reset Enable. 0 = Reset Disable. |