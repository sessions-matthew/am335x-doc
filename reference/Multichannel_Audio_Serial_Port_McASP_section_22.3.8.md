## 22.3.8 Transfer Modes

## 22.3.8.1 Burst Transfer Mode

The McASP supports a burst transfer mode, which is useful for nonaudio data such as passing control information between two processors. Burst transfer mode uses a synchronous serial format similar to the TDM mode. The frame sync generation is not periodic or time-driven as in TDM mode, but data driven, and the frame sync is generated for each data word transferred.

When operating in burst frame sync mode (Figure 22-20), as specified for transmit (XMOD = 0 in AFSXCTL) and receive (RMOD = 0 in AFSRCTL), one slot is shifted for each active edge of the frame sync signal that is recognized. Additional clocks after the slot and before the next frame sync edge are ignored.

In burst frame sync mode, the frame sync delay may be specified as 0, 1, or 2 serial clock cycles. This is the delay between the frame sync active edge and the start of the slot. The frame sync signal lasts for a single bit clock duration (FRWID = 0 in AFSRCTL, FXWID = 0 in AFSXCTL).

For transmit, when generating the transmit frame sync internally, the frame sync begins when the previous transmission has completed and when all the XBUF[n] (for every serializer set to operate as a transmitter) has been updated with new data.

For receive, when generating the receive frame sync internally, frame sync begins when the previous transmission has completed and when all the RBUF[n] (for every serializer set to operate as a receiver) has been read.

<!-- image -->

The control registers must be configured as follows for the burst transfer mode. The burst mode specific bit fields are in bold face:

- PFUNC: The clock, frame, data pins must be configured for McASP function.
- PDIR: The clock, frame, data pins must be configured to the direction desired.
- PDOUT, PDIN, PDSET, PDCLR: Not applicable. Leave at default.
- GBLCTL: Follow the initialization sequence in Section 22.3.12.2 to configure this register.
- AMUTE: Not applicable. Leave at default.
- DLBCTL: If loopback mode is desired, configure this register according to Section 22.3.10.5, otherwise leave this register at default.
- DITCTL: DITEN must be left at default 0 to select non-DIT mode. Leave the register at default.
- RMASK/XMASK: Mask desired bits according to Section 22.3.9.2 and Section 22.3.10.3.
- RFMT/XFMT: Program all fields according to data format desired. See Section 22.3.10.3.
- AFSRCTL/AFSXCTL: Clear RMOD/XMOD bits to 0 to indicate burst mode. Clear FRWID/FXWID bits to 0 for single bit frame sync duration. Configure other fields as desired.
- ACLKRCTL/ACLKXCTL: Program all fields according to bit clock desired. See Section 22.3.5.
- AHCLKRCTL/AHCLKXCTL: Program all fields according to high-frequency clock desired. See Section 22.3.5.

<!-- image -->

<!-- image -->

## www.ti.com

- RTDM/XTDM: Program RTDMS0/XTDMS0 to 1 to indicate one active slot only. Leave other fields at default.
- RINTCTL/XINTCTL: Program all fields according to interrupts desired.
- RCLKCHK/XCLKCHK: Not applicable. Leave at default.
- SRCTLn: Program SRMOD to inactive/transmitter/receiver as desired. DISMOD is not applicable and should be left at default.
- DITCSRA[n], DITCSRB[n], DITUDRA[n], DITUDRB[n]: Not applicable. Leave at default.

## 22.3.8.2 Time-Division Multiplexed (TDM) Transfer Mode

The McASP time-division multiplexed (TDM) transfer mode supports the TDM format discussed in Section 22.3.3.1.

Transmitting data in the TDM transfer mode requires a minimum set of pins:

- ACLKX - transmit bit clock.
- AFSX - transmit frame sync (or commonly called left/right clock).
- One or more serial data pins, AXRn, whose serializers have been configured to transmit.

The transmitter has the option to receive the ACLKX bit clock as an input, or to generate the ACLKX bit clock by dividing down the AHCLKX high-frequency master clock. The transmitter can either generate AHCLKX internally or receive AHCLKX as an input. See Section 22.3.5.1.

