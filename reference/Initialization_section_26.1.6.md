## Table 26-5. Crystal Frequencies Supported

| SYSBOOT[15:14]   | Crystal Frequency   |
|------------------|---------------------|
| 00b              | 19.2 MHz            |
| 01b              | 24 MHz              |
| 10b              | 25 MHz              |
| 11b              | 26 MHz              |

The ROM Code configures the clocks and DPLLs which are necessary for ROM Code execution:

- L3 ADPLLS locked to provide 200MHz clocks for peripheral blocks.
- MPU ADPLLS is locked to provide 500 MHz for the A8.
- PER ADPLLLJ is locked to provide 960MHz and 192MHz for peripheral blocks.

Table 26-6 summarizes the ROM Code default settings for clocks. This default configuration enables all the ROM Code functionalities with minimized needs on power during boot.

## Table 26-6. ROM Code Default Clock Settings

| Clock       | Frequency [MHz]   | Source        |
|-------------|-------------------|---------------|
| L3F_CLK     | 200               | CORE_CLKOUTM4 |
| SPI_CLK     | 48                | PER_CLKOUTM2  |
| MMC_CLK     | 96                | PER_CLKOUTM2  |
| UART_CLK    | 48                | PER_CLKOUTM2  |
| I2C_CLK     | 48                | PER_CLKOUTM2  |
| MPU_CLK     | 500               | MPU_PLL       |
| USB_PHY_CLK | 960 MHz           | PER_CLKDCOLDO |

The DPLLs and PRCM clock dividers are configured with the ROM Code default values after cold or warm reset in order to give the same working conditions to the Public ROM Code sequence.

## 26.1.6 Booting

## 26.1.6.1 Overview

Figure 26-10 shows the booting procedure. First a booting device list is created. The list consists of all devices which will be searched for a booting image. The list is filled in based on the SYSBOOT .

<!-- image -->

<!-- image -->

www.ti.com

Figure 26-10. ROM Code Booting Procedure

<!-- image -->

Once the booting device list is set up, the booting routine examines the devices enumerated in the list sequentially and either executes the memory booting or peripheral booting procedure depending on the booting device type. The memory booting procedure is executed when the booting device type is one of NOR, NAND, MMC or SPI-EEPROM. The peripheral booting is executed when the booting device type is Ethernet, USB or UART.

The memory booting procedure reads data from a memory type device. If a valid booting image is found and successfully read from the external memory device,: the code begins to execute.

- If the device is an HS device then the image is authenticated and Initial SW started upon successful authentication.
- If the device is a GP device the Initial SW is simply started (no authentication involved).

The peripheral booting procedure downloads data from a host (commonly a PC) to the device device by means of Ethernet, USB or UART links. The ROM Code uses a host-slave logical protocol for synchronization. Upon successful UART, USB or Ethernet connection the host sends the image binary contents. The peripheral booting procedure is described in detail in Section 26.1.9.

If the memory or peripheral booting fails for all devices enumerated in the device list then the ROM Code gets into a loop, waiting for the watchdog to reset the system.

## 26.1.6.2 Device List

The ROM Code creates the device list based on information gathered from the SYSBOOT configuration pins sensed in the control module. The pins are used to index the device table from which the list of devices is extracted

## 26.1.6.2.1 SYSBOOT Configuration Pins

Table 26-7 contains the SYSBOOT configuration pins.

<!-- image -->

<!-- image -->

www.ti.com

## Table 26-7. SYSBOOT Configuration Pins[4]

