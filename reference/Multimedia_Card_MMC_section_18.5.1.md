<!-- image -->

www.ti.com

## 18.5 Multimedia Card Registers

## CAUTION

The MMC/SD/SDIO registers are limited to 32-bit data accesses. 16-bit and 8bit are not allowed and can corrupt register content.

## 18.5.1 MULTIMEDIA\_CARD Registers

Table 18-19 lists the memory-mapped registers for the MULTIMEDIA\_CARD. All register offset addresses not listed in Table 18-19 should be considered as reserved locations and the register contents should not be modified.

Table 18-19. MULTIMEDIA\_CARD Registers

| Offset   | Acronym      | Register Name                 | Section           |
|----------|--------------|-------------------------------|-------------------|
| 110h     | SD_SYSCONFIG | System Configuration          | Section 18.5.1.1  |
| 114h     | SD_SYSSTATUS | System Status                 | Section 18.5.1.2  |
| 124h     | SD_CSRE      | Card status response error    | Section 18.5.1.3  |
| 128h     | SD_SYSTEST   | System Test                   | Section 18.5.1.4  |
| 12Ch     | SD_CON       | Configuration                 | Section 18.5.1.5  |
| 130h     | SD_PWCNT     | Power counter                 | Section 18.5.1.6  |
| 200h     | SD_SDMASA    | SDMA System address:          | Section 18.5.1.7  |
| 204h     | SD_BLK       | Transfer Length Configuration | Section 18.5.1.8  |
| 208h     | SD_ARG       | Command argument              | Section 18.5.1.9  |
| 20Ch     | SD_CMD       | Command and transfer mode     | Section 18.5.1.10 |
| 210h     | SD_RSP10     | Command Response 0 and 1      | Section 18.5.1.11 |
| 214h     | SD_RSP32     | Command Response 2 and 3      | Section 18.5.1.12 |
| 218h     | SD_RSP54     | Command Response 4 and 5      | Section 18.5.1.13 |
| 21Ch     | SD_RSP76     | Command Response 6 and 7      | Section 18.5.1.14 |
| 220h     | SD_DATA      | Data                          | Section 18.5.1.15 |
| 224h     | SD_PSTATE    | Present state                 | Section 18.5.1.16 |
| 228h     | SD_HCTL      | Host Control                  | Section 18.5.1.17 |
| 22Ch     | SD_SYSCTL    | SD system control             | Section 18.5.1.18 |
| 230h     | SD_STAT      | SD interrupt status           | Section 18.5.1.19 |
| 234h     | SD_IE        | SD interrupt enable           | Section 18.5.1.20 |
| 238h     | SD_ISE       | SD interrupt enable set       | Section 18.5.1.21 |
| 23Ch     | SD_AC12      | Auto CMD12 Error Status       | Section 18.5.1.22 |
| 240h     | SD_CAPA      | Capabilities                  | Section 18.5.1.23 |
| 248h     | SD_CUR_CAPA  | Maximum current capabilities  | Section 18.5.1.24 |
| 250h     | SD_FE        | Force Event                   | Section 18.5.1.25 |
| 254h     | SD_ADMAES    | ADMA Error Status             | Section 18.5.1.26 |
| 258h     | SD_ADMASAL   | ADMA System address Low bits  | Section 18.5.1.27 |
| 25Ch     | SD_ADMASAH   | ADMA System address High bits | Section 18.5.1.28 |
| 2FCh     | SD_REV       | Versions                      | Section 18.5.1.29 |

## 18.5.1.1 SD\_SYSCONFIG Register (offset = 110h) [reset = 0h]

SD\_SYSCONFIG is shown in Figure 18-36 and described in Table 18-20.

This register allows controlling various parameters of the OCP interface.

## Figure 18-36. SD\_SYSCONFIG Register

| 31       | 30       | 29                | 28                | 27                | 26                | 25            | 24            |
|----------|----------|-------------------|-------------------|-------------------|-------------------|---------------|---------------|
| RESERVED | RESERVED | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED      | RESERVED      |
| R-0h     | R-0h     | R-0h              | R-0h              | R-0h              | R-0h              | R-0h          | R-0h          |
| 23       | 22       | 21                | 20                | 19                | 18                | 17            | 16            |
| RESERVED | RESERVED | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED      | RESERVED      |
| R-0h     | R-0h     | R-0h              | R-0h              | R-0h              | R-0h              | R-0h          | R-0h          |
| 15       | 14       | 13                | 12                | 11                | 10                | 9             | 8             |
| RESERVED | RESERVED | RESERVED RESERVED | RESERVED RESERVED | RESERVED RESERVED | RESERVED RESERVED | CLOCKACTIVITY | CLOCKACTIVITY |
| R-0h     | R-0h     | R-0h R-0h         | R-0h R-0h         | R-0h R-0h         | R-0h R-0h         | R/W-0h        | R/W-0h        |
| 7        | 6        | 5                 | 4                 | 3                 | 2                 | 1             | 0             |
| RESERVED | RESERVED |                   | SIDLEMODE         | SIDLEMODE         | ENAWAKEUP         | SOFTRESET     | AUTOIDLE      |
| R-0h     | R-0h     |                   | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-20. SD\_SYSCONFIG Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|---------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-14 | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 13-12 | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 11-10 | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 9-8   | CLOCKACTIVITY | R/W    | 0h      | Clocks activity during wake up mode period. Bit 8 is the Interface clock. Bit 9 is the Functional clock. 0h = Interface and Functional clock may be switched off. 1h = Interface clock is maintained. Functional clock may be switched-off. 2h = Functional clock is maintained. Interface clock may be switched-off. 3h = Interface and Functional clocks are maintained.                                                                                                                                                                                                 |
| 7-5   | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 4-3   | SIDLEMODE     | R/W    | 0h      | Power management 0h = If an idle request is detected, the MMC/SD/SDIO host controller acknowledges it unconditionally and goes in Inactive mode. Interrupt and DMA requests are unconditionally deasserted. 1h = If an idle request is detected, the request is ignored and the module keeps on behaving normally. 2h = If an idle request is detected, the module will switch to wake up mode based on its internal activity, and the wake up capability can be used if the wake up capability is enabled (bit SD_SYSCONFIG[2] ENAWAKEUP bit is set to 1). 3h = Reserved. |
| 2     | ENAWAKEUP     | R/W    | 0h      | Wake-up feature control 0h = Wake-up capability is disabled. 1h = Wake-up capability is enabled.                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 1     | SOFTRESET     | R/W    | 0h      | Software reset. The bit is automatically reset by the hardware. During reset, it always returns 0. 0h (W) = No effect 0h (R) = Normal mode 1h (W) = Trigger a module reset. 1h (R) = The module is reset.                                                                                                                                                                                                                                                                                                                                                                  |

<!-- image -->

<!-- image -->

www.ti.com

## Table 18-20. SD\_SYSCONFIG Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                 |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     0 | AUTOIDLE | R/W    | 0h      | Internal Clock gating strategy 0h (R) = Clocks are free-running. 1h (W) = Automatic clock gating strategy is applied, based on the interconnect and MMC interface activity. |

## 18.5.1.2 SD\_SYSSTATUS Register (offset = 114h) [reset = 0h]

SD\_SYSSTATUS is shown in Figure 18-37 and described in Table 18-21.

This register provides status information about the module excluding the interrupt status information.

## Figure 18-37. SD\_SYSSTATUS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24        |
|----------|----------|----------|----------|----------|----------|----------|-----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESETDONE |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-21. SD\_SYSSTATUS Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                               |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                           |
| 0     | RESETDONE | R      | 0h      | Internal Reset Monitoring. Notethe debounce clock , the interface clock and the functional clock shall be provided to the MMC/SD/SDIO host controller to allow the internal reset monitoring. 0h = Internal module reset is on-going 1h = Reset completed |

<!-- image -->

<!-- image -->

## 18.5.1.3 SD\_CSRE Register (offset = 124h) [reset = 0h]

SD\_CSRE is shown in Figure 18-38 and described in Table 18-22.

This register enables the host controller to detect card status errors of response type R1, R1b for all cards and of R5, R5b and R6 response for cards types SD or SDIO. When a bit SD\_CSRE[i] is set to 1, if the corresponding bit at the same position in the response SD\_RSP10[I] is set to 1, the host controller indicates a card error (SD\_STAT[28] CERR bit) interrupt status to avoid the host driver reading the response register (SD\_RSP10). No automatic card error detection for autoCMD12 is implemented; the host system has to check autoCMD12 response register (SD\_RSP76) for possible card errors.

## Figure 18-38. SD\_CSRE Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CSRE   |
|------|-----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-22. SD\_CSRE Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                |
|-------|---------|--------|---------|----------------------------|
| 31-0  | CSRE    | R/W    | 0h      | Card status response error |

## 18.5.1.4 SD\_SYSTEST Register (offset = 128h) [reset = 0h]

SD\_SYSTEST is shown in Figure 18-39 and described in Table 18-23.

This register is used to control the signals that connect to I/O pins when the module is configured in system test (SYSTEST) mode for boundary connectivity verification. In SYSTEST mode, a write into SD\_CMD register will not start a transfer. The buffer behaves as a stack accessible only by the local host (push and pop operations). In this mode, the Transfer Block Size (SD\_BLK[10:0] BLEN bits) and the Blocks count for current transfer (SD\_BLK[31:16] NBLK bits) are needed to generate a Buffer write ready interrupt (SD\_STAT[4] BWR bit) or a Buffer read ready interrupt (SD\_STAT[5] BRR bit) and DMA requests if enabled.

## Figure 18-39. SD\_SYSTEST Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | OBI      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| SDCD     | SDWP     | WAKD     | SSB      | D7D      | D6D      | D5D      | D4D      |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| D3D      | D2D      | D1D      | D0D      | DDIR     | CDAT     | CDIR     | MCKD     |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 18-23. SD\_SYSTEST Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 16    | OBI      | R/W    | 0h      | Out-of-band interrupt (OBI) data value. 0h = The out-of-band interrupt pin is driven low. 1h = The out-of-band interrupt pin is driven high.                                                                                                                                                                                                                                                                                                               |
| 15    | SDCD     | R/W    | 0h      | Card detect input signal (SDCD) data value 0h = The card detect pin is driven low. 1h = The card detect pin is driven high.                                                                                                                                                                                                                                                                                                                                |
| 14    | SDWP     | R/W    | 0h      | Write protect input signal (SDWP) data value 0h = The write protect pin SDWP is driven low. 1h = The write protect pin SDWP is driven high.                                                                                                                                                                                                                                                                                                                |
| 13    | WAKD     | R/W    | 0h      | Wake request output signal data value. 0h (W) = The pin SWAKEUP is driven low. 0h (R) = No action. Returns 0. 1h (W) = The pin SWAKEUP is driven high. 1h (R) = No action. Returns 1.                                                                                                                                                                                                                                                                      |
| 12    | SSB      | R/W    | 0h      | Set status bit. This bit must be cleared prior attempting to clear a status bit of the interrupt status register (SD_STAT). 0h (W) = Clear this SSB bit field. Writing 0 does not clear already set status bits. 0h (R) = No action. Returns 0. 1h (W) = Force to 1 all status bits of the interrupt status register (SD_STAT) only if the corresponding bit field in the Interrupt signal enable register (SD_ISE) is set. 1h (R) = No action. Returns 1. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Table 18-23. SD\_SYSTEST Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    11 | D7D     | R/W    | 0h      | DAT7 input/output signal data value. 0h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT7 line is driven low. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 0h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT7 line (low). If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 0. 1h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT7 line is driven high. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 1h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT7 line (high) If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 1. |
|    10 | D6D     | R/W    | 0h      | DAT6 input/output signal data value. 0h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT6 line is driven low. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 0h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT6 line (low). If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 0. 1h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT6 line is driven high. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 1h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT6 line (high) If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 1. |
|     9 | D5D     | R/W    | 0h      | DAT5 input/output signal data value. 0h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT5 line is driven low. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 0h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT5 line (low). If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 0. 1h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT5 line is driven high. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 1h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT5 line (high) If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 1. |
|     8 | D4D     | R/W    | 0h      | DAT4 input/output signal data value. 0h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT4 line is driven low. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 0h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT4 line (low). If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 0. 1h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT4 line is driven high. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 1h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT4 line (high) If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 1. |

Table 18-23. SD\_SYSTEST Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     7 | D3D     | R/W    | 0h      | DAT3 input/output signal data value. 0h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT3 line is driven low. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 0h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT3 line (low). If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 0. 1h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT3 line is driven high. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 1h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT3 line (high) If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 1. |
|     6 | D2D     | R/W    | 0h      | DAT2 input/output signal data value. 0h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT2 line is driven low. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 0h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT2 line (low). If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 0. 1h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT2 line is driven high. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 1h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT2 line (high) If SD_SYSTEST[3] DDIR                                             |
|     5 | D1D     | R/W    | 0h      | DAT1 input/output signal data value. 0h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT1 line is driven low. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 0h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT1 line (low). If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 0. 1h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT1 line is driven high. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 1h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT1 line (high) If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 1. |
|     4 | D0D     | R/W    | 0h      | DAT0 input/output signal data value. 0h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT0 line is driven low. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 0h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT0 line (low). If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), returns 0. 1h (W) = If SD_SYSTEST[3] DDIR bit = 0 (output mode direction), the DAT0 line is driven high. If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), no effect. 1h (R) = If SD_SYSTEST[3] DDIR bit = 1 (input mode direction), returns the value on the DAT0 line (high) If SD_SYSTEST[3] DDIR                                             |
|     3 | DDIR    | R/W    | 0h      | Control of the DAT [7:0] pins direction. 0h (W) = The DAT lines are outputs (host to card). 0h (R) = No action. Returns 0. 1h (W) = The DAT lines are inputs (card to host).                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |

