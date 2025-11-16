<!-- image -->

www.ti.com

## 26.1.8 Memory Booting

## 26.1.8.1 Overview

The memory booting procedure takes care of starting an external code located in memory device types.

Figure 26-12. Memory Booting

<!-- image -->

Figure 26-13. Memory Booting

<!-- image -->

There are two groups of memory booting devices distinguished by the need of code shadowing . The code shadowing means copying a code from a non-directly addressable device into a location (typically a RAM area) from where the code can be executed. Devices which are directly addressable are called eXecute In Place (XIP) devices.

<!-- image -->

The Memory Booting flowchart is shown in Figure 26-12. The second step is about performing the shadowing of the image that is copying the image from external mass storage (non-XIP) into internal RAM. Failure in image copy results in Memory Booting returning to the main booting procedure which will select the next device for booting. The next sections detail procedures for device initialization and detection in addition to the description of the sector read routine for each supported device type. A sector is a logical unit of 512 bytes.

The detection of whether an image is present or not on a selected device depends on the first few bytes. On a GP Device type a booting image is considered to be present when the first four bytes of the sector is not equal to 0000 0000h or FFFF FFFFh.

During the first read sector call, sectors are copied to a temporary RAM buffer. Once the image is found and destination address is known, the content of the temporary buffer is moved to the target RAM location so it is needed to re-read the first image sector. On a GP Device the GP header is discarded, therefore only executable code is located in RAM with the first executable instruction located at the destination address.

The Image authentication and execution is detailed in Section 26.1.12. For more information about image formats and contents, see Section 26.1.10

MMC/SD cards and NAND devices can hold up to four copies of the booting image. Therefore the ROM Code searches for one valid image out of the four if present by walking over the first four blocks of the mass storage space. Other XIP devices (NOR) use only one copy of the booting image.

<!-- image -->

www.ti.com

## 26.1.8.2 XIP Memory

The ROM Code can boot directly from XIP devices. A typical XIP device is a NOR flash memory. Support for XIP devices is performed under the following assumptions:

- Uses GPMC as the communication interface
- Up to 1Gbit (128Mbytes) memories can be connected
- Both x8 and x16 data bus width
- Asynchronous protocol
- Supports address/data multiplexed mode and non-muxed mode
- GPMC clock is 100-MHz
- Device connected to CS0 mapped to address 0x08000000.
- Wait pin signal WAIT0 monitored depending on the SYSBOOT pin configuration (XIP / XIP w/ WAIT).
- Flexible muxing options for gpmc\_a0-gpmc\_a11 for non-muxed XIP devices

Depending on the SYSBOOT pins, the GPMC is configured to use the WAIT signal connected on the WAIT0 pin or not. Wait pin polarity is set to stall accessing memory when the WAIT0 pin is low. The wait monitoring is intended to be used with memories which require long time for initialization after reset or need to pause while reading data. The boot procedure from XIP device can be described as such:

- Configure GPMC for XIP device access.
- Set the image location to 0x08000000.
- Verify if bootable image is present at the image location.
- If the image has been found, start the execution.
- If the image has not been found, return from XIP booting to the main booting loop.

## 26.1.8.2.1 XIP Initialization and Detection

- GPMC initialization

Figure 26-14 and Table 26-8 describe the GPMC timing settings set for XIP boot and other address-data accessible devices.

Figure 26-14. GPMC XIP Timings

<!-- image -->

Table 26-8. XIP Timings Parameters

| Parameter      | Description        | Value (clock cycles)   |
|----------------|--------------------|------------------------|
| t wr           | write cycle period | 17                     |
| t rd           | read cycle period  | 17                     |
| t CEon         | CE low time        | 0                      |
| t CEoff        | CE high time       | 16                     |
| t ADVon        | ADV low time       | 1                      |
| t ADVoff       | ADV high time      | 2                      |
| t OEon         | OE low time        | 3                      |
| t WEon         | WE low time        | 3                      |
| t rddata       | data latch time    | 15                     |
| t OEoff        | OE high time       | 16                     |
| t WEoff        | WE high time       | 15                     |
| t CSEXTRADELAY | CS Extra Delay     | 1/4                    |

The one clock cycle is 20ns, which corresponds to 50-MHz frequency.

- Device detection

There is no specific identification routine executed prior to booting from an XIP device.

<!-- image -->

<!-- image -->

www.ti.com

## 26.1.8.2.2 Pins Used

The list of device pins that are configured by the ROM in the case of NOR boot mode are as follows. Please note that all the pins might not be driven at boot time. The decision as to which pins need to be driven is done based on the type of NOR flash selected. The pins that are not listed below are not configured by the ROM code and are left at power-on defaults. Specifically, external logic is needed to isolate the upper address lines (A12-A27) of the NOR flash from the device pins and drive them low during non-muxed NOR boot. Similarly for Muxed NOR Boot, address lines A16 and above to the memory are not controlled by the ROM and need to be managed externally during boot to ensure proper addressing to the all memory signals.

Once the initial software starts running, it can appropriately configure the pinmux setting for the lines and remove the isolation to allow GPMC to drive all the address lines.

Table 26-9. Pins Used for Non-Muxed NOR Boot

| Signal name   | Pin used in XIP_MUX1 (1) mode   | Pin used in XIP_MUX2 (1) mode   |
|---------------|---------------------------------|---------------------------------|
| CS0           | GPMC_CSN0                       | GPMC_CSN0                       |
| ADVN_ALE      | GPMC_ADVN_ALE                   | GPMC_ADVN_ALE                   |
| OEN_REN       | GPMC_OEN_REN                    | GPMC_OEN_REN                    |
| BE0N_CLE      | GPMC_BEN0_CLE                   | GPMC_BEN0_CLE                   |
| BE1N          | GPMC_BE1N                       | GPMC_CSN2 and GPMC_BE1N (2)     |
| CLK           | GPMC_CLK                        | none                            |
| WEN           | GPMC_WEN                        | GPMC_WEN                        |
| WAIT0         | GPMC_WAIT0                      | GPMC_WAIT0                      |
| WAIT1         | none                            | GPMC_CLK                        |
| AD0 - AD15    | GPMC_AD0 - GPMC_AD15            | GPMC_AD0 - GPMC_AD15            |
| A0            | GPMC_A0                         | LCD_DATA0                       |
| A1            | GPMC_A1                         | LCD_DATA1                       |
| A2            | GPMC_A2                         | LCD_DATA2                       |
| A3            | GPMC_A3                         | LCD_DATA3                       |
| A4            | GPMC_A4                         | LCD_DATA4                       |
| A5            | GPMC_A5                         | LCD_DATA5                       |
| A6            | GPMC_A6                         | LCD_DATA6                       |
| A7            | GPMC_A7                         | LCD_DATA7                       |
| A8            | GPMC_A8                         | LCD_VSYNC                       |
| A9            | GPMC_A9                         | LCD_HSYNC                       |
| A10           | GPMC_A10                        | LCD_PCLK                        |
| A11           | GPMC_A11                        | LCD_AC_BIAS_EN                  |

(1) XIP\_MUX1 and XIP\_MUX2 do not correspond to the pin mux modes that are defined for each terminal. This table identifies which pins are used in each boot mode.

