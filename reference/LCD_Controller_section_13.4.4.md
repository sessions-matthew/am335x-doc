<!-- image -->

www.ti.com

## 13.4.2 Active Matrix Displays

## 13.4.2.1 Interfacing to Dual LVDS Transmitters

The pixel clock rate for HD-sized pictures is approximately 148.5 MHz. At this speed, the LVDS link requires a double-wide data bus for transferring the even and odd pixels at half the pixel rate. The LCD Controller outputs one pixel per pixel clock cycle. Some LVDS transmitters accept a high speed, single pixel input and output to dual LVDS drivers, in which case external glue logic is unnecessary. For those LVDS transmitters that require the even and odd pixel to enter the LVDS transmitter at half the pixel clock rate, external logic is required.

## 13.4.3 System Interaction

## 13.4.3.1 DMA End of Frame Interrupts

The LCD module works with the DMA such that data is fetched from DDR and sent to a FIFO memory. The DMA module does this fetching independently of the logic on the output side of the FIFO.

For LIDD mode DMA, the module fetches frame buffer 0. When the last word of frame buffer 0 is stored in the FIFO memory, the Eof0 interrupt is triggered (if cfg\_eof\_inten='1') and the DMA stops. The CPU has to set cfg\_lidd\_dma\_en='0', followed by a cfg\_lidd\_dma\_en='1', before the next burst from frame buffer 0 is read from DDR.

For Raster mode DMA, the module fetches frame buffer 0. When the last word of frame buffer 0 is stored in the FIFO memory, the Eof0 interrupt is triggered (if cfg\_eof\_inten='1') but the DMA does not stop. The DMA module ping pongs immediately to frame buffer 1 if cfg\_frame\_mode='1'. Otherwise, the DMA fetches the frame buffer 0 address range from DDR. When the DMA module fetches frame buffer 1, and the last word of frame buffer 1 is stored in the FIFO memory, the Eof1 interrupt is triggered (if cfg\_eof\_inten='1'). This pattern would repeat.

## 13.4.4 Palette Lookup

For Active Matrix and Passive Matrix modes, the 12-bit Palette RAM Lookup can be used. For Active Matrix (cfg\_lcdtft = '1'), palette lookup is enabled when cfg\_tft24 = '0' and the bpp field in the Palette RAM is set to '000,' '001,' '010,' or '011' (1, 2, 4, or 8 bpp). Palette lookup cannot used when the bpp field is set to '100' (12/16 bpp).

For Passive Matrix (cfg\_lcdtft = '0'), palette lookup is enabled when the bpp field in the Palette RAM is set to '000,' '001,' '010,' or '011' (1, 2, 4, or 8 bpp). Palette lookup cannot be used when the bpp field is set to '100' (12/16 bpp).

Palette lookup scenarios are illustrated in Figure 13-28.

When the bpp encoding is set to 1 bpp, each bit in a 16-bit frame buffer halfword is used to index the two bottom locations of the palette RAM. Suppose the frame buffer bit value is '0', this '0' indicates that the address 0 entry in the Palette RAM should be read. If the frame buffer bit value is '1,' the address 1 entry in the Palette RAM is used. The resulting 12-bit output from the Palette RAM is the quantized pixel value of a 4-bit per color component quantized pixel value.

When the bpp encoding is set to 2 bpp, every two bits in a 16 bit frame buffer halfword is used to index the bottom 4 locations of the palette RAM. Suppose the frame buffer bit value is '00.' This '00' indicates that the address 0 entry in the Palette RAM should be read. If the frame buffer bit value is '01,' the address 1 entry in the Palette RAM is used. When the frame buffer bit value is '10,' the address 2 entry in the Palette RAM is read. Finally, if the frame buffer bit value is '11,' the address 3 entry in the Palette RAM is read. The resulting 12 bit output from the Palette RAM is the quantized pixel value of the 4 bit per color component.

The 4 bpp encoding allows every four bits from a frame buffer halfword to address 16 entries in the Palette RAM.

The 8 bpp encoding enables every byte from a frame buffer halfword to address one of the 256 entries in the Palette RAM.

<!-- image -->

Figure 13-28. Palette Lookup Examples

<!-- image -->

A 16-bit halfword is read from the DDR frame buffer. This halfword can be byte lane and halfword swapped using the DMA configuration values cfg\_byte\_swap and cfg\_bigendian. This section will deal with the frame buffer data as it is returned post swapped from the DMA module.

The DMA module actually outputs a 32-bit word. The Palette Lookup logic uses the lower halfword first, followed by the upper halfword. The cfg\_rdorder and cfg\_nibmode registers determine the raster read ordering of the frame buffer data to be sent to the palette lookup table.

There are precedence rules for the hardware as it parses each 16-bit word from the frame buffer.

1. If cfg\_rdorder = '0', the data halfword is parsed from the least significant bit to the most significant bit.
2. Else, if cfg\_nibmode = '1', the data halfword is parsed byte swapped with the scan order going from the most significant bit of each byte to the least significant bit of each byte.
3. Otherwise, the data halfword is parsed from the most significant bit to the least significant bit.

The bitwise scan order for each halfword fetched from the frame buffer is shown in the following lists. The bitfields returned are used to determine the addressing of the Palette RAM.