<!-- image -->

<!-- image -->

www.ti.com

## Table 18-23. SD\_SYSTEST Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     2 | CDAT    | R/W    | 0h      | CMD input/output signal data value 0h (W) = If SD_SYSTEST[1] CDIR bit = 0 (output mode direction), the CMD line is driven low. If SD_SYSTEST[1] CDIR bit = 1 (input mode direction), no effect. 0h (R) = If SD_SYSTEST[1] CDIR bit = 1 (input mode direction), returns the value on the CMD line (low). If SD_SYSTEST[1] CDIR bit = 0 (output mode direction), returns 0 . 1h (W) = If SD_SYSTEST[1] CDIR bit = 0 (output mode direction), the CMD line is driven high. If SD_SYSTEST[1] CDIR bit = 1 (input mode direction), no effect. 1h (R) = If SD_SYSTEST[1] CDIR bit = 1 (input mode direction), returns the value on the CMD line (high) If SD_SYSTEST[1] CDIR bit = 0 (output mode direction), returns 1 . |
|     1 | CDIR    | R/W    | 0h      | Control of the CMD pin direction 0h (W) = The CMD line is an output (host to card). 0h (R) = No action. Returns 0. 1h (W) = The CMD line is an input (card to host) . 1h (R) = No action. Returns 1.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|     0 | MCKD    | R/W    | 0h      | MMC clock output signal data value 0h (W) = The output clock is driven low. 0h (R) = No action. Returns 0. 1h (W) = The output clock is driven high. 1h (R) = No action. Returns 1.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |

## 18.5.1.5 SD\_CON Register (offset = 12Ch) [reset = 0h]

SD\_CON is shown in Figure 18-40 and described in Table 18-24.

This register is used: To select the functional mode for any card. To send an initialization sequence to any card. To send an initialization sequence to any card. To enable the detection on the mmc\_dat[1] signal of a card interrupt for SDIO cards only. It also configures the parameters related to the card detect and write protect input signals

Figure 18-40. SD\_CON Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24         |
|----------|----------|----------|----------|----------|----------|----------|------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16         |
| RESERVED | RESERVED | SDMA_LnE | DMA_MnS  | DDR      | BOOT_CF0 | BOOT_ACK | CLKEXTFREE |
| R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8          |
| PADEN    | RESERVED | RESERVED | CEATA    | CTPL     | DVAL     | DVAL     | WPP        |
| R/W-0h   | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0          |
| CDP      | MIT      | DW8      | MODE     | STR      | HR       | INIT     | OD         |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 18-24. SD\_CON Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-22 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 21    | SDMA_LnE | R/W    | 0h      | Slave DMA Level/Edge Request. The waveform of the DMA request can be configured either edge sensitive with early de-assertion on first access to SD_DATA register or late de-assertion, request remains active until last allowed data written into SD_DATA. 0h = Slave DMA edge sensitive. 1h = Slave DMA level sensitive.                                                                                                                                                                                                                                                                                                     |
| 20    | DMA_MnS  | R/W    | 0h      | DMA Master or Slave selection. When this bit is set and the controller is configured to use the DMA, Ocp master interface is used to get datas from system using ADMA2 procedure (direct access to the memory). This option is only available if generic parameter MADMA_EN is asserted to 1. 0h = The controller is slave on data transfers with system. 1h = Not available on this device.                                                                                                                                                                                                                                    |
| 19    | DDR      | R/W    | 0h      | Dual Data Rate mode. When this register is set, the controller uses both clock edge to emit or receive data. Odd bytes are transmitted on falling edges and even bytes are transmitted on rise edges. It only applies on Data bytes and CRC, Start, end bits and CRC status are kept full cycle. This bit field is only meaningful and active for even clock divider ratio of SD_SYSCTL[CLKD], it is insensitive to SD_HCTL[HSPE] setting. Note: DDR mode is not supported on AM335x. Always set this bit to 0. 0h = Standard modeData are transmitted on a single edge. 1h = Data Bytes and CRC are transmitted on both edges. |

<!-- image -->

<!-- image -->

www.ti.com

## Table 18-24. SD\_CON Register Field Descriptions (continued)

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 18    | BOOT_CF0   | R/W    | 0h      | Boot Status Supported. This register is set when the CMD line needs to be forced to 0 for a boot sequence. CMD line is driven to 0 after writing in SD_CMD. The line is released when this bit field is de-asserted and aborts data transfer in case of a pending transaction. 0h (W) = CMD line forced to 0 is enabled. 0h (R) = CMD line not forced. 1h (W) = CMD line forced to 0 is enabled and will be active after writing into SD_CMD register. 1h (R) = CMD line is released when it was previously forced to 0 by a boot sequence.                                                                                           |
| 17    | BOOT_ACK   | R/W    | 0h      | Book acknowledge received. When this bit is set the controller should receive a boot status on DAT0 line after next command issued. If no status is received a data timeout will be generated. 0h = No acknowledge to be received. 1h = A boot status will be received on DAT0 line after issuing a command.                                                                                                                                                                                                                                                                                                                          |
| 16    | CLKEXTFREE | R/W    | 0h      | External clock free running. This register is used to maintain card clock out of transfer transaction to enable slave module (for example to generate a synchronous interrupt on mmc_dat[1] ). The Clock will be maintain only if SD_SYSCTL[2] CEN bit is set. 0h = External card clock is cut off outside active transaction period. 1h = External card clock is maintain even out of active transaction period only if SD_SYSCTL[2] CEN bit is set.                                                                                                                                                                                 |
| 15    | PADEN      | R/W    | 0h      | Control power for MMC lines. This register is only useful when MMC PADs contain power saving mechanism to minimize its leakage power. It works as a GPIO that directly control the ACTIVE pin of PADs. Excepted for mmc_dat[1] , the signal is also combine outside the module with the dedicated power control SD_CON[11] CTPL bit. 0h = ADPIDLE module pin is not forced, it is automatically generated by the MMC fsms. 1h = ADPIDLE module pin is forced to active state                                                                                                                                                          |
| 14-13 | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 12    | CEATA      | R/W    | 0h      | CE-ATA control mode (MMC cards compliant with CE-ATA). This bit selects the active level of the out-of-band interrupt coming from MMC cards. The usage of the Out-of-Band signal (OBI) is not supported. 0h = Standard MMC/SD/SDIO mode. 1h = CE-ATA mode. Next commands are considered as CE-ATA commands.                                                                                                                                                                                                                                                                                                                           |
| 11    | CTPL       | R/W    | 0h      | Control Power for mmc_dat[1] line (SD cards). By default, this bit is cleared to 0 and the host controller automatically disables all the input buffers outside of a transaction to minimize the leakage current. SDIO cards. When this bit is set to 1, the host controller automatically disables all the input buffers except the buffer of mmc_dat[1] outside of a transaction in order to detect asynchronous card interrupt on mmc_dat[1] line and minimize the leakage current of the buffers. 0h = Disable all the input buffers outside of a transaction. 1h = Disable all the input buffers except the buffer of mmc_dat[1] |

Table 18-24. SD\_CON Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 10-9  | DVAL    | R/W    | 0h      | Debounce filter value (all cards). This register is used to define a debounce period to filter the card detect input signal (SDCD). The usage of the card detect input signal (SDCD) is optional and depends on the system integration and the type of the connector housing that accommodates the card. 0h = 33 us debounce period 1h = 231 us debounce period 2h = 1 ms debounce period                                                                                                                                                                                                        |
| 8     | WPP     | R/W    | 0h      | Write protect polarity (SD and SDIO cards only). This bit selects the active level of the write protect input signal (SDWP). The usage of the write protect input signal (SDWP) is optional and depends on the system integration and the type of the connector housing that accommodates the card. 0h = Active high level 1h = Active low level                                                                                                                                                                                                                                                 |
| 7     | CDP     | R/W    | 0h      | Card detect polarity (all cards). This bit selects the active level of the card detect input signal (SDCD). The usage of the card detect input signal (SDCD) is optional and depends on the system integration and the type of the connector housing that accommodates the card. 0h = Active high level                                                                                                                                                                                                                                                                                          |
| 6     | MIT     | R/W    | 0h      | MMC interrupt command (MMC cards only). This bit must be set to 1, when the next write access to the command register (SD_CMD) is for writing a MMC interrupt command (CMD40) requiring the command timeout detection to be disabled for the command response. 0h = Command timeout enabled. 1h = Command timeout disabled.                                                                                                                                                                                                                                                                      |
| 5     | DW8     | R/W    | 0h      | 8-bit mode MMC select (MMC cards only). For SD/SDIO cards, this bit must be cleared to 0. For MMC card, this bit must be set following a valid SWITCH command (CMD6) with the correct value and extend CSD index written in the argument. Prior to this command, the MMC card configuration register (CSD and EXT_CSD) must be verified for compliancy with MMC standard specification. 0h = 1-bit or 4-bit data width 1h = 8-bit data width                                                                                                                                                     |
| 4     | MODE    | R/W    | 0h      | Mode select (all cards). This bit selects the functional mode. 0h = Functional mode. Transfers to the MMC/SD/SDIO cards follow the card protocol. The MMC clock is enabled. MMC/SD transfers are operated under the control of the SD_CMD register. 1h = SYSTEST mode. SYSTEST mode. The signal pins are configured as general-purpose input/output and the 1024-byte buffer is configured as a stack memory accessible only by the local host or system DMA. The pins retain their default type (input, output or in- out). SYSTEST mode is operated under the control of the SYSTEST register. |

<!-- image -->

<!-- image -->

www.ti.com

## Table 18-24. SD\_CON Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | STR     | R/W    | 0h      | Stream command (MMC cards only). This bit must be set to 1 only for the stream data transfers (read or write) of the adtc commands. Stream read is a class 1 command (CMD11READ_DAT_UNTIL_STOP). Stream write is a class 3 command (CMD20WRITE_DAT_UNTIL_STOP). 0h = Block oriented data transfer 1h = Stream oriented data transfer                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|     2 | HR      | R/W    | 0h      | Broadcast host response (MMC cards only). This register is used to force the host to generate a 48-bit response for bc command type. It can be used to terminate the interrupt mode by generating a CMD40 response by the core. In order to have the host response to be generated in open drain mode, the register SD_CON[OD] must be set to 1. When SD_CON[12] CEATA bit is set to 1 and SD_ARG cleared to 0, when writing 0000 0000h into SD_CMD register, the host controller performs a 'command completion signal disable' token (i.e., mmc_cmd line held to 0 during 47 cycles followed by a 1). 0h = The host does not generate a 48-bit response instead of a command. 1h = The host generates a 48-bit response instead of a command or                                                                                                                                                                                                                  |
|     1 | INIT    | R/W    | 0h      | Send initialization stream (all cards). When this bit is set to 1, and the card is idle, an initialization sequence is sent to the card. An initialization sequence consists of setting the mmc_cmd line to 1 during 80 clock cycles. The initialization sequence is mandatory - but it is not required to do it through this bit - this bit makes it easier. Clock divider (SD_SYSCTL [15:6] CLKD bits) should be set to ensure that 80 clock periods are greater than 1ms. Ensure that the functional clock frequency of the module and the clock divider value conform to this requirement before using this bit for initialization. Note: In this mode, there is no command sent to the card and no response is expected. A command complete interrupt will be generated once the initialization sequence is completed. SD_STAT[0] CC bit can be polled. 0h = The host does not send an initialization sequence 1h = The host sends an initialization sequence |
|     0 | OD      | R/W    | 0h      | Card open drain mode (MMC cards only). This bit must be set to 1 for MMC card commands 1, 2, 3 and 40, and if the MMC card bus is operating in open-drain mode during the response phase to the command sent. Typically, during card identification mode when the card is either in idle, ready or ident state. It is also necessary to set this bit to 1, for a broadcast host response (see Broadcast host response register SD_CON[2] HR bit). 0h = No open drain 1h = Open drain or broadcast host response                                                                                                                                                                                                                                                                                                                                                                                                                                                    |

## 18.5.1.6 SD\_PWCNT Register (offset = 130h) [reset = 0h]

SD\_PWCNT is shown in Figure 18-41 and described in Table 18-25.

This register is used to program a mmc counter to delay command transfers after activating the PAD power, this value depends on PAD characteristics and voltage.

Figure 18-41. SD\_PWCNT Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | PWRCNT                                                                                |
| R-0h                                                                                  | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 18-25. SD\_PWCNT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                          |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                      |
| 15-0  | PWRCNT   | R/W    | 0h      | Power counter register. This register is used to introduce a delay between the PAD ACTIVE pin assertion and the command issued. 0h = No additional delay added 1h = TCF delay (card clock period) 2h = TCF x 2 delay (card clock period) FFFEh = TCF x 65534 delay (card clock period) FFFFh = TCF x 65535 delay (card clock period) |

<!-- image -->

<!-- image -->

www.ti.com

## 18.5.1.7 SD\_SDMASA Register (offset = 200h) [reset = 0h]

SD\_SDMASA is shown in Figure 18-42 and described in Table 18-26.

This register is used to program a mmc counter to delay command transfers after activating the PAD power. This value depends on PAD characteristics and voltage.