(2) The GPMC\_CSN2 and GPMC\_BE1N terminals are driven in this mode with the BE1N signal.

Table 26-10. Pins Used for Muxed NOR Boot

| Signal name   | Pin used in XIP_MUX1 (1) mode   | Pin used in XIP_MUX2 (1) mode   |
|---------------|---------------------------------|---------------------------------|
| CS0           | GPMC_CSN0                       | GPMC_CSN0                       |
| ADVN_ALE      | GPMC_ADVN_ALE                   | GPMC_ADVN_ALE                   |
| OEN_REN       | GPMC_OEN_REN                    | GPMC_OEN_REN                    |
| BE0N_CLE      | GPMC_BEN0_CLE                   | GPMC_BEN0_CLE                   |
| BE1N          | GPMC_BE1N                       | GPMC_CSN2 and GPMC_BE1N (2)     |
| CLK           | GPMC_CLK                        | none                            |
| WEN           | GPMC_WEN                        | GPMC_WEN                        |
| WAIT0         | GPMC_WAIT0                      | GPMC_WAIT0                      |
| WAIT1         | none                            | GPMC_CLK                        |
| AD0 - AD15    | GPMC_AD0 - GPMC_AD15            | GPMC_AD0 - GPMC_AD15            |

(1) XIP\_MUX1 and XIP\_MUX2 do not correspond to the pin mux modes that are defined for each terminal. This table identifies which pins are used in each boot mode.

(2) The GPMC\_CSN2 and GPMC\_BE1N terminals are driven in this mode with the BE1N signal.

## 26.1.8.2.3 Sysboot Pins

Some of the SYSBOOT pins have special meanings when NOR boot is selected.

Table 26-11. Special SYSBOOT Pins for NOR Boot

| SYSBOOT[n]   | Description                                              |
|--------------|----------------------------------------------------------|
| [8]          | 0 = 8-bit device 1 = 16-bit device                       |
| [11:10]      | 00b = Non-muxed device 10b = Muxed device x1b = Reserved |

## 26.1.8.3 Image Shadowing for Non-XIP Memories

## 26.1.8.3.1 Shadowing on GP Device

The GP Device shadowing uses the approach in Figure 26-15.

<!-- image -->

<!-- image -->

www.ti.com

Figure 26-15. Image Shadowing on GP Device

<!-- image -->

## 26.1.8.4 NAND

The NAND flash memory is not XIP and requires shadowing before the code can be executed.

## 26.1.8.4.1 Features

- Uses GPMC as the communication interface
- Device from 512Mbit (64MByte)
- x8 and x16 bus width
- Support for large page size (2048 bytes + 64 spare bytes) or very large page size 4096 bytes + 128 / 218 spare bytes)
- Only supports devices where Chip Select can be de-asserted during read, program or erase cycles, without interrupting the operation
- Device Identification based on ONFI or ROM table
- ECC correction : 8 bits/sector for most devices (16b/sector for devices with large spare area)
- Support for disabling ECC correction, so than the in-built ECC correction mechanisms on some NANDs can be used.
- GPMC timings adjusted for NAND access
- GPMC clock is 50MHz
- Device connected to GPMC\_CSN0
- Wait pin signal GPMC\_WAIT0 connected to NAND BUSY output
- Four physical blocks are searched for an image. Thmmce block size depends on device.

## 26.1.8.4.2 Initialization and Detection

The initialization routine for NAND devices consists in three parts: GPMC initialization, device detection with parameters determination and finally bad block detection.

## ONFI Support

