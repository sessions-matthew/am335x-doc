<!-- image -->

www.ti.com

## 13.3.6 Raster Controller

Raster mode (and the use of this logic) is enabled by setting the MODESEL bit in the LCD control register (LCD\_CTRL). Table 13-7 shows the active external signals when this mode is active.

Table 13-7. Operation Modes Supported by Raster Controller

| Interface                |   Data Bus Width | Register Bits RASTER_CTRL[9, 7, 1]   | Signal Name                                                         | Description                                                                                           |
|--------------------------|------------------|--------------------------------------|---------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------|
| Passive (STN) Mono 4-bit |                4 | 001                                  | LCD_DATA[3:0] LCD_PCLK LCD_HSYNC                                    | Data bus Pixel clock Horizontal clock(Line Clock)                                                     |
| Passive (STN) Mono 8-bit |                8 | 101                                  | LCD_DATA[7:0] LCD_PCLK LCD_HSYNC LCD_VSYNC LCD_AC_BIAS_EN LCD_MCLK  | Data bus Pixel clock Horizontal clock(Line Clock) Vertical clock (Frame Clock) AC Bias Not used       |
| Passive (STN) Color      |                8 | 100                                  | LCD_DATA[7:0] LCD_PCLK LCD_HSYNC LCD_VSYNC LCD_AC_BIAS_EN           | Data bus Pixel clock Horizontal clock(Line Clock) Vertical clock (Frame Clock) AC Bias                |
| Active (TFT) Color       |               16 | x10                                  | LCD_MCLK LCD_DATA[15:0] LCD_PCLK LCD_HSYNC LCD_VSYNC LCD_AC_BIAS_EN | Not used Data bus Pixel clock Horizontal clock(Line Clock) Vertical clock (Frame Clock) Output enable |

## 13.3.6.1 Logical Data Path

The block diagram of the Raster Controller is shown in Figure 13-1. Figure 13-12 illustrates its logical data path for various operation modes (passive (STN) versus active (TFT), various BPP size).

## Figure 13-12 shows that:

- The gray-scaler/serializer and output FIFO blocks are bypassed in active (TFT) modes.
- The palette is bypassed in both 12- and 16-BPP modes.

Figure 13-12. Logical Data Path for Raster Controller

<!-- image -->

## In summary:

- The display image is stored in frame buffers.
- The built-in DMA engine constantly transfers the data stored in the frame buffers to the Input FIFO.
- The Raster Controller relays data to the external pins according to the specified format.

The remainder of this section describes the functioning blocks in Figure 13-12, including frame buffers, palette, and gray-scaler/serializer. Their operation and programming techniques are covered in detail. The output format is also described in Section 13.3.6.5.

<!-- image -->

<!-- image -->

www.ti.com

## 13.3.6.2 Frame Buffer

A frame buffer is a contiguous memory block, storing enough data to fill a full LCD screen. For this device, external memory needs to be used for the frame buffer. For specific details on which external memory interface (EMIF) controller can be accessed by the LCD controller, see your device-specific data manual. The data in the frame buffer consists of pixel values as well as a look-up palette. Figure 13-13 shows the frame buffer structure.

Figure 13-13. Frame Buffer Structure

## 1, 2, 4, 12, 16, 24 BPP Modes

Palette

32 bytes

Palette

512 bytes

x bytes

Pixel Data

x bytes

Pixel Data

## 8 BPP Mode

## NOTE:

- 8-BPP mode uses the first 512 bytes in the frame buffer as the palette while the other modes use 32 bytes.
- 12-, 16-, and 24-BPP modes do not need a palette; i.e., the pixel data is the desired RGB value. However, the first 32 bytes are still considered a palette. The first entry should be 4000h (bit 14 is 1) while the remaining entries must be filled with 0. (For details, see Table 13-8.)
- Each entry in a palette occupies 2 bytes. As a result, 8-BPP mode palette has 256 color entries while the other palettes have up to 16 color entries.
- 4-BPP mode uses up the all the 16 entries in a palette.
- 1-BPP mode uses the first 2 entries in a palette while 2-BPP mode uses the first 4 entries. The remaining entries are not used and must be filled with 0.
- In 12- and 16-BPP modes, pixel data is RGB data. For all the other modes, pixel data is actually an index of the palette entry.

1941

LCD Controller

<!-- image -->

Table 13-8. Bits-Per-Pixel Encoding for Palette Entry 0 Buffer