Similarly, to receive data in the TDM transfer mode requires a minimum set of pins:

- ACLKR - receive bit clock.
- AFSR - receive frame sync (or commonly called left/right clock).
- One or more serial data pins, AXRn, whose serializers have been configured to receive.

The receiver has the option to receive the ACLKR bit clock as an input or to generate the ACLKR bit clock by dividing down the AHCLKR high-frequency master clock. The receiver can either generate AHCLKR internally or receive AHCLKR as an input. See Section 22.3.5.2 and Section 22.3.5.3.

The control registers must be configured as follows for the TDM mode. The TDM mode specific bit fields are in bold face:

- PFUNC: The clock, frame, data pins must be configured for McASP function.
- PDIR: The clock, frame, data pins must be configured to the direction desired.
- PDOUT, PDIN, PDSET, PDCLR: Not applicable. Leave at default.
- GBLCTL: Follow the initialization sequence in Section 22.3.12.2 to configure this register.
- AMUTE: Program all fields according to mute control desired.
- DLBCTL: If loopback mode is desired, configure this register according to Section 22.3.10.5, otherwise leave this register at default.
- DITCTL: DITEN must be left at default 0 to select TDM mode. Leave the register at default.
- RMASK/XMASK: Mask desired bits according to Section 22.3.9.2 and Section 22.3.10.3.
- RFMT/XFMT: Program all fields according to data format desired. See Section 22.3.10.3.
- AFSRCTL/AFSXCTL: Set RMOD/XMOD bits to 2-32 for TDM mode. Configure other fields as desired.
- ACLKRCTL/ACLKXCTL: Program all fields according to bit clock desired. See Section 22.3.5.
- AHCLKRCTL/AHCLKXCTL: Program all fields according to high-frequency clock desired. See Section 22.3.5.
- RTDM/XTDM: Program all fields according to the time slot characteristics desired.
- RINTCTL/XINTCTL: Program all fields according to interrupts desired.
- RCLKCHK/XCLKCHK: Program all fields according to clock checking desired.
- SRCTLn: Program all fields according to serializer operation desired.
- DITCSRA[n], DITCSRB[n], DITUDRA[n], DITUDRB[n]: Not applicable. Leave at default.

## 22.3.8.2.1 TDM Time Slots

TDM mode on the McASP can extend to support multiprocessor applications, with up to 32 time slots per frame. For each of the time slots, the McASP may be configured to participate or to be inactive by configuring XTDM and/or RTDM (this allows multiple processors to communicate on the same TDM serial bus).

The TDM sequencer (separate ones for transmit and receive) functions in this mode. The TDM sequencer counts the slots beginning with the frame sync. For each slot, the TDM sequencer checks the respective bit in either XTDM or RTDM to determine if the McASP should transmit/receive in that time slot.

If the transmit/receive bit is active, the McASP functions normally during that time slot; otherwise, the McASP is inactive during that time slot; no update to the buffer occurs, and no event is generated. Transmit pins are automatically set to a high-impedance state, 0, or 1 during that slot, as determined by bit DISMOD in SRCTL[n].

Figure 22-21 shows when the transmit DMA event AXEVT is generated. See Section 22.3.10.1.1 for details on data ready and the initialization period indication. The transmit DMA event for an active time slot (slot N) is generated during the previous time slot (slot N - 1), regardless if the previous time slot (slot N 1) is active or inactive.

During an active transmit time slot (slot N), if the next time slot (slot N + 1) is configured to be active, the copy from XRBUF[n] to XRSR[n] generates the DMA event for time slot N + 1. If the next time slot (slot N + 1) is configured to be inactive, then the DMA event will be delayed to time slot M - 1. In this case, slot M is the next active time slot. The DMA event for time slot M is generated during the first bit time of slot M - 1.

The receive DMA request generation does not need this capability, since the receive DMA event is generated after data is received in the buffer (looks back in time). If a time slot is disabled, then no data is copied to the buffer for that time slot and no DMA event is generated.