The NAND identification starts with ONFI detection. For more information on ONFI standard, see the Open NAND Flash Interface Specification (http://www.onfi.org).

## GPMC Initialization

The GPMC interface is configured as such it can be used for accessing NAND devices. The address bus is released since a NAND device does not use it. The data bus width is initially set to 16 bits; and changed to 8 bits if needed after device parameters determination. The following scheme is applied since NAND devices require different timings when compared to regular NOR devices:

Figure 26-16. GPMC NAND Timings

<!-- image -->

Table 26-12. NAND Timings Parameters

| Parameter   | Description                       |   Value [clock cycles] |
|-------------|-----------------------------------|------------------------|
| t wr        | write cycle period                |                     30 |
| t rd        | read cycle period                 |                     30 |
| t CEon      | CE low (not marked on the figure) |                      0 |
| t OEon      | CE low to OE low time             |                      7 |
| t WEon      | CE low to WE low time             |                      5 |
| t rddata    | CE low to data latch time         |                     21 |
| t OEoff     | CE low to OE high time            |                     24 |
| t WEoff     | CE low to WE high time            |                     22 |

Figure 26-16 and Table 26-12 describes the timings configured for NAND device access. The one clock cycle is 20 ns, which correspond to 50-MHz frequency.

## Device Detection and Parameters

The ROM Code first performs an initial wait for device auto initialization (with 250ms timeout) with polling of the ready information. Then, it needs to identify the NAND type connected to the GPMC interface. The GPMC is initialized using 8 bits, asynchronous mode. The NAND device is reset (command FFh) and its status is polled until ready for operation (with 200ms timeout). The ONFI Read ID (command 90h / address 20h) is sent to the NAND device. If it replies with the ONFI signature (4 bytes) then a Read parameters page (command ECh) is sent. If the parameters page does not have the ONFI signature, then the ONFI identification fails. If the ONFI identification passes, the information shown in Table 26-13 is then extracted: page size, spare area size, number of pages per block, and the addressing mode. The remaining data bytes from the parameters page stream are simply ignored.

<!-- image -->

<!-- image -->

www.ti.com

Table 26-13. ONFI Parameters Page Description

|   Offset | Description                    |   Size (bytes) |
|----------|--------------------------------|----------------|
|        6 | Features supported             |              2 |
|       80 | Number of data bytes per page  |              4 |
|       84 | Number of spare bytes per page |              2 |
|       92 | Number of pages per block      |              4 |
|      101 | Number of address cycles       |              1 |

If the ONFI Read ID command fails (it will be the case with any device not supporting ONFI) then the device is reset again with polling for device to be ready (with 200ms timeout). Then, the standard Read ID (command 90h / address 00h) is sent. If the Device ID (2 nd byte of the ID byte stream) is recognized as being a supported device then the device parameters are extracted from an internal ROM Code table. The list of supported devices is shown in Table 26-14.

Table 26-14. Supported NAND Devices

| Capacity   | Device ID   | Bus Width   | Page size   |
|------------|-------------|-------------|-------------|
| 512 Mb     | F0          | x8          | 2048        |
| 512 Mb     | C0          | x16         | 2048        |
| 512 Mb     | A0          | x8          | 2048        |
| 512 Mb     | B0          | x16         | 2048        |
| 512 Mb     | F2          | x8          | 2048        |
| 512 Mb     | C2          | x16         | 2048        |
| 512 Mb     | A2          | x8          | 2048        |
| 512 Mb     | B2          | x16         | 2048        |
| 1 Gb       | F1          | x8          | 2048        |
| 1 Gb       | C1          | x16         | 2048        |
| 1 Gb       | A1          | x8          | 2048        |
| 1 Gb       | B1          | x16         | 2048        |
| 2 Gb       | DA          | x8          | 2048        |
| 2 Gb       | CA          | x16         | 2048        |
| 2 Gb       | AA          | x8          | 2048        |
| 2 Gb       | BA          | x16         | 2048        |
| 2 Gb       | 83          | x8          | 2048        |
| 2 Gb       | 93          | x16         | 2048        |
| 4 Gb       | DC          | x8          | 2048        |
| 4 Gb       | CC          | x16         | 2048        |
| 4 Gb       | AC          | x8          | 2048/4096   |
| 4 Gb       | BC          | x16         | 2048/4096   |
| 4 Gb       | 84          | x8          | 2048        |
| 4 Gb       | 94          | x16         | 2048        |
| 8 Gb       | D3          | x8          | 2048/4096   |
| 8 Gb       | C3          | x16         | 2048/4096   |
| 8 Gb       | A3          | x8          | 2048/4096   |
| 8 Gb       | B3          | x16         | 2048/4096   |
| 8 Gb       | 85          | x8          | 2048        |
| 8 Gb       | 95          | x16         | 2048        |
| 16 Gb      | D5          | x8          | 2048/4096   |
| 16 Gb      | C5          | x16         | 2048/4096   |
| 16 Gb      | A5          | x8          | 2048/4096   |
| 16 Gb      | B5          | x16         | 2048/4096   |

Table 26-14. Supported NAND Devices (continued)

| Capacity   | Device ID   | Bus Width   | Page size   |
|------------|-------------|-------------|-------------|
| 16 Gb      | 86          | x8          | 2048        |
| 16 Gb      | 96          | x16         | 2048        |
| 32 Gb      | D7          | x8          | 2048/4096   |
| 32 Gb      | C7          | x16         | 2048/4096   |
| 32 Gb      | A7          | x8          | 2048/4096   |
| 32 Gb      | B7          | x16         | 2048/4096   |
| 32 Gb      | 87          | x8          | 2048        |
| 32 Gb      | 97          | x16         | 2048        |
| 64 Gb      | DE          | x8          | 2048/4096   |
| 64 Gb      | CE          | x16         | 2048/4096   |
| 64 Gb      | AE          | x8          | 2048/4096   |
| 64 Gb      | BE          | x16         | 2048/4096   |

When the parameters are retrieved from the ROM table: page size and block size is updated based on 4 th byte of NAND ID data. Due to inconsistency amongst different manufacturers, only devices which has been recognized to be at least 2Gb (included) have these parameters updated. Therefore, the ROM Code supports 4kB page devices but only if their size, according to the table, is at least 2Gb. Devices which are smaller than 2Gb have the block size parameter fixed to 128kB. Table 26-15 shows the 4 th ID Data byte encoding used in ROM Code.

Table 26-15. 4th NAND ID Data Byte

| Item   | Description   | I/O #   | I/O #   | I/O #   | I/O #   | I/O #   | I/O #   | I/O #   | I/O #   |
|--------|---------------|---------|---------|---------|---------|---------|---------|---------|---------|
| Item   | Description   | 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
|        | 1kB           |         |         |         |         |         |         | 0       | 0       |
|        | 2kB           |         |         |         |         |         |         | 0       | 1       |
|        | 4kB           |         |         |         |         |         |         | 1       | 0       |
|        | 8kB           |         |         |         |         |         |         | 1       | 1       |
|        | 2 levels      |         |         |         |         | 0       | 0       |         |         |
|        | 4 levels      |         |         |         |         | 0       | 1       |         |         |
|        | 8 levels      |         |         |         |         | 1       | 0       |         |         |
|        | 16 levels     |         |         |         |         | 1       | 1       |         |         |
|        | 64kB          |         |         | 0       | 0       |         |         |         |         |
|        | 128kB         |         |         | 0       | 1       |         |         |         |         |
|        | 256kB         |         |         | 1       | 0       |         |         |         |         |
|        | 512kB         |         |         | 1       | 1       |         |         |         |         |

<!-- image -->

<!-- image -->

## Reading NAND Geometry From I2C EEPROM

ROM supports a special boot mode called NANDI2C to support NAND devices whose geometry cannot be detected by the ROM automatically using methods described in the previous section. If this boot mode is selected, the ROM code tries to read NAND geometry from an I2C EEPROM. If the read is successful, ROM code then proceeds to next steps of NAND boot, beginning with reading bad blocks information.

The list of device pins that are configured by the ROM in the case of NANDI2C boot mode. (This is in addition to the NAND boot pins described in the previous sections.)

## Table 26-16. Pins Used for NANDI2C Boot for I2C EEPROM Access

| Signal name   | Pin Used in Device   |
|---------------|----------------------|
| I2C SCL       | i2c0_scl             |
| I2C SDA       | i2c0_sda             |

ROM accesses the I2C EEPROM at I2C slave address 0x50 and reads 7 bytes starting from address offset 0x80 . The ROM sends a 2-byte address to perform a selective read from the I2C EEPROM, thus the ROM can only support devices that are minimum of 32Kb in size. The format of this (NAND geometry information) is as follows:

Table 26-17. NAND Geometry Information on I2C EEPROM

| Byte address   | Information                                                                    | Information                                                             |
|----------------|--------------------------------------------------------------------------------|-------------------------------------------------------------------------|
|                | Upper nibble                                                                   | Lower nibble                                                            |
| 0x80           | Magic Number - 0x10                                                            | Magic Number - 0x10                                                     |
| 0x81           | Magic Number - 0xb3                                                            | Magic Number - 0xb3                                                     |
| 0x82           | Magic Number - 0x57                                                            | Magic Number - 0x57                                                     |
| 0x83           | Magic Number - 0xa6                                                            | Magic Number - 0xa6                                                     |
| 0x84           | NAND column address (word/byte offset within a page) size in bytes, Example: 2 | NAND row address (page offset) size in bytes. Example: 3                |
| 0x85           | Page size (2 N ) exponent 'N'. Example (for page size of 2048): 11             | Pages per block (2 N ) exponent 'N'Example (for number of blocks 64): 6 |
| 0x86           | NAND bus width 0 = 8-bit device 1 = 16-bit device                              | ECC Type 00b = No ECC 01b = BCH8 10b = BCH16 11b = Reserved             |

## ECC Correction

The default ECC correction applied is BCH 8b/sector using the GPMC and ELM hardware.

For device ID codes D3h, C3h, D5h, C5h, D7h, C7h, DEh, CEh when manufacturer code (first ID byte) is 98h the Cell type information is checked in the 4th byte of ID data. If it is equal to 10b then the ECC correction applied is BCH 16b/sector.

In addition ECC computation done by the ROM can be turned off completely by using SYSBOOT[9]. This is particularly useful when interfacing with NAND devices that have built in ECC engines.

Table 26-18. ECC Configuration for NAND Boot

|   SYSBOOT[9] | ECC Computation     |
|--------------|---------------------|
|            0 | ECC done by ROM     |
|            1 | ECC handled by NAND |

Figure 26-17. NAND Device Detection

<!-- image -->

The detection procedure is described in Figure 26-17. Once the device has been successfully detected, the ROM Code changes GPMC to 16-bit bus width if necessary.

<!-- image -->

<!-- image -->

www.ti.com

## Bad Block Verification

Invalid blocks are blocks which contain invalid bits whose reliability cannot be guaranteed by the manufacturer. Those bits are identified in the factory or during the programming and reported in the initial invalid block information located in the spare area on the 1 st and 2 nd page of each block. Since the ROM Code is looking for an image in the first four blocks, it must detect block validity status of these blocks. Blocks which are detected as invalid are not accessed later on. Blocks validity status is coded in the spare areas of the first two pages of a block (first byte equal to FFh in 1 st and 2 nd pages for an 8 bits device / first word equal to FFFFh in 1 st and 2 nd page for a 16bits device).

Figure 26-18 depicts the invalid block detection routine. The routine consists in reading spare areas and checking validity data pattern.

Figure 26-18. NAND Invalid Blocks Detection

<!-- image -->

## 26.1.8.4.2.1 NAND Read Sector Procedure

The ROM Code reads data from NAND devices in 512 bytes sectors. The read function fails in two cases:

- The accessed sector is within a block marked as invalid
- The accessed sector contains an error which cannot be corrected with ECC

Figure 26-19 shows the read sector routine for NAND devices. The ROM Code uses normal read (command 00h 30h) for reading NAND page data.

<!-- image -->

www.ti.com

Figure 26-19. NAND Read Sector Procedure

<!-- image -->

Page data can contain errors due to memory alteration. The ROM Code uses an ECC correction algorithm to detect and possibly correct those errors. The ECC algorithm used is BCH with capability for correcting 8b or 16b errors per sector. The BCH data is automatically calculated by the GPMC on reading each 512 bytes sector. The computed ECC is compared against ECC stored in the spare area for the corresponding page. Depending on the page size, the amount of ECC data bytes stored in the corresponding spare area is different. Figure 26-20 and Figure 26-21 show the mapping of ECC data inside the spare area for respectively 2KB-page and 4KB- page devices. If both ECC data are equal then the Read Sector function returns the read 512 bytes sector without error. Otherwise the ROM Code tries to correct error(s) in the corresponding sector (this procedure is assisted by the ELM hardware) and returns the data if successful. If errors are uncorrectable, the function returns with FAIL.

When the 512-byte sector successfully passes the ECC check, the ROM checks for a valid configuration header. A configuration header is considered to be valid if the first value (the Start field) contains data other than 0x00000000 or 0xFFFFFFFF. If the Start field is not valid, the ROM reads the next 512-byte sector, performs the ECC algorithm as described above, and checks for a valid configuration header. This process is repeated for the whole block until a valid header is found. If a valid header is not found in the first block, the ROM attempts the same process in the next block. For NAND, the ROM checks for a valid header in the first four blocks. If no valid header is found in the first 4 blocks, the NAND boot fails, and the ROM moves on to the next valid boot source as dictated by the SYSBOOT configuration signals.

<!-- image -->

www.ti.com

Figure 26-20. ECC Data Mapping for 2 KB Page and 8b BCH Encoding

<!-- image -->

wordx16

<!-- image -->

## 26.1.8.4.2.2 Pins Used

The list of device pins that are configured by the ROM in the case of NAND boot mode are as follows. Please note that all the pins might not be driven at boot time.

NOTE:

Caution must be taken when using an 8-bit NAND. The ROM initially configures all address and data signals (AD0-AD15) the GPMC uses when attempting to read configuration values from the NAND. If you use an 8-bit NAND, and connect AD15-AD8 to other functions (GPIOs, for example), there may be contention on these signals during the boot phase. AD15-AD8 are configured as outputs and will be driven by the ROM if NAND boot is selected. Ensure external circuits will not be in contention with these driven outputs.

<!-- image -->

Figure 26-21. ECC Data Mapping for 4 KB Page and 16b BCH Encoding

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## Table 26-19. Pins Used for NAND Boot

| Signal name   | Pin Used in Device   |
|---------------|----------------------|
| CS0           | GPMC_CSN0            |
| ADVN_ALE      | GPMC_ADVN_ALE        |
| OEN_REN       | GPMC_OEN_REN         |
| BE0N_CLE      | GPMC_BEN0_CLE        |
| BE1N          | GPMC_BE1N            |
| WEN           | GPMC_WEN             |
| WAIT          | GPMC_WAIT0           |
| CLK           | GPMC_CLK             |
| AD0 - AD15    | GPMC_AD0 - GPMC_AD15 |

## 26.1.8.4.2.3 SYSBOOT Pins

SYSBOOT[11:10] has a special meaning when NAND boot is selected. SYSBOOT[11:10] must be 0.

## 26.1.8.5 MMC / SD Cards

## 26.1.8.5.1 Overview

The ROM Code supports booting from MMC / SD cards in the following conditions:

- MMC/SD Cards compliant to the Multimedia Card System Specification and Secure Digital I/O Card Specification of low and high capacities.
- MMC/SD cards connected to MMC0 or MMC1.
- Support for 3.3/1.8 V on MMC0 and MMC1.
- Initial 1-bit MMC Mode, optional 4-bit mode, if device supports it.
- Clock Frequency: identification mode: 400 KHz; data transfer mode up to 10 MHz.
- Only one card connected to the bus.
- Raw mode, image data read directly from sectors in the user area.
- File system mode (FAT12/16/32 supported with or without Master Boot Record), image data is read from a booting file.

## 26.1.8.5.2 System Interconnection

Each interface has booting restrictions on which type of memory it supports: -

- MMC0 supports booting from the MMC/SD card cage and also supports booting from eMMC/eSD/managed NAND memory devices with less than 4GB capacity.
- MMC1 supports booting from eMMC/eSD/managed NAND memory device with 4GB capacity or greater.

The restriction is a result of many eMMC devices not being compliant with the eMMC v4.41 specification. If you must boot from two different card cages, many MMC/SD cards will boot from MMC1; however, some older cards may not boot because MMC1 boot uses a slightly different boot sequence to support larger eMMC capacities. For maximum compatibility, only MMC0 should be used to boot from the card cage. Similarly for maximum compatibility, booting from eMMC/eSD/managed NAND should only be performed on MMC1.

Note that the above restrictions only apply to booting from each port. Drivers can be written for either port to support any desired interface.

## Note:

- The ROM Code does not handle the card detection feature on card cage.
- If MMC1 is used the GPMC interface is not usable, due to pin muxing options.
- MMC1 supports sector mode without querying the card.

## 26.1.8.5.3 Booting Procedure

The high level flowchart of the eMMC / eSD and MMC/SD booting procedure is depicted in Figure 26-22.

Figure 26-22. MMC/SD Booting

<!-- image -->

## 26.1.8.5.4 Initialization and Detection

The ROM Code attempts to initialize the memory device or card connected on MMC interface. If neither memory device nor card is detected then the ROM Code carries on to the next booting device. The standard identification process and Relative Card Address (RCA) assignment are used. However, the ROM Code assumes that only one memory or card is present on the bus. This first sequence is done using the CMD signal which is common to SD and MMC devices.

MMC and SD standards detail this phase as initialization phase . Both standards differ in the first commands involved: CMD1 and ACMD41 . The ROM Code uses this difference in command set to discriminate between MMC and SD devices: CMD1 is supported only by the MMC standard whereas ACMD41 is only supported by SD standard. The ROM Code first sends a CMD1 to the device and gets a response only if an MMC device is connected. If no response is received then ACMD41 (ACMD41 is made out of CMD55 and ACMD41) is sent and a response is expected from an SD device. If no response is received then it is assumed that no device is connected and the ROM Code exits the MMC/SD Booting procedure with FAIL. This is detection procedure shown in Figure 26-23.

Another point to note is the difference in the arguments to CMD1 between MMC0 and MMC1. At first the ROM queries the card with CMD1, ARG = 0, to get the OCR from the card. On MMC0, the response from the card is simply reflected back to the card as the argument for all subsequent CMD1, till the card is in the READY state. On MMC1, Bit30 of the response received from the card is set to 1 by the ROM, and this modified value is used as the argument for subsequent CMD1. This is done to indicate to the card that the ROM supports sector addressing. This mode might not be compatible with older (older than v4.4) versions of cards.

<!-- image -->

<!-- image -->

www.ti.com

Figure 26-23. MMC/SD Detection Procedure

<!-- image -->

The contents of an MMC/SD card or an eMMC/eSD device may be formatted as raw binary or within a FAT filesystem. The ROM Code reads out raw sectors from image or the booting file within the file system and boots from it.

## 26.1.8.5.5 MMC/SD Read Sector Procedure in Raw Mode

In raw mode the booting image can be located at one of the four consecutive locations in the main area: offset 0x0 / 0x20000 (128KB) / 0x40000 (256KB) / 0x60000 (384KB). For this reason, a booting image shall not exceed 128KB in size. However it is possible to flash a device with an image greater than 128KB starting at one of the aforementioned locations. Therefore the ROM Code does not check the image size. The only drawback is that the image will cross the subsequent image boundary.

The ROM will check the first sector (offset 0x0) for the presence of the TOC structure as described in Section 26.1.10. If the sector contains a valid CHSETTINGS item, the ROM reads the GP header in the next 512-byte section, uses its size and destination information to download the image to the destination address, and jumps to the destination address to complete the boot. If the TOC structure is missing or invalid, the ROM checks for a redundant image in the next location (0x20000), and repeats the process to find a valid TOC. The ROM continues to attempt to boot from each of the 4 redundant locations as mentioned above. The TOC is considered invalid if the first location is either 0xFFFFFFFF or 0x00000000 (which is typical of a missing card or an erased image), or if the CHSETTINGS item is missing or corrupt.

## 26.1.8.5.6 MMC/SD Read Sector Procedure in FAT Mode

MMC/SD Cards or eMMC/ eSD devices may hold a FAT file system which ROM Code is able to read and process. The image used by the booting procedure is taken from a specific booting file named 'MLO'. This file has to be located in the root directory on an active primary partition of type FAT12/16 or FAT32.

An MMC/SD card or eMMC/ eSD device can be configured either as floppy-like or hard-drive-like.

- When acting as floppy-like, the content is a single file system without any Master Boot Record (MBR) holding a partition table
- When acting as hard-drive-like, an MBR is present in the first sector. This MBR holds a table of partitions, one of which must be FAT12/16/32, primary and active.

<!-- image -->

The card or device should always hold an MBR except for those using floppy-like file system (please refer to the CSD internal Register fields FILE\_FORMAT\_GRP and FILE\_FORMAT in the MultiMedia Card System Specification). However, depending on the used operating system the MMC/SD card or device will be formatted either with partition(s) (using an MBR) or without. The ROM Code supports both types; this is described in the following section.

The ROM Code retrieves a map of the booting file from the FAT table. The booting file map is a collection of all FAT table entries related to the booting file (a FAT entry points to a cluster holding part of the file). The booting procedure uses this map to access any 512 byte sector within the booting file without involving ROM Code FAT module.

The sector read procedure utilizes standard MMC/SD raw data read function. The sector address is generated based on the booting memory file map collected during the initialization. Hence the ROM Code can address sectors freely within the booting file space.

## 26.1.8.5.7 FAT File system

This paragraph describes functions which are used by the ROM Code, it is not intended to fully describe the Master Boot Record and the FAT file system:

- How to recognize if a sector is the 1 st sector of an MBR
- How to recognize if a sector is the 1 st sector of a FAT12/16/32
- How to find the 1 st cluster of the booting file
- How to buffer the booting file FAT entries.

Some memory devices which support file systems can be formatted with or without MBR, therefore the first task of the ROM Code is to detect whether or not the device is holding an MBR in the first sector.

If this is the case, an active FAT12/16/32 partition is searched in all 4 MBR partition entries, based on the Type field. If the MBR entries are not valid or if no useable partition is found then the ROM Code returns to the Booting procedure with FAIL. The Extended partitions are not checked, the booting file must reside in a primary partition.

If a partition is found then its first sector is read and used further on. If no MBR is present (in case of a floppy-like system), the first sector of the device is read and used further on.

The read sector is checked to be a valid FAT12/16 or FAT32 partition. If this fails, in case another partition type is used (i.e. Linux FS or any other) or if the partition is not valid, the ROM Code returns with FAIL.

Otherwise, the Root Directory entries are searched for a file named depending on the booting device. The Long File Names (LFN) format is not used and only File Names in 8.3 Format are searched for . If no valid file is found, the ROM Code returns with FAIL.

Once the file has been found, the ROM Code reads the File Allocation Table (FAT) and buffers the singlylinked chain of clusters in a FAT Buffer which will be used by the Booting Procedure to access the file directly sector by sector. For FAT12/16 and for FAT32 (valid if a specific flag has been set in the FAT32 Boot Sector), there exist multiples copies of the FAT (ROM Code supports only 2 copies). When buffering FAT entries, the 2 FATs are compared. If they are not the same, only entries from the last FAT are used. The FAT Buffer holds sector numbers and not cluster numbers. The ROM Code converts each cluster entry to one or several sector entries if applicable.

The whole process is described in Figure 26-24. Every part related to MBR or FAT12/16/32 is described in the next paragraph.

<!-- image -->

www.ti.com

Figure 26-24. MMC/SD Booting, Get Booting File

<!-- image -->

## 26.1.8.5.7.1 Master Boot Record (MBR)

The Master Boot Record is the 1 st sector of a memory device. It is made out of some executable code and 4 partition entries. The aim of such a structure is to be able to divide the hard disk in partitions mostly used to boot different systems (i.e. Microsoft Windows™, Linux, …). Its structure is described in Table 2620 and Table 26-21. The valid partition types searched by the ROM Code are described in Table 26-22.

Table 26-20. Master Boot Record Structure

| Offset   |   Length[bytes] | Entry Description     | Value             |
|----------|-----------------|-----------------------|-------------------|
| 0000h    |             446 | Optional Code         |                   |
| 01BEh    |              16 | Partition Table Entry | (see Table 26-21) |
| 01CEh    |              16 | Partition Table Entry | (see Table 26-21) |
| 01DEh    |              16 | Partition Table Entry | (see Table 26-21) |
| 01EEh    |              16 | Partition Table Entry | (see Table 26-21) |
| 01FEh    |               2 | Signature             | AA55h             |

Table 26-21. Partition Entry

| Offset   |   Length[bytes] | Entry Description                                        | Value                                               |
|----------|-----------------|----------------------------------------------------------|-----------------------------------------------------|
| 0000h    |               1 | Partition State                                          | 00h: Inactive80h: Active                            |
| 0001h    |               1 | Partition Start Head                                     | H s                                                 |
| 0002h    |               2 | Partition Start Cylinder and Sector                      | C s [7:0]-C s [9:8]-S s [5:0]                       |
| 0004h    |               1 | Partition Type                                           | See Table 26-22 for partial partition types         |
| 0005h    |              16 | Partition End Head                                       | H e                                                 |
| 0006h    |               2 | Partition End Cylinder and Sector                        | C e [7:0]-C e [9:8]-S e [5:0]                       |
| 0008h    |               4 | First sector position relative to the beginning of media | LBA s =C s .H.S+ H s .S+ S s -1                     |
| 000Ch    |               4 | Number of sectors in partition                           | LBA e =C e .H.S+ H e .S+ S e -1Nbs= LBA e -LBA s +1 |

Table 26-22. Partition Types

| Partition Type   | Description   |
|------------------|---------------|
| 01h              | FAT12         |
| 04h, 06h, 0Eh    | FAT16         |
| 0Bh, 0Ch, 0Fh    | FAT32         |

The way the ROM Code detects whether a sector is the 1 st sector of an MBR or not is described in Figure 26-25.

The ROM Code first checks if the signature is present. Each partition entry is checked:

- If its type is set to 00h then all fields in the entry must be 00h
- The partition is checked to be within physical boundaries, i.e. the partition is located inside and it's size fits the total physical sectors.

Figure 26-25. MBR Detection Procedure

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

Once identified, the ROM Code gets the partition using the procedure described in Figure 26-26. The partition type is checked to be FAT12/16 or FAT32. Its state must be 00h or 80h (if there are more than one active partition the test fails). The ROM Code returns with FAIL if no active primary FAT12/16/32 could be found.

Figure 26-26. MBR, Get Partition

<!-- image -->

## 26.1.8.5.7.2 FAT12/16/32 Boot Sector

The FAT file system is made out of several parts:

- Boot Sector which holds the BIOS Parameter Block (BPB)
- File Allocation Table (FAT) which describes the use of each cluster of the partition
- Data Area which holds the Files, Directories and Root Directory (for FAT12/16, the Root Directory has a specific fixed location).

The Boot Sector is described in Table 26-23.

Note: In the following description, all the fields whose names start with BPB\_ are part of the BPB. All the fields whose names start with BS\_ are part of the Boot Sector and not really part of the BPB (not mandatory), they are not used at all by the ROM Code.

Table 26-23. FAT Boot Sector

| Offset   |   Length[bytes] | Name           | Description                                                                            |
|----------|-----------------|----------------|----------------------------------------------------------------------------------------|
| 0000h    |               3 | BS_jmpBoot     | Jump Instruction to Boot Code (not used)                                               |
| 0003h    |               8 | BS_OEMName     | Name of the System which created the partition                                         |
| 000Bh    |               2 | BPB_BytsPerSec | Counts of Bytes per sector (usually 512)                                               |
| 000Dh    |               1 | BPB_SecPerClus | Number of sectors per allocation unit                                                  |
| 000Eh    |               2 | BPB_RsvdSecCnt | Number of reserved sectors for the Boot SectorFor FAT12/16 is 1, for FAT32, usually 32 |
| 0010h    |               1 | BPB_NumFATs    | Number of copies of FAT, usually 2                                                     |

## Table 26-23. FAT Boot Sector (continued)

| Offset   | Offset   |   Length[bytes] | Name           | Description                                                                                                                                          |
|----------|----------|-----------------|----------------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0011h    | 0011h    |               2 | BPB_RootEntCnt | For FAT12/16, number of 32 bytes entries in the Root Directory (multiple of BPB_BytsPerSec/32)For FAT32 this value is 0                              |
| 0013h    | 0013h    |               2 | BPB_TotSec16   | Total Count of sectors on the volume. If the size is bigger than 10000h or for FAT32, this field is 0 and BPB_TotSec32 holds the value               |
| 0015h    | 0015h    |               1 | BPB_Media      | Media Type, usually F8h: fixed, non- removable                                                                                                       |
| 0016h    | 0016h    |               2 | BPB_FATSz16    | For FAT12/16, size in sectors of one FATFor FAT32, holds 0                                                                                           |
| 0018h    | 0018h    |               2 | BPB_SecPerTrk  | Number of sectors per track, 63 for SD/MMC                                                                                                           |
| 001Ah    | 001Ah    |               2 | BPB_NumHeads   | Number of heads, 255 for SD/MMC                                                                                                                      |
| 001Ch    | 001Ch    |               4 | BPB_HiddSec    | Number of sectors preceeding the partition                                                                                                           |
| 0020h    | 0020h    |               4 | BPB_TotSec32   | Total Count of sectors on the volume. If the size is smaller than 10000h (for FAT12/16), this field is 0 and BPB_TotSec16 is valid                   |
|          | 0024h    |               1 | BS_DrvNum      | Drive Number                                                                                                                                         |
|          | 0025h    |               1 | BS_Reserved1   | 00h                                                                                                                                                  |
|          | 0026h    |               1 | BS_BootSig     | Extended Boot Signature 29h. Indicates that the following 3 fields are present                                                                       |
|          | 0027h    |               4 | BS_VolID       | Volume Serial Number                                                                                                                                 |
|          | 002Bh    |              11 | BS_VolLab      | Volume Label                                                                                                                                         |
|          | 0036h    |               8 | BS_FilSysType  | File system Type: 'FAT12', 'FAT16', 'FAT32'.Note: This field is not mandatory (i.e BS_) therefore it cannot be used to indentify the partition type. |

<!-- image -->

<!-- image -->

www.ti.com

## Table 26-23. FAT Boot Sector (continued)

| Offset   | Offset   | Length[bytes]   | Name          | Description                                                                                                                                          | Description                                                                                                                                          |
|----------|----------|-----------------|---------------|------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------|
|          | 0024h    | 4               | BPB_FATSz32   | Size in sectors of one FAT. Field BPB_FATSz16 must be 0                                                                                              | Size in sectors of one FAT. Field BPB_FATSz16 must be 0                                                                                              |
|          | 0028h    | 2               | BPB_ExtFlags  | FAT Flags:                                                                                                                                           | FAT Flags:                                                                                                                                           |
|          |          |                 |               | [7]:                                                                                                                                                 | 0=FAT is mirrored; 1=Only one FAT is used                                                                                                            |
|          |          |                 |               | [3:0]:                                                                                                                                               | Number of used FAT if no mirroring used                                                                                                              |
|          | 002Ah    | 2               | BPB_FSVer     | File system Version Number                                                                                                                           | File system Version Number                                                                                                                           |
|          | 002Ch    | 4               | BPB_RootClus  | First Cluster number of the Root Directory                                                                                                           | First Cluster number of the Root Directory                                                                                                           |
|          | 0030h    | 2               | BPB_FSInfo    | Sector number of FSINFO Structure in the reserved-area, usually 1                                                                                    | Sector number of FSINFO Structure in the reserved-area, usually 1                                                                                    |
|          | 0032h    | 2               | BPB_BkBootSec | If non-zero, indicates the sector number in the reserved-area of a copy of the Boot Sector                                                           | If non-zero, indicates the sector number in the reserved-area of a copy of the Boot Sector                                                           |
|          | 0034h    | 12              | BPB_Reserved  | Reserved, set to 00h                                                                                                                                 | Reserved, set to 00h                                                                                                                                 |
|          | 0040h    | 1               | BS_DrvNum     | Drive Number                                                                                                                                         | Drive Number                                                                                                                                         |
|          | 0041h    | 1               | BS_Reserved1  | 00h                                                                                                                                                  | 00h                                                                                                                                                  |
|          | 0042h    | 1               | BS_BootSig    | Extended Boot Signature 29h. Indicates that the following 3 fields are present                                                                       | Extended Boot Signature 29h. Indicates that the following 3 fields are present                                                                       |
|          | 0043h    | 4               | BS_VolID      | Volume Serial Number                                                                                                                                 | Volume Serial Number                                                                                                                                 |
|          | 0047h    | 11              | BS_VolLab     | Volume Label                                                                                                                                         | Volume Label                                                                                                                                         |
|          | 0052h    | 8               | BS_FilSysType | File system Type: 'FAT12', 'FAT16', 'FAT32'.Note: This field is not mandatory (i.e BS_) therefore it cannot be used to indentify the partition type. | File system Type: 'FAT12', 'FAT16', 'FAT32'.Note: This field is not mandatory (i.e BS_) therefore it cannot be used to indentify the partition type. |
| 01FEh    | 01FEh    | 2               | BPB_Signature | AA55h                                                                                                                                                | AA55h                                                                                                                                                |

To check whether or not a sector holds a valid FAT12/16/32 partition, only fields starting with BPB can be checked as they are mandatory. The fields starting from offset 0024h to 01FDh cannot be used for the check as they will differ if using FAT12/16 or FAT32. The procedure is described in Figure 30. First the ROM Code checks if the BPB\_Signature is equal to AA55h. Then it checks some fields which must have some specific values ( BPB\_BytsPerSec, BPB\_SecPerClus, BPB\_RsvdSecCnt, BPB\_NumFATs, BPB\_RootEntCnt ) If the geometry of the device is known (valid CHS for device size &lt; 4Gbytes) then it is compared against BPB\_SecPerTrk and BPB\_NumHeads fields. If an MBR was found before, the partition size is also checked:

The field BPB\_ToSec16 is used if the total number of sectors is below 65518 (in this case BPB\_TotSec32 =0), otherwise BPB\_TotSec32 is used ( BPB\_TotSec16 =0). The partition sector offset is also checked: BPB\_HiddSec = MBR\_Partition\_Offset (if this value is not 0 as some operating systems do not update this field correctly). The last step is to decide which type of FAT file system it is. The ROM Code computes the number of clusters in the Data Area part of the partition:

Where Nb clusters is given by the size of the Data Area:

Figure 26-27. FAT Detection Procedure

<!-- image -->

## 26.1.8.5.7.3 FAT12/16/32 Root Directory

The next task for the ROM Code is to find the booting file named 'MLO' inside the Root Directory of the FAT12/16/32 file system. The file is not searched in any other location.

For a FAT12/16 file system, the Root Directory has a fixed location which is cluster 0. For a FAT32 file system, its cluster location is given by BPB\_RootClus . The general formulae to find the sector number (relative to device sector 0, not partition sector 0) of a cluster is given by:

Cluster sector = BPB\_RsvdSecCnt + BPB\_NumFATs x BPB\_FATSz + Cluster x BPB\_SecPerClus

Note: BPB\_FatSz is BPB\_FatSz16 for FAT12/16 or BPB\_FatSz32 for FAT32

Note: the BPB\_HiddSec field can contain 0 even though the FAT file system is located somewhere other than on sector 0 (floppy-like). The ROM Code actually uses the partition offset taken from the MBR instead of this field which can be wrong. If no MBR was found (floppy-like) the value 0 is used.

Each entry in the Root Directory is 32 bytes long and hold information about the file, i.e. filename, date of creation, rights, cluster location etc. This is described in Table 26-24.

The ROM Code checks each entry in the Root Directory until either the booting file is found or the entry is empty (first byte is 00h) or when the end of the Root Directory has been reached. Entries with ATTR\_LONG\_NAME attribute (LFN) and with first byte at E5h (erased file) are ignored. When found, the first cluster offset of the file is read from the DIR\_FstClusHi/DIR\_FstClusLo fields.

<!-- image -->

<!-- image -->

www.ti.com

There is a slight difference between FAT12/16 and FAT32 when handling the Root Directory. On FAT12/16, this directory has a fixed location (see above) and length fixed by BPB\_RootEntCnt which is the total number of 32 bytes entries. Handling this directory is therefore straight forward. On FAT32, the Root Directory is like a standard file, the File Allocation Table (FAT) has to be used in order to retrieve each sector of the Directory. The way the FAT is handled is described in the next paragraph.

Table 26-24. FAT Directory Entry

| Offset   | Length[bytes]   | Name             | Description                                    | Description                                                 |
|----------|-----------------|------------------|------------------------------------------------|-------------------------------------------------------------|
| 0000h    | 11              | DIR_Name         | Short Name (8+3)                               | Short Name (8+3)                                            |
| 000Bh    | 1               | DIR_Attr         | File Attributes:                               | File Attributes:                                            |
|          |                 |                  | ATTR_READ_ONLY                                 | 01h                                                         |
|          |                 |                  | ATTR_HIDDEN                                    | 02h                                                         |
|          |                 |                  | ATTR_SYSTEM                                    | 04h                                                         |
|          |                 |                  | ATTR_VOLUME_ID                                 | 08h                                                         |
|          |                 |                  | ATTR_DIRECTORY                                 | 10h                                                         |
|          |                 |                  | ATTR_ARCHIVE                                   | 20h                                                         |
|          |                 |                  | ATTR_LONG_NAME                                 | ATTR_READ_ONLY | ATTR_HIDDEN | ATTR_SYSTEM | ATTR_VOLUME_ID |
| 000Ch    | 1               | DIR_NTRes        | Reserved, set to 00h                           | Reserved, set to 00h                                        |
| 000Dh    | 1               | DIR_CrtTimeTenth | Millisecond stamp at file creation             | Millisecond stamp at file creation                          |
| 000Eh    | 2               | DIR_CrtTime      | Time file was created                          | Time file was created                                       |
| 0010h    | 2               | DIR_CrtDate      | Date file was created                          | Date file was created                                       |
| 0012h    | 2               | DIR_LstAccDate   | Last Access date                               | Last Access date                                            |
| 0014h    | 2               | DIR_FstClusHi    | High word of this entry's first cluster number | High word of this entry's first cluster number              |
| 0016h    | 2               | DIR_WrtTime      | Time of last write                             | Time of last write                                          |
| 0018h    | 2               | DIR_WrtDate      | Date of last write                             | Date of last write                                          |
| 001Ah    | 2               | DIR_FstClusLo    | Low word of this entry's first cluster number  | Low word of this entry's first cluster number               |
| 001Ch    | 4               | DIR_FileSize     | File size in bytes                             | File size in bytes                                          |

## 26.1.8.5.7.4 FAT12/16/32 File Allocation Table

The ROM Code needs to read the FAT in order to retrieve sectors either for the booting file or for the Root Directory (in case the file system is FAT32).

There can be multiple copies of the FAT inside the file system (ROM Code supports only 2) located after the Boot Sector:

FATnsector = BPB\_HiddSec+BPB\_RsvdSecCnt+BPB\_FatSz x n

Its size is given by BPB\_FATSz16 or BPB\_FATSz32 . The ROM Code checks each copy of the FAT if identical. In case the values are different, the ROM Code uses the value from the last FAT copy.

With FAT32 file system, the copy system can be disabled according to a flag located in BPB\_ExtFlags[7] . If this flag is set then FAT BPB\_ExtFlags[3:0] is used. In this case no verification is made by the ROM Code with other copies of FAT.

The FAT is a simple array of values each refering to a cluster located in the Data Area. One entry of the array is 12, 16 or 32 bits depending on the file system in use.

The value inside an entry defines whether the cluster is being used or not and if another cluster has to be taken into account. This creates a singly-linked chain of clusters defining the file. The meaning of an entry is described in Table 26-25.

Note: For compatibility reasons, clusters 0 and 1 are not used for files and those entries must contain FF8h and FFFh (for FAT12); FFF8h and FFFFh (for FAT16); ?FFFFFF8h and ?FFFFFFFh (for FAT32).

## Table 26-25. FAT Entry Description

| FAT12     | FAT16       | FAT32               | Description                                |
|-----------|-------------|---------------------|--------------------------------------------|
| 000h      | 0000h       | ?0000000h           | Free Cluster                               |
| 001h      | 0001h       | ?0000001h           | Reserved Cluster                           |
| 002h-FEFh | 0002h-FFEFh | 00000002h-?FFFFFEFh | Used Cluster; value points to next cluster |
| FF0h-FF6h | FFF0h-FFF6h | ?FFFFFF0h-?FFFFFF6h | Reserved values                            |
| FF7h      | FFF7h       | ?FFFFFF7h           | Bad Cluster                                |
| FF8h-FFFh | FFF8h-FFFFh | ?FFFFFF8h-?FFFFFFFh | Last Cluster in File                       |

Note: FAT32 uses only bits [27:0], the upper 4 bits are usually 0 and should be left untouched.

When accessing the Root Directory for FAT32, the ROM Code just starts from the Root Directory Cluster entry and follows the linked chain to retrieve the clusters.

When the booting file has been found, the ROM Code buffers each FAT entry corresponding to the file in a sector way. This means each cluster is translated to one or several sectors depending on how many sectors are in a cluster ( BPB\_SecPerClus ). This buffer is used later on by the booting procedure to access the file.

## 26.1.8.5.8 Pins Used

The list of device pins that are configured by the ROM in the case of MMC boot mode are as follows. Please note that all the pins might not be driven at boot time.

Table 26-26. Pins Used for MMC0 Boot

| Signal name   | Pin Used in Device   |
|---------------|----------------------|
| clk           | mmc0_clk             |
| cmd           | mmc0_cmd             |
| dat0          | mmc0_dat0            |
| dat1          | mmc0_dat1            |
| dat2          | mmc0_dat2            |
| dat3          | mmc0_dat3            |

Table 26-27. Pins Used for MMC1 Boot

| Signal name   | Pin Used in Device   |
|---------------|----------------------|
| clk           | gpmc_csn1            |
| cmd           | gpmc_csn2            |
| dat0          | gpmc_ad0             |
| dat1          | gpmc_ad1             |
| dat2          | gpmc_ad2             |
| dat3          | gpmc_ad3             |

## 26.1.8.6 SPI

SPI EEPROMs or SPI flashes have an EEPROM or NOR flash backend and they connect to the device using the serial SPI protocol.

These devices typically operate in three stages: the command stage, the address stage and the data transfer stage. The command is usually an 8 bit value followed by the address (depending on the size of the device) followed by the data to be read or written.

Because of the need for fewer pins, these devices are comparatively inexpensive, easy for board layout, and are the devices of choice when cost, complexity and form factor are critical considerations.

<!-- image -->

<!-- image -->

www.ti.com

## 26.1.8.6.1 Features

- Supports 12-MHz clock (50% duty cycle).
- Supports only SPI Mode 3 (clock polarity = 1, clock phase = 1).
- Supports only 24-bit addressable EEPROMs.
- Supports only 4-pin SPI mode (CS, CLK, Serial Input, Serial Output).
- The boot devices must be connected to chip select 0 and must support the read command (03h).
- The boot image is copied into internal memory and then executed.

## 26.1.8.6.2 Initialization and Detection

The ROM Code initializes the SPI controller, pin muxing and clocks for communicating with the SPI device. The controller is initialized in Mode 3 and the clock is setup to operate at 12 MHz. There is no specific device identification routine that is executed by the ROM code to identify whether a boot device is preset or not. If no SPI device is present, the sector read will return only 0xFFFFFFFF and the SPI boot will be treated as failed.

## 26.1.8.6.3 SPI Read Sector Procedure

The ROM Code reads SPI data from the boot device in 512 byte sectors. For each call to the SPI Read Sector routine, the SPI Read Command (0x03) is sent along with the 24 bit start address of the data to be read. Each Sector = 512bytes and the ROM bootloader will attempt the following:

1. Read Sector 1, Check the address: 0x0
2. Read Sector 2, Check the address: 0x200
3. Read Sector 3, Check the address: 0x400
4. Read Sector 4, Check the address: 0x600

The addresses mentioned above should contain the image size. If the value of the addresses mentioned above is neither 0x0 nor 0xFFFFFFFF, then the boot will proceed else it will move to the next sector. If no image is found after checking four sectors, the ROM bootloader will move to the next device.

From the next iteration onwards, a dummy value is transmitted on the master out line and the data is received on the master in line. This needs to be done because SPI protocol always operated in full duplex mode. The dummy data transmitted by the ROM is the Read Command appended to the start address. The data from the boot device is received MSB first.

As the A8 is a little-endian processor, and SPI operates in a big-endian format, this means that while writing to the flash, care needs to be taken to write the image in a big-endian format. This way we can avoid doing the endian conversion at boot time, thus improving boot performance.

## 26.1.8.6.4 Pins Used

The list of device pins that are configured by the ROM in the case of SPI boot mode are as follows. Please note that all the pins might not be driven at boot time.

Table 26-28. Pins Used for SPI Boot

| Signal name   | Pin Used in Device   |
|---------------|----------------------|
| cs            | spi0_cs0             |
| miso          | spi0_d0              |
| mosi          | spi0_d1              |
| clk           | spi0_sclk            |