| Bit   | Name   | Value   | Description (1) (2) (3)                                                                                                                                                                                                                                                 |
|-------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 14-12 | BPP    |         | Bits-per-pixel.                                                                                                                                                                                                                                                         |
|       |        | 000     | 1 BPP                                                                                                                                                                                                                                                                   |
|       |        | 001     | 2 BPP                                                                                                                                                                                                                                                                   |
|       |        | 010     | 4 BPP                                                                                                                                                                                                                                                                   |
|       |        | 011     | 8 BPP                                                                                                                                                                                                                                                                   |
|       |        | 1xx     | 12 BPP in passive mode (TFT_STN = 0 and STN_565 = 0 in RASTER_CTRL) 16 BPP in passive mode (TFT_STN = 0 and STN_565 = 1 in RASTER_CTRL) 16 BPP in active mode (LCDTFT = 1 and TFT24 = 0 in RASTER_CTRL) 24 BPP in active mode (LCDTFT = 1 and TFT24 = 1 in RASTER_CTRL) |

(1) Eight 1-bit pixels, four 2-bit pixels, and two 4-bit pixels are packed into each byte, and 12-bit pixels are right justified on (16-bit) word boundaries (in the same format as palette entry).

(2) For STN565, see the 16 BPP STN mode bit ().

(3) For Raw Data (12/16/24 bpp) framebuffers, no Palette lookup is employed therefore PALMODE = 0x10 in RASTER\_CTRL.

The equations shown in Table 13-9 are used to calculate the total frame buffer size (in bytes) based on varying pixel size encoding and screen sizes.

Figure 13-14 and Figure 13-15 show more detail of the palette entry organization.

Table 13-9. Frame Buffer Size According to BPP

| BPP   | Frame Buffer Size          |
|-------|----------------------------|
| 1     | 32 + (Lines × Columns)/8   |
| 2     | 32 + (Lines × Columns)/4   |
| 4     | 32 + (Lines × Columns)/2   |
| 8     | 512 + (Lines × Columns)    |
| 12/16 | 32 + 2 × (Lines × Columns) |

<!-- image -->

www.ti.com

<!-- image -->

| Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   |
|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|
| 15 Bit                     | 15 Bit                     | 14                         | 13                         | 12                         | 11                         | 10                         | 9                          | 8                          |                            | 7                          | 6                          | 5                          | 4                          | 3                          | 2                          | 1                          | 0                          |
| Color                      | Unused BPP (A)             | Unused BPP (A)             | Unused BPP (A)             | Unused BPP (A)             | Red (R)                    | Red (R)                    | Red (R)                    | Red (R)                    | Red (R)                    | Green (G)                  | Green (G)                  | Green (G)                  | Green (G)                  | Blue (B)                   | Blue (B)                   | Blue (B)                   | Blue (B)                   |
| Bit 15                     | Bit 15                     | 14                         | 13                         | 12                         | 11                         | 10                         | 9                          | 8                          | 7                          | 6                          | 5                          |                            | 4                          | 3                          | 2                          | 1                          | 0                          |
| Mono                       | Unused BPP (A)             | Unused BPP (A)             | Unused BPP (A)             | Unused BPP (A)             | Unused                     | Unused                     | Unused                     | Unused                     | Unused                     | Unused                     | Unused                     | Unused                     | Unused                     | Mono (M)                   | Mono (M)                   | Mono (M)                   | Mono (M)                   |

Figure 13-14. 16-Entry Palette/Buffer Format (1, 2, 4, 12, 16 BPP)

<!-- image -->

| Bit        | 16-Entry Palette Buffer 15   | 0   |
|------------|------------------------------|-----|
| Base + 0   | Palette Entry 0              |     |
| Base + 2   | Palette Entry 1              |     |
| . .        | .                            |     |
|            | .                            |     |
| .          | .                            |     |
| Base + 1Ch | Palette Entry 14             |     |
| Base + 1Eh | Palette Entry 15             |     |

A. Bits-per-pixels (BPP) is only contained within the first palette entry (palette entry 0).

<!-- image -->

## Figure 13-15. 256-Entry Palette/Buffer Format (8 BPP)

<!-- image -->

| Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   | Individual Palette Entry   |
|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|
| 15 Bit                     | 15 Bit                     | 14                         | 13                         |                            | 12                         | 11                         | 10                         | 9                          | 8                          | 7                          | 6                          | 5                          | 4                          | 3                          | 2                          | 1                          | 0                          |
| Unused Color               | Unused Color               | BPP (A)                    | BPP (A)                    | BPP (A)                    | BPP (A)                    | Red (R)                    | Red (R)                    | Red (R)                    | Red (R)                    | Green (G)                  | Green (G)                  | Green (G)                  | Green (G)                  | Green (G)                  | Blue (B)                   | Blue (B)                   | Blue (B)                   |
| Bit                        | Bit                        | 15                         | 14                         | 13                         | 12                         | 11                         | 10                         | 9                          | 8                          | 7                          | 6                          | 5                          | 4                          | 3                          | 2                          | 1                          | 0                          |
| Mono                       | Unused BPP (A)             | Unused BPP (A)             | Unused BPP (A)             | Unused BPP (A)             | Unused BPP (A)             | Unused                     | Unused                     | Unused                     | Unused                     | Unused                     | Unused                     | Unused                     | Unused                     | Unused                     | Mono (M)                   | Mono (M)                   | Mono (M)                   |

