## 18.1 Introduction

## 18.1.1 MMCHS Features

The general features of the MMCHS host controller IP are:

- Built-in 1024-byte buffer for read or write
- Two DMA channels, one interrupt line
- Clock support
- -96-MHz functional clock source input
- -up to 384Mbit/sec (48MByte/sec) in MMC mode 8-bit data transfer
- -up to 192Mbit/sec (24MByte/sec) in High-Speed SD mode 4-bit data transfer
- -up to 24Mbit/sec (3MByte/sec) in Default SD mode 1-bit data transfer
- Support for SDA 3.0 Part A2 programming model
- Serial link supports full compliance with:
- -MMC command/response sets as defined in the MMC standard specification v4.3.
- -SD command/response sets as defined in the SD Physical Layer specification v2.00
- -SDIO command/response sets and interrupt/read-wait suspend-resume operations as defined in the SD part E1 specification v 2.00
- -SD Host Controller Standard Specification sets as defined in the SD card specification Part A2 v2.00

## 18.1.2 Unsupported MMCHS Features

The MMCHS module features not supported in this device are shown in Table 18-1.

Table 18-1. Unsupported MMCHS Features

| Feature                          | Reason                               |
|----------------------------------|--------------------------------------|
| MMC Out-of-band interrupts       | MMC_OBI input tied low               |
| Master DMA operation             | Disabled through synthesis parameter |
| Card Supply Control (MMCHS(1-2)) | Signal not pinned out                |
| Dual Data Rate (DDR) mode        | Timing not supported                 |

<!-- image -->