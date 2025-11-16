## 18.3.12 Output Signals Generation

The MMC/SD/SDIO output signals can be driven on either falling edge or rising edge depending on the SD\_HCTL[2] HSPE bit. This feature allows to reach better timing performance, and thus to increase data transfer frequency.

## 18.3.12.1 Generation on Falling Edge of MMC Clock

The controller is by default in this mode to maximize hold timings. In this case, SD\_HCTL[2] HSPE bit is cleared to 0.

Figure 18-28 shows the output signals of the module when generating from the falling edge of the MMC clock.

<!-- image -->

## 18.3.12.2 Generation on Rising Edge of MMC Clock

This mode increases setup timings and allows reaching higher bus frequency. This feature is activated by setting SD\_HCTL[2] HSPE bit to 1. The controller shall be set in this mode to support SDR transfers.

NOTE:

Do not use this feature in Dual Data Rate mode (when SD\_CON[19] DDR is set to 1).

Figure 18-29 shows the output signals of the module when generating from the rising edge of the MMC clock.

<!-- image -->

<!-- image -->

www.ti.com

Figure 18-29. Output Driven on Rising Edge

<!-- image -->