<!-- image -->

Bits 12, 13, and 14 of the first palette entry select the number of bits-per-pixel to be used in the following frame and thus the number of palette RAM entries. The palette entry is used by the Raster Controller to correctly unpack pixel data.

Figure 13-16 through Figure 13-21 show the memory organization within the frame buffer for each pixel encoding size.

<!-- image -->

Figure 13-16. 16-BPP Data Memory Organization (TFT Mode Only)-Little Endian

<!-- image -->

<!-- image -->

www.ti.com

## Figure 13-17. 12-BPP Data Memory Organization-Little Endian

<!-- image -->

Bit 15

Base

Base + 2

Unused [15-12] bits are filled with zeroes in TFT mode.

## Figure 13-18. 8-BPP Data Memory Organization

<!-- image -->

Bit

Base

Base + 1

Base + 2

Pixel 0

Pixel 1

Pixel 2

## Figure 13-19. 4-BPP Data Memory Organization

<!-- image -->

<!-- image -->

7

0

0

Pixel 0

Pixel 1

## 13.3.6.3 Palette

As explained in the previous section, the pixel data is an index of palette entry (when palette is used). The number of colors supported is given by 2 number of BPP . However, due to a limitation of the grayscaler/serializer block, fewer grayscales or colors may be supported.

The PLM field (in RASTER\_CTRL) affects the palette loading:

- If PLM is 00b (palette-plus-data mode) or 01b (palette-only mode), the palette is loaded by the DMA engine at the very beginning, which is followed by the loading of pixel data.
- If PLM is 10b (data-only mode), the palette is not loaded. Instead, the DMA engine loads the pixel data immediately.

## 13.3.6.4 Gray-Scaler/Serializer

## 13.3.6.4.1 Passive (STN) Mode

Once a palette entry is selected from the look-up palette by the pixel data, its content is sent to the grayscaler/serializer. If it is monochrome data, it is encoded as 4 bits. If it is color data, it is encoded as 4 bits (Red), 4 bits (Green), and 4 bits (Blue).

These 4-bit values are used to select one of the 16 intensity levels, as shown in Table 13-10. A patented algorithm is used during this processing to provide an optimized intensity value that matches the eye's visual perception of color/gray gradations.

## 13.3.6.4.2 Active (TFT) Mode

The gray-scaler/serializer is bypassed.

## Figure 13-20. 2-BPP Data Memory Organization

| Bit      | 7 6     | 5 4     | 3 2      | 1 0      |
|----------|---------|---------|----------|----------|
| Base     | Pixel 0 | Pixel 1 | Pixel 2  | Pixel 3  |
| Base + 1 | Pixel 4 | Pixel 5 | Pixel 6  | Pixel 7  |
| Base + 2 | Pixel 8 | Pixel 9 | Pixel 10 | Pixel 11 |

Figure 13-21. 1-BPP Data Memory Organization

| Bit      | 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
|----------|-----|-----|-----|-----|-----|-----|-----|-----|
| Base     | P0  | P1  | P2  | P3  | P4  | P5  | P6  | P7  |
| Base + 1 | P8  | P9  | P10 | P11 | P12 | P13 | P14 | P15 |

<!-- image -->

<!-- image -->

www.ti.com

Table 13-10. Color/Grayscale Intensities and Modulation Rates

|   Dither Value (4-Bit Value from Palette) | Intensity (0% is White)   | Modulation Rate (Ratio of ON to ON+OFF Pixels)   |
|-------------------------------------------|---------------------------|--------------------------------------------------|
|                                      0000 | 0.0%                      | 0                                                |
|                                      0001 | 14.3%                     | 1/7                                              |
|                                      0010 | 20.0%                     | 1/5                                              |
|                                      0011 | 25%                       | 1/4                                              |
|                                      0100 | 33.3%                     | 3/9                                              |
|                                      0101 | 40.0%                     | 2/5                                              |
|                                      0110 | 44.4%                     | 4/9                                              |
|                                      0111 | 50.0%                     | 1/2                                              |
|                                      1000 | 55.6%                     | 5/9                                              |
|                                      1001 | 60.0%                     | 3/5                                              |
|                                      1010 | 66.6%                     | 6/9                                              |
|                                      1011 | 75%                       | 3/4                                              |
|                                      1100 | 80.0%                     | 4/5                                              |
|                                      1101 | 85.7%                     | 6/7                                              |
|                                      1110 | 93.3%                     | 14/15                                            |
|                                      1111 | 100.0%                    | 1                                                |

