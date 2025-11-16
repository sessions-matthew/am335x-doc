<!-- image -->

www.ti.com

## 22.3.5.4 Clocking Examples

Some examples of processes using the McASP clocking and frame flexibility are:

- Receive data from a DVD at 48 kHz, but output up-sampled or decoded audio at 96 kHz or 192 kHz. This could be accomplished by inputting a high-frequency master clock (for example, 512 × receive FS), receiving with an internally-generated bit clock ratio of divide-by-8, and transmitting with an internally-generated bit clock ratio of divide-by-4 or divide-by-2.
- Transmit/receive data based on one sample rate (for example, 44.1 kHz), and transmit/receive data at a different sample rate (for example, 48 kHz).

## 22.3.5.5 Crystal Considerations

When choosing a high frequency input crystal for the device, consider the maximum functional clock frequency of the McASP module versus the maximum external receive/transmit clock AHCLKR/AHCLKX, especially when planning to generate the clocks internally. For example, if the maximum transmit clock AHCLKX is 25 MHz, a master oscillator CLK\_M\_OSC of 26 MHz requires a divide-by-2. However, master oscillator of 25 MHz enables full performance of the transmit clock.

## 22.3.6 Signal Descriptions

The signals used on the McASP audio interface are listed in Table 22-7.

Table 22-7. McASP Interface Signals

| Pin      | I/O/Z               | Device Reset (RESET = 0)   | Description                                     |
|----------|---------------------|----------------------------|-------------------------------------------------|
|          | Transmitter Control | Transmitter Control        | Transmitter Control                             |
| AHCLKX   | I/O/Z               | Input                      | Transmit high-frequency master clock            |
| AFSX     | I/O/Z               | Input                      | Transmit frame sync or left/right clock (LRCLK) |
| ACLKX    | I/O/Z               | Input                      | Transmit bit clock                              |
| Receiver | Control             | Control                    | Control                                         |
| AHCLKR   | I/O/Z               | Input                      | Receive high-frequency master clock             |
| AFSR     | I/O/Z               | Input                      | Receive frame sync or left/right clock (LRCLK)  |
| ACLKR    | I/O/Z               | Input                      | Receive bit clock                               |
| AMUTE    | I/O/Z               | Input                      | Mute output                                     |
| AMUTEIN  | I/O/Z               | Input                      | Mute input                                      |
| AXRn     | I/O/Z               | Input                      | TX/RX data pins                                 |

## 22.3.7 Pin Multiplexing

The McASP signals share pins with other processor functions. For detailed information on the McASP pin multiplexing and configuration, see the pin multiplexing information in the device-specific data manual.