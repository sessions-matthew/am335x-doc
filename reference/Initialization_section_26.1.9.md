## 26.1.8.7 Blocks and Sectors Search Summary

Table 26-29 summarizes numbers of blocks and sectors which are searched during the memory booting from devices requiring image shadowing. NAND is organized with blocks, which are erasable units.

Table 26-29. Blocks and Sectors Searched on Non-XIP Memories

| Memory                                    | Maximum Number of Blocks Checked   | Number of Sectors Searched         |
|-------------------------------------------|------------------------------------|------------------------------------|
| NAND                                      | first 4                            | Number of sectors in one block (1) |
| SPI, eMMC/eSD and MMC/SD cards (raw mode) | first 4                            | 1                                  |

(1) Depends on NAND geometry

Regarding MMC/SD card booting in FAT mode, the file system area is searched for one file.

## 26.1.9 Peripheral Booting

## 26.1.9.1 Overview

The ROM Code can boot from three different peripheral interfaces:

- EMAC: 1000/100/10 Mbps Ethernet, using standard TCP/IP network boot protocols BOOTP and TFTP
- USB: Full speed, client mode
- UART: 115.2Kbps, 8 bits, no parity, 1 stop bit, no flow control

The purpose of booting from a peripheral interface is to download a boot image from an external host (typically a PC). This booting method is mostly used for programming flash memories connected to the device (e.g. in the case of initial flashing, firmware update or servicing).

## 26.1.9.2 Boot Image Location and Size

The boot image is downloaded directly into internal RAM at the location 0x402F0400 on GP devices. The maximum size of downloaded image is 109 KB.

## 26.1.9.3 Peripheral Boot Procedure Overview

Figure 26-28. Peripheral Booting Procedure

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

Figure 26-29. Peripheral Booting Procedure

<!-- image -->

## 26.1.9.4 EMAC Boot Procedure

NOTE:

See AM335x ARM Cortex-A8 Microprocessors (MPUs) Silicon Errata (literature number SPRZ360) for limitations of EMAC booting.

## 26.1.9.4.1 Device Initialization

- EMAC boot uses the CPGMAC port 1 of the device
- Supports connection to external Ethernet PHY using the MII, RMII, RGMII and MDIO pins, based on SYSBOOT pin settings
- In dual-port configurations, the ROM code assumes that the Ethernet PHY with the lowest MDIO address (0-31) is connected to CPGMAC port 1
- Device uses EFUSE registers mac\_id0\_lo and mac\_id0\_hi in the control module for Ethernet MAC address of the device
- Device detects if the PHY is alive on the MDIO interface and
- -Reads the STATUS register to check if Ethernet link is active
- -Reads the CONTROL register to detect the auto-negotiated mode of operation
- Is the mode full-duplex or half duplex
- Speed of operation, 1000/100/10 Mbps. Link speed is determined by reading the AutoNegotiation Advertisement and Auto-Negotiation Link Partner Base Page Ability registers in the external PHY. ( Note: See Section 1.2, Silicon Revision Functional Differences and Enhancements , for differences in operation based on AM335x silicon revision.)
- -Waits for five seconds for auto negotiation to complete before timing out
- ROM expects an external 50-MHz reference clock requirement when using RMII

## 26.1.9.4.2 BOOTP (RFC 951)

The device then proceeds to obtain the IP and Boot information using BOOTP protocol. The device prepares and broadcasts the BOOTP message that has the following information:

- Device MAC address in 'chaddr' field - to uniquely identify the device to the server.
- 'vender-class-identifier' option number 60 (RFC 1497, RFC 1533). Servers could use this information to identify the device type. The value present is " AM335x ROM ". (Note: See Section 1.2, Silicon Revision Functional Differences and Enhancements , for differences in operation based on AM335x silicon revision.)
- 'Client-identifier' option number 61 (RFC 1497, RFC 1533). This has the ASIC-ID structure which contains additional info for the device.