## Figure 18-42. SD\_SDMASA Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SDMA_SYSADDR   |
|------|-------------------------------------------------------------------------------------------------|
|      | R-0h                                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-26. SD\_SDMASA Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|--------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | SDMA_SYSADDR | R      | 0h      | This register contains the system memory address for a SDMA transfer. When the Host Controller stops a SDMA transfer, this register shall point to the system address of the next contiguous data position. It can be accessed only if no transaction is executing (i.e., after a transaction has stopped). Read operations during transfers may return an invalid value. The Host Driver shall initialize this register before starting a SDMA transaction. After SDMA has stopped, the next system address of the next contiguous data position can be read from this register. The SDMA transfer waits at the every boundary specified by the Host SDMA Buffer Boundary in the Block Size register. The Host Controller generates DMA Interrupt to request the Host Driver to update this register. The Host Driver sets the next system address of the next data position to this register. When the most upper byte of this register (003h) is written, the Host Controller restarts the SDMA transfer. When restarting SDMA by the Resume command or by setting Continue Request in the Block Gap Control register, the Host Controller shall start at the next contiguous address stored here in the SDMA System Address register. ADMA does not use this register. |

## 18.5.1.8 SD\_BLK Register (offset = 204h) [reset = 0h]

SD\_BLK is shown in Figure 18-43 and described in Table 18-27.

This register shall be used for any card. SD\_BLK[BLEN] is the block size register. SD\_BLK[NBLK] is the block count register.

Figure 18-43. SD\_BLK Register

| 31       | 30       | 29       | 28       | 27     | 26     | 25     | 24     | 23     | 22     | 21     | 20     | 19     | 18     | 17     | 16     |
|----------|----------|----------|----------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
|          | NBLK     | NBLK     | NBLK     | NBLK   | NBLK   | NBLK   | NBLK   | NBLK   | NBLK   | NBLK   | NBLK   | NBLK   | NBLK   | NBLK   | NBLK   |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h |
| 15       | 14       | 13       | 12       | 11     | 10     | 9      | 8      | 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
| RESERVED | RESERVED | RESERVED | RESERVED | BLEN   | BLEN   | BLEN   | BLEN   | BLEN   | BLEN   | BLEN   | BLEN   | BLEN   | BLEN   | BLEN   | BLEN   |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 18-27. SD\_BLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | NBLK     | R/W    | 0h      | Blocks count for current transfer. This register is enabled when Block count Enable (SD_CMD[1] BCE bit) is set to 1 and is valid only for multiple block transfers. Setting the block count to 0 results no data blocks being transferred. Note: The host controller decrements the block count after each block transfer and stops when the count reaches zero. This register can be accessed only if no transaction is executing (i.e., after a transaction has stopped). Read operations during transfers may return an invalid value and write operation will be ignored. In suspend context, the number of blocks yet to be transferred can be determined by reading this register. When restoring transfer context prior to issuing a Resume command, The local host shall restore the previously saved block count. 0h = Stop count 1h = 1 block 2h = 2 blocks FFFFh = 65535 blocks |
| 15-12 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 11-0  | BLEN     | R/W    | 0h      | Transfer block size. This register specifies the block size for block data transfers. Read operations during transfers may return an invalid value, and write operations are ignored. When a CMD12 command is issued to stop the transfer, a read of the BLEN field after transfer completion (SD_STAT[1] TC bit set to 1) will not return the true byte number of data length while the stop occurs but the value written in this register before transfer is launched. 0h = No data transfer 1h = 1 byte block length 2h = 2 bytes block length 3h = 3 bytes block length 1FFh = 511 bytes block length 200h = 512 bytes block length 7FFh = 2047 bytes block length 800h = 2048 bytes block length                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

www.ti.com

## 18.5.1.9 SD\_ARG Register (offset = 208h) [reset = 0h]

SD\_ARG is shown in Figure 18-44 and described in Table 18-28.

This register contains command argument specified as bit 39-8 of Command-Format. These registers must be initialized prior to sending the command itself to the card (write action into the register SD\_CMD register). Only exception is for a command index specifying stuff bits in arguments, making a write unnecessary.

## Figure 18-44. SD\_ARG Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 ARG   |
|------|-------------------------------------------------------------------------------------|
|      | R/W-0h                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-28. SD\_ARG Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                    |
|-------|---------|--------|---------|--------------------------------|
| 31-0  | ARG     | R/W    | 0h      | Command argument bits [31:0] . |

## 18.5.1.10 SD\_CMD Register (offset = 20Ch) [reset = 0h]

SD\_CMD is shown in Figure 18-45 and described in Table 18-29.

SD\_CMD[31:16] = the command register. SD\_CMD[15:0] = the transfer mode. This register configures the data and command transfers. A write into the most significant byte send the command. A write into SD\_CMD[15:0] registers during data transfer has no effect. This register can be used for any card. In SYSTEST mode, a write into SD\_CMD register will not start a transfer.

## Figure 18-45. SD\_CMD Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | INDX     | INDX     | INDX     | INDX     | INDX     | INDX     |
| R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| CMD_TYPE | CMD_TYPE | DP       | CICE     | CCCE     | RESERVED | RSP_TYPE | RSP_TYPE |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | MSBS     | DDIR     | RESERVED | ACEN     | BCE      | DE       |
| R-0h     | R-0h     | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Table 18-29. SD\_CMD Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-30 | RESERVED | R      | 0h      |               |

Table 18-29. SD\_CMD Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                    |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------|
| 29-24 | INDX    | R/W    | 0h      | Command index binary encoded value from 0 to 63 specifying the command number send to card. 0h = CMD0 or ACMD0 |

<!-- image -->

<!-- image -->

## Table 18-29. SD\_CMD Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 23-22 | CMD_TYPE | R/W    | 0h      | Command type. This register specifies three types of special commands: Suspend, Resume and Abort. These bits shall be cleared to 0b00 for all other commands. 0h = Others commands 1h = Upon CMD52 "Bus Suspend" operation 2h = Upon CMD52 "Function Select" operation 3h = Upon CMD12 or CMD52 "I/O Abort" command                                                                                                                                                                                 |
| 21    | DP       | R/W    | 0h      | Data present select. This register indicates that data is present and mmc_dat line shall be used. It must be cleared to 0 in the following conditions: Command using only mmc_cmd line. Command with no data transfer but using busy signal on mmc_dat0. Resume command. 0h = Command with no data transfer 1h = Command with data transfer                                                                                                                                                         |
| 20    | CICE     | R/W    | 0h      | Command Index check enable. This bit must be set to 1 to enable index check on command response to compare the index field in the response against the index of the command. If the index is not the same in the response as in the command, it is reported as a command index error (SD_STAT[19] CIE bit set to1) NoteThe CICE bit cannot be configured for an Auto CMD12, then index check is automatically checked when this command is issued. 0h = Index check disable 1h = Index check enable |
| 19    | CCCE     | R/W    | 0h      | Command CRC check enable. This bit must be set to 1 to enable CRC7 check on command response to protect the response against transmission errors on the bus. If an error is detected, it is reported as a command CRC error (SD_STAT[17] CCRC bit set to 1). NoteThe CCCE bit cannot be configured for an Auto CMD12, and then CRC check is automatically checked when this command is issued. 0h = CRC7 check disable                                                                              |
| 18    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 17-16 | RSP_TYPE | R/W    | 0h      | Response type. This bits defines the response type of the command. 0h = No response 1h = Response Length 136 bits 2h = Response Length 48 bits 3h = Response Length 48 bits with busy after response                                                                                                                                                                                                                                                                                                |
| 15-6  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |

Table 18-29. SD\_CMD Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     5 | MSBS     | R/W    | 0h      | Multi/Single block select. This bit must be set to 1 for data transfer in case of multi block command. For any others command this bit shall be cleared to 0. 0h = Single block. If this bit is 0, it is not necessary to set the register SD_BLK[31:16] NBLK bits. 1h = Multi block. When Block Count is disabled (SD_CMD[1] BCE bit is cleared to 0) in Multiple block transfers (SD_CMD[5] MSBS bit is set to 1), the module can perform infinite transfer.                                                                                                                                          |
|     4 | DDIR     | R/W    | 0h      | Data transfer Direction. Select This bit defines either data transfer will be a read or a write. 0h = Data Write (host to card) 1h = Data Read (card to host)                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|     3 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|     2 | ACEN     | R/W    | 0h      | Auto CMD12 Enable (SD cards only). When this bit is set to 1, the host controller issues a CMD12 automatically after the transfer completion of the last block. The Host Driver shall not set this bit to issue commands that do not require CMD12 to stop data transfer. In particular, secure commands do not require CMD12. For CE-ATA commands (SD_CON[12] CEATA bit set to 1), auto CMD12 is useless therefore when this bit is set the mechanism to detect command completion signal, named CCS, interrupt is activated. 0h = Auto CMD12 disable 1h = Auto CMD12 enable or CCS detection enabled. |
|     1 | BCE      | R/W    | 0h      | Block Count Enable (Multiple block transfers only). This bit is used to enable the block count register (SD_BLK [31:16] NBLK bits). When Block Count is disabled (SD_CMD[1] BCE bit is cleared to 0) in Multiple block transfers (SD_CMD[5] MSBS bits is set to 1), the module can perform infinite transfer. 0h = Block count disabled for infinite transfer. 1h = Block count enabled for multiple block transfer with known number of blocks                                                                                                                                                         |
|     0 | DE       | R/W    | 0h      | DMA Enable. This bit is used to enable DMA mode for host data access. 0h = DMA mode disable 1h = DMA mode enable                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |

<!-- image -->

<!-- image -->

## 18.5.1.11 SD\_RSP10 Register (offset = 210h) [reset = 0h]

SD\_RSP10 is shown in Figure 18-46 and described in Table 18-30.

This 32-bit register holds bits positions [31:0] of command response type R1, R1b, R2, R3, R4, R5, R5b, or R6.

## Figure 18-46. SD\_RSP10 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|-----------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------|
| RSP1                                                                                    | RSP0                                                                                    |
| R-0h                                                                                    | R-0h                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-30. SD\_RSP10 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
| 31-16 | RSP1    | R      | 0h      | Command Response [31:16] |
| 15-0  | RSP0    | R      | 0h      | Command Response [15:0]  |

## 18.5.1.12 SD\_RSP32 Register (offset = 214h) [reset = 0h]

SD\_RSP32 is shown in Figure 18-47 and described in Table 18-31.

This 32-bit register holds bits positions [63:32] of command response type R2.

## Figure 18-47. SD\_RSP32 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RSP3                                                                                  | RSP2                                                                                  |
| R-0h                                                                                  | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-31. SD\_RSP32 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
| 31-16 | RSP3    | R      | 0h      | Command Response [63:48] |
| 15-0  | RSP2    | R      | 0h      | Command Response [47:32] |

<!-- image -->

<!-- image -->

www.ti.com

## 18.5.1.13 SD\_RSP54 Register (offset = 218h) [reset = 0h]

SD\_RSP54 is shown in Figure 18-48 and described in Table 18-32.

This 32-bit register holds bits positions [95:64] of command response type R2.

## Figure 18-48. SD\_RSP54 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RSP5                                                                                  | RSP4                                                                                  |
| R-0h                                                                                  | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-32. SD\_RSP54 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
| 31-16 | RSP5    | R      | 0h      | Command Response [95:80] |
| 15-0  | RSP4    | R      | 0h      | Command Response [79:64] |

## 18.5.1.14 SD\_RSP76 Register (offset = 21Ch) [reset = 0h]

SD\_RSP76 is shown in Figure 18-49 and described in Table 18-33.

This 32-bit register holds bits positions [127:96] of command response type R2.

## Figure 18-49. SD\_RSP76 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RSP7                                                                                  | RSP6                                                                                  |
| R-0h                                                                                  | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-33. SD\_RSP76 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                |
|-------|---------|--------|---------|----------------------------|
| 31-16 | RSP7    | R      | 0h      | Command Response [127:112] |
| 15-0  | RSP6    | R      | 0h      | Command Response [111:96]  |

<!-- image -->

<!-- image -->

## 18.5.1.15 SD\_DATA Register (offset = 220h) [reset = 0h]

SD\_DATA is shown in Figure 18-50 and described in Table 18-34.

This register is the 32-bit entry point of the buffer for read or write data transfers. The buffer size is 32bitsx256(1024 bytes). Bytes within a word are stored and read in little endian format. This buffer can be used as two 512 byte buffers to transfer data efficiently without reducing the throughput. Sequential and contiguous access is necessary to increment the pointer correctly. Random or skipped access is not allowed. In little endian, if the local host accesses this register byte-wise or 16bit-wise, the least significant byte (bits [7:0]) must always be written/read first. The update of the buffer address is done on the most significant byte write for full 32-bit DATA register or on the most significant byte of the last word of block transfer. Example 1Byte or 16-bit access: Mbyteen[3:0]=0001 (1-byte) =&gt; Mbyteen[3:0]=0010 (1-byte) =&gt; Mbyteen[3:0]=1100 (2-bytes) OK. Mbyteen[3:0]=0001 (1-byte) =&gt; Mbyteen[3:0]=0010 (1-byte) =&gt; Mbyteen[3:0]=0100 (1-byte) OK. Mbyteen[3:0]=0001 (1-byte) =&gt; Mbyteen[3:0]=0010 (1-byte) =&gt; Mbyteen[3:0]=1000 (1-byte) Bad.

