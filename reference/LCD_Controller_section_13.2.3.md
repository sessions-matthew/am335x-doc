## 13.2.2 LCD Controller Clock and Reset Management

The LCDC module uses the following functional and OCP interface clocks. The L4 Slave interface runs at half the frequency of the L3 Master interface but uses the same clock. The clock is divided within the LCDC through the l4\_clkdiv input using the pd\_per\_lcd\_l4s\_gclk\_ien signal from the PRCM. The functional clock comes from the Display PLL. When the Display PLL is in bypass mode, its output is sourced by either CORE\_CLKOUTM6 or PER\_CLKOUTM2.

Table 13-2. LCD Controller Clock Signals

| Clock Signal                  | Max Freq   | Reference / Source                  | Comments                     |
|-------------------------------|------------|-------------------------------------|------------------------------|
| l3_clk Master Interface Clock | 200 MHz    | CORE_CLKOUTM4                       | pd_per_lcd_l3_gclk From PRCM |
| l4_clk Slave Interface Clock  | 100 MHz    | CORE_CLKOUTM4 (divided within LCDC) | pd_per_lcd_l3_gclk From PRCM |
| lcd_clk Functional Clock      | 200 MHz    | Display PLL CLKOUT                  | pd_per_lcd_gclk From PRCM    |

## 13.2.3 LCD Controller Pin List

The LCD Controller external interface signals are shown in Table 13-3.

Table 13-3. LCD Controller Pin List

| Pin               | Type   | Description                                                                                                        |
|-------------------|--------|--------------------------------------------------------------------------------------------------------------------|
| lcd_cp            | O      | Pixel Clock in Raster model Read Strobe or Read/Write Strobe in LIDD mode                                          |
| lcd_pixel_i[15:0] | I      | LCD Data Bus input (for LIDD mode only)                                                                            |
| lcd_pixel_o[23:0] | O      | LCD Data Bus output                                                                                                |
| lcd_lp            | O      | Line Clock or HSYNC in Raster mode; Write Strobe or Direction bit in LIDD mode                                     |
| lcd_fp            | O      | Frame Clock or VSYNC in Raster mode; Address Latch Enable in LIDD mode                                             |
| lcd_ac            | O      | AC bias or Latch Enable in Raster mode; Primary Chip Select/Primary Enable in LIDD MPU/Hitachi mode                |
| lcd_mclk          | O      | N/A in Raster mode; Memory Clock/Secondary chip Select/Secondary Enable in LIDD Synchronous/Async MPU/Hitachi mode |

<!-- image -->