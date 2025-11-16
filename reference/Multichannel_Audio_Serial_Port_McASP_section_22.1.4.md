## 22.1.3 Protocols Supported

The McASP supports a wide variety of protocols.

- Transmit section supports:
- -Wide variety of I2S and similar bit-stream formats.
- -TDM streams from 2 to 32 time slots.
- -S/PDIF, IEC60958-1, AES-3 formats.
- Receive section supports:
- -Wide variety of I2S and similar bit-stream formats.
- -TDM streams from 2 to 32 time slots.
- -TDM stream of 384 time slots specifically designed for easy interface to external digital interface receiver (DIR) device transmitting DIR frames to McASP using the I2S protocol (one time slot for each DIR subframe).

The transmit and receive sections may each be individually programmed to support the following options on the basic serial protocol:

- Programmable clock and frame sync polarity (rising or falling edge): ACLKR/X, AHCLKR/X, and AFSR/X.
- Slot length (number of bits per time slot): 8, 12, 16, 20, 24, 28, 32 bits supported.
- Word length (bits per word): 8, 12, 16, 20, 24, 28, 32 bits; always less than or equal to the time slot length.
- First-bit data delay: 0, 1, 2 bit clocks.
- Left/right alignment of word inside slot.
- Bit order: MSB first or LSB first.
- Bit mask/pad/rotate function.
- -Automatically aligns data internally in either Q31 or integer formats.
- -Automatically masks nonsignificant bits (sets to 0, 1, or extends value of another bit).

In DIT mode for McASP, additional features of the transmitter are:

- Transmit-only mode 384 time slots (subframe) per frame.
- Bi-phase encoded 3.3 V output.
- Support for consumer and professional applications.
- Channel status RAM (384 bits).
- User data RAM (384 bits).
- Separate valid bit (V) for subframe A, B.

In I2S mode, the transmit and receive sections can support simultaneous transfers on up to all serial data pins operating as 192 kHz stereo channels.

In DIT mode, the transmitter can support a 192 kHz frame rate (stereo) on up to all serial data pins simultaneously (note that the internal bit clock for DIT runs two times faster than the equivalent bit clock for I2S mode, due to the need to generate Biphase Mark Encoded Data).

## 22.1.4 Unsupported McASP Features

The unsupported McASP features in this device include the following.

Table 22-1. Unsupported McASP Features

| Feature   | Reason                     |
|-----------|----------------------------|
| AXR[9:4]  | Signals are not pinned out |
| AMUTE     | Not connected              |
| AMUTEIN   | Not connected              |

<!-- image -->

www.ti.com