Figure 22-21. Transmit DMA Event (AXEVT) Generation in TDM Time Slots

<!-- image -->

A See Section 22.3.12.2, step 7a.

<!-- image -->

<!-- image -->

www.ti.com

## 22.3.8.2.2 Special 384 Slot TDM Mode for Connection to External DIR

The McASP receiver also supports a 384 time slot TDM mode (DIR mode), to support S/PDIF, AES-3, IEC-60958 receiver ICs whose natural block (block corresponds to McASP frame) size is 384 samples. The advantage to using the 384 time slot TDM mode is that interrupts may be generated synchronous to the S/PDIF, AES-3, IEC-60958, such as the last slot interrupt.

The receive TDM time slot register (RTDM) should be programmed to all 1s during reception of a DIR block. Other TDM functionalities (for example, inactive slots) are not supported (only the slot counter counts the 384 subframes in a block).

To receive data in the DIR mode, the following pins are typically needed:

- ACLKR - receive bit clock.
- AFSR - receive frame sync (or commonly called left/right clock). In this mode, AFSR should be connected to a DIR which outputs a start of block signal, instead of LRCLK.
- One or more serial data pins, AXRn, whose serializers have been configured to receive.

For this special DIR mode, the control registers can be configured just as for TDM mode, except set RMOD in AFSRCTL to 384 to receive 384 time slots.

## 22.3.8.3 Digital Audio Interface Transmit (DIT) Transfer Mode

In addition to the TDM and burst transfer modes, which are suitable for transmitting audio data between ICs inside the same system, the digital audio interface transmit (DIT) transfer mode of the McASP also supports transmission of audio data in the S/PDIF, AES-3, or IEC-60958 format. These formats are designed to carry audio data between different systems through an optical or coaxial cable. The DIT mode only applies to serializers configured as transmitters, not receivers. See Section 22.3.3.2 for a description of the S/PDIF format.

## 22.3.8.3.1 Transmit DIT Encoding

The McASP operation in DIT mode is basically identical to the 2 time slot TDM mode, but the data transmitted is output as a biphase mark encoded bit stream, with preamble, channel status, user data, validity, and parity automatically stuffed into the bit stream by the McASP. The McASP includes separate validity bits for even/odd subframes and two 384-bit RAM modules to hold channel status and user data bits.

The transmit TDM time slot register (XTDM) should be programmed to all 1s during DIT mode. TDM functionality is not supported in DIT mode, except that the TDM slot counter counts the DIT subframes.

To transmit data in the DIT mode, the following pins are typically needed:

- AHCLKX - transmit high-frequency master clock.
- One or more serial data pins, AXRn, whose serializers have been configured to transmit.

AHCLKX is optional (the internal clock source may be used instead), but if used as a reference, the processor provides a clock check circuit that continually monitors the AHCLKX input for stability.

If the McASP is configured to transmit in the DIT mode on more than one serial data pin, the bit streams on all pins will be synchronized. In addition, although they will carry unique audio data, they will carry the same channel status, user data, and validity information.

The actual 24-bit audio data must always be in bit positions 23-0 after passing through the first three stages of the transmit format unit.

<!-- image -->

www.ti.com

For left-aligned Q31 data, the following transmit format unit settings process the data into right aligned 24bit audio data ready for transmission:

- XROT = 010 (rotate right by 8 bits).
- XRVRS = 0 (no bit reversal, LSB first).
- XMASK = FFFF FF00h-FFFF 0000h (depending upon whether 24, 23, 22, 21, 20, 19, 18, 17, or 16 valid audio data bits are present).
- XPAD = 00 (pad extra bits with 0).

For right-aligned data, the following transmit format unit settings process the data into right aligned 24-bit audio data ready for transmission:

- XROT = 000 (rotate right by 0 bits).
- XRVRS = 0 (no bit reversal, LSB first).
- XMASK = 00FF FFFFh to 0000 FFFFh (depending upon whether 24, 23, 22, 21, 20, 19, 18, 17, or 16 valid audio data bits are present).
- XPAD = 00 (pad extra bits with 0).