| SYSBOOT[15:14 ]                                   | SYSBOOT[13:12 ]                                      | SYSBOOT[11:10 ]                                                                                     | SYSBOOT[9]                                                               | SYSBOOT[8]                         | SYSBOOT[7:6] SYSBOOT[5]   | SYSBOOT[7:6] SYSBOOT[5]                                                    | SYSBOOT[4:0]         | Boot Sequence   | Boot Sequence             | Boot Sequence   | Boot Sequence   |
|---------------------------------------------------|------------------------------------------------------|-----------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------|------------------------------------|---------------------------|----------------------------------------------------------------------------|----------------------|-----------------|---------------------------|-----------------|-----------------|
| For all boot modes : Crystal Frequency            | For all boot modes : Set to 00b for normal operation | For XIP boot : Muxed or non- muxed device For NAND boot : must be 00b                               | For NAND and NANDI2C boot : NAND ECC For Fast External Boot : must be 0b | For XIP boot : Bus width           | For EMAC boot : PHY mode  | For all boot modes : CLKOUT1 output enabled/disable d on XDMA_EVENT _INTR0 |                      |                 |                           |                 |                 |
| CONTROL_ STATUS[23:22]                            | CONTROL_ STATUS[21:20]                               | CONTROL_ STATUS[19:18]                                                                              | CONTROL_ STATUS[17]                                                      | CONTROL_ STATUS[16]                | CONTROL_ STATUS[7:6]      | CONTROL_ STATUS[5]                                                         | CONTROL_ STATUS[4:0] |                 |                           |                 |                 |
|                                                   |                                                      |                                                                                                     |                                                                          |                                    |                           |                                                                            |                      | 1st             | 2nd                       | 3rd             | 4th             |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved)                      | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved                             | Don't care for ROM code[3]                                               | 0 = 8-bit device 1 = 16-bit device | Don't care for ROM code   | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled                                   | 00001b               | UART0           | XIP w/ WAIT[1] (MUX2)[2 ] | MMC0            | SPI0            |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved)                      | For NAND boot : must be 00b                                                                         | 0 = ECC done by ROM 1 = ECC handled by NAND                              | Don't care for ROM code            | Don't care for ROM code   | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled                                   | 00010b               | UART0           | SPI0                      | NAND            | NANDI2C         |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved)                      | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved                             | Don't care for ROM code                                                  | 0 = 8-bit device 1 = 16-bit device | Don't care for ROM code   | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled                                   | 00011b               | UART0           | SPI0                      | XIP (MUX2)[2 ]  | MMC0            |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved)                      | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved For NAND boot : must be 00b | 0 = ECC done by ROM 1 = ECC handled by NAND                              | 0 = 8-bit device 1 = 16-bit device | Don't care for ROM code   | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled                                   | 00100b               | UART0           | XIP w/ WAIT[1] (MUX1)     | MMC0            | NAND            |

## Table 26-7. SYSBOOT Configuration Pins[4] (continued)

| SYSBOOT[15:14 ]                                   | SYSBOOT[13:12 ]                 | SYSBOOT[11:10 ]                                                                                     | SYSBOOT[9]                                  | SYSBOOT[8]                         | SYSBOOT[7:6]                                                       | SYSBOOT[5]                               | SYSBOOT[4:0]   |       | Boot Sequence             | Boot Sequence             |         |
|---------------------------------------------------|---------------------------------|-----------------------------------------------------------------------------------------------------|---------------------------------------------|------------------------------------|--------------------------------------------------------------------|------------------------------------------|----------------|-------|---------------------------|---------------------------|---------|
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved For NAND boot : must be 00b | 0 = ECC done by ROM 1 = ECC handled by NAND | 0 = 8-bit device 1 = 16-bit device | Don't care for ROM code                                            | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 00101b         | UART0 | XIP (MUX1)[2 ]            | SPI0                      | NANDI2C |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For NAND boot : must be 00b                                                                         | 0 = ECC done by ROM 1 = ECC handled by NAND | Don't care for ROM code            | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 00110b         | EMAC1 | SPI0                      | NAND                      | NANDI2C |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved For NAND boot : must be 00b | 0 = ECC done by ROM 1 = ECC handled by NAND | 0 = 8-bit device 1 = 16-bit device | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 00111b         | EMAC1 | MMC0                      | XIP w/ WAIT[1] (MUX2)[2 ] | NAND    |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved For NAND boot : must be 0   | 0 = ECC done by ROM 1 = ECC handled by NAND | 0 = 8-bit device 1 = 16-bit device | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 01000b         | EMAC1 | MMC0                      | XIP (MUX2)[2 ]            | NANDI2C |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved For NAND boot : must be 00b | 0 = ECC done by ROM 1 = ECC handled by NAND | 0 = 8-bit device 1 = 16-bit device | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 01001b         | EMAC1 | XIP w/ WAIT[1] (MUX1)[2 ] | NAND                      | MMC0    |

<!-- image -->

<!-- image -->

www.ti.com

## Table 26-7. SYSBOOT Configuration Pins[4] (continued)

