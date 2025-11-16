<!-- image -->

## 7.1 GPMC

## 7.1.1 Introduction

The general-purpose memory controller (GPMC) is an unified memory controller dedicated to interfacing external memory devices:

- Asynchronous SRAM-like memories and application-specific integrated circuit (ASIC) devices
- Asynchronous, synchronous, and page mode (only available in non-multiplexed mode) burst NOR flash devices
- NAND Flash
- Pseudo-SRAM devices

## 7.1.1.1 GPMC Features

The general features of the GPMC module include:

- Data path to external memory device can be 16- or 8-bit wide
- 32-bit OCPIP 2.0 compliant core, single slave interface. Support non-wrapping and wrapping burst up to 16x32bits.
- Up to 100 MHz external memory clock performance (single device)
- Support for the following memory types:
- -External asynchronous or synchronous 8-bit width memory or device (non burst device)
- -External asynchronous or synchronous 16-bit width memory or device
- -External 16-bit non-multiplexed NOR Flash device
- -External 16-bit address and data multiplexed NOR Flash device
- -External 8-bit and 16-bit NAND flash device
- -External 16-bit pSRAM device
- Up to 16-bit ECC support for NAND flash using BCH code (t=4, 8 or 16) or Hamming code for 8-bit or 16-bit NAND-flash, organized with page size of 512 bytes, 1K bytes, or more.
- Support 512M Bytes maximum addressing capability which can be divided into seven independent chip-select with programmable bank size and base address on 16M Bytes, 32M Bytes, 64M Bytes, or 128M Bytes boundary
- Fully pipelined operation for optimal memory bandwidth usage
- Support external device clock frequency of 1, 2, 3 and 4 divider from L3 clock.
- Support programmable auto-clock gating when there is no access.
- Support Midlereq/SidleAck protocol
- Support the following interface protocols when communicating with external memory or external devices.
- -Asynchronous read/write access
- -Asynchronous read page access (4-8-16 Word16)
- -Synchronous read/write access
- -Synchronous read burst access without wrap capability (4-8-16 Word16)
- -Synchronous read burst access with wrap capability (4-8-16 Word16)
- Address and Data multiplexed access
- Each chip-select as independent and programmable control signal timing parameters for Setup and Hold time. Parameters are set according to the memory device timing parameters, with one L3 clock cycle timing granularity.
- Flexible internal access time control (wait state) and flexible handshake mode using external WAIT pins monitoring (up to two WAIT pins)
- Support bus keeping
- Support bus turn around

<!-- image -->

- Pre-fetch and write posting engine associated with system DMA to get full performance from NAND device with minimum impact on NOR/SRAM concurrent access.
- On the fly ECC Hamming Code calculation to improve NAND usage reliability with minimum impact on SW

## 7.1.1.2 Block Diagram

The GPMC can access various external devices through the L3 Slow Interconnect. The flexible programming model allows a wide range of attached device types and access schemes. Based on the programmed configuration bit fields stored in the GPMC registers, the GPMC is able to generate all control signals timing depending on the attached device and access type. Given the chip-select decoding and its associated configuration registers, the GPMC selects the appropriate device type control signals timing.

Figure 7-1 shows the GPMC functional block diagram. The GPMC consists of six blocks:

- Interconnect port interface
- Address decoder, GPMC configuration, and chip-select configuration register file
- Access engine
- Prefetch and write-posting engine
- Error correction code engine (ECC)
- External device/memory port interface

<!-- image -->

Figure 7-1. GPMC Block Diagram

<!-- image -->

## 7.1.1.3 Unsupported GPMC Features

The following module features are not supported in this device.

Table 7-1. Unsupported GPMC Features

| Feature        | Reason                                                 |
|----------------|--------------------------------------------------------|
| Chip Select 7  | Not pinned out                                         |
| 32-bit devices | Only 16 data lines pinned out                          |
| WAIT[3:2]      | Not pinned out. All CS regions must use WAIT0 or WAIT1 |