## Figure 18-50. SD\_DATA Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | DATA                                                                            |
|      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-34. SD\_DATA Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DATA    | R/W    | 0h      | Data register [31:0]. In functional mode (SD_CON[4] MODE bit set to the default value 0): A read access to this register is allowed only when the buffer read enable status is set to 1 (SD_PSTATE[11] BRE bit), otherwise a bad access (SD_STAT[29] BADA bit) is signaled. A write access to this register is allowed only when the buffer write enable status is set to 1 (SD_PSTATE[10] BWE bit), otherwise a bad access (SD_STAT[29] BADA bit) is signaled and the data is not written. |

## 18.5.1.16 SD\_PSTATE Register (offset = 224h) [reset = 0h]

SD\_PSTATE is shown in Figure 18-51 and described in Table 18-35.

The Host can get the status of the Host controller from this 32-bit read only register.

## Figure 18-51. SD\_PSTATE Register

| 31   | 30       | 29   | 28       | 27   | 26   | 25   | 24   |
|------|----------|------|----------|------|------|------|------|
|      |          |      | RESERVED |      |      |      | CLEV |
|      |          |      | R-0h     |      |      |      | R-0h |
| 23   | 22       | 21   | 20       | 19   | 18   | 17   | 16   |
|      | DLEV     |      |          | WP   | CDPL | CSS  | CINS |
|      | R-0h     |      |          | R-0h | R-0h | R-0h | R-0h |
| 15   | 14       | 13   | 12       | 11   | 10   | 9    | 8    |
|      | RESERVED |      |          | BRE  | BWE  | RTA  | WTA  |
|      | R-0h     |      |          | R-0h | R-0h | R-0h | R-0h |
| 7    | 6        | 5    | 4        | 3    | 2    | 1    | 0    |
|      | RESERVED |      |          |      | DLA  | DATI | CMDI |
|      | R-0h     |      |          |      | R-0h | R-0h | R-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-35. SD\_PSTATE Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-25 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | CLEV     | R      | 0h      | mmc_cmd line signal level. This status is used to check the mmc_cmd line level to recover from errors, and for debugging. The value of this register after reset depends on the mmc_cmd line level at that time. 0h = The mmc_cmd line level is 0. 1h = The mmc_cmd line level is 1.                                                                                                                                                                                      |
| 23-20 | DLEV     | R      | 0h      | mmc_dat [3:0] line signal level mmc_dat3 equal to or greater than bit 23. mmc_dat2 equal to or greater than bit 22. mmc_dat1 equal to or greater than bit 21. mmc_dat0 equal to or greater than bit 20. This status is used to check mmc_dat line level to recover from errors, and for debugging. This is especially useful in detecting the busy signal level from mmc_dat0 . The value of these registers after reset depends on the mmc_dat lines level at that time. |
| 19    | WP       | R      | 0h      | Write Protect. MMC/SD/SDIO1 only. SDIO cards only. This bit reflects the write protect input pin (SDWP) level. The value of this register after reset depends one the protect input pin (SDWP) level at that time. 0h = If SD_CON[8] WPP is cleared to 0 (default), the card is write protected, otherwise the card is not write protected. 1h = If SD_CON[8] WPP is cleared to 0 (default), the card is not write protected, otherwise the card is write protected.      |

<!-- image -->

<!-- image -->

www.ti.com

## Table 18-35. SD\_PSTATE Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 18    | CDPL     | R      | 0h      | Card Detect Pin Level. MMC/SD/SDIO1 only. SDIO cards only. This bit reflects the inverse value of the card detect input pin (SDCD). Debouncing is not performed on this bit and is valid only when Card State is stable. (SD_PSTATE[17] is set to 1). This bit must be debounced by software. The value of this register after reset depends on the card detect input pin (SDCD) level at that time. 0h = The value of the card detect input pin (SDCD) is 1. 1h = The value of the card detect input pin (SDCD) is 0.                                                                                                                                                                                                                                                       |
| 17    | CSS      | R      | 0h      | Card State Stable. This bit is used for testing. It is set to 1 only when Card Detect Pin Level is stable (SD_PSTATE[18] CPDL). Debouncing is performed on the card detect input pin (SDCD) to detect card stability. This bit is not affected by software reset. 0h = Reset or Debouncing. 1h = Reset or Debouncing.                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 16    | CINS     | R      | 0h      | Card inserted. This bit is the debounced value of the card detect input pin (SDCD). An inactive to active transition of the card detect input pin (SDCD) will generate a card insertion interrupt (SD_STAT[CINS]). A active to inactive transition of the card detect input pin (SDCD) will generate a card removal interrupt (SD_STAT[REM]). This bit is not affected by a software reset. 0h = If SD_CON[CDP] is cleared to 0 (default), no card is detected. The card may have been removed from the card slot. If SD_CON[CDP] is set to 1, the card has been inserted. 1h = If SD_CON[CDP] is cleared to 0 (default), the card has been inserted from the card slot. If SD_CON[CDP] is set to 1, no card is detected. The card may have been removed from the card slot. |
| 15-12 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 11    | BRE      | R      | 0h      | Buffer read enable. This bit is used for non-DMA read transfers. It indicates that a complete block specified by SD_BLK [10:0] BLEN bits has been written in the buffer and is ready to be read. It is cleared to 0 when the entire block is read from the buffer. It is set to 1 when a block data is ready in the buffer and generates the Buffer read ready status of interrupt (SD_STAT[5] BRR bit). 0h = Read BLEN bytes disable 1h = Read BLEN bytes enable. Readable data exists in the buffer.                                                                                                                                                                                                                                                                       |
| 10    | BWE      | R      | 0h      | Buffer Write enable. This status is used for non-DMA write transfers. It indicates if space is available for write data. 0h = There is no room left in the buffer to write BLEN bytes of data. 1h = There is enough space in the buffer to write BLEN bytes of data.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 9     | RTA      | R      | 0h      | Read transfer active. This status is used for detecting completion of a read transfer. It is set to 1 after the end bit of read command or by activating a continue request (SD_HCTL[17] CR bit) following a stop at block gap request. This bit is cleared to 0 when all data have been read by the local host after last block or after a stop at block gap request. 0h = No valid data on the mmc_dat lines. 1h = Read data transfer on going.                                                                                                                                                                                                                                                                                                                            |

