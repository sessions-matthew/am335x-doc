<!-- image -->

www.ti.com

## 22.3 Functional Description

## 22.3.1 Overview

Figure 22-2 shows the major blocks of the McASP. The McASP has independent receive/transmit clock generators and frame sync generators, error-checking logic, and up to four serial data pins. See the device-specific data manual for the number of data pins available on your device.

All the McASP pins on the device may be individually programmed as general-purpose I/O (GPIO) if they are not used for serial port functions.

The McASP includes the following pins:

- Serializers;
- -Data pins AXRn: Up to four pins.
- Transmit clock generator:
- -AHCLKX: McASP transmit high-frequency master clock.
- -ACLKX: McASP transmit bit clock.
- Transmit Frame Sync Generator;
- -AFSX: McASP transmit frame sync or left/right clock (LRCLK).
- Receive clock generator;
- -AHCLKR: McASP receive high-frequency master clock.
- -ACLKR: McASP receive bit clock.
- Receive Frame Sync Generator;
- -AFSR: McASP receive frame sync or left/right clock (LRCLK).
- Mute in/out;
- -AMUTEIN: McASP mute input (from external device).
- -AMUTE: McASP mute output.
- -Data pins AXRn.