## 22.3.8.3.2 Transmit DIT Clock and Frame Sync Generation

The DIT transmitter only works in the following configuration:

- In transmit frame control register (AFSXCTL):
- -Internally-generated transmit frame sync, FSXM = 1.
- -Rising-edge frame sync, FSXP = 0.
- -Bit-width frame sync, FXWID = 0.
- -384-slot TDM, XMOD = 1 1000 0000b.
- In transmit clock control register (ACLKXCTL), ASYNC = 1.
- In transmit bitstream format register (XFMT), XSSZ = 1111 (32-bit slot size).

All combinations of AHCLKX and ACLKX are supported.

This is a summary of the register configurations required for DIT mode. The DIT mode specific bit fields are in bold face:

- PFUNC: The data pins must be configured for McASP function. If AHCLKX is used, it must also be configured for McASP function.
- PDIR: The data pins must be configured as outputs. If AHCLKX is used as an input reference, it should be configured as input. If internal clock source AUXCLK is used as the reference clock, it may be output on the AHCLKX pin by configuring AHCLKX as an output.
- PDOUT, PDIN, PDSET, PDCLR: Not applicable for DIT operation. Leave at default.
- GBLCTL: Follow the initialization sequence in Section 22.3.12.2 to configure this register.
- AMUTE: Program all fields according to mute control desired.
- DLBCTL: Not applicable. Loopback is not supported for DIT mode. Leave at default.
- DITCTL: DITEN bit must be set to 1 to enable DIT mode. Configure other bits as desired.
- RMASK: Not applicable. Leave at default.
- RFMT: Not applicable. Leave at default.
- AFSRCTL: Not applicable. Leave at default.
- ACLKRCTL: Not applicable. Leave at default.
- AHCLKRCTL: Not applicable. Leave at default.
- RTDM: Not applicable. Leave at default.
- RINTCTL: Not applicable. Leave at default.
- RCLKCHK: Not applicable. Leave at default.
- XMASK : Mask desired bits according to the discussion in this section, depending upon left-aligned or right-aligned internal data.

<!-- image -->

www.ti.com

- XFMT: XDATDLY = 0. XRVRS = 0. XPAD = 0. XPBIT = default (not applicable). XSSZ = Fh (32-bit slot). XBUSEL = configured as desired. XROT bit is configured according to the discussion in this section, either 0 or 8-bit rotate.
- AFSXCTL : Configure the bits according to the discussion in this section.
- ACLKXCTL : ASYNC = 1. Program CLKXDIV bits to obtain the bit clock rate desired. Configure CLKXP and CLKXM bits as desired, because CLKX is not actually used in the DIT protocol.
- AHCLKXCTL : Program all fields according to high-frequency clock desired.
- XTDM : Set to FFFF FFFFh for all active slots for DIT transfers.
- XINTCTL: Program all fields according to interrupts desired.
- XCLKCHK: Program all fields according to clock checking desired.
- SRCTLn: Set SRMOD = 1 (transmitter) for the DIT pins. DISMOD field is don't care for DIT mode.
- DITCSRA[n], DITCSRB[n] : Program the channel status bits as desired.
- DITUDRA[n], DITUDRB[n] : Program the user data bits as desired.

## 22.3.8.3.3 DIT Channel Status and User Data Register Files

The channel status registers (DITCSRA n and DITCSRB n ) and user data registers (DITUDRA n and DITUDRB n ) are not double buffered. Typically the programmer uses one of the synchronizing interrupts, such as last slot, to create an event at a safe time so the register may be updated. In addition, the CPU reads the transmit TDM slot counter to determine which word of the register is being used.

It is a requirement that the software avoid writing to the word of user data and channel status that are being used to encode the current time slot; otherwise, it will be indeterminate whether the old or new data is used to encode the bitstream.

The DIT subframe format is defined in Section 22.3.3.2.2. The channel status information (C) and User Data (U) are defined in these DIT control registers:

- DITCSRA0 to DITCSRA5: The 192 bits in these six registers contain the channel status information for the LEFT channel within each frame.
- DITCSRB0 to DITCSRB5: The 192 bits in these six registers contain the channel status information for the RIGHT channel within each frame.
- DITUDRA0 to DITUDRA5: The 192 bits in these six registers contain the user data information for the LEFT channel within each frame.
- DITUDRB0 to DITUDRB5: The 192 bits in these six registers contain the user data information for the RIGHT channel within each frame.

The S/PDIF block format is shown in Figure 22-13. There are 192 frames within a block (frame 0 to frame 191). Within each frame there are two subframes (subframe 1 and 2 for left and right channels, respectively). The channel status and user data information sent on each subframe is summarized in Table 22-8.

Table 22-8. Channel Status and User Data for Each DIT Block

| Frame                                             | Subframe                                          | Preamble                                          | Channel Status defined in:                        | User Data defined in:                             |
|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|---------------------------------------------------|
| Defined by DITCSRA0, DITCSRB0, DITUDRA0, DITUDRB0 | Defined by DITCSRA0, DITCSRB0, DITUDRA0, DITUDRB0 | Defined by DITCSRA0, DITCSRB0, DITUDRA0, DITUDRB0 | Defined by DITCSRA0, DITCSRB0, DITUDRA0, DITUDRB0 | Defined by DITCSRA0, DITCSRB0, DITUDRA0, DITUDRB0 |
| 0                                                 | 1 (L)                                             | B                                                 | DITCSRA0[0]                                       | DITUDRA0[0]                                       |
| 0                                                 | 2 (R)                                             | W                                                 | DITCSRB0[0]                                       | DITUDRB0[0]                                       |
| 1                                                 | 1 (L)                                             | M                                                 | DITCSRA0[1]                                       | DITUDRA0[1]                                       |
| 1                                                 | 2 (R)                                             | W                                                 | DITCSRB0[1]                                       | DITUDRB0[1]                                       |
| 2                                                 | 1 (L)                                             | M                                                 | DITCSRA0[2]                                       | DITUDRA0[2]                                       |
| 2                                                 | 2 (R)                                             | W                                                 | DITCSRB0[2]                                       | DITUDRB0[2]                                       |
| …                                                 | …                                                 | …                                                 | …                                                 | …                                                 |
| 31                                                | 1 (L)                                             | M                                                 | DITCSRA0[31]                                      | DITUDRA0[31]                                      |
| 31                                                | 2 (R)                                             | W                                                 | DITCSRB0[31]                                      | DITUDRB0[31]                                      |
| Defined by DITCSRA1, DITCSRB1, DITUDRA1, DITUDRB1 | Defined by DITCSRA1, DITCSRB1, DITUDRA1, DITUDRB1 | Defined by DITCSRA1, DITCSRB1, DITUDRA1, DITUDRB1 | Defined by DITCSRA1, DITCSRB1, DITUDRA1, DITUDRB1 | Defined by DITCSRA1, DITCSRB1, DITUDRA1, DITUDRB1 |
| 32                                                | 1 (L)                                             | M                                                 | DITCSRA1[0]                                       | DITUDRA1[0]                                       |
| 32                                                | 2 (R)                                             | W                                                 | DITCSRB1[0]                                       | DITUDRB1[0]                                       |
| …                                                 | …                                                 | …                                                 | …                                                 | …                                                 |
| 63                                                | 1 (L)                                             | M                                                 | DITCSRA1[31]                                      | DITUDRA1[31]                                      |
| 63                                                | 2 (R)                                             | W                                                 | DITCSRB1[31]                                      | DITUDRB1[31]                                      |
| Defined by DITCSRA2, DITCSRB2, DITUDRA2, DITUDRB2 | Defined by DITCSRA2, DITCSRB2, DITUDRA2, DITUDRB2 | Defined by DITCSRA2, DITCSRB2, DITUDRA2, DITUDRB2 | Defined by DITCSRA2, DITCSRB2, DITUDRA2, DITUDRB2 | Defined by DITCSRA2, DITCSRB2, DITUDRA2, DITUDRB2 |
| 64                                                | 1 (L)                                             | M                                                 | DITCSRA2[0]                                       | DITUDRA2[0]                                       |
| 64                                                | 2 (R)                                             | W                                                 | DITCSRB2[0]                                       | DITUDRB2[0]                                       |
| …                                                 | …                                                 | …                                                 | …                                                 | …                                                 |
| 95                                                | 1 (L)                                             | M                                                 | DITCSRA2[31]                                      | DITUDRA2[31]                                      |
| 95                                                | 2 (R)                                             | W                                                 | DITCSRB2[31]                                      | DITUDRB2[31]                                      |
| Defined by DITCSRA3, DITCSRB3, DITUDRA3, DITUDRB3 | Defined by DITCSRA3, DITCSRB3, DITUDRA3, DITUDRB3 | Defined by DITCSRA3, DITCSRB3, DITUDRA3, DITUDRB3 | Defined by DITCSRA3, DITCSRB3, DITUDRA3, DITUDRB3 | Defined by DITCSRA3, DITCSRB3, DITUDRA3, DITUDRB3 |
| 96                                                | 1 (L)                                             | M                                                 | DITCSRA3[0]                                       | DITUDRA3[0]                                       |
| 96                                                | 2 (R)                                             | W                                                 | DITCSRB3[0]                                       | DITUDRB3[0]                                       |
| …                                                 | …                                                 | …                                                 | …                                                 | …                                                 |
| 127                                               | 1 (L)                                             | M                                                 | DITCSRA3[31]                                      | DITUDRA3[31]                                      |
| 127                                               | 2 (R)                                             | W                                                 | DITCSRB3[31]                                      | DITUDRB3[31]                                      |
| Defined by DITCSRA4, DITCSRB4, DITUDRA4, DITUDRB4 | Defined by DITCSRA4, DITCSRB4, DITUDRA4, DITUDRB4 | Defined by DITCSRA4, DITCSRB4, DITUDRA4, DITUDRB4 | Defined by DITCSRA4, DITCSRB4, DITUDRA4, DITUDRB4 | Defined by DITCSRA4, DITCSRB4, DITUDRA4, DITUDRB4 |
| 128                                               | 1 (L)                                             | M                                                 | DITCSRA4[0]                                       | DITUDRA4[0]                                       |
| 128                                               | 2 (R)                                             | W                                                 | DITCSRB4[0]                                       | DITUDRB4[0]                                       |
| …                                                 | …                                                 | …                                                 | …                                                 | …                                                 |
| 159                                               | 1 (L)                                             | M                                                 | DITCSRA4[31]                                      | DITUDRA4[31]                                      |
| 159                                               | 2 (R)                                             | W                                                 | DITCSRB4[31]                                      | DITUDRB4[31]                                      |
| Defined by DITCSRA5, DITCSRB5, DITUDRA5, DITUDRB5 | Defined by DITCSRA5, DITCSRB5, DITUDRA5, DITUDRB5 | Defined by DITCSRA5, DITCSRB5, DITUDRA5, DITUDRB5 | Defined by DITCSRA5, DITCSRB5, DITUDRA5, DITUDRB5 | Defined by DITCSRA5, DITCSRB5, DITUDRA5, DITUDRB5 |
| 160                                               | 1 (L)                                             | M                                                 | DITCSRA5[0]                                       | DITUDRA5[0]                                       |
| 160                                               | 2 (R)                                             | W                                                 | DITCSRB5[0]                                       | DITUDRB5[0]                                       |
| …                                                 | …                                                 | …                                                 | …                                                 | …                                                 |
| 191                                               | 1 (L)                                             | M                                                 | DITCSRA5[31]                                      | DITUDRA5[31]                                      |
| 191                                               | 2 (R)                                             | W                                                 | DITCSRB5[31]                                      | DITUDRB5[31]                                      |

<!-- image -->