| SYSBOOT[15:14 ]                                   | SYSBOOT[13:12 ]                 | SYSBOOT[11:10 ]                                                                                     | SYSBOOT[9]                                  | SYSBOOT[8]                         | SYSBOOT[7:6]                                                       | SYSBOOT[5]                               | SYSBOOT[4:0]   | SYSBOOT[4:0]   | Boot Sequence   | Boot Sequence   | Boot Sequence   |
|---------------------------------------------------|---------------------------------|-----------------------------------------------------------------------------------------------------|---------------------------------------------|------------------------------------|--------------------------------------------------------------------|------------------------------------------|----------------|----------------|-----------------|-----------------|-----------------|
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved For NAND boot : must be 00b | 0 = ECC done by ROM 1 = ECC handled by NAND | 0 = 8-bit device 1 = 16-bit device | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 01010b         | EMAC1          | XIP (MUX1)[2 ]  | SPI0            | NANDI2C         |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For NAND boot : must be 00b                                                                         | 0 = ECC done by ROM 1 = ECC handled by NAND | Don't care for ROM code            | Don't care for ROM code                                            | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 01011b         | USB0           | NAND            | SPI0            | MMC0            |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved For NAND boot: must be 00b  | 0 = ECC done by ROM 1 = ECC handled by NAND | 0 = 8-bit device 1 = 16-bit device | Don't care for ROM code                                            | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 01100b         | USB0           | NAND            | XIP (MUX2)[2 ]  | NANDI2C         |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved For NAND boot: must be 00b  | 0 = ECC done by ROM 1 = ECC handled by NAND | 0 = 8-bit device 1 = 16-bit device | Don't care for ROM code                                            | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 01101b         | USB0           | NAND            | XIP (MUX1)[2 ]  | SPI0            |
|                                                   |                                 |                                                                                                     |                                             |                                    |                                                                    |                                          | 01110b         | Reserved       | Reserved        | Reserved        | Reserved        |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | Don't care for ROM code                                                                             | Don't care for ROM code                     | Don't care for ROM code            | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 01111b         | UART0          | EMAC1           | Reserved        | Reserved        |

## Table 26-7. SYSBOOT Configuration Pins[4] (continued)

| SYSBOOT[15:14 ]                                   | SYSBOOT[13:12 ]                 | SYSBOOT[11:10 ]                                          | SYSBOOT[9]                                  | SYSBOOT[8]                         | SYSBOOT[7:6]                                                       | SYSBOOT[5]                               | SYSBOOT[4:0]   | Boot Sequence             | Boot Sequence   | Boot Sequence   |       |
|---------------------------------------------------|---------------------------------|----------------------------------------------------------|---------------------------------------------|------------------------------------|--------------------------------------------------------------------|------------------------------------------|----------------|---------------------------|-----------------|-----------------|-------|
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | 00b = non-muxed device 10b = muxed device x1b = reserved | Don't care for ROM code                     | 0 = 8-bit device 1 = 16-bit device | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 10000b         | XIP (MUX1)[2 ]            | UART0           | EMAC1           | MMC0  |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | 00b = non-muxed device 10b = muxed device x1b = reserved | Don't care for ROM code                     | 0 = 8-bit device 1 = 16-bit device | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 10001b         | XIP w/ WAIT[1] (MUX1)[2 ] | UART0           | EMAC1           | MMC0  |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For NAND boot : must be 00b                              | 0 = ECC done by ROM 1 = ECC handled by NAND | Don't care for ROM code            | Don't care for ROM code                                            | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 10010b         | NAND                      | NANDI2C         | USB0            | UART0 |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For NAND boot : must be 00b                              | 0 = ECC done by ROM 1 = ECC handled by NAND | Don't care for ROM code            | Don't care for ROM code                                            | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 10011b         | NAND                      | NANDI2C         | MMC0            | UART0 |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For NAND boot : must be 00b                              | 0 = ECC done by ROM 1 = ECC handled by NAND | Don't care for ROM code            | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 10100b         | NAND                      | NAND12 C        | SPI0            | EMAC1 |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For NAND boot : must be 00b                              | 0 = ECC done by ROM 1 = ECC handled by NAND | Don't care for ROM code            | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 10101b         | NANDI2C                   | MMC0            | EMAC1           | UART0 |

<!-- image -->

<!-- image -->

www.ti.com

