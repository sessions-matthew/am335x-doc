<!-- image -->

www.ti.com

The ROM Code uses the row pointed by the SYSBOOT pins value. The device list is filled in with the 1 st to 4 th devices.

Table 26-7 is the decoding table for SYSBOOT pin configuration. The following shortcuts are used in the table:

- MMC1: MMC or SD card (MMC port 1)
- MMC0: MMC or SD card (MMC port 0)
- NAND / NANDI2C: NAND flash memory / read geometry from EEPROM on I2C0
- XIP: NOR or other XIP device without wait monitoring
- XIP w/ WAIT: NOR or other XIP device with wait monitoring
- MUX1: Boot with XIP\_MUX1 signals detailed in Table 26-9
- MUX2: Boot with XIP\_MUX2 signals detailed in Table 26-9
- UART0: UART interface (UART port 0)
- EMAC1: Ethernet interface (EMAC port 1)
- SPI0: SPI EEPROM (SPI 0, CS0)
- USB0: USB interface (USB0)

Note: For any SYSBOOT value that is selected, please be aware of the pin muxing implications. For example, if the boot mode selected is EMAC1, NAND, SPI0, NANDI2C, the device will drive EMAC, GPMC, SPI and I2C pins, in that order, depending on which boot device finally succeeds. Ensure that if a specific boot mode in the sequence chosen is not used that the components using those particular signals do not conflict with the ROM driving those signals (or external components are not in contention with the ROM using these signals). For specific details of the pins driven by each device, please refer the description of that boot device later in this chapter.

To extend the boot flow to boot from devices that are not natively supported by the ROM, SPI boot can be used. For example, to be able to boot from a USB stick, the system can be configured to boot from a SPI flash, and the code for configuring the USB and booting from a USB stick can be loaded into the SPI flash. This is known as a secondary boot.

The values corresponding to SYSBOOT[4:0]= x1111 provide a bypass mode booting feature.

The fast external boot feature consists of minimal execution by the ROM Code for configuring the GPMC interface and then directly jump to the code contained in the connected NOR flash device.

## 26.1.7 Fast External Booting

## 26.1.7.1 Overview

The Fast External boot feature:

- Consists of a blind jump in ARM mode to address 0x08000000 in an external XIP device connected to CS0
- The jump is performed with minimum on-chip ROM Code execution (only configures GPMC interface), without configuring any PLL
- Allows the customer to create its own booting code
- Is set up by means of the configuration pins, see Table 26-7.
- Addr/Data muxed device or a non-muxed (selected using SYSBOOT[11:10]) device in connected in XIP\_MUX2 configuration
- Bus width selected by SYSBOOT[8]
- CS0 chip select
- No wait monitoring is available

## 26.1.7.2 External Booting

Figure 26-11 shows the Fast External Boot procedure. The code does not make use of RAM and is designed for fast execution.

Figure 26-11. Fast External Boot

<!-- image -->

<!-- image -->