## Table 18-35. SD\_PSTATE Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | WTA      | R      | 0h      | Write transfer active. This status indicates a write transfer active. It is set to 1 after the end bit of write command or by activating a continue request (SD_HCTL[17] CR bit) following a stop at block gap request. This bit is cleared to 0 when CRC status has been received after last block or after a stop at block gap request. 0h = No valid data on the mmc_dat lines. 1h = Write data transfer on going.                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 7-3   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 2     | DLA      | R      | 0h      | mmc_dat line active. This status bit indicates whether one of the mmc_dat lines is in use. In the case of read transactions (card to host)This bit is set to 1 after the end bit of read command or by activating continue request SD_HCTL[17] CR bit. This bit is cleared to 0 when the host controller received the end bit of the last data block or at the beginning of the read wait mode. In the case of write transactions (host to card)This bit is set to 1 after the end bit of write command or by activating continue request SD_HCTL[17] CR bit. This bit is cleared to 0 on the end of busy event for the last block. The host controller must wait 8 clock cycles with line not busy to really consider not "busy state" or after the busy block as a result of a stop at gap request. 0h = mmc_dat line inactive 1h = mmc_dat line active |
| 1     | DATI     | R      | 0h      | Command inhibit (mmc_dat). This status bit is generated if either mmc_dat line is active (SD_PSTATE[2] DLA bit) or Read transfer is active (SD_PSTATE[9] RTA bit) or when a command with busy is issued. This bit prevents the local host to issue a command. A change of this bit from 1 to 0 generates a transfer complete interrupt (SD_STAT[1] TC bit). 0h = Issuing of command using the mmc_dat lines is allowed 1h = Issuing of command using mmc_dat lines is not allowed                                                                                                                                                                                                                                                                                                                                                                         |
| 0     | CMDI     | R      | 0h      | Command inhibit(mmc_cmd). This status bit indicates that the mmc_cmd line is in use. This bit is cleared to 0 when the most significant byte is written into the command register. This bit is not set when Auto CMD12 is transmitted. This bit is cleared to 0 in either the following cases: After the end bit of the command response, excepted if there is a command conflict error (SD_STAT[17] CCRC bit or SD_STAT[18] CEB bit set to 1) or a Auto CMD12 is not executed (SD_AC12[0] ACNE bit). After the end bit of the command without response (SD_CMD [17:16] RSP_TYPE bits set to "00"). In case of a command data error is detected (SD_STAT[19] CTO bit set to 10, this register is not automatically cleared. 0h = Issuing of command using mmc_cmd line is allowed 1h = Issuing of command using mmc_cmd line is not allowed               |

<!-- image -->

<!-- image -->

www.ti.com

## 18.5.1.17 SD\_HCTL Register (offset = 228h) [reset = 0h]

SD\_HCTL is shown in Figure 18-52 and described in Table 18-36.

This register defines the host controls to set power, wake-up and transfer parameters. SD\_HCTL[31:24] = Wake-up control. SD\_HCTL[23:16] = Block gap control. SD\_HCTL[15:8] = Power control. SD\_HCTL[7:0] = Host control. If your device does not support MMC cards, then those bits in this register which are meant for MMC card use should be assumed to be reserved.

Figure 18-52. SD\_HCTL Register

| 31     | 30       | 29       | 28     | 27     | 26     | 25     | 24       |
|--------|----------|----------|--------|--------|--------|--------|----------|
|        | RESERVED | RESERVED |        | OBWE   | REM    | INS    | IWE      |
|        | R-0h     | R-0h     |        | R/W-0h | R/W-0h | R/W-0h | R/W-0h   |
| 23     | 22       | 21       | 20     | 19     | 18     | 17     | 16       |
|        | RESERVED | RESERVED |        | IBG    | RWC    | CR     | SBGR     |
|        | R-0h     | R-0h     |        | R/W-0h | R/W-0h | R/W-0h | R/W-0h   |
| 15     | 14       | 13       | 12     | 11     | 10     | 9      | 8        |
|        | RESERVED | RESERVED |        | SDVS   | SDVS   |        | SDBP     |
|        | R-0h     | R-0h     |        | R/W-0h | R/W-0h |        | R/W-0h   |
| 7      | 6        | 5        | 4      | 3      | 2      | 1      | 0        |
| CDSS   | CDTL     | RESERVED | DMAS   |        | HSPE   | DTW    | RESERVED |
| R/W-0h | R/W-0h   | R-0h     | R/W-0h |        | R/W-0h | R/W-0h | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 18-36. SD\_HCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                  |
| 27    | OBWE     | R/W    | 0h      | Wake-up event enable for 'out-of-band' Interrupt. This bit enables wake-up events for 'out-of-band' assertion. Wake-up is generated if the wake-up feature is enabled (SD_SYSCONFIG[2] ENAWAKEUP bit). The write to this register is ignored when SD_CON[14] OBIE bit is not set. 0h = Disable wake-up on 'out-of-band' Interrupt 1h = Enable wake-up on 'out-of-band' Interrupt |
| 26    | REM      | R/W    | 0h      | Wake-up event enable on SD card removal. This bit enables wake-up events for card removal assertion. Wake-up is generated if the wake-up feature is enabled (SD_SYSCONFIG[2] ENAWAKEUP bit). 0h = Disable wake-up on card removal 1h = Enable wake-up on card removal                                                                                                            |
| 25    | INS      | R/W    | 0h      | Wake-up event enable on SD card insertion This bit enables wake- up events for card insertion assertion. Wake-up is generated if the wake-up feature is enabled (SD_SYSCONFIG[2] ENAWAKEUP bit). 0h = Disable wake-up on card insertion 1h = Enable wake-up on card insertion                                                                                                    |
| 24    | IWE      | R/W    | 0h      | Wake-up event enable on SD card interrupt. This bit enables wake-up events for card interrupt assertion. Wake-up is generated if the wake-up feature is enabled (SD_SYSCONFIG[2] ENAWAKEUP bit) and enable status bit is set (SD_IE[8] CIRQ_ENABLE bit). 0h = Disable wake-up on card interrupt 1h = Enable wake-up on card interrupt                                            |
| 23-20 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                  |

Table 18-36. SD\_HCTL Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 19    | IBG      | R/W    | 0h      | Interrupt block at gap. This bit is valid only in 4-bit mode of SDIO card to enable interrupt detection in the interrupt cycle at block gap for a multiple block transfer. For MMC cards and for SD card this bit should be cleared to 0. 0h = Disable interrupt detection at the block gap in 4-bit mode 1h = Enable interrupt detection at the block gap in 4-bit mode                                                                                                                                                                                                                                            |
| 18    | RWC      | R/W    | 0h      | Read wait control. The read wait function is optional only for SDIO cards. If the card supports read wait, this bit must be enabled, then requesting a stop at block gap (SD_HCTL[16] SBGR bit) generates a read wait period after the current end of block. Be careful, if read wait is not supported it may cause a conflict on mmc_dat line. 0h = Disable read wait control. Suspend/resume cannot be supported. 1h = Enable read wait control                                                                                                                                                                   |
| 17    | CR       | R/W    | 0h      | Continue request. This bit is used to restart a transaction that was stopped by requesting a stop at block gap (SD_HCTL[16] SBGR bit). Set this bit to 1 restarts the transfer. The bit is automatically cleared to 0 by the host controller when transfer has restarted, that is, mmc_dat line is active (SD_PSTATE[2] DLA bit) or transferring data (SD_PSTATE[8] WTA bit). The Stop at block gap request must be disabled (SD_HCTL[16] SBGR bit =0) before setting this bit. 0h = No affect 1h = Transfer restart                                                                                                |
| 16    | SBGR     | R/W    | 0h      | Stop at block gap request. This bit is used to stop executing a transaction at the next block gap. The transfer can restart with a continue request (SD_HCTL[17] CR bit) or during a suspend/resume sequence. In case of read transfer, the card must support read wait control. In case of write transfer, the host driver shall set this bit after all block data written. Until the transfer completion (SD_STAT[1] TC bit set to 1), the host driver shall leave this bit set to 1.If this bit is set, the local host shall not write to the data register (SD_DATA). 0h = Transfer mode 1h = Stop at block gap |
| 15-12 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 11-9  | SDVS     | R/W    | 0h      | SD bus voltage select (All cards). The host driver should set these bits to select the voltage level for the card according to the voltage supported by the system (SD_CAPA[26] VS18 bit, SD_CAPA[25] VS30 bit, SD_CAPA[24] VS33 bit) before starting a transfer. If MMCHS 2: This field must be set to 5h. If MMCHS 3: This field must be set to 5h. 5h = 1.8 V (Typical) 6h = 3.0 V (Typical) 7h = 3.3 V (Typical)                                                                                                                                                                                                |

<!-- image -->

<!-- image -->

www.ti.com

Table 18-36. SD\_HCTL Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | SDBP     | R/W    | 0h      | SD bus power. Before setting this bit, the host driver shall select the SD bus voltage (SD_HCTL [11:9] SDVS bits). If the host controller detects the No card state, this bit is automatically cleared to 0. If the module is power off, a write in the command register (SD_CMD) will not start the transfer. A write to this bit has no effect if the selected SD bus voltage is not supported according to capability register (SD_CAPA[VS*]). 0h = Power off                                                               |
| 7     | CDSS     | R/W    | 0h      | Card Detect Signal Selection. This bit selects source for the card detection. When the source for the card detection is switched, the interrupt should be disabled during the switching period by clearing the Interrupt Status/Signal Enable register in order to mask unexpected interrupt being caused by the glitch. The Interrupt Status/Signal Enable should be disabled during over the period of debouncing. 0h = SDCD# is selected (for normal use). 1h = The Card Detect Test Level is selected (for test purposes). |
| 6     | CDTL     | R/W    | 0h      | Card Detect Test Level. This bit is enabled while the Card Detect Signal Selection is set to 1 and it indicates card inserted or not. 0 = No card                                                                                                                                                                                                                                                                                                                                                                              |
| 5     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 4-3   | DMAS     | R/W    | 0h      | DMA Select. One of the supported DMA modes can be selected. The host driver shall check support of DMA modes by referencing the Capabilities register. Use of selected DMA is determined by DMA Enable of the Transfer Mode register. This register is only meaningful when MADMA_EN is set to 1. When MADMA_EN is cleared to 0 the bit field is read only and returned value is 0. 0h = Reserved 1h = Reserved 2h = 32-bit Address ADMA2 is selected. 3h = Reserved                                                           |
| 2     | HSPE     | R/W    | 0h      | High Speed Enable. Before setting this bit, the Host Driver shall check the High Speed Support in the Capabilities register. If this bit is cleared to 0 (default), the Host Controller outputs CMD line and DAT lines at the falling edge of the SD Clock. If this bit is set to 1, the Host Controller outputs CMD line and DAT lines at the rising edge of the SD Clock. This bit shall not be set when dual data rate mode is activated in SD_CON[DDR]. 0h = Normal speed mode 1h = High speed mode                        |
| 1     | DTW      | R/W    | 0h      | Data transfer width. This bit must be set following a valid SET_BUS_WIDTH command (ACMD6) with the value written in bit 1 of the argument. Prior to this command, the SD card configuration register (SCR) must be verified for the supported bus width by the SD card. 0h = 1-bit Data width (mmc_dat0 used)                                                                                                                                                                                                                  |
| 0     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |

## 18.5.1.18 SD\_SYSCTL Register (offset = 22Ch) [reset = 0h]

SD\_SYSCTL is shown in Figure 18-53 and described in Table 18-37.

This register defines the system controls to set software resets, clock frequency management and data timeout. SD\_SYSCTL[31:24] = Software resets. SD\_SYSCTL[23:16] = Timeout control. SD\_SYSCTL[15:0] = Clock control.

## Figure 18-53. SD\_SYSCTL Register

| 31   | 30       | 29       | 28       | 27     | 26      | 25      | 24      | 23   | 22       | 21       | 20       | 19   | 18      | 17     | 16      |
|------|----------|----------|----------|--------|---------|---------|---------|------|----------|----------|----------|------|---------|--------|---------|
|      | RESERVED | RESERVED | RESERVED |        | SRD     | SRC     | SRA     |      | RESERVED | RESERVED |          |      | DTO     | DTO    |         |
|      | R-0h     | R-0h     |          |        | R/W- 0h | R/W- 0h | R/W- 0h |      | R-0h     |          |          |      | R/W-0h  | R/W-0h |         |
| 15   | 14       | 13       | 12       | 11     | 10      | 9       | 8       | 7    | 6        | 5        | 4        | 3    | 2       | 1      | 0       |
|      |          |          |          | CLKD   | CLKD    |         |         |      |          |          | RESERVED |      | CEN     | ICS    | ICE     |
|      |          |          |          | R/W-0h | R/W-0h  |         |         |      |          |          | R-0h     |      | R/W- 0h | R-0h   | R/W- 0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 18-37. SD\_SYSCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-27 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 26    | SRD      | R/W    | 0h      | Software reset for mmc_dat line. This bit is set to 1 for reset and released to 0 when completed. Due to additional implementation logic, the reset does not immediately start when asserted. The proper procedure is: (a) Set to 1 to start reset, (b) Poll for 1 to identify start of reset, and (c) Poll for 0 to identify reset is complete. mmc_dat finite state machine in both clock domain are also reset. These registers are cleared by the SD_SYSCTL[26] SRD bit: SD_DATA. SD_PSTATEBRE, BWE, RTA, WTA, DLA and DATI. SD_HCTLSBGR and CR. SD_STATBRR, BWR, BGE and TC Interconnect and MMC buffer data management is reinitialized. Note: If a soft reset is issued when an interrupt is asserted, data may be lost. 0h = Reset completed 1h = Software reset for mmc_dat line |
| 25    | SRC      | R/W    | 0h      | Software reset for mmc_cmd line. This bit is set to 1 for reset and released to 0 when completed. Due to additional implementation logic, the reset does not immediately start when asserted. The proper procedure is: (a) Set to 1 to start reset, (b) Poll for 1 to identify start of reset, and (c) Poll for 0 to identify reset is complete. mmc_cmd finite state machine in both clock domain are also reset. These registers are cleared by the SD_SYSCTL[25] SRC bit: SD_PSTATECMDI. SD_STATCC Interconnect and MMC command status management is reinitialized. Note: If a soft reset is issued when an interrupt is asserted, data may be lost. 0h = Reset completed 1h = Software reset for mmc_cmd line                                                                         |
| 24    | SRA      | R/W    | 0h      | Software reset for all. This bit is set to 1 for reset , and released to 0 when completed. This reset affects the entire host controller except for the card detection circuit and capabilities registers. 0h = Reset completed 1h = Software reset for all the design                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 23-20 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |

<!-- image -->

<!-- image -->

www.ti.com

Table 18-37. SD\_SYSCTL Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 19-16 | DTO      | R/W    | 0h      | Data timeout counter value and busy timeout. This value determines the interval by which mmc_dat lines timeouts are detected. The host driver needs to set this bit field based on: The maximum read access time (NAC) (Refer to the SD Specification Part1 Physical Layer). The data read access time values (TAAC and NSAC) in the card specific data register (CSD) of the card. The timeout clock base frequency (SD_CAPA [5:0] TCF bits). If the card does not respond within the specified number of cycles, a data timeout error occurs (SD_STAT[20] DTO bit). The SD_SYSCTL[19,16] DTO bit field is also used to check busy duration, to generate busy timeout for commands with busy response or for busy programming during a write command. Timeout on CRC status is generated if no CRC token is present after a block write. 0h = TCF x 2^13 1h = TCF x 2^14 Eh = TCF x 2^27 Fh = Reserved |
| 15-6  | CLKD     | R/W    | 0h      | Clock frequency select. These bits define the ratio between a reference clock frequency (system dependant) and the output clock frequency on the mmc_clk pin of either the memory card (MMC, SD, or SDIO). 0h = Clock Ref bypass 1h = Clock Ref bypass 2h = Clock Ref / 2 3h = Clock Ref / 3 3FFh = Clock Ref / 1023                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 5-3   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 2     | CEN      | R/W    | 0h      | Clock enable. This bit controls if the clock is provided to the card or not. 0h = The clock is not provided to the card . Clock frequency can be changed . 1h = The clock is provided to the card and can be automatically gated when SD_SYSCONFIG[0] AUTOIDLE bit is set to 1 (default value). The host driver shall wait to set this bit to 1 until the Internal clock is stable (SD_SYSCTL[1] ICS bit).                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 1     | ICS      | R      | 0h      | Internal clock stable (status)This bit indicates either the internal clock is stable or not. 0h = The internal clock is not stable. 1h = The internal clock is stable after enabling the clock (SD_SYSCTL[0] ICE bit) or after changing the clock ratio (SD_SYSCTL[15:6] CLKD bits).                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 0     | ICE      | R/W    | 0h      | Internal clock enable. This register controls the internal clock activity. In very low power state, the internal clock is stopped. NoteThe activity of the debounce clock (used for wake-up events) and the interface clock (used for reads and writes to the module register map) are not affected by this register. 0h = The internal clock is stopped (very low power state). 1h = The internal clock oscillates and can be automatically gated when SD_SYSCONFIG[0] AUTOIDLE bit is set to 1 (default value).                                                                                                                                                                                                                                                                                                                                                                                       |

## 18.5.1.19 SD\_STAT Register (offset = 230h) [reset = 0h]

SD\_STAT is shown in Figure 18-54 and described in Table 18-38.

The interrupt status regroups all the status of the module internal events that can generate an interrupt. SD\_STAT[31:16] = Error Interrupt Status. SD\_STAT[15:0] = Normal Interrupt Status. The error bits are located in the upper 16 bits of the SD\_STAT register. All bits are cleared by writing a 1 to them. Additionally, bits 15 and 8 serve as special error bits. These cannot be cleared by writing a 1 to them. Bit 15 (ERRI) is automatically cleared when the error causing to ERRI to be set is handled. (that is, when bits 31:16 are cleared, bit 15 will be automatically cleared). Bit 8 (CIRQ) is cleared by writing a 0 to SD\_IE[8] (masking the interrupt) and servicing the interrupt.

## Figure 18-54. SD\_STAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25     | 24     |
|----------|----------|----------|----------|----------|----------|--------|--------|
| RESERVED | RESERVED | BADA     | CERR     | RESERVED | RESERVED | ADMAE  | ACE    |
| R-0h     | R-0h     | R/W-0h   | R/W-0h   | R-0h     | R-0h     | R/W-0h | R/W-0h |
| 23       | 22       | 21       | 20       | 19       | 18       | 17     | 16     |
| RESERVED | DEB      | DCRC     | DTO      | CIE      | CEB      | CCRC   | CTO    |
| R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h |
| 15       | 14       | 13       | 12       | 11       | 10       | 9      | 8      |
| ERRI     | RESERVED | RESERVED | RESERVED |          | BSR      | OBI    | CIRQ   |
| R-0h     | R-0h     | R-0h     | R-0h     |          | R/W-0h   | R-0h   | R-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1      | 0      |
| CREM     | CINS     | BRR      | BWR      | DMA      | BGE      | TC     | CC     |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 18-38. SD\_STAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 29    | BADA     | R/W    | 0h      | Bad access to data space. This bit is set automatically to indicate a bad access to buffer when not allowed: During a read access to the data register (SD_DATA) while buffer reads are not allowed (SD_PSTATE[11] BRE bit =0). During a write access to the data register (SD_DATA) while buffer writes are not allowed (SD_PSTATE[10] BWE bit=0). 0h (W) = Status bit unchanged 0h (R) = No interrupt 1h (W) = Status is cleared. 1h (R) = Bad access                                                                                                                                         |
| 28    | CERR     | R/W    | 0h      | Card error. This bit is set automatically when there is at least one error in a response of type R1, R1b, R6, R5 or R5b. Only bits referenced as type E (error) in status field in the response can set a card status error. An error bit in the response is flagged only if corresponding bit in card status response error SD_CSRE in set. There is no card error detection for autoCMD12 command. The host driver shall read SD_RSP76 register to detect error bits in the command response. 0h (W) = Status bit unchanged 0h (R) = No error 1h (W) = Status is cleared. 1h (R) = Card error |
| 27-26 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |

<!-- image -->

<!-- image -->

www.ti.com

## Table 18-38. SD\_STAT Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    25 | ADMAE    | R/W    | 0h      | ADMA Error. This bit is set when the Host Controller detects errors during ADMA based data transfer. The state of the ADMA at an error occurrence is saved in the ADMA Error Status Register. In addition, the Host Controller generates this interrupt when it detects invalid descriptor data (Valid=0) at the ST_FDS state. ADMA Error State in the ADMA Error Status indicates that an error occurs in ST_FDS state. The Host Driver may find that Valid bit is not set at the error descriptor. 0h (W) = Status bit unchanged 0h (R) = No interrupt 1h (W) = Status is cleared. 1h (R) = ADMA error |
|    24 | ACE      | R/W    | 0h      | Auto CMD12 error. This bit is set automatically when one of the bits in Auto CMD12 Error status register has changed from 0 to 1. 0h (W) = Status bit unchanged 0h (R) = No error 1h (W) = Status is cleared. 1h (R) = AutoCMD12 error                                                                                                                                                                                                                                                                                                                                                                   |
|    23 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
|    22 | DEB      | R/W    | 0h      | Data End Bit error. This bit is set automatically when detecting a 0 at the end bit position of read data on mmc_dat line or at the end position of the CRC status in write mode. 0h (W) = Status bit unchanged 0h (R) = No error 1h (W) = Status is cleared. 1h (R) = Data end bit error                                                                                                                                                                                                                                                                                                                |
|    21 | DCRC     | R/W    | 0h      | Data CRC Error. This bit is set automatically when there is a CRC16 error in the data phase response following a block read command or if there is a 3-bit CRC status different of a position "010" token during a block write command. 0h (W) = Status bit unchanged 0h (R) = No error 1h (W) = Status is cleared. 1h (R) = Data CRC error                                                                                                                                                                                                                                                              |
|    20 | DTO      | R/W    | 0h      | Data timeout error. This bit is set automatically according to the following conditions: Busy timeout for R1b, R5b response type. Busy timeout after write CRC status. Write CRC status timeout. Read data timeout. 0h (W) = Status bit unchanged 0h (R) = No error 1h (W) = Status is cleared.                                                                                                                                                                                                                                                                                                          |
|    19 | CIE      | R/W    | 0h      | Command index error. This bit is set automatically when response index differs from corresponding command index previously emitted. It depends on the enable bit (SD_CMD[20] CICE). 0h (W) = Status bit unchanged 0h (R) = No error 1h (W) = Status is cleared. 1h (R) = Command index error                                                                                                                                                                                                                                                                                                             |

## Table 18-38. SD\_STAT Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 18    | CEB      | R/W    | 0h      | Command end bit error. This bit is set automatically when detecting a 0 at the end bit position of a command response. 0h (W) = Status bit unchanged 0h (R) = No error 1h (W) = Status is cleared. 1h (R) = Command end bit error                                                                                                                                                                                                                                                                                                                       |
| 17    | CCRC     | R/W    | 0h      | Command CRC error. This bit is set automatically when there is a CRC7 error in the command response depending on the enable bit (SD_CMD[19] CCCE). 0h (W) = Status bit unchanged 0h (R) = No error 1h (W) = Status is cleared. 1h (R) = Command CRC error                                                                                                                                                                                                                                                                                               |
| 16    | CTO      | R/W    | 0h      | Command timeout error. This bit is set automatically when no response is received within 64 clock cycles from the end bit of the command. For commands that reply within 5 clock cycles - the timeout is still detected at 64 clock cycles. 0h (W) = Status bit unchanged 0h (R) = No error 1h (W) = Status is cleared. 1h (R) = Time Out                                                                                                                                                                                                               |
| 15    | ERRI     | R      | 0h      | Error interrupt. If any of the bits in the Error Interrupt Status register (SD_STAT [31:16]) are set, then this bit is set to 1. Therefore the host driver can efficiently test for an error by checking this bit first. Writes to this bit are ignored. 0h (R) = No interrupt 1h (R) = Error interrupt event(s) occurred                                                                                                                                                                                                                               |
| 14-11 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 10    | BSR      | R/W    | 0h      | Boot Status Received Interrupt. This bit is set automatically when SD_CON[BOOT] is set 1 or 2 and a boot status is received on DAT[0] line. This interrupt is only useful for MMC card. 0h (W) = Status bit unchanged 0h (R) = No interrupt 1h (W) = Status is cleared. 1h (R) = Boot Status Received Interrupt occurred.                                                                                                                                                                                                                               |
| 9     | OBI      | R      | 0h      | Out-of-band interrupt (This interrupt is only useful for MMC card). This bit is set automatically when SD_CON[14] OBIE bit is set and an out-of-band interrupt occurs on OBI pin. The interrupt detection depends on polarity controlled by SD_CON[13] OBIP bit. The out-of-band interrupt signal is a system specific feature for future use, this signal is not required for existing specification implementation. 0h (W) = Status bit unchanged 0h (R) = No out-of-band interrupt 1h (W) = Status is cleared. 1h (R) = Interrupt out-of-band occurs |

<!-- image -->

<!-- image -->

www.ti.com

## Table 18-38. SD\_STAT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     8 | CIRQ    | R      | 0h      | Card interrupt. This bit is only used for SD and SDIO cards. In 1-bit mode, interrupt source is asynchronous (can be a source of asynchronous wake-up). In 4-bit mode, interrupt source is sampled during the interrupt cycle. In CE-ATA mode, interrupt source is detected when the card drives mmc_cmd line to zero during one cycle after data transmission end. All modes above are fully exclusive. The controller interrupt must be clear by setting SD_IE[8] CIRQ_ENABLE to 0, then the host driver must start the interrupt service with card (clearing card interrupt status) to remove card interrupt source. Otherwise the Controller interrupt will be reasserted as soon as SD_IE[8] CIRQ_ENABLE is set to 1. Writes to this bit are ignored. 0h (R) = No card interrupt 1h (R) = Generate card interrupt |
|     7 | CREM    | R/W    | 0h      | Card Removal. This bit is set automatically when SD_PSTATE[CINS] changes from 1 to 0. A clear of this bit doesn't affect Card inserted present state (SD_PSTATE[CINS]). 0h (W) = Status bit unchanged 0h (R) = Card State stable or debouncing 1h (W) = Status is cleared 1h (R) = Card Removed                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|     6 | CINS    | R/W    | 0h      | Card Insertion. This bit is set automatically when SD_PSTATE[CINS] changes from 0 to 1. A clear of this bit doesn't affect Card inserted present state (SD_PSTATE[CINS]). 0h (W) = Status bit unchanged 0h (R) = Card State stable or debouncing 1h (W) = Status is cleared. 1h (R) = Card inserted                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|     5 | BRR     | R/W    | 0h      | Buffer read ready. This bit is set automatically during a read operation to the card (see class 2 - block oriented read commands) when one block specified by the SD_BLK [10:0] BLEN bit field is completely written in the buffer. It indicates that the memory card has filled out the buffer and that the local host needs to empty the buffer by reading it. Note: If the DMA receive-mode is enabled, this bit is never set instead a DMA receive request to the main DMA controller of the system is generated. 0h (W) = Status bit unchanged 0h (R) = Not ready to read buffer 1h (W) = Status is cleared. 1h (R) = Ready to read buffer                                                                                                                                                                        |

## Table 18-38. SD\_STAT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     4 | BWR     | R/W    | 0h      | Buffer write ready. This bit is set automatically during a write operation to the card (see class 4 - block oriented write command) when the host can write a complete block as specified by SD_BLK [10:0] BLEN. It indicates that the memory card has emptied one block from the buffer and that the local host is able to write one block of data into the buffer. Note: If the DMA transmit mode is enabled, this bit is never set instead, a DMA transmit request to the main DMA controller of the system is generated. 0h (W) = Status bit unchanged 0h (R) = Not ready to write buffer 1h (W) = Status is cleared. 1h (R) = Ready to write buffer |
|     3 | DMA     | R/W    | 0h      | DMA Interrupt. This status is set when an interrupt is required in the ADMA instruction and after the data transfer completion. 0h (W) = Status bit unchanged 0h (R) = DMA Interrupt detected 1h (W) = Status is cleared. 1h (R) = No DMA Interrupt                                                                                                                                                                                                                                                                                                                                                                                                      |
|     2 | BGE     | R/W    | 0h      | Block gap event. When a stop at block gap is requested (SD_HCTL[16] SBGR bit), this bit is automatically set when transaction is stopped at the block gap during a read or write operation. 0h (W) = Status bit unchanged 0h (R) = No block gap event 1h (W) = Status is cleared 1h (R) = Transaction stopped at block gap                                                                                                                                                                                                                                                                                                                               |
|     1 | TC      | R/W    | 0h      | Transfer completed. This bit is always set when a read/write transfer is completed or between two blocks when the transfer is stopped due to a stop at block gap request (SD_HCTL[16] SBGR bit). 0h (W) = Status bit unchanged 0h (R) = No transfer complete 1h (W) = Status is cleared 1h (R) = Data transfer complete                                                                                                                                                                                                                                                                                                                                  |
|     0 | CC      | R/W    | 0h      | Command complete. This bit is set when a 1-to-0 transition occurs in the register command inhibit (SD_PSTATE[0] CMDI bit) 0h (W) = Status bit unchanged 0h (R) = No command complete 1h (W) = Status is cleared 1h (R) = Command complete                                                                                                                                                                                                                                                                                                                                                                                                                |

<!-- image -->

<!-- image -->

## 18.5.1.20 SD\_IE Register (offset = 234h) [reset = 0h]

SD\_IE is shown in Figure 18-55 and described in Table 18-39.

This register allows to enable/disable the module to set status bits, on an event-by-event basis. SD\_IE[31:16] = Error Interrupt Status Enable. SD\_IE[15:0] = Normal Interrupt Status Enable.

## Figure 18-55. SD\_IE Register

| 31           | 30          | 29           | 28           | 27         | 26         | 25           | 24          |
|--------------|-------------|--------------|--------------|------------|------------|--------------|-------------|
| RESERVED     | RESERVED    | BADA_ENABL E | CERR_ENABL E | RESERVED   | RESERVED   | ADMA_ENABL E | ACE_ENABLE  |
| R-0h         | R-0h        | R/W-0h       | R/W-0h       | R-0h       | R-0h       | R/W-0h       | R/W-0h      |
| 23           | 22          | 21           | 20           | 19         | 18         | 17           | 16          |
| RESERVED     | DEB_ENABLE  | DCRC_ENABL E | DTO_ENABLE   | CIE_ENABLE | CEB_ENABLE | CCRC_ENABL E | CTO_ENABLE  |
| R-0h         | R/W-0h      | R/W-0h       | R/W-0h       | R/W-0h     | R/W-0h     | R/W-0h       | R/W-0h      |
| 15           | 14          | 13           | 12           | 11         | 10         | 9            | 8           |
| NULL         | RESERVED    | RESERVED     | RESERVED     |            | BSR_ENABLE | OBI_ENABLE   | CIRQ_ENABLE |
| R-0h         | R-0h        | R-0h         | R-0h         |            | R/W-0h     | R/W-0h       | R/W-0h      |
| 7            | 6           | 5            | 4            | 3          | 2          | 1            | 0           |
| CREM_ENABL E | CINS_ENABLE | BRR_ENABLE   | BWR_ENABLE   | DMA_ENABLE | BGE_ENABLE | TC_ENABLE    | CC_ENABLE   |
| R/W-0h       | R/W-0h      | R/W-0h       | R/W-0h       | R/W-0h     | R/W-0h     | R/W-0h       | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-39. SD\_IE Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                        |
|-------|-------------|--------|---------|--------------------------------------------------------------------|
| 31-30 | RESERVED    | R      | 0h      |                                                                    |
| 29    | BADA_ENABLE | R/W    | 0h      | Bad access to data space interrupt enable 0h = Masked 1h = Enabled |
| 28    | CERR_ENABLE | R/W    | 0h      | Card error interrupt enable 0h = Masked 1h = Enabled               |
| 27-26 | RESERVED    | R      | 0h      |                                                                    |
| 25    | ADMA_ENABLE | R/W    | 0h      | ADMA error Interrupt Enable 0h = Masked 1h = Enabled               |
| 24    | ACE_ENABLE  | R/W    | 0h      | Auto CMD12 error interrupt enable 0h = Masked 1h = Enabled         |
| 23    | RESERVED    | R      | 0h      |                                                                    |
| 22    | DEB_ENABLE  | R/W    | 0h      | Data end bit error interrupt enable 0h = Masked 1h = Enabled       |
| 21    | DCRC_ENABLE | R/W    | 0h      | Data CRC error interrupt enable 0h = Masked 1h = Enabled           |
| 20    | DTO_ENABLE  | R/W    | 0h      | Data timeout error interrupt enable 0h = Masked 1h = Enabled       |
| 19    | CIE_ENABLE  | R/W    | 0h      | Command index error interrupt enable 0h = Masked 1h = Enabled      |

Table 18-39. SD\_IE Register Field Descriptions (continued)

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 18    | CEB_ENABLE  | R/W    | 0h      | Command end bit error interrupt enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                       |
| 17    | CCRC_ENABLE | R/W    | 0h      | Command CRC error interrupt enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                           |
| 16    | CTO_ENABLE  | R/W    | 0h      | Command timeout error interrupt enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                       |
| 15    | NULL        | R      | 0h      | Fixed to 0. The host driver shall control error interrupts using the Error Interrupt Signal Enable register. Writes to this bit are ignored.                                                                                                                                                                                                                                                                                          |
| 14-11 | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 10    | BSR_ENABLE  | R/W    | 0h      | Boot Status Interrupt Enable A write to this register when SD_CON[BOOT] is cleared to 0 is ignored. 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                          |
| 9     | OBI_ENABLE  | R/W    | 0h      | Out-of-band interrupt enable A write to this register when SD_CON[14] OBIE is cleared to 0 is ignored. 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                       |
| 8     | CIRQ_ENABLE | R/W    | 0h      | Card interrupt enable. A clear of this bit also clears the corresponding status bit. During 1-bit mode, if the interrupt routine does not remove the source of a card interrupt in the SDIO card, the status bit is reasserted when this bit is set to 1. This bit must be set to 1 when entering in smart idle mode to enable system to identity wake-up event and to allow controller to clear internal wake-up source. 0h = Masked |
| 7     | CREM_ENABLE | R/W    | 0h      | Card Removal interrupt Enable This bit must be set to 1 when entering in smart idle mode to enable system to identity wake-up event and to allow controller to clear internal wake-up source. 0h = Masked                                                                                                                                                                                                                             |
| 6     | CINS_ENABLE | R/W    | 0h      | Card Insertion interrupt Enable This bit must be set to 1 when entering in smart idle mode to enable system to identity wake-up event and to allow controller to clear internal wake-up source. 0h = Masked                                                                                                                                                                                                                           |
| 5     | BRR_ENABLE  | R/W    | 0h      | Buffer read ready interrupt enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                           |
| 4     | BWR_ENABLE  | R/W    | 0h      | Buffer write ready interrupt enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                          |
| 3     | DMA_ENABLE  | R/W    | 0h      | DMA interrupt enable 0h = Masked 1h = Enable                                                                                                                                                                                                                                                                                                                                                                                          |
| 2     | BGE_ENABLE  | R/W    | 0h      | Block gap event interrupt enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                             |

<!-- image -->

<!-- image -->

## Table 18-39. SD\_IE Register Field Descriptions (continued)

|   Bit | Field     | Type   | Reset   | Description                                                  |
|-------|-----------|--------|---------|--------------------------------------------------------------|
|     1 | TC_ENABLE | R/W    | 0h      | Transfer completed interrupt enable 0h = Masked 1h = Enabled |
|     0 | CC_ENABLE | R/W    | 0h      | Command completed interrupt enable 0h = Masked 1h = Enabled  |

## 18.5.1.21 SD\_ISE Register (offset = 238h) [reset = 0h]

SD\_ISE is shown in Figure 18-56 and described in Table 18-40.

This register allows you to enable/disable the module to set status bits, on an event-by-event basis. SD\_ISE[31:16] = Error Interrupt Signal Enable. SD\_ISE[15:0] = Normal Interrupt Signal Enable.

## Figure 18-56. SD\_ISE Register

| 31         | 30         | 29         | 28         | 27        | 26        | 25         | 24         |
|------------|------------|------------|------------|-----------|-----------|------------|------------|
| RESERVED   | RESERVED   | BADA_SIGEN | CERR_SIGEN | RESERVED  | RESERVED  | ADMA_SIGEN | ACE_SIGEN  |
| R-0h       | R-0h       | R/W-0h     | R/W-0h     | R-0h      | R-0h      | R/W-0h     | R/W-0h     |
| 23         | 22         | 21         | 20         | 19        | 18        | 17         | 16         |
| RESERVED   | DEB_SIGEN  | DCRC_SIGEN | DTO_SIGEN  | CIE_SIGEN | CEB_SIGEN | CCRC_SIGEN | CTO_SIGEN  |
| R-0h       | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    | R/W-0h     | R/W-0h     |
| 15         | 14         | 13         | 12         | 11        | 10        | 9          | 8          |
| NULL       | RESERVED   | RESERVED   | RESERVED   |           | BSR_SIGEN | OBI_SIGEN  | CIRQ_SIGEN |
| R-0h       | R-0h       | R-0h       | R-0h       |           | R/W-0h    | R/W-0h     | R/W-0h     |
| 7          | 6          | 5          | 4          | 3         | 2         | 1          | 0          |
| CREM_SIGEN | CINS_SIGEN | BRR_SIGEN  | BWR_SIGEN  | DMA_SIGEN | BGE_SIGEN | TC_SIGEN   | CC_SIGEN   |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h    | R/W-0h    | R/W-0h     | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 18-40. SD\_ISE Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                    |
|-------|------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED   | R      | 0h      |                                                                                                                                                                                |
| 29    | BADA_SIGEN | R/W    | 0h      | Bad access to data space interrupt enable 0h = Masked 1h = Enabled                                                                                                             |
| 28    | CERR_SIGEN | R/W    | 0h      | Card error interrupt signal status enable 0h = Masked 1h = Enabled                                                                                                             |
| 27-26 | RESERVED   | R      | 0h      |                                                                                                                                                                                |
| 25    | ADMA_SIGEN | R/W    | 0h      | ADMA error signal status enable 0h = Masked 1h = Enabled                                                                                                                       |
| 24    | ACE_SIGEN  | R/W    | 0h      | Auto CMD12 error signal status enable 0h = Masked 1h = Enabled                                                                                                                 |
| 23    | RESERVED   | R      | 0h      |                                                                                                                                                                                |
| 22    | DEB_SIGEN  | R/W    | 0h      | Data end bit error signal status enable 0h = Masked 1h = Enabled                                                                                                               |
| 21    | DCRC_SIGEN | R/W    | 0h      | Data CRC error signal status enable 0h = Masked 1h = Enabled                                                                                                                   |
| 20    | DTO_SIGEN  | R/W    | 0h      | Data timeout error signal status enable 0h = Masked. The host controller provides the clock to the card until the card sends the data or the transfer is aborted. 1h = Enabled |
| 19    | CIE_SIGEN  | R/W    | 0h      | Command index error signal status enable 0h = Masked 1h = Enabled                                                                                                              |

<!-- image -->

<!-- image -->

www.ti.com

Table 18-40. SD\_ISE Register Field Descriptions (continued)

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 18    | CEB_SIGEN  | R/W    | 0h      | Command end bit error signal status enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                                              |
| 17    | CCRC_SIGEN | R/W    | 0h      | Command CRC error signal status enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                                                  |
| 16    | CTO_SIGEN  | R/W    | 0h      | Command timeout error signal status enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                                              |
| 15    | NULL       | R      | 0h      | Fixed to 0. The host driver shall control error interrupts using the error interrupt signal enable register. Writes to this bit are ignored.                                                                                                                                                                                                                                                                                                                     |
| 14-11 | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 10    | BSR_SIGEN  | R/W    | 0h      | Boot Status signal status enable. A write to this register when SD_CON[BOOT] is cleared to 0 is ignored 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                 |
| 9     | OBI_SIGEN  | R/W    | 0h      | Out-of-band interrupt signal status enable. A write to this register when SD_CON[14] OBIE is cleared to 0 is ignored. 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                   |
| 8     | CIRQ_SIGEN | R/W    | 0h      | Card interrupt signal status enable. A clear of this bit also clears the corresponding status bit. During 1-bit mode, if the interrupt routine does not remove the source of a card interrupt in the SDIO card, the status bit is reasserted when this bit is set to 1. This bit must be set to 1 when entering in smart idle mode to enable system to identity wake-up event and to allow controller to clear internal wake-up source. 0h = Masked 1h = Enabled |
| 7     | CREM_SIGEN | R/W    | 0h      | Card Removal signal status enable This bit must be set to 1 when entering in smart idle mode to enable system to identity wake-up event and to allow controller to clear internal wake-up source. 0h = Masked                                                                                                                                                                                                                                                    |
| 6     | CINS_SIGEN | R/W    | 0h      | 1h = Enabled Card Insertion signal status enable. This bit must be set to 1 when entering in smart idle mode to enable system to identity wake-up event and to allow controller to clear internal wake-up source. 0h = Masked 1h = Enabled                                                                                                                                                                                                                       |
| 5     | BRR_SIGEN  | R/W    | 0h      | Buffer read ready signal status enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                                                  |
| 4     | BWR_SIGEN  | R/W    | 0h      | Buffer write ready signal status enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                                                 |
| 3     | DMA_SIGEN  | R/W    | 0h      | DMA signal status enable 0h = Masked 1h = Enabled                                                                                                                                                                                                                                                                                                                                                                                                                |

Table 18-40. SD\_ISE Register Field Descriptions (continued)

|   Bit | Field     | Type   | Reset   | Description                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------|
|     2 | BGE_SIGEN | R/W    | 0h      | Block gap event signal status enable 0h = Masked 1h = Enabled    |
|     1 | TC_SIGEN  | R/W    | 0h      | Transfer completed signal status enable 0h = Masked 1h = Enabled |
|     0 | CC_SIGEN  | R/W    | 0h      | Command completed signal status enable 0h = Masked 1h = Enabled  |

<!-- image -->

<!-- image -->

## 18.5.1.22 SD\_AC12 Register (offset = 23Ch) [reset = 0h]

SD\_AC12 is shown in Figure 18-57 and described in Table 18-41.

The host driver may determine which of the errors cases related to Auto CMD12 has occurred by checking this SD\_AC12 register when an auto CMD12 error interrupt occurs. This register is valid only when auto CMD12 is enabled (SD\_CMD[2] ACEN bit) and auto CMD12Error (SD\_STAT[24] ACE bit) is set to 1. These bits are automatically reset when starting a new adtc command with data.

## Figure 18-57. SD\_AC12 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| CNI      | RESERVED | RESERVED | ACIE     | ACEB     | ACCE     | ACTO     | ACNE     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 18-41. SD\_AC12 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                |
| 7     | CNI      | R      | 0h      | Command not issue by auto CMD12 error. If this bit is set to 1, it means that pending command is not executed due to auto CMD12 error ACEB, ACCE, ACTO, or ACNE. 0h = Not error 1h = Command not issued                                                        |
| 6-5   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                |
| 4     | ACIE     | R      | 0h      | Auto CMD12 index error. This bit is a set to 1 when response index differs from corresponding command auto CMD12 index previously emitted. This bit depends on the command index check enable (SD_CMD[20] CICE bit). 0h = No error 1h = Auto CMD12 index error |
| 3     | ACEB     | R      | 0h      | Auto CMD12 end bit error. This bit is set to 1 when detecting a 0 at the end bit position of auto CMD12 command response. 0h = No error 1h = AutoCMD12 end bit error                                                                                           |
| 2     | ACCE     | R      | 0h      | Auto CMD12 CRC error. This bit is automatically set to 1 when a CRC7 error is detected in the auto CMD12 command response depending on the enable in the SD_CMD[19] CCCE bit. 0h = No error 1h = Auto CMD12 CRC error                                          |
| 1     | ACTO     | R      | 0h      | Auto CMD12 timeout error. This bit is set to 1 if no response is received within 64 clock cycles from the end bit of the auto CMD12 command. 0h = No error 1h = Auto CMD12 time out                                                                            |

## Table 18-41. SD\_AC12 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     0 | ACNE    | R      | 0h      | Auto CMD12 not executed. This bit is set to 1 if multiple block data transfer command has started and if an error occurs in command before auto CMD12 starts. 0h = Auto CMD12 executed 1h = Auto CMD12 not executed |

<!-- image -->

<!-- image -->

## 18.5.1.23 SD\_CAPA Register (offset = 240h) [reset = 0h]

SD\_CAPA is shown in Figure 18-58 and described in Table 18-42.

This register lists the capabilities of the MMC/SD/SDIO host controller.

## Figure 18-58. SD\_CAPA Register

| 31       | 30       | 29   | 28        | 27       | 26       | 25     | 24     |
|----------|----------|------|-----------|----------|----------|--------|--------|
|          | RESERVED |      | BUS_64BIT | RESERVED | VS18     | VS30   | VS33   |
|          | R-0h     |      | R/W-0h    | R-0h     | R/W-0h   | R/W-0h | R/W-0h |
| 23       | 22       | 21   | 20        | 19       | 18       | 17     | 16     |
| SRS      | DS       | HSS  | RESERVED  | AD2S     | RESERVED | MBL    | MBL    |
| R-0h     | R-0h     | R-0h | R-0h      | R-0h     | R-0h     | R-0h   | R-0h   |
| 15       | 14       | 13   | 12        | 11       | 10       | 9      | 8      |
| RESERVED | RESERVED | BCF  | BCF       | BCF      | BCF      | BCF    | BCF    |
| R-0h     | R-0h     | R-0h | R-0h      | R-0h     | R-0h     | R-0h   | R-0h   |
| 7        | 6        | 5    | 4         | 3        | 2        | 1      | 0      |
| TCU      | RESERVED | TCF  | TCF       | TCF      | TCF      | TCF    | TCF    |
| R-0h     | R-0h     | R-0h | R-0h      | R-0h     | R-0h     | R-0h   | R-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-42. SD\_CAPA Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|-----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                   |
| 28    | BUS_64BIT | R/W    | 0h      | 64 Bit System Bus Support. Setting 1 to this bit indicates that the Host Controller supports 64-bit address descriptor mode and is connected to 64-bit address system bus. 0h (R) = 32-bit System bus address 1h (R) = 64-bit System bus address                                                                                                                                                  |
| 27    | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                   |
| 26    | VS18      | R/W    | 0h      | Voltage support 1.8 V. Initialization of this register (via a write access to this register) depends on the system capabilities. The host driver shall not modify this register after the initialization. This register is only reinitialized by a hard reset (via mmc_RESET signal). 0h (W) = 1.8 V not supported 0h (R) = 1.8 V not supported 1h (W) = 1.8 V supported 1h (R) = 1.8 V supported |
| 25    | VS30      | R/W    | 0h      | Voltage support 3.0V. Initialization of this register (via a write access to this register) depends on the system capabilities. The host driver shall not modify this register after the initialization. This register is only reinitialized by a hard reset (via mmc_RESET signal). 0h (W) = 3.0 V not supported 0h (R) = 3.0 V not supported 1h (W) = 3.0 V supported 1h (R) = 3.0 V supported  |

Table 18-42. SD\_CAPA Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 24    | VS33     | R/W    | 0h      | Voltage support 3.3V. Initialization of this register (via a write access to this register) depends on the system capabilities. The host driver shall not modify this register after the initialization. This register is only reinitialized by a hard reset (via mmc_RESET signal). 0h (W) = 3.3 V not supported 0h (R) = 3.3 V not supported 1h (W) = 3.3 V supported |
| 23    | SRS      | R      | 0h      | Suspend/resume support (SDIO cards only). This bit indicates whether the host controller supports Suspend/Resume functionality. 0h = The Host controller does not suspend/resume functionality. 1h = The Host controller supports suspend/resume functionality.                                                                                                         |
| 22    | DS       | R      | 0h      | DMA support. This bit indicates that the Host controller is able to use DMA to transfer data between system memory and the Host controller directly. 0h = DMA not supported 1h = DMA supported                                                                                                                                                                          |
| 21    | HSS      | R      | 0h      | High-speed support. This bit indicates that the host controller supports high speed operations and can supply an up-to-52 MHz clock to the card. 0h = DMA not supported 1h = DMA supported                                                                                                                                                                              |
| 20    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 19    | AD2S     | R      | 0h      | This bit indicates whether the Host Controller is capable of using ADMA2. It depends on setting of generic parameter MADMA_EN. 0h = ADMA2 supported 1h = ADMA2 not supported                                                                                                                                                                                            |
| 18    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 17-16 | MBL      | R      | 0h      | Maximum block length. This value indicates the maximum block size that the host driver can read and write to the buffer in the host controller. The host controller supports 512 bytes and 1024 bytes block transfers. 0h = 512 bytes 1h = 1024 bytes                                                                                                                   |
| 15-14 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 13-8  | BCF      | R      | 0h      | Base clock frequency for clock provided to the card. ARRAY(0x1bfe1b0)                                                                                                                                                                                                                                                                                                   |
| 7     | TCU      | R      | 0h      | Timeout clock unit. This bit shows the unit of base clock frequency used to detect Data Timeout Error (SD_STAT[20] DTO bit). 0h = kHz 1h = MHz                                                                                                                                                                                                                          |
| 6     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 5-0   | TCF      | R      | 0h      | Timeout clock frequency. The timeout clock frequency is used to detect Data Timeout Error (SD_STAT[20] DTO bit). 0h = The timeout clock frequency depends on the frequency of the clock provided to the card. The value of the timeout clock frequency is not available in this register.                                                                               |

<!-- image -->

<!-- image -->

www.ti.com

## 18.5.1.24 SD\_CUR\_CAPA Register (offset = 248h) [reset = 0h]

SD\_CUR\_CAPA is shown in Figure 18-59 and described in Table 18-43.

This register indicates the maximum current capability for each voltage. The value is meaningful if the voltage support is set in the capabilities register (SD\_CAPA). Initialization of this register (via a write access to this register) depends on the system capabilities. The host driver shall not modify this register after the initialization. This register is only reinitialized by a hard reset (via mmc\_RESET signal).

## Figure 18-59. SD\_CUR\_CAPA Register

| 31 30 29 28 27 RESERVED   | 23 22 21 20 19 18 17 CUR_1V8   | 12 11 CUR_3V0   | 5 4 3 2 CUR_3V3   |
|---------------------------|--------------------------------|-----------------|-------------------|
| R-0h                      | R/W-0h                         | R/W-0h          | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-43. SD\_CUR\_CAPA Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED | R      | 0h      |                                                                                                                               |
| 23-16 | CUR_1V8  | R/W    | 0h      | Maximum current for 1.8 V 0h (R) = The maximum current capability for this voltage is not available. Feature not implemented. |
| 15-8  | CUR_3V0  | R/W    | 0h      | Maximum current for 3.0 V 0h (R) = The maximum current capability for this voltage is not available. Feature not implemented. |
| 7-0   | CUR_3V3  | R/W    | 0h      | Maximum current for 3.3 V 0h (R) = The maximum current capability for this voltage is not available. Feature not implemented. |

## 18.5.1.25 SD\_FE Register (offset = 250h) [reset = 0h]

SD\_FE is shown in Figure 18-60 and described in Table 18-44.

The Force Event register is not a physically implemented register. Rather, it is an address at which the Error Interrupt Status register can be written. The effect of a write to this address will be reflected in the Error Interrupt Status Register, if corresponding bit of the Error Interrupt Status Enable Register is set.

## Figure 18-60. SD\_FE Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | FE_BADA  | FE_CERR  | RESERVED | RESERVED | FE_ADMAE | FE_ACE   |
| R-0h     | R-0h     | W-0h     | W-0h     | R-0h     | R-0h     | W-0h     | W-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | FE_DEB   | FE_DCRC  | FE_DTO   | FE_CIE   | FE_CEB   | FE_CCRC  | FE_CTO   |
| R-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| FE_CNI   | RESERVED | RESERVED | FE_ACIE  | FE_ACEB  | FE_ACCE  | FE_ACTO  | FE_ACNE  |
| W-0h     | R-0h     | R-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-44. SD\_FE Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                               |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------|
| 31-30 | RESERVED | R      | 0h      |                                                                                           |
| 29    | FE_BADA  | W      | 0h      | Force Event Bad access to data space. 0h = No effect; no interrupt 1h = Interrupt forced. |
| 28    | FE_CERR  | W      | 0h      | Force Event Card error 0h = No effect; no interrupt 1h = Interrupt forced.                |
| 27-26 | RESERVED | R      | 0h      |                                                                                           |
| 25    | FE_ADMAE | W      | 0h      | Force Event ADMA error 0h = No effect; no interrupt 1h = Interrupt forced.                |
| 24    | FE_ACE   | W      | 0h      | Force Event Auto CMD12 error. 0h = No effect; no interrupt 1h = Interrupt forced.         |
| 23    | RESERVED | R      | 0h      |                                                                                           |
| 22    | FE_DEB   | W      | 0h      | Force Event Data End Bit error. 0h = No effect; no interrupt 1h = Interrupt forced.       |
| 21    | FE_DCRC  | W      | 0h      | Force Event Data CRC error 0h = No effect; no interrupt 1h = Interrupt forced.            |
| 20    | FE_DTO   | W      | 0h      | Force Event Data timeout error 0h = No effect; no interrupt 1h = Interrupt forced.        |
| 19    | FE_CIE   | W      | 0h      | Force Event Command index error 0h = No effect; no interrupt 1h = Interrupt forced.       |

<!-- image -->

<!-- image -->

www.ti.com

Table 18-44. SD\_FE Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                           |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------|
| 18    | FE_CEB   | W      | 0h      | Force Event Command end bit error 0h = No effect; no interrupt 1h = Interrupt forced.                 |
| 17    | FE_CCRC  | W      | 0h      | Force Event Comemand CRC error 0h = No effect; no interrupt 1h = Interrupt forced.                    |
| 16    | FE_CTO   | W      | 0h      | Force Event Command Timeout error 0h = No effect; no interrupt 1h = Interrupt forced.                 |
| 15-8  | RESERVED | R      | 0h      |                                                                                                       |
| 7     | FE_CNI   | W      | 0h      | Force Event Command not issue by Auto CMD12 error 0h = No effect; no interrupt 1h = Interrupt forced. |
| 6-5   | RESERVED | R      | 0h      |                                                                                                       |
| 4     | FE_ACIE  | W      | 0h      | Force Event Auto CMD12 index error 0h = No effect; no interrupt 1h = Interrupt forced.                |
| 3     | FE_ACEB  | W      | 0h      | Force Event Auto CMD12 end bit error 0h = No effect; no interrupt 1h = Interrupt forced.              |
| 2     | FE_ACCE  | W      | 0h      | Force Event Auto CMD12 CRC error 0h = No effect; no interrupt 1h = Interrupt forced.                  |
| 1     | FE_ACTO  | W      | 0h      | Force Event Auto CMD12 timeout error 0h = No effect; no interrupt 1h = Interrupt forced.              |
| 0     | FE_ACNE  | W      | 0h      | Force Event Auto CMD12 not executed. 0h = No effect; no interrupt. 1h = Interrupt forced.             |

## 18.5.1.26 SD\_ADMAES Register (offset = 254h) [reset = 0h]

SD\_ADMAES is shown in Figure 18-61 and described in Table 18-45.

When an ADMA Error Interrupt has occurred, the ADMA Error States field in this register holds the ADMA state and the ADMA System Address Register holds the address around the error descriptor. For recovering the error, the Host Driver requires the ADMA state to identify the error descriptor address as follows: ST\_STOP: Previous location set in the ADMA System Address register is the error descriptor address. ST\_FDS: Current location set in the ADMA System Address register is the error descriptor address. ST\_CADR: This sate is never set because do not generate ADMA error in this state. ST\_TFR: Previous location set in the ADMA System Address register is the error descriptor address. In the case of a write operation, the Host Driver should use ACMD22 to get the number of written block rather than using this information, since unwritten data may exist in the Host Controller. The Host Controller generates the ADMA Error Interrupt when it detects invalid descriptor data (Valid = 0) at the ST\_FDS state. In this case, ADMA Error State indicates that an error occurs at ST\_FDS state. The Host Driver may find that the Valid bit is not set in the error descriptor.

## Figure 18-61. SD\_ADMAES Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | LME      | AES      |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | W-0h     | R/W-0h   |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-45. SD\_ADMAES Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 2     | LME      | W      | 0h      | ADMA Length Mismatch Error: While Block Count Enable is being set, the total data length specified by the Descriptor table is different from that specified by the Block Count and Block Length. Total data length cannot be divided by the block length. 0h = No error 1h = Error                                                                                                                                                        |
| 1-0   | AES      | R/W    | 0h      | ADMA Error State. This field indicates the state of ADMA when an error occurred during an ADMA data transfer. This field never indicates "10" because ADMA never stops in this state. 0h (R) = ST_STOP (Stop DMA). Contents of the SYS_SDR register 1h (W) = ST_STOP (Stop DMA). Points to the error descriptor. 2h (R) = Never set this state. (Not used) 3h (W) = ST_TFR (Transfer Data). Points to the 'next' of the error descriptor. |

<!-- image -->

www.ti.com

<!-- image -->

## 18.5.1.27 SD\_ADMASAL Register (offset = 258h) [reset = 0h]

SD\_ADMASAL is shown in Figure 18-62 and described in Table 18-46.

This register holds the byte address of the executing command of the Descriptor table. The 32-bit Address Descriptor uses the lower 32 bits of this register. At the start of ADMA, the Host Driver shall set the start address of the Descriptor table.

## Figure 18-62. SD\_ADMASAL Register

| 31        | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|-----------|------------------------------------------------------------------------------------|
| ADMA_A32B | ADMA_A32B                                                                          |
| R/W-0h    | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-46. SD\_ADMASAL Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|-----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | ADMA_A32B | R/W    | 0h      | The ADMA increments this register address, which points to the next line, whenever fetching a Descriptor line. When the ADMA Error Interrupt is generated, this register holds the valid Descriptor address depending on the ADMA state. The Host Driver shall program the Descriptor Table on a 32-bit boundary and set the 32-bit boundary address to this register. ADMA2 ignores the lower 2 bits of this register and assumes it to be 00b. |

## 18.5.1.28 SD\_ADMASAH Register (offset = 25Ch) [reset = 0h]

SD\_ADMASAH is shown in Figure 18-63 and described in Table 18-47.

## Figure 18-63. SD\_ADMASAH Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 ADMA_A32B   |
|------|----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-47. SD\_ADMASAH Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description   |
|-------|-----------|--------|---------|---------------|
| 31-0  | ADMA_A32B | R/W    | 0h      | ADMA_A32B.    |

<!-- image -->

<!-- image -->

## 18.5.1.29 SD\_REV Register (offset = 2FCh) [reset = 31010000h]

SD\_REV is shown in Figure 18-64 and described in Table 18-48.

This register contains the hard coded RTL vendor revision number, the version number of SD specification compliancy and a slot status bit. SD\_REV[31:16] = Host Controller Version. SD\_REV[15:0] = Slot Interrupt Status.

## Figure 18-64. SD\_REV Register

| 31   | 30   | 29   | 28    | 27   | 26   | 25   | 24       | 23   | 22   | 21   | 20   | 19   | 18   | 17   | 16   |
|------|------|------|-------|------|------|------|----------|------|------|------|------|------|------|------|------|
|      |      |      | VREV  |      |      |      |          |      |      |      |      | SREV |      |      |      |
|      |      |      | R-31h |      |      |      |          |      |      |      |      | R-1h |      |      |      |
| 15   | 14   | 13   | 12    | 11   | 10   | 9    | 8        | 7    | 6    | 5    |      | 4 3  | 2    | 1    | 0    |
|      |      |      |       |      |      |      | RESERVED |      |      |      |      |      |      |      | SIS  |
|      |      |      |       |      |      |      | R-0h     |      |      |      |      |      |      |      | R-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 18-48. SD\_REV Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | VREV     | R      | 31h     | Vendor Version Number. Bits 7 to 4 are the major revision, bits 3 to 0 are the minor revision. Examples: 10h for 1.0 and 21h for 2.1. Reset value is 31h.                                                                                                      |
| 23-16 | SREV     | R      | 1h      | Specification Version Number. This status indicates the Standard SD Host Controller Specification Version. The upper and lower 4 bits indicate the version. Reset value is 01h. 0h = SD Host Specification Version 1.0                                         |
| 15-1  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                |
| 0     | SIS      | R      | 0h      | Slot Interrupt Status. This status bit indicates the inverted state of interrupt signal for the module. By a power on reset or by setting a software reset for all (SD_SYSCTL[24] SRA), the interrupt signal shall be deasserted and this status shall read 0. |