## Table 26-7. SYSBOOT Configuration Pins[4] (continued)

| SYSBOOT[15:14 ]                                   | SYSBOOT[13:12 ]                 | SYSBOOT[11:10 ]                                                         | SYSBOOT[9]              | SYSBOOT[8]                         | SYSBOOT[7:6]                                                       | SYSBOOT[5]                               | SYSBOOT[4:0]   |                           | Boot Sequence   | Boot Sequence   |       |
|---------------------------------------------------|---------------------------------|-------------------------------------------------------------------------|-------------------------|------------------------------------|--------------------------------------------------------------------|------------------------------------------|----------------|---------------------------|-----------------|-----------------|-------|
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | Don't care for ROM code                                                 | Don't care for ROM code | Don't care for ROM code            | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal       | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 10110b         | SPI0                      | MMC0            | UART0           | EMAC1 |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | Don't care for ROM code                                                 | Don't care for ROM code | Don't care for ROM code            | Don't care for ROM code                                            | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 10111b         | MMC0                      | SPI0            | UART0           | USB0  |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | Don't care for ROM code                                                 | Don't care for ROM code | Don't care for ROM code            | Don't care for ROM code                                            | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 11000b         | SPI0                      | MMC0            | USB0            | UART0 |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | Don't care for ROM code                                                 | Don't care for ROM code | Don't care for ROM code            | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 11001b         | SPI0                      | MMC0            | EMAC1           | UART0 |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved | Don't care for ROM code | 0 = 8-bit device 1 = 16-bit device | Don't care for ROM code                                            | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 11010b         | XIP (MUX2)[2 ]            | UART0           | SPI0            | MMC0  |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For XIP boot : 00b = non-muxed device 10b = muxed device x1b = reserved | Don't care for ROM code | 0 = 8-bit device 1 = 16-bit device | Don't care for ROM code                                            | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 11011b         | XIP w/ WAIT[1] (MUX2)[2 ] | UART0           | SPI0            | MMC0  |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | Don't care for ROM code                                                 | Don't care for ROM code | Don't care for ROM code            | Don't care for ROM code                                            | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 11100b         | MMC1                      | MMC0            | UART0           | USB0  |

## Table 26-7. SYSBOOT Configuration Pins[4] (continued)

| SYSBOOT[15:14 ]                                   | SYSBOOT[13:12 ]                 | SYSBOOT[11:10 ]                                                                   | SYSBOOT[9]                          | SYSBOOT[8]                         | SYSBOOT[7:6]                                                       | SYSBOOT[5]                               | SYSBOOT[4:0]   | Boot Sequence      | Boot Sequence   | Boot Sequence   | Boot Sequence   |
|---------------------------------------------------|---------------------------------|-----------------------------------------------------------------------------------|-------------------------------------|------------------------------------|--------------------------------------------------------------------|------------------------------------------|----------------|--------------------|-----------------|-----------------|-----------------|
|                                                   |                                 |                                                                                   |                                     |                                    |                                                                    |                                          | 11101b         | Reserved           | Reserved        | Reserved        | Reserved        |
|                                                   |                                 |                                                                                   |                                     |                                    |                                                                    |                                          | 11110b         | Reserved           | Reserved        | Reserved        | Reserved        |
| 00b = 19.2MHz 01b = 24MHz 10b = 25MHz 11b = 26MHz | 00b (all other values reserved) | For Fast External Boot : 00b = non-muxed device 10b = muxed device x1b = reserved | For Fast External Boot : must be 0b | 0 = 8-bit device 1 = 16-bit device | 00b = MII 01b = RMII 10b = Reserved 11b = RGMII w/o internal delay | 0 = CLKOUT1 disabled 1 = CLKOUT1 enabled | 11111b         | Fast External Boot | EMAC1           | UART0           | Reserved        |

## SYSBOOT Configuration Pins Notes:

1. WAIT is monitored on GPMC\_WAIT0.
2. MUX1 and MUX2 designate which group of XIP signals are used. Each group is defined in Table 26-9.
3. Note that even though some bits may be a "don't care" for ROM code, all SYSBOOT values are latched into the CONTROL\_STATUS register and may be used by software after ROM execution has completed.
4. SYSBOOT[15:0] terminals are respectively LCD\_DATA[15:0] inputs, latched on the rising edge of PWRONRSTn.

<!-- image -->