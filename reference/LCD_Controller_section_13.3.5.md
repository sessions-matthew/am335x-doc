<!-- image -->

www.ti.com

- The IRQSTATUS register collects the interrupt status information for all enabled interrupts. Any interrupt source not enabled in the IRQENABLE\_SET register is masked out.

## 13.3.4.1.1 LIDD Mode

When operating in LIDD mode, the DMA engine generates one interrupt signal every time the specified frame buffer has been transferred completely.

- The DONE bit in the LIDD\_CTRL register specifies if the interrupt signal is delivered to the system interrupt controller, which in turn may or may not generate an interrupt to CPU.
- The EOF1, EOF0, and DONE bits in the IRQSTATUS\_RAW register reflect the interrupt signal, regardless of being delivered to the system interrupt controller or not.

## 13.3.4.1.2 Raster Mode

When operating in Raster mode, the DMA engine can generate the interrupts in the following scenarios:

1. Output FIFO under-run . This occurs when the DMA engine cannot keep up with the data rate consumed by the LCD (which is determined by the LCD\_PCLK.) This is likely due to a system memory throughput issue or an incorrect LCD\_PCLK setting. The FUF bit in IRQSTATUS\_RAW is set when this error occurs. This bit is cleared by writing a 1 to the FUF bit in the IRQSTATUS register.
2. Frame synchronization lost . This error happens when the DMA engine attempts to read what it believes to be the first word of the video buffer but it cannot be recognized as such. This could be caused by an invalid frame buffer address or an invalid BPP value (for more details, see Section 13.3.6.2). The SYNC bit in the IRQSTATUS\_RAW register is set when such an error is detected. This bit is cleared by writing a 1 to the SYNC bit in the IRQSTATUS register.
3. Palette loaded . When using palette-only or palette+data modes, the PL bit in the IRQSTATUS\_RAW register will be set when the palette portion of a DMA transfer has been loaded into palette RAM. This interrupt can be cleared by writing a '1' to the PL bit in the IRQSTATUS register.
4. AC bias transition . If the ACB\_I bit in the RASTER\_TIMING\_2 register is programmed with a nonzero value, an internal counter will be loaded with this value and starts to decrement each time LCD\_AC\_BIAS\_EN (AC-bias signal) switches its state. When the counter reaches zero, the ACB bit in the IRQSTATUS\_RAW register is set, which will deliver an interrupt signal to the system interrupt controller (if the interrupt is enabled.) The counter reloads the value in field ACB\_I, but does not start to decrement until the ACB bit is cleared by writing 1 to this bit in the IRQSTATUS register.
5. Frame transfer completed . When one frame of data is transferred completely, the DONE bit in the IRQSTATUS\_RAW register is set. Note that the EOF0 and EOF1 bits in the IRQSTATUS\_RAW register will be set accordingly. This bit is cleared by writing a 1 to the corresponding interrupt in the IRQSTATUS register.

Note that the interrupt enable bits are in the IRQENABLE\_SET register. The corresponding enable bit must be set in order to generate an interrupt to the CPU. However, the IRQSTATUS\_RAW register reflects the interrupt signal regardless of the interrupt enable bits settings.

## 13.3.4.1.3 Interrupt Handling

See Chapter 6, Interrupts , for information about LCD interrupt number to CPU. The interrupt service routine needs to determine the interrupt source by examining the IRQSTATUS\_RAW register and clearing the interrupt properly.

## 13.3.5 LIDD Controller

The LIDD Controller is designed to support LCD panels with a memory-mapped interface. The types of displays range from low-end character monochrome LCD panels to high-end TFT smart LCD panels.

LIDD mode (and the use of this logic) is enabled by clearing the MODESEL bit in the LCD control register (LCD\_CTRL).

LIDD Controller operation is summarized as follows:

- During initialization, the LCD LIDD CS0/CS1 configuration registers (LIDD\_CS0\_CONF and LIDD\_CS1\_CONF) are configured to match the requirements of the LCD panel being used.

<!-- image -->

- During normal operation, the CPU writes display data to the LCD data registers (LIDD\_CS0\_DATA and LIDD\_CS1\_DATA). The LIDD interface converts the CPU write into the proper signal transition sequence for the display, as programmed earlier. Note that the first CPU write should send the beginning address of the update to the LCD panel and the subsequent writes update data at display locations starting from the first address and continuing sequentially. Note that DMA may be used instead of CPU.
- The LIDD Controller is also capable of reading back status or data from the LCD panel, if the latter has this capability. This is set up and activated in a similar manner to the write function described above.

NOTE:

If an LCD panel is not used, this interface can be used to control any MCU-like peripheral.

See your device-specific data manual to check the LIDD features supported by the LCD controller.

Table 13-6 describes how the signals are used to interface external LCD modules, which are configured by the LIDD\_CTRL register.

Table 13-6. LIDD I/O Name Map

| Display Type                    | Interface Type   | Data Bits   | LIDD_CTRL [2:0]   | I/O Name       | Display I/O Name   | Comment                                  |
|---------------------------------|------------------|-------------|-------------------|----------------|--------------------|------------------------------------------|
| Character Display               | HD44780 Type     | 4           | 100               | LCD_DATA[7:4]  | DATA[7:4]          | Data Bus (length defined by Instruction) |
|                                 |                  |             |                   | LCD_AC_BIAS_EN | E (or E0)          | Enable Strobe (first display)            |
|                                 |                  |             |                   | LCD_HSYNC      | R/W                | Read/Write                               |
|                                 |                  |             |                   | LCD_VSYNC      | RS                 | Register Select (Data/not Instruction)   |
|                                 |                  |             |                   | LCD_MCLK       | E1                 | Enable Strobe (second display optional)  |
| Character Display               | HD44780 Type     | 8           | 100               | LCD_DATA[7:0]  | DATA[7:0]          | Data Bus (length defined by Instruction) |
|                                 |                  |             |                   | LCD_AC_BIAS_EN | E (or E0)          | Enable Strobe (first display)            |
|                                 |                  |             |                   | LCD_HSYNC      | R/W                | Read/Write                               |
|                                 |                  |             |                   | LCD_MCLK       | E1                 | Instruction) Enable Strobe (second       |
|                                 |                  |             |                   |                |                    | display optional)                        |
| Micro Interface Graphic Display | 6800 Family      | Up to 16    | 001               | LCD_DATA[15:0] | DATA[7:0]          | Data Bus (16 bits always available)      |
|                                 |                  |             |                   | LCD_PCLK       | E                  | Enable Clock                             |
|                                 |                  |             |                   | LCD_HSYNC      | R/W                | Read/Write                               |
|                                 |                  |             |                   | LCD_VSYNC      | A0                 | Address/Data Select                      |
|                                 |                  |             |                   | LCD_AC_BIAS_EN | CS (or CS0)        | Chip Select (first display)              |
|                                 |                  |             |                   | LCD_MCLK       | CS1                | Chip Select (second display optional)    |
|                                 |                  |             | 000               | LCD_MCLK       | None               | Synchronous Clock (optional)             |
| Micro Interface Graphic Display | 8080 Family      | Up to 16    | 011               | LCD_DATA[15:0] | DATA[7:0]          | Data Bus (16 bits always available)      |
|                                 |                  |             |                   | LCD_PCLK       | RD                 | Read Strobe                              |
|                                 |                  |             |                   | LCD_HSYNC      | WR                 | Write Strobe                             |
|                                 |                  |             |                   | LCD_VSYNC      | A0                 | Address/Data Select                      |
|                                 |                  |             |                   | LCD_AC_BIAS_EN | CS (or CS0)        | Chip Select (first display)              |
|                                 |                  |             |                   | LCD_MCLK       | CS1                | Chip Select (second display optional)    |
|                                 |                  |             | 010               | LCD_MCLK       | None               | Synchronous Clock (optional)             |

<!-- image -->

The timing parameters are defined by the LIDD\_CS0\_CONF and LIDD\_CS1\_CONF registers, which are described in and .

The timing configuration is based on an internal reference clock, MCLK. The MCLK is generated out of LCD\_CLK, which is determined by the CLKDIV bit in the LCD\_CTRL register.

<!-- formula-not-decoded -->

<!-- formula-not-decoded -->

See your device-specific data manual for the timing configurations supported by the LCD controller.

## 13.3.5.1 LIDD Controller Timing

Figure 13-4. LIDD Mode HD44780 Write Timing Diagram

<!-- image -->

Figure 13-5. LIDD Mode HD44780 Read Timing Diagram

<!-- image -->

Figure 13-6. LIDD Mode 6800 Write Timing Diagram

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

Figure 13-7. LIDD Mode 6800 Read Timing Diagram

<!-- image -->

Figure 13-8. LIDD Mode 6800 Status Timing Diagram

<!-- image -->

Figure 13-9. LIDD Mode 8080 Write Timing Diagram

<!-- image -->

Figure 13-10. LIDD Mode 8080 Read Timing Diagram

<!-- image -->

Figure 13-11. LIDD Mode 8080 Status Timing Diagram

<!-- image -->

<!-- image -->