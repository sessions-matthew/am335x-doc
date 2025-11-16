## 26.1.12 Authentication and Code Execution

## 26.1.12.1 Overview

One of the early steps of the Public ROM Code execution is to search for a boot image from the requested medium (configured by the SYSBOOT pins) and copy it to RAM if needed. If the device is of GP type and boot interface is non-XIP then the image is simply copied to the provided destination address (internal or external RAM) and then executed. If the boot interface is of XIP type then the image copy is not needed and execution is directly given to the XIP memory.

## 26.1.12.2 Execution

The image is executed at the time the ROM Code performs the branch to the first executable instruction inside the Initial SW. For a GP Device in non-XIP, the execution address is the first word after the GP header. The branch is performed in public ARM supervisor mode. The R0 register points to the Booting Parameters structure which contains various information about the booting execution. Table 26-41 details this structure.

Table 26-41. Booting Parameters Structure

| Offset   | Field                                    |   Size (bytes) | Description                                                                                                                                                                                                                                                                                                                  |
|----------|------------------------------------------|----------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 00h      | Reserved                                 |              4 | Reserved                                                                                                                                                                                                                                                                                                                     |
| 04h      | Memory booting device descriptor address |              4 | Pointer to the memory device descriptor that has been used during the memory booting process. (1)                                                                                                                                                                                                                            |
| 08h      | Current Booting Device                   |              1 | Code of device used for booting 00h - void, no device 01h - XIP MUX1 memory 02h - XIPWAIT MUX 1 (wait monitoring on) 03h - XIP MUX2 memory 04h - XIPWAIT MUX 2 (wait monitoring on) 05h - NAND 06h - NAND with I2C 08h - MMC/SD port 0 09h - MMC/SD port 1 Bh - SPI 41h - UART0 44h - USB 46h - CPGMAC0                      |
| 09h      | Reset Reason                             |              1 | Current reset reason bit mask (bit=1-event present) [0] - Power-on (cold) reset [1] - Global warm software reset [2] - Reserved [3] - Reserved security violation reset [4] - WDT1 timer reset [5] - Global external warm reset secure watchdog reset Other bits - Reserved Note: ROM code does not clear any of these bits. |
| 0Ah      | Reserved                                 |              1 | Reserved                                                                                                                                                                                                                                                                                                                     |

(1) More detailed information is found in each memory's booting description.

<!-- image -->