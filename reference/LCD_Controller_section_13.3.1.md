<!-- image -->

www.ti.com

## 13.3 Functional Description

## 13.3.1 Clocking

This section details the various clocks and signals. Figure 13-3 shows input and output LCD controller clocks.

## Figure 13-3. Input and Output Clocks

<!-- image -->

## 13.3.1.1 Pixel Clock (LCD\_PCLK)

The pixel clock (LCD\_PCLK) frequency is derived from LCD\_CLK, the reference clock to this LCD module (see Figure 13-3). The pixel clock is used by the LCD display to clock the pixel data into the line shift register.

<!-- formula-not-decoded -->

where CLKDIV is a field in the LCD\_CTRL register and should not be 0 or 1.

- Passive (STN) mode. LCD\_PCLK only transitions when valid data is available for output. It does not transition when the horizontal clock (HSYNC) is asserted or during wait state insertion.
- Active (TFT) mode. LCD\_PCLK continuously toggles as long as the Raster Controller is enabled.

## 13.3.1.2 Horizontal Clock (LCD\_HSYNC)

LCD\_HSYNC toggles after all pixels in a horizontal line have been transmitted to the LCD and a programmable number of pixel clock wait states has elapsed both at the beginning and end of each line.

The RASTER\_TIMING\_0 register fully defines the behavior of this signal.

LCD\_HSYNC can be programmed to be synchronized with the rising or falling edge of LCD\_PCLK. The configuration field is bits 24 and 25 in the RASTER\_TIMING\_2 register.

Active (TFT) mode: The horizontal clock or the line clock is also used by TFT displays as the horizontal synchronization signal (LCD\_HSYNC).

The timings of the horizontal clock (line clock) pins are programmable to support:

- Delay insertion both at the beginning and end of each line.
- Line clock polarity.
- Line clock pulse width, driven on rising or falling edge of pixel clock.

## 13.3.1.3 Vertical Clock (LCD\_VSYNC)

LCD\_VSYNC toggles after all lines in a frame have been transmitted to the LCD and a programmable number of line clock cycles has elapsed both at the beginning and end of each frame.

The RASTER\_TIMING\_1 register fully defines the behavior of this signal.

LCD\_VSYNC can be programmed to be synchronized with the rising or falling edge of LCD\_PCLK. The configuration field is bits 24 and 25 in the RASTER\_TIMING\_2 register.

- Passive (STN) mode. The vertical, or frame, clock toggles during the first line of the screen.
- Active (TFT) mode. The vertical, or frame, clock is also used by TFT displays as the vertical synchronization signal (LCD\_VSYNC).

The timings of the vertical clock pins are programmable to support:

- Delay insertion both at the beginning and end of each frame
- Frame clock polarity

## 13.3.1.4 LCD\_AC\_BIAS\_EN

- Passive (STN) mode. To prevent a dc charge within the screen pixels, the power and ground supplies of the display are periodically switched. The Raster Controller signals the LCD to switch the polarity by toggling this pin (LCD\_AC\_BIAS\_EN).
- Active (TFT) mode. This signal acts as an output enable (OE) signal. It is used to signal the external LCD that the data is valid on the data bus (LCD\_DATA).

<!-- image -->