The device then expects a BOOTP response that provides the following information for the booting to proceed

- Device IP address from 'yiaddr' field
- Subnetmask from extended option 1 (RFC 1497, RFC 1533)
- Gateway IP from extended option number 3 (RFC 1497, RFC 1533) or from 'giaddr' field of BOOTP response.
- Boot image filename from 'file' field
- TFTP server IP address from the 'siaddr' field

## Timeouts and retries:

- Exponentially increasing timeouts starting from 4s, doubling for each retry.
- 5 retries

<!-- image -->

<!-- image -->

www.ti.com

## 26.1.9.4.3 TFTP (RFC 1350)

After a successful BOOTP completion, the device initiates the TFTP download of the boot image into SRAM. The device has the capability to reach a TFTP server within the local subnet or outside, through the gateway.

## Timeouts and retries:

- Timeout of 1s to receive a response for the READ request
- 5 retries for the READ request
- Retries are managed by server once data transfer starts (server re-sends a data packet if the ACK was not received within a timeout value)
- Device has a 60s timeout to complete the data transfer, to handle the scenario if the server dies in the middle of a data transfer

## 26.1.9.4.4 Pins Used

The list of device pins that are configured by the ROM in the case of EMAC boot mode are as follows. Please note that all the pins might not be driven at boot time.

Table 26-30. Pins Used for EMAC Boot in MII Mode

| Signal Name    | Pin Used in Device   |   Pin Mux Mode |
|----------------|----------------------|----------------|
| gmii1_col      | MII1_COL             |              0 |
| gmii1_crs      | MII1_CRS             |              0 |
| gmii1_rxer     | MII1_RX_ER           |              0 |
| gmii1_txen     | MII1_TX_EN           |              0 |
| gmii1_rxdv     | MII1_RX_DV           |              0 |
| gmii1_txd[3:0] | MII1_TXD[3:0]        |              0 |
| gmii1_txclk    | MII1_TX_CLK          |              0 |
| gmii1_rxclk    | MII1_RX_CLK          |              0 |
| gmii1_rxd[3:0] | MII1_RXD[3:0]        |              0 |
| mdio_data      | MDIO                 |              0 |
| mdio_clk       | MDC                  |              0 |

Table 26-31. Pins Used for EMAC Boot in RGMII Mode

| Signal Name    | Pin Used in Device   |   Pin Mux Mode |
|----------------|----------------------|----------------|
| rgmii1_tctl    | MII1_TX_EN           |              2 |
| rgmii1_rctl    | MII1_RX_DV           |              2 |
| rgmii1_td[3:0] | MII1_TXD[3:0]        |              2 |
| rgmii1_tclk    | MII1_TX_CLK          |              2 |
| rgmii1_rclk    | MII1_RX_CLK          |              2 |
| rgmii1_rd[3:0] | MII1_RXD[3:0]        |              2 |
| mdio_data      | MDIO                 |              0 |
| mdio_clk       | MDC                  |              0 |

Table 26-32. Pins Used for EMAC Boot in RMII Mode

| Signal Name    | Pin Used in Device                               |   Pin Mux Mode |
|----------------|--------------------------------------------------|----------------|
| rmii1_crs_dv   | MII1_CRS                                         |              1 |
| rmii1_rxer     | MII1_RX_ER                                       |              1 |
| rmii1_txen     | MII1_TX_EN                                       |              1 |
| rmii1_txd[1:0] | MII1_TXD[1:0]                                    |              1 |
| rmii1_rxd[1:0] | MII1_RXD[1:0]                                    |              1 |
| rmii1_refclk   | RMII1_REF_CLK (Driven by External 50-MHz Source) |              0 |
| mdio_data      | MDIO                                             |              0 |
| mdio_clk       | MDC                                              |              0 |

<!-- image -->

<!-- image -->

www.ti.com

## 26.1.9.4.5 SYSBOOT Pins

Some of the SYSBOOT pins have special meanings when EMAC boot is selected.