## 13.3.6.4.3 Summary of Color Depth

Table 13-11. Number of Colors/Shades of Gray Available on Screen

| Number of BPP   | Passive Mode (LCDTFT = 0)                                                                                    | Passive Mode (LCDTFT = 0)                                | Active Mode (LCDTFT = 1)                                  |
|-----------------|--------------------------------------------------------------------------------------------------------------|----------------------------------------------------------|-----------------------------------------------------------|
| Number of BPP   | Monochrome (LCDBW = 1)                                                                                       | Color (LCDBW = 0)                                        | Color Only (LCDBW = 0)                                    |
| 1               | 2 palette entries to select within 15 grayscales                                                             | 2 palette entries to select within 3375 possible colors  | 2 palette entries to select within 4096 possible colors   |
| 2               | 4 palette entries to select within 15 grayscales                                                             | 4 palette entries to select within 3375 possible colors  | 4 palette entries to select within 4096 possible colors   |
| 4               | 16 palette entries to select within 15 grayscales                                                            | 16 palette entries to select within 3375 possible colors | 16 palette entries to select within 4096 possible colors  |
| 8               | Not relevant since it would consist in 256 palette entries to select within 15 grayscales, but exists anyway | 256 palette entries to select 3375 possible colors       | 256 palette entries to select within 4096 possible colors |
| 12              | x                                                                                                            | 3375 possible colors                                     | 4096 possible colors                                      |
| 16              | x                                                                                                            | 3375 possible colors (STN_565 = 1)                       | Up to 65536 possible colors                               |
| 24              | X                                                                                                            | X                                                        | Up to 16.7 million colors                                 |

## 13.3.6.5 Output Format

## 13.3.6.5.1 Passive (STN) Mode

As shown in Figure 13-12, the pixel data stored in frame buffers go through palette (if applicable) and gray-scaler/serializer before reaching the Output FIFO. As a result, it is likely that the data fed to the Output FIFO is numerically different from the data in the frame buffers. (However, they represent the same color or grayscale.)

The output FIFO formats the received data according to display modes (see Table 13-7). Figure 13-22 shows the actual data output on the external pins.

## 13.3.6.5.2 Active (TFT) Mode

As shown in Figure 13-12, the gray-scaler/serializer and output FIFO are bypassed in active (TFT) mode. Namely, at each pixel clock, one pixel data (16 bits) is output to the external LCD.

Figure 13-22. Monochrome and Color Output

<!-- image -->

Monochrome

<!-- image -->

<!-- image -->

<!-- image -->

MLIST

UNANT

www.ti.com

2 BE ON

## 13.3.6.6 Subpicture Feature

A feature exists in the LCD to cover either the top or lower portion of the display with a default color. This feature is called a subpicture and is illustrated in Figure 13-23. Subpictures are only allowed for Active Matrix mode (cfg\_lcdtft = '1').

Subpictures reduce the bandwith to the DDR since lines containing default pixel data are not read from memory. For example, suppose the panel has 100 lines of which 50 are default pixel data lines. Then, only 50 lines of data are DMAed from DDR for this subpicture setup. That is, the cfg\_fbx\_base and cfg\_fbx\_ceiling registers only encompass 50 lines of data instead of 100.

Figure 13-23. Example of Subpicture

<!-- image -->

The subpicture feature is enabled when the spen MMR control bit is set to '1'. The hols bit, when set to '0,' puts the Default Pixel Data lines at the top of the screen and the active video lines at the bottom of the screen.

When the hols bit is set to '1,' Active video lines are at the top of the screen and Default Pixel Data lines are at the bottom of the screen. The hols bit behavior is shown in Figure 13-24.

## Figure 13-24. Subpicture HOLS Bit

<!-- image -->

hols = '1'

<!-- image -->

hols = '0'

The lines per panel threshold (LPPT) bitfield defines the number of lines at the bottom of the picture for both hols = '1' or '0'. LPPT is an encoded value in the range {0:2047} used to represent the number of lines in the range {1:2048}.

Figure 13-25. Raster Mode Display Format

Data/.notdefpixels/.notdef(from/.notdef1/.notdefto/.notdefP)

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 13.3.6.7 Raster Controller Timing

Figure 13-26. Raster Mode Passive (STN) Timing Diagram

<!-- image -->

Figure 13-27. Raster Mode Active (TFT) Timing Diagram

<!-- image -->

<!-- image -->