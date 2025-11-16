<!-- image -->

www.ti.com

The third basic element of a synchronous serial interface is the frame synchronization signal, also referred to as frame sync in this document.

Frame

A frame contains one or multiple slots, as determined by the desired protocol. Figure 22-16 shows an example frame of data and the frame definitions. Figure 22-16 does not specify whether the frame sync (FS) is for transmit (AFSX) or receive (AFSR) because the definitions of terms apply to both receive and transmit interfaces. In operation, the transmitter uses AFSX and the receiver uses AFSR. Optionally, the receiver can use AFSX as the frame sync when the transmitter and receiver of the McASP are configured to operate synchronously.

This section only shows the generic definition of the frame sync. See Section 22.3.3 and Section 22.3.8.1 for details on the frame sync formats required for the different transfer modes and protocols (burst mode, TDM mode and I2S format, DIT mode and S/PDIF format).

Figure 22-16. Definition of Frame and Frame Sync Width

<!-- image -->

- (1) In this example, there are two slots in a frame, and FS duration of slot length is shown.

Other terms used throughout the document:

| TDM               | Time-division multiplexed. See Section 22.3.3.1 for details on the TDM protocol.                                                                                     |
|-------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| DIR               | Digital audio interface receive. The McASP does not natively support receiving in the S/PDIF format. The McASP supports I2S format output by an external DIR device. |
| DIT               | Digital audio interface transmit. The McASP supports transmitting in S/PDIF format on up to all data pins configured as outputs.                                     |
| I2S               | Inter-Integrated Sound protocol, commonly used on audio interfaces. The McASP supports the I2S protocol as part of the TDM mode (when configured as a 2-slot frame). |
| Slot or Time Slot | For TDM format, the term time slot is interchangeable with the term slot defined in this section. For DIT format, a McASP time slot corresponds to a DIT subframe.   |

## 22.3.5 Clock and Frame Sync Generators

The McASP clock generators are able to produce two independent clock zones: transmit and receive clock zones. The serial clock generators may be programmed independently for the transmit section and the receive section, and may be completely asynchronous to each other. The serial clock (clock at the bit rate) may be sourced:

- Internally - by passing through two clock dividers off the internal clock source (AUXCLK).
- Externally - directly from ACLKR/X pin.
- Mixed - an external high-frequency clock is input to the McASP on either the AHCLKX or AHCLKR pins, and divided down to produce the bit rate clock.

In the internal/mixed cases, the bit rate clock is generated internally and should be driven out on the ACLKX (for transmit) or ACLKR (for receive) pins. In the internal case, an internally-generated highfrequency clock may be driven out onto the AHCLKX or AHCLKR pins to serve as a reference clock for other components in the system.

The McASP requires a minimum of a bit clock and a frame sync to operate, and provides the capability to reference these clocks from an external high-frequency master clock. In DIT mode, it is possible to use only internally-generated clocks and frame syncs.

## 22.3.5.1 Transmit Clock

The transmit bit clock, ACLKX, (Figure 22-17) may be either externally sourced from the ACLKX pin or internally generated, as selected by the CLKXM bit. If internally generated (CLKXM = 1), the clock is divided down by a programmable bit clock divider (CLKXDIV) from the transmit high-frequency master clock (AHCLKX).

Internally, the McASP always shifts transmit data at the rising edge of the internal transmit clock, XCLK, (Figure 22-17). The CLKXP mux determines if ACLKX needs to be inverted to become XCLK. If CLKXP = 0, the CLKXP mux directly passes ACLKX to XCLK. As a result, the McASP shifts transmit data at the rising edge of ACLKX. If CLKXP = 1, the CLKX mux passes the inverted version of ACLKX to XCLK. As a result, the McASP shifts transmit data at the falling edge of ACLKX.

The transmit high-frequency master clock, AHCLKX, may be either externally sourced from the AHCLKX pin or internally generated, as selected by the HCLKXM bit. If internally generated (HCLKXM = 1), the clock is divided down by a programmable high clock divider (HCLKXDIV) from McASP internal clock source AUXCLK. The transmit high-frequency master clock may be (but is not required to be) output on the AHCLKX pin where it is available to other devices in the system.

The transmit clock configuration is controlled by the following registers:

- ACLKXCTL.
- AHCLKXCTL.

Figure 22-17. Transmit Clock Generator Block Diagram

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 22.3.5.2 Receive Clock

The receiver also has the option to operate synchronously from the ACLKX and AFSX signals. This is achieved when the ASYNC bit in the transmit clock control register (ACLKXCTL) is cleared to 0 (see Figure 22-18). The receiver may be configured with different polarity (CLKRP) and frame sync data delay options from those options of the transmitter.

The receive clock configuration is controlled by the following registers:

- ACLKRCTL.
- AHCLKRCTL.

Figure 22-18. Receive Clock Generator Block Diagram

<!-- image -->

## 22.3.5.3 Frame Sync Generator

There are two different modes for frame sync: burst and TDM. A block diagram of the frame sync generator is shown in Figure 22-19. The frame sync options are programmed by the receive and transmit frame sync control registers (AFSRCTL and AFSXCTL). The options are:

- Internally-generated or externally-generated.
- Frame sync polarity: rising edge or falling edge.
- Frame sync width: single bit or single word.
- Bit delay: 0, 1, or 2 cycles before the first data bit.

The transmit frame sync pin is AFSX and the receive frame sync pin is AFSR. A typical usage for these pins is to carry the left/right clock (LRCLK) signal when transmitting and receiving stereo data.

Regardless if the AFSX/AFSR is internally generated or externally sourced, the polarity of AFSX/AFSR is determined by FSXP/FSRP, respectively, to be either rising or falling edge. If FSXP/FSRP = 0, the frame sync polarity is rising edge. If FSRP/FSRP = 1, the frame sync polarity is falling edge.

Figure 22-19. Frame Sync Generator Block Diagram

<!-- image -->

<!-- image -->