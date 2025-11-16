<!-- image -->

The GP header is not needed when booting from an XIP memory device (e.g. NOR) or in case of peripheral booting. In this case, the peripheral or memory booting image starts directly with executable code.

Table 26-37. GP Device Image Format

| Field       | Non-XIP Device Offset   | XIP Device Offset   | Size[bytes]   | Description                                         |
|-------------|-------------------------|---------------------|---------------|-----------------------------------------------------|
| Size        | 0000h                   | -                   | 4             | Size of the image                                   |
| Destination | 0004h                   | -                   | 4             | Address where to store the image / code entry point |
| Image       | 0008h                   | 0000h               | x             | Executable code                                     |

Note: The 'Destination' address field stands for both:

- Target address for the image copy from the non-XIP storage to the target XIP location (e.g., internal RAM or SDRAM)
- Entry point for image code

In other words the user must take care to locate the code entry point to the target address for image copy.

## 26.1.11 Table of Contents

The Table of Contents (TOC) is a header needed only in GP devices while using MMC RAW mode. This must not be confused with the TOC used in HS devices. The TOC is 512 bytes long and consists of a maximum of 2 TOC items (32 bytes long each), located one after the other. The second TOC item must be filled by FFh. Each TOC item contains information required by the ROM Code to find a valid image in RAW mode, as illustrated in Table 26-38. To detect RAW mode, the ROM also needs the magic values mentioned in Table 26-39. Other than the TOC item fields and magic values, all the other bytes in the 512byte TOC must be zero.

Table 26-38. The TOC Item Fields

| Offset   | Field        |   Size (bytes) | Description                                                                                                          |
|----------|--------------|----------------|----------------------------------------------------------------------------------------------------------------------|
| 0000h    | Start        |              4 | 0x00000040                                                                                                           |
| 0004h    | Size         |              4 | 0x0000000C                                                                                                           |
| 0008h    | Flags        |              4 | Not used, should be zero.                                                                                            |
| 000Ch    | Align        |              4 | Not used, should be zero.                                                                                            |
| 0010h    | Load Address |              4 | Not used, should be zero.                                                                                            |
| 0014h    | Filename     |             12 | 12 character long name of sub image, including the zero ('\0') terminator. The ASCII representation is "CHSETTINGS". |

Table 26-39. Magic Values for MMC RAW Mode

| Offset   | Value      |
|----------|------------|
| 40h      | 0xC0C0C0C1 |
| 44h      | 0x00000100 |

The ROM Code recognizes the TOC based on the filename described in Table 26-40.

Table 26-40. Filenames in TOC for GP Device

| Filename   | Description              |
|------------|--------------------------|
| CHSETTINGS | Magic string used by ROM |