Table 26-33. Ethernet PHY Mode Selection

| SYSBOOT[7:6]   | PHY Mode                     |
|----------------|------------------------------|
| 00b            | MII                          |
| 01b            | RMII                         |
| 10b            | Reserved                     |
| 11b            | RGMII without internal delay |

## 26.1.9.5 UART Boot Procedure

## 26.1.9.5.1 Device Initialization

- UART boot uses UART0.
- UART0 is configured to run at 115200 baud, 8-bits, no parity, 1 stop bit and no flow control.

## 26.1.9.5.2 Boot Image Download

- UART boot uses x-modem client protocol to receive the boot image.
- Utilities like hyperterm, teraterm, minicom can be used on the PC side to download the boot image to the board
- With x-modem packet size of 1K throughout is roughly about 4KBytes/Sec.
- The ROM code will ping the host 10 times in 3s to start x-modem transfer. If host does not respond, UART boot will timeout.
- Once the transfer has started, if the host does not send any packet for 3s, UART boot will time out
- If the delay between two consecutive bytes of the same packet is more than 2ms, the host is requested to re-transmit the entire packet again
- Error checking using the CRC-16 support in x-modem. If an error is detected, the host is requested to re-transmit the packet again.

## 26.1.9.5.3 Pins Used

The list of device pins that are configured by the ROM in the case of UART boot mode are as follows.

Note: All the pins might not be driven at boot time.

Table 26-34. Pins Used for UART Boot

| Signal name   | Pin Used in Device   |
|---------------|----------------------|
| rx            | uart0_rxd            |
| tx            | uart0_txd            |

## 26.1.9.6 USB Boot Procedure

NOTE:

See AM335x ARM Cortex-A8 Microprocessors (MPUs) Silicon Errata (literature number SPRZ360) for limitations of USB booting.

## 26.1.9.6.1 Device Initialization

The ROM code supports booting from the USB interface under the following conditions:

- When the high-speed USB OTG (USBOTGHS) IP is used through USB0 interface.
- USB operates in full-speed, client mode.

- USB will operate only in device-powered mode.
- Integrated transceiver (through UTMI).
- The enumeration default timeout is 3s (USB timeout).
- ROM code uses the default value of DATAPOLARITY.

Even though using an OTG capable hardware, the ROM Code does not handle any OTG specific feature.

## 26.1.9.6.1.1 Overview

In case of boot from USB is chosen by the SYSBOOT pin configuration:

- The USBOTGHS hardware and PRCM clocks are configured for UTMI mode.
- The ROM Code continues with the USB procedure only if the USB cable is detected present (i.e. VBUS is detected at transceiver level and communicated as such through the UTPI traffic). If not, the initialization procedure is aborted.
- The ROM code implements the RNDIS class driver.
- From a user's perspective, USB boot is indistinguishable from Ethernet boot. Refer to Section 26.1.9.4.2 for information on the BOOTP protocol.
- The USB initialization procedure is shown in Figure 26-30.

Figure 26-30. USB Initialization Procedure

<!-- image -->

## 26.1.9.6.1.2 Enumeration Descriptors

The device descriptor parameters which are used during enumeration are listed in Table 26-35. The default Vendor ID and Product ID can be automatically overridden by the customer by programming the Efuses that are used to store these values.

Table 26-35. Customized Descriptor Parameters

| Parameter        | Size [bytes]   | TI Default Values   |
|------------------|----------------|---------------------|
| Device ID code   | 2              | 0000h               |
| Device Class     | 1              | 02h                 |
| Device Sub-Class | 1              | 00h                 |
| Device Protocol  | 1              | 00h                 |
| Manufacturer     | String         | 'Texas Instruments' |
| Product (1)      | String         | AM335x USB          |
| Serial number    | 1              | 0h                  |

(1) See Section 1.2, Silicon Revision Functional Differences and Enhancements , for differences in operation based on AM335x silicon revision.

<!-- image -->

www.ti.com