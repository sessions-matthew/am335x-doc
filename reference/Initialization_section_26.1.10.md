<!-- image -->

www.ti.com

## 26.1.9.6.2 Image Download Procedure

- The device supports USB client boot only.
- The ROM implements as RNDIS class driver, so the device enumerates as an ethernet port.
- Standard RNDIS drivers present on Linux and Windows are picked up during the enumeration. No special drivers need to be installed.
- Once the enumeration is complete, the customer can download the boot image using any standard TFTP server application.

Figure 26-31. Image Transfer for USB Boot

<!-- image -->

## 26.1.9.6.3 Pins Used

The list of the device pins that are configured by the ROM in the case of USB boot mode are as follows. Please note that all the pins might not be driven at boot time.

Table 26-36. Pins Used for USB Boot

| Signal Name   | Pin Used in Device   |
|---------------|----------------------|
| USB0_DM       | USB0_DM              |
| USB0_DP       | USB0_DP              |
| USB0_ID       | USB0_ID              |
| USB0_VBUS     | USB0_VBUS            |

## 26.1.9.7 ASIC ID structure

The ASIC ID size is 58 bytes for UART and 81 bytes for others. The fields of this structure are unused. This structure is included purely for legacy purposes.

## 26.1.10 Image Format

## 26.1.10.1 Overview

All preceding sections describe how the ROM Code searches and detects a boot image from a memory or a peripheral device type. This section describes the format of the boot image.

A boot image is basically made out of two major parts:

- The software to execute
- A header containing the destination address and size of the image for non XIP memory devices

The mandatory section of a boot image contains the software which will be loaded into the memory and executed. An overview of the image formats is shown in Figure 26-32:

## Figure 26-32. Image Formats on GP Devices

TOC

Public Keys Certificate

PPA

R&amp;D Certificate

Initial Software

Legend:

GP Image Header

Initial Software

- a) GP device non-XIP Memory Booting

- [ ] mandatory optional

Initial Software Certificate

Initial Software

- b) GP device Peripheral Booting and XIP Memory Booting

- c) HS device Memory and Peripheral Booting

*Must fit into one 512 bytes sector

GP Image Header

Initial Software

- a) GP device non-XIP Memory Booting

Initial Software

b) GP device Peripheral Booting and XIP Memory Booting

## Figure 26-33. Image Formats on GP and HS Devices

## a) GP Non-XIP Memory Booting

Used for memories which require shadowing (e.g. MMC). Image must begin with a GP header which contains information on image size and destination address.

## b) GP Peripheral Booting and XIP Memory Booting

When memory device is of XIP type (e.g. NOR) the GP header is not needed and the image can contain code for direct execution. The same image format is used for peripheral booting (where the code is transferred to internal RAM).

## 26.1.10.2 Image Format for GP Device

For a GP Device there is no security involved and therefore neither keys nor certificates are needed in the boot image.

When the booting memory device is non-XIP (e.g. MMC) the image must contain a small header (referred to as GP header) with the size of the software to load and the destination address where to store it.

<!-- image -->

www.ti.com

<!-- image -->