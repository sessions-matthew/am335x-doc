## 22.4 Registers

## 22.4.1 MCASP Registers

Table 22-11 lists the memory-mapped registers for the MCASP. All register offset addresses not listed in Table 22-11 should be considered as reserved locations and the register contents should not be modified.

Table 22-11. MCASP Registers

| Offset       | Acronym                | Register Name                                                    | Section           |
|--------------|------------------------|------------------------------------------------------------------|-------------------|
| 0h           | REV                    | Revision Identification Register                                 | Section 22.4.1.1  |
| 4h           | PWRIDLESYSCONFIG       | Power Idle SYSCONFIG Register                                    | Section 22.4.1.2  |
| 10h          | PFUNC                  | Pin Function Register                                            | Section 22.4.1.3  |
| 14h          | PDIR                   | Pin Direction Register                                           | Section 22.4.1.4  |
| 18h          | PDOUT                  | Pin Data Output Register                                         | Section 22.4.1.5  |
| 1Ch          | PDIN                   | Pin Data Input Register                                          | Section 22.4.1.6  |
| 20h          | PDCLR                  | Pin Data Clear Register                                          | Section 22.4.1.7  |
| 44h          | GBLCTL                 | Global Control Register                                          | Section 22.4.1.8  |
| 48h          | AMUTE                  | Audio Mute Control Register                                      | Section 22.4.1.9  |
| 4Ch          | DLBCTL                 | Digital Loopback Control Register                                | Section 22.4.1.10 |
| 50h          | DITCTL                 | DIT Mode Control Register                                        | Section 22.4.1.11 |
| 60h          | RGBLCTL                | Receiver Global Control Register                                 | Section 22.4.1.12 |
| 64h          | RMASK                  | Receive Format Unit Bit Mask Register                            | Section 22.4.1.13 |
| 68h          | RFMT                   | Receive Bit Stream Format Register                               | Section 22.4.1.14 |
| 6Ch          | AFSRCTL                | Receive Frame Sync Control Register                              | Section 22.4.1.15 |
| 70h          | ACLKRCTL               | Receive Clock Control Register                                   | Section 22.4.1.16 |
| 74h          | AHCLKRCTL              | Receive High-Frequency Clock Control Register                    | Section 22.4.1.17 |
| 78h          | RTDM                   | Receive TDM Time Slot 0-31 Register                              | Section 22.4.1.18 |
| 7Ch          | RINTCTL                | Receiver Interrupt Control Register                              | Section 22.4.1.19 |
| 80h          | RSTAT                  | Receiver Status Register                                         | Section 22.4.1.20 |
| 84h          | RSLOT                  | Current Receive TDM Time Slot Register                           | Section 22.4.1.21 |
| 88h          | RCLKCHK                | Receive Clock Check Control Register                             | Section 22.4.1.22 |
| 8Ch          | REVTCTL                | Receiver DMA Event Control Register                              | Section 22.4.1.23 |
| A0h          | XGBLCTL                | Transmitter Global Control Register                              | Section 22.4.1.24 |
| A4h          | XMASK                  | Transmit Format Unit Bit Mask Register                           | Section 22.4.1.25 |
| A8h          | XFMT                   | Transmit Bit Stream Format Register                              | Section 22.4.1.26 |
| ACh          | AFSXCTL                | Transmit Frame Sync Control Register                             | Section 22.4.1.27 |
| B0h          | ACLKXCTL               | Transmit Clock Control Register                                  | Section 22.4.1.28 |
| B4h          | AHCLKXCTL              | Transmit High-Frequency Clock Control Register                   | Section 22.4.1.29 |
| B8h          | XTDM                   | Transmit TDM Time Slot 0-31 Register                             | Section 22.4.1.30 |
| BCh          | XINTCTL                | Transmitter Interrupt Control Register                           | Section 22.4.1.31 |
| C0h          | XSTAT                  | Transmitter Status Register                                      | Section 22.4.1.32 |
| C4h          | XSLOT                  | Current Transmit TDM Time Slot Register                          | Section 22.4.1.33 |
| C8h          | XCLKCHK                | Transmit Clock Check Control Register                            | Section 22.4.1.34 |
| CCh          | XEVTCTL                | Transmitter DMA Event Control Register                           | Section 22.4.1.35 |
| 100h to 114h | DITCSRA_0 to DITCSRA_5 | Left (Even TDM Time Slot) Channel Status Registers (DIT Mode)    | Section 22.4.1.36 |
| 118h to 12Ch | DITCSRB_0 to DITCSRB_5 | Right (Odd TDM Time Slot) Channel Status Registers (DIT Mode)    | Section 22.4.1.37 |
| 130h to 144h | DITUDRA_0 to DITUDRA_5 | Left (Even TDM Time Slot) Channel User Data Registers (DIT Mode) | Section 22.4.1.38 |
| 148h to 15Ch | DITUDRB_0 to DITUDRB_5 | Right (Odd TDM Time Slot) Channel User Data Registers (DIT Mode) | Section 22.4.1.39 |

<!-- image -->

<!-- image -->

www.ti.com

Table 22-11. MCASP Registers (continued)

| Offset       | Acronym            | Register Name                            | Section           |
|--------------|--------------------|------------------------------------------|-------------------|
| 180h to 194h | SRCTL_0 to SRCTL_5 | Serializer Control Registers             | Section 22.4.1.40 |
| 200h to 214h | XBUF_0 to XBUF_5   | Transmit Buffer Register for Serializers | Section 22.4.1.41 |
| 280h to 294h | RBUF_0 to RBUF_5   | Receive Buffer Register for Serializers  | Section 22.4.1.42 |
| 1000h        | WFIFOCTL           | Write FIFO Control Register              | Section 22.4.1.43 |
| 1004h        | WFIFOSTS           | Write FIFO Status Register               | Section 22.4.1.44 |
| 1008h        | RFIFOCTL           | Read FIFO Control Register               | Section 22.4.1.45 |
| 100Ch        | RFIFOSTS           | Read FIFO Status Register                | Section 22.4.1.46 |

## 22.4.1.1 REV Register (offset = 0h) [reset = 44307B02h]

REV is shown in Figure 22-39 and described in Table 22-12.

The revision identification register (REV) contains identification data for the peripheral.

## Figure 22-39. REV Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 REV   |
|------|----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-12. REV Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description                        |
|-------|---------|--------|-----------|------------------------------------|
| 31-0  | REV     | R      | 44307B02h | Identifies revision of peripheral. |

<!-- image -->

<!-- image -->

## 22.4.1.2 PWRIDLESYSCONFIG Register (offset = 4h) [reset = 2h]

PWRIDLESYSCONFIG is shown in Figure 22-40 and described in Table 22-13.

## Figure 22-40. PWRIDLESYSCONFIG Register

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
| RESERVED | RESERVED |          | Other    |          |          | IDLEMODE | IDLEMODE |
| R-0h     | R-0h     |          | R/W-0h   |          |          | R/W-2h   | R/W-2h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-13. PWRIDLESYSCONFIG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 5-2   | Other    | R/W    | 0h      | Reserved for future programming.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 1-0   | IDLEMODE | R/W    | 2h      | Power management Configuration of the local target state management mode. By definition, target can handle read/write transaction as long as it is out of IDLE state. 0h = Force-idle mode: local target's idle state follows (acknowledges) the system's idle requests unconditionally, i.e. regardless of the IP module's internal requirements. Backup mode, for debug only. 1h = No-idle mode: local target never enters idle state. Backup mode, for debug only. 2h = Smart-idle mode: local target's idle state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements. IP module shall not generate (IRQ- or DMA-request-related) wakeup events. 3h = Reserved. |

## 22.4.1.3 PFUNC Register (offset = 10h) [reset = 0h]

PFUNC is shown in Figure 22-41 and described in Table 22-14.

The pin function register (PFUNC) specifies the function of AXRn, ACLKX, AHCLKX, AFSX, ACLKR, AHCLKR, and AFSR pins as either a McASP pin or a general-purpose input/output (GPIO) pin. CAUTION: Writing a value other than 0 to reserved bits in this register may cause improper device operation.

## Figure 22-41. PFUNC Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|
| AFSR        | AHCLKR      | ACLKR       | AFSX        | AHCLKX      | ACLKX       | AMUTE       | RESERVED    |
| R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R-0h        |
| 23          | 22          | 21          | 20          | 19          | 18          | 17          | 16          |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 7           | 6           | 5           | 4           | 3           | 2           | 1           | 0           |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | AXR         | AXR         | AXR         | AXR         |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-14. PFUNC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                           |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31    | AFSR     | R/W    | 0h      | Determines if AFSR pin functions as McASP or GPIO. 0h = Pin functions as McASP pin. 1h = Pin functions as GPIO pin.   |
| 30    | AHCLKR   | R/W    | 0h      | Determines if AHCLKR pin functions as McASP or GPIO. 0h = Pin functions as McASP pin. 1h = Pin functions as GPIO pin. |
| 29    | ACLKR    | R/W    | 0h      | Determines if ACLKR pin functions as McASP or GPIO. 0h = Pin functions as McASP pin. 1h = Pin functions as GPIO pin.  |
| 28    | AFSX     | R/W    | 0h      | Determines if AFSX pin functions as McASP or GPIO. 0h = Pin functions as McASP pin. 1h = Pin functions as GPIO pin.   |
| 27    | AHCLKX   | R/W    | 0h      | Determines if AHCLKX pin functions as McASP or GPIO. 0h = Pin functions as McASP pin. 1h = Pin functions as GPIO pin. |
| 26    | ACLKX    | R/W    | 0h      | Determines if ACLKX pin functions as McASP or GPIO. 0h = Pin functions as McASP pin. 1h = Pin functions as GPIO pin.  |
| 25    | AMUTE    | R/W    | 0h      | Determines if AMUTE pin functions as McASP or GPIO. 0h = Pin functions as McASP pin. 1h = Pin functions as GPIO pin.  |
| 24-4  | RESERVED | R      | 0h      |                                                                                                                       |
| 3-0   | AXR      | R/W    | 0h      | Determines if AXRn pin functions as McASP or GPIO. 0h = Pin functions as McASP pin. 1h = Pin functions as GPIO pin.   |

<!-- image -->

<!-- image -->

## 22.4.1.4 PDIR Register (offset = 14h) [reset = 0h]

PDIR is shown in Figure 22-42 and described in Table 22-15.

The pin direction register (PDIR) specifies the direction of AXRn, ACLKX, AHCLKX, AFSX, ACLKR, AHCLKR, and AFSR pins as either an input or an output pin. Regardless of the pin function register (PFUNC) setting, each PDIR bit must be set to 1 for the specified pin to be enabled as an output and each PDIR bit must be cleared to 0 for the specified pin to be an input. For example, if the McASP is configured to use an internally-generated bit clock and the clock is to be driven out to the system, the PFUNC bit must be cleared to 0 (McASP function) and the PDIR bit must be set to 1 (an output). When AXRn is configured to transmit, the PFUNC bit must be cleared to 0 (McASP function) and the PDIR bit must be set to 1 (an output). Similarly, when AXRn is configured to receive, the PFUNC bit must be cleared to 0 (McASP function) and the PDIR bit must be cleared to 0 (an input). CAUTION: Writing a value other than 0 to reserved bits in this register may cause improper device operation.

## Figure 22-42. PDIR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| AFSR     | AHCLKR   | ACLKR    | AFSX     | AHCLKX   | ACLKX    | AMUTE    | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | AXR      | AXR      | AXR      | AXR      |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-15. PDIR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                          |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31    | AFSR     | R/W    | 0h      | Determines if AFSR pin functions as an input or output. 0h = Pin functions as input. 1h = Pin functions as output.   |
| 30    | AHCLKR   | R/W    | 0h      | Determines if AHCLKR pin functions as an input or output. 0h = Pin functions as input. 1h = Pin functions as output. |
| 29    | ACLKR    | R/W    | 0h      | Determines if ACLKR pin functions as an input or output. 0h = Pin functions as input. 1h = Pin functions as output.  |
| 28    | AFSX     | R/W    | 0h      | Determines if AFSX pin functions as an input or output. 0h = Pin functions as input. 1h = Pin functions as output.   |
| 27    | AHCLKX   | R/W    | 0h      | Determines if AHCLKX pin functions as an input or output. 0h = Pin functions as input. 1h = Pin functions as output. |
| 26    | ACLKX    | R/W    | 0h      | Determines if ACLKX pin functions as an input or output. 0h = Pin functions as input. 1h = Pin functions as output.  |
| 25    | AMUTE    | R/W    | 0h      | Determines if AMUTE pin functions as an input or output. 0h = Pin functions as input. 1h = Pin functions as output.  |
| 24-4  | RESERVED | R      | 0h      |                                                                                                                      |

## Table 22-15. PDIR Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                        |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------|
| 3-0   | AXR     | R/W    | 0h      | Determines if AXRn pin functions as an input or output. 0h = Pin functions as input. 1h = Pin functions as output. |

<!-- image -->

<!-- image -->

www.ti.com

## 22.4.1.5 PDOUT Register (offset = 18h) [reset = 0h]

PDOUT is shown in Figure 22-43 and described in Table 22-16.

The pin data output register (PDOUT) holds a value for data out at all times, and may be read back at all times. The value held by PDOUT is not affected by writing to PDIR and PFUNC. However, the data value in PDOUT is driven out onto the McASP pin only if the corresponding bit in PFUNC is set to 1 (GPIO function) and the corresponding bit in PDIR is set to 1 (output). When reading data, returns the corresponding bit value in PDOUT[n], does not return input from I/O pin; when writing data, writes to the corresponding PDOUT[n] bit. PDOUT has these aliases or alternate addresses: PDSET When written to at this address, writing a 1 to a bit in PDSET sets the corresponding bit in PDOUT to 1; writing a 0 has no effect and keeps the bits in PDOUT unchanged. PDCLR When written to at this address, writing a 1 to a bit in PDCLR clears the corresponding bit in PDOUT to 0; writing a 0 has no effect and keeps the bits in PDOUT unchanged. There is only one set of data out bits, PDOUT[31-0]. The other registers, PDSET and PDCLR, are just different addresses for the same control bits, with different behaviors during writes. CAUTION: Writing a value other than 0 to reserved bits in this register may cause improper device operation.

## Figure 22-43. PDOUT Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|
| AFSR        | AHCLKR      | ACLKR       | AFSX        | AHCLKX      | ACLKX       | AMUTE       | RESERVED    |
| R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R-0h        |
| 23          | 22          | 21          | 20          | 19          | 18          | 17          | 16          |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 7           | 6           | 5           | 4           | 3           | 2           | 1           | 0           |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | AXR         | AXR         | AXR         | AXR         |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-16. PDOUT Register Field Descriptions

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                       |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
|    31 | AFSR    | R/W    | 0h      | Determines drive on AFSR output pin when the corresponding PFUNC[31] and PDIR[31] bits are set to 1. 0h = Pin drives low. 1h = Pin drives high.   |
|    30 | AHCLKR  | R/W    | 0h      | Determines drive on AHCLKR output pin when the corresponding PFUNC[30] and PDIR[30] bits are set to 1. 0h = Pin drives low. 1h = Pin drives high. |
|    29 | ACLKR   | R/W    | 0h      | Determines drive on ACLKR output pin when the corresponding PFUNC[29] and PDIR[29] bits are set to 1. 0h = Pin drives low. 1h = Pin drives high.  |
|    28 | AFSX    | R/W    | 0h      | Determines drive on AFSX output pin when the corresponding PFUNC[28] and PDIR[28] bits are set to 1. 0h = Pin drives low. 1h = Pin drives high.   |
|    27 | AHCLKX  | R/W    | 0h      | Determines drive on AHCLKX output pin when the corresponding PFUNC[27] and PDIR[27] bits are set to 1. 0h = Pin drives low. 1h = Pin drives high. |

## Table 22-16. PDOUT Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                      |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------|
| 26    | ACLKX    | R/W    | 0h      | Determines drive on ACLKX output pin when the corresponding PFUNC[26] and PDIR[26] bits are set to 1. 0h = Pin drives low. 1h = Pin drives high. |
| 25    | AMUTE    | R/W    | 0h      | Determines drive on AMUTE output pin when the corresponding PFUNC[25] and PDIR[25] bits are set to 1. 0h = Pin drives low. 1h = Pin drives high. |
| 24-4  | RESERVED | R      | 0h      |                                                                                                                                                  |
| 3-0   | AXR      | R/W    | 0h      | Determines drive on AXR[n] output pin when the corresponding PFUNC[n] and PDIR[n] bits are set to 1. 0h = Pin drives low. 1h = Pin drives high.  |

<!-- image -->

<!-- image -->

www.ti.com

## 22.4.1.6 PDIN Register (offset = 1Ch) [reset = 0h]

PDIN is shown in Figure 22-44 and described in Table 22-17.

The pin data input register (PDIN) holds the I/O pin state of each of the McASP pins. PDIN allows the actual value of the pin to be read, regardless of the state of PFUNC and PDIR. The value after reset for registers 1 through 15 and 24 through 31 depends on how the pins are being driven. CAUTION: Writing a value other than 0 to reserved bits in this register may cause improper device operation.

## Figure 22-44. PDIN Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|
| AFSR        | AHCLKR      | ACLKR       | AFSX        | AHCLKX      | ACLKX       | AMUTE       | RESERVED    |
| R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R-0h        |
| 23          | 22          | 21          | 20          | 19          | 18          | 17          | 16          |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 7           | 6           | 5           | 4           | 3           | 2           | 1           | 0           |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | AXR         | AXR         | AXR         | AXR         |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-17. PDIN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                               |
|-------|----------|--------|---------|---------------------------------------------------------------------------|
| 31    | AFSR     | R/W    | 0h      | Logic level on AFSR pin. 0h = Pin is logic low. 1h = Pin is logic high.   |
| 30    | AHCLKR   | R/W    | 0h      | Logic level on AHCLKR pin. 0h = Pin is logic low. 1h = Pin is logic high. |
| 29    | ACLKR    | R/W    | 0h      | Logic level on ACLKR pin. 0h = Pin is logic low. 1h = Pin is logic high.  |
| 28    | AFSX     | R/W    | 0h      | Logic level on AFSX pin. 0h = Pin is logic low. 1h = Pin is logic high.   |
| 27    | AHCLKX   | R/W    | 0h      | Logic level on AHCLKX pin. 0h = Pin is logic low. 1h = Pin is logic high. |
| 26    | ACLKX    | R/W    | 0h      | Logic level on ACLKX pin. 0h = Pin is logic low. 1h = Pin is logic high.  |
| 25    | AMUTE    | R/W    | 0h      | Logic level on AMUTE pin. 0h = Pin is logic low. 1h = Pin is logic high.  |
| 24-4  | RESERVED | R      | 0h      |                                                                           |
| 3-0   | AXR      | R/W    | 0h      | Logic level on AXR[n] pin. 0h = Pin is logic low. 1h = Pin is logic high. |

## 22.4.1.7 PDCLR Register (offset = 20h) [reset = 0h]

PDCLR is shown in Figure 22-45 and described in Table 22-18.

The pin data clear register (PDCLR) is an alias of the pin data output register (PDOUT) for writes only. Writing a 1 to the PDCLR bit clears the corresponding bit in PDOUT and, if PFUNC = 1 (GPIO function) and PDIR = 1 (output), drives a logic low on the pin. PDCLR is useful for a multitasking system because it allows you to clear to a logic low only the desired pin(s) within a system without affecting other I/O pins controlled by the same McASP. CAUTION: Writing a value other than 0 to reserved bits in this register may cause improper device operation.

## Figure 22-45. PDCLR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| AFSR     | AHCLKR   | ACLKR    | AFSX     | AHCLKX   | ACLKX    | AMUTE    | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | AXR      | AXR      | AXR      | AXR      |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-18. PDCLR Register Field Descriptions

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                 |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    31 | AFSR    | R/W    | 0h      | Allows the corresponding AFSR bit in PDOUT to be cleared to a logic low without affecting other I/O pins controlled by the same port. 0h = No effect. 1h = PDOUT[31] bit is cleared to 0.   |
|    30 | AHCLKR  | R/W    | 0h      | Allows the corresponding AHCLKR bit in PDOUT to be cleared to a logic low without affecting other I/O pins controlled by the same port. 0h = No effect. 1h = PDOUT[30] bit is cleared to 0. |
|    29 | ACLKR   | R/W    | 0h      | Allows the corresponding ACLKR bit in PDOUT to be cleared to a logic low without affecting other I/O pins controlled by the same port. 0h = No effect. 1h = PDOUT[29] bit is cleared to 0.  |
|    28 | AFSX    | R/W    | 0h      | Allows the corresponding AFSX bit in PDOUT to be cleared to a logic low without affecting other I/O pins controlled by the same port. 0h = No effect. 1h = PDOUT[28] bit is cleared to 0.   |
|    27 | AHCLKX  | R/W    | 0h      | Allows the corresponding AHCLKX bit in PDOUT to be cleared to a logic low without affecting other I/O pins controlled by the same port. 0h = No effect. 1h = PDOUT[27] bit is cleared to 0. |
|    26 | ACLKX   | R/W    | 0h      | Allows the corresponding ACLKX bit in PDOUT to be cleared to a logic low without affecting other I/O pins controlled by the same port. 0h = No effect. 1h = PDOUT[26] bit is cleared to 0.  |

<!-- image -->

<!-- image -->

## Table 22-18. PDCLR Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 25    | AMUTE    | R/W    | 0h      | Allows the corresponding AMUTE bit in PDOUT to be cleared to a logic low without affecting other I/O pins controlled by the same port. 0h = No effect. 1h = PDOUT[25] bit is cleared to 0. |
| 24-4  | RESERVED | R      | 0h      |                                                                                                                                                                                            |
| 3-0   | AXR      | R/W    | 0h      | Allows the corresponding AXR[n] bit in PDOUT to be cleared to a logic low without affecting other I/O pins controlled by the same port. 0h = No effect. 1h = PDOUT[n] bit is cleared to 0. |

## 22.4.1.8 GBLCTL Register (offset = 44h) [reset = 0h]

GBLCTL is shown in Figure 22-46 and described in Table 22-19.

The global control register (GBLCTL) provides initialization of the transmit and receive sections. The bit fields in GBLCTL are synchronized and latched by the corresponding clocks (ACLKX for bits 12-8 and ACLKR for bits 4-0). Before GBLCTL is programmed, you must ensure that serial clocks are running. If the corresponding external serial clocks, ACLKX and ACLKR, are not yet running, you should select the internal serial clock source in AHCLKXCTL, AHCLKRCTL, ACLKXCTL, and ACLKRCTL before GBLCTL is programmed. Also, after programming any bits in GBLCTL you should not proceed until you have read back from GBLCTL and verified that the bits are latched in GBLCTL.

## Figure 22-46. GBLCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|          | RESERVED |          | XFRST    | XSMRST   | XSRCLR   | XHCLKRST | XCLKRST  |
|          | R-0h     |          | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          | RESERVED |          | RFRST    | RSMRST   | RSRCLR   | RHCLKRST | RCLKRST  |
|          | R-0h     |          | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-19. GBLCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 12    | XFRST    | R/W    | 0h      | Transmit frame sync generator reset enable bit. 0h = Transmit frame sync generator is reset. 1h = Transmit frame sync generator is active. When released from reset, the transmit frame sync generator begins counting serial clocks and generating frame sync as programmed.                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 11    | XSMRST   | R/W    | 0h      | Transmit state machine reset enable bit. 0h = Transmit state machine is held in reset. AXRn pin state: If PFUNC[n] = 0 and PDIR[n] = 1; then the serializer drives the AXRn pin to the state specified for inactive time slot (as determined by DISMOD bits in SRCTL). 1h = Transmit state machine is released from reset. When released from reset, the transmit state machine immediately transfers data from XRBUF[n] to XRSR[n]. The transmit state machine sets the underrun flag (XUNDRN) in XSTAT, if XRBUF[n] have not been preloaded with data before reset is released. The transmit state machine also immediately begins detecting frame sync and is ready to transmit. Transmit TDM time slot begins at slot 0 after reset is released. |
| 10    | XSRCLR   | R/W    | 0h      | Transmit serializer clear enable bit. By clearing then setting this bit, the transmit buffer is flushed to an empty state (XDATA = 1). If XSMRST = 1, XSRCLR = 1, XDATA = 1, and XBUF is not loaded with new data before the start of the next active time slot, an underrun will occur. 0h = Transmit serializers are cleared. 1h = Transmit serializers are active. When the transmit serializers are first taken out of reset (XSRCLR changes from 0 to 1), the transmit data ready bit (XDATA) in XSTAT is set to indicate XBUF is ready to be written.                                                                                                                                                                                          |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Table 22-19. GBLCTL Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 9     | XHCLKRST | R/W    | 0h      | Transmit high-frequency clock divider reset enable bit. 0h = Transmit high-frequency clock divider is held in reset and passes through its input as divide-by-1. 1h = Transmit high-frequency clock divider is running.                                                                                                      |
| 8     | XCLKRST  | R/W    | 0h      | Transmit clock divider reset enable bit. 0h = Transmit clock divider is held in reset. When the clock divider is in reset, it passes through a divide-by-1 of its input. 1h = Transmit clock divider is running.                                                                                                             |
| 7-5   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                              |
| 4     | RFRST    | R/W    | 0h      | Receive frame sync generator reset enable bit. 0h = Receive frame sync generator is reset. 1h = Receive frame sync generator is active. When released from reset, the receive frame sync generator begins counting serial clocks and generating frame sync as programmed.                                                    |
| 3     | RSMRST   | R/W    | 0h      | Receive state machine reset enable bit. 0h = Receive state machine is held in reset. 1h = Receive state machine is released from reset. When released from reset, the receive state machine immediately begins detecting frame sync and is ready to receive. Receive TDM time slot begins at slot 0 after reset is released. |
| 2     | RSRCLR   | R/W    | 0h      | Receive serializer clear enable bit. By clearing then setting this bit, the receive buffer is flushed. 0h = Receive serializers are cleared. 1h = Receive serializers are active.                                                                                                                                            |
| 1     | RHCLKRST | R/W    | 0h      | Receive high-frequency clock divider reset enable bit. 0h = Receive high-frequency clock divider is held in reset and passes through its input as divide-by-1. 1h = Receive high-frequency clock divider is running.                                                                                                         |
| 0     | RCLKRST  | R/W    | 0h      | Receive high-frequency clock divider reset enable bit. 0h = Receive clock divider is held in reset. When the clock divider is in reset, it passes through a divide-by-1 of its input. 1h = Receive clock divider is running.                                                                                                 |

## 22.4.1.9 AMUTE Register (offset = 48h) [reset = 0h]

AMUTE is shown in Figure 22-47 and described in Table 22-20.

The audio mute control register (AMUTE) controls the McASP audio mute (AMUTE) output pin. The value after reset for register 4 depends on how the pins are being driven.

## Figure 22-47. AMUTE Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|          | RESERVED |          | XDMAERR  | RDMAERR  | XCKFAIL  | RCKFAIL  | XSYNCERR |
|          | R-0h     |          | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RSYNCERR | XUNDRN   | ROVRN    | INSTAT   | INEN     | INPOL    | MUTEN    | MUTEN    |
| R/W-0h   | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-20. AMUTE Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                     |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                 |
| 12    | XDMAERR  | R/W    | 0h      | If transmit DMA error (XDMAERR), drive AMUTE active enable bit. 0h = Drive is disabled. Detection of transmit DMA error is ignored by AMUTE. 1h = Drive is enabled (active). Upon detection of transmit DMA error, AMUTE is active and is driven according to MUTEN bit.                                                        |
| 11    | RDMAERR  | R/W    | 0h      | If receive DMA error (RDMAERR), drive AMUTE active enable bit. 0h = Drive is disabled. Detection of receive DMA error is ignored by AMUTE. 1h = Drive is enabled (active). Upon detection of receive DMA error, AMUTE is active and is driven according to MUTEN bit.                                                           |
| 10    | XCKFAIL  | R/W    | 0h      | If transmit clock failure (XCKFAIL), drive AMUTE active enable bit. 0h = Drive is disabled. Detection of transmit clock failure is ignored by AMUTE. 1h = Drive is enabled (active). Upon detection of transmit clock failure, AMUTE is active and is driven according to MUTEN bit                                             |
| 9     | RCKFAIL  | R/W    | 0h      | If receive clock failure (RCKFAIL), drive AMUTE active enable bit. 0h = Drive is disabled. Detection of receive clock failure is ignored by AMUTE. 1h = Drive is enabled (active). Upon detection of receive clock failure, AMUTE is active and is driven according to MUTEN bit.                                               |
| 8     | XSYNCERR | R/W    | 0h      | If unexpected transmit frame sync error (XSYNCERR), drive AMUTE active enable bit. 0h = Drive is disabled. Detection of unexpected transmit frame sync error is ignored by AMUTE. 1h = Drive is enabled (active). Upon detection of unexpected transmit frame sync error, AMUTE is active and is driven according to MUTEN bit. |

<!-- image -->

<!-- image -->

www.ti.com

## Table 22-20. AMUTE Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 7     | RSYNCERR | R/W    | 0h      | If unexpected receive frame sync error (RSYNCERR), drive AMUTE active enable bit. 0h = Drive is disabled. Detection of unexpected receive frame sync error is ignored by AMUTE. 1h = Drive is enabled (active). Upon detection of unexpected receive frame sync error, AMUTE is active and is driven according to MUTEN bit. |
| 6     | XUNDRN   | R/W    | 0h      | If transmit underrun error (XUNDRN), drive AMUTE active enable bit. 0h = Drive is disabled. Detection of transmit underrun error is ignored by AMUTE. 1h = Drive is enabled (active). Upon detection of transmit underrun error, AMUTE is active and is driven according to MUTEN bit.                                       |
| 5     | ROVRN    | R/W    | 0h      | If receiver overrun error (ROVRN), drive AMUTE active enable bit. 0h = Drive is disabled. Detection of receiver overrun error is ignored by AMUTE. 1h = Drive is enabled (active). Upon detection of receiver overrun error, AMUTE is active and is driven according to MUTEN bit.                                           |
| 4     | INSTAT   | R      | 0h      | Determines drive on AXRn pin when PFUNC[n] and PDIR[n] bits are set to 1. 0h = AMUTEIN pin is inactive. 1h = AMUTEIN pin is active. Audio mute in error is detected.                                                                                                                                                         |
| 3     | INEN     | R/W    | 0h      | Drive AMUTE active when AMUTEIN error is active (INSTAT = 1). 0h = Drive is disabled. AMUTEIN is ignored by AMUTE. 1h = Drive is enabled (active). INSTAT = 1 drives AMUTE active.                                                                                                                                           |
| 2     | INPOL    | R/W    | 0h      | Audio mute in (AMUTEIN) polarity select bit. 0h = Polarity is active high. A high on AMUTEIN sets INSTAT to 1. 1h = Polarity is active low. A low on AM UTEIN sets INSTAT to 1.                                                                                                                                              |
| 1-0   | MUTEN    | R/W    | 0h      | AMUTE pin enable bit (unless overridden by GPIO registers). 0h = AMUTE pin is disabled, pin goes to tri-state condition. 1h = AMUTE pin is driven high if error is detected. 2h = AMUTE pin is driven low if error is detected. 3h = Reserved                                                                                |

## 22.4.1.10 DLBCTL Register (offset = 4Ch) [reset = 0h]

DLBCTL is shown in Figure 22-48 and described in Table 22-21.

The digital loopback control register (DLBCTL) controls the internal loopback settings of the McASP in TDM mode.

Figure 22-48. DLBCTL Register

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
| RESERVED | RESERVED | RESERVED |          | MODE     |          | ORD      | DLBEN    |
| R-0h     | R-0h     | R-0h     |          | R/W-0h   |          | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-21. DLBCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 3-2   | MODE     | R/W    | 0h      | Loopback generator mode bits. Applies only when loopback mode is enabled (DLBEN = 1). 0h = Default and reserved on loopback mode (DLBEN = 1). When in non-loopback mode (DLBEN = 0), MODE should be left at default (00). When in loopback mode (DLBEN = 1), MODE = 00 is reserved and is not applicable. 1h = Transmit clock and frame sync generators used by both transmit and receive sections. When in loopback mode (DLBEN = 1), MODE must be 01. 2h = Reserved. 3h = Reserved. |
| 1     | ORD      | R/W    | 0h      | Loopback order bit when loopback mode is enabled (DLBEN = 1). 0h = Odd serializers N + 1 transmit to even serializers N that receive. The corresponding serializers must be programmed properly. 1h = Even serializers N transmit to odd serializers N + 1 that receive. The corresponding serializers must be programmed properly.                                                                                                                                                   |
| 0     | DLBEN    | R/W    | 0h      | Loopback mode enable bit. 0h = Loopback mode is disabled. 1h = Loopback mode is enabled.                                                                                                                                                                                                                                                                                                                                                                                              |

<!-- image -->

<!-- image -->

## 22.4.1.11 DITCTL Register (offset = 50h) [reset = 0h]

DITCTL is shown in Figure 22-49 and described in Table 22-22.

The DIT mode control register (DITCTL) controls DIT operations of the McASP.

## Figure 22-49. DITCTL Register

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
|          | RESERVED |          |          | VB       | VA       | RESERVED | DITEN    |
|          | R-0h     |          |          | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-22. DITCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                               |
| 3     | VB       | R/W    | 0h      | Valid bit for odd time slots (DIT right subframe). 0h = V bit is 0 during odd DIT subframes. 1h = V bit is 1 during odd DIT subframes.                                                                                                                                                                                                                                        |
| 2     | VA       | R/W    | 0h      | Valid bit for even time slots (DIT left subframe). 0h = V bit is 0 during even DIT subframes. 1h = V bit is 1 during even DIT subframes.                                                                                                                                                                                                                                      |
| 1     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                               |
| 0     | DITEN    | R/W    | 0h      | DIT mode enable bit. DITEN should only be changed while the XSMRST bit in GBLCTL is in reset (and for startup, XSRCLR also in reset). However, it is not necessary to reset the XCLKRST or XHCLKRST bits in GBLCTL to change DITEN. 0h = DIT mode is disabled. Transmitter operates in TDM or burst mode. 1h = DIT mode is enabled. Transmitter operates in DIT encoded mode. |

## 22.4.1.12 RGBLCTL Register (offset = 60h) [reset = 0h]

RGBLCTL is shown in Figure 22-50 and described in Table 22-23.

Alias of the global control register (GBLCTL). Writing to the receiver global control register (RGBLCTL) affects only the receive bits of GBLCTL (bits 4-0). Reads from RGBLCTL return the value of GBLCTL. RGBLCTL allows the receiver to be reset independently from the transmitter.

## Figure 22-50. RGBLCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|          | RESERVED |          | XFRST    | XSMRST   | XSRCLR   | XHCLKRST | XCLKRST  |
|          | R-0h     |          | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          | RESERVED |          | RFRST    | RSMRST   | RSRCLR   | RHCLKRST | RCLKRST  |
|          | R-0h     |          | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-23. RGBLCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                   |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED | R      | 0h      |                                                                                                                                                                                               |
| 12    | XFRST    | R      | 0h      | Transmit frame sync generator reset enable bit. A read of this bit returns the XFRST bit value of GBLCTL. Writes have no effect.                                                              |
| 11    | XSMRST   | R      | 0h      | Transmit state machine reset enable bit. A read of this bit returns the XSMRST bit value of GBLCTL. Writes have no effect.                                                                    |
| 10    | XSRCLR   | R      | 0h      | Transmit serializer clear enable bit. A read of this bit returns the XSRCLR bit value of GBLCTL. Writes have no effect.                                                                       |
| 9     | XHCLKRST | R      | 0h      | Transmit high-frequency clock divider reset enable bit. A read of this bit returns the XHCLKRST bit value of GBLCTL. Writes have no effect.                                                   |
| 8     | XCLKRST  | R      | 0h      | Transmit clock divider reset enable bit. A read of this bit returns the XCLKRST bit value of GBLCTL. Writes have no effect.                                                                   |
| 7-5   | RESERVED | R      | 0h      |                                                                                                                                                                                               |
| 4     | RFRST    | R/W    | 0h      | Receive frame sync generator reset enable bit. A write to this bit affects the RFRST bit of GBLCTL. 0h = Receive frame sync generator is reset. 1h = Receive frame sync generator is active.  |
| 3     | RSMRST   | R/W    | 0h      | Receive state machine reset enable bit. A write to this bit affects the RSMRST bit of GBLCTL. 0h = Receive state machine is held in reset. 1h = Receive state machine is released from reset. |
| 2     | RSRCLR   | R/W    | 0h      | Receive serializer clear enable bit. A write to this bit affects the RSRCLR bit of GBLCTL. 0h = Receive serializers are cleared. 1h = Receive serializers are active.                         |

<!-- image -->

<!-- image -->

## Table 22-23. RGBLCTL Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | RHCLKRST | R/W    | 0h      | Receive high-frequency clock divider reset enable bit. A write to this bit affects the RHCLKRST bit of GBLCTL. 0h = Receive high-frequency clock divider is held in reset and passes through its input as divide-by-1. 1h = Receive high-frequency clock divider is running. |
|     0 | RCLKRST  | R/W    | 0h      | Receive clock divider reset enable bit. A write to this bit affects the RCLKRST bit of GBLCTL. 0h = Receive clock divider is held in reset. 1h = Receive clock divider is running.                                                                                           |

## 22.4.1.13 RMASK Register (offset = 64h) [reset = 0h]

RMASK is shown in Figure 22-51 and described in Table 22-24.

The receive format unit bit mask register (RMASK) determines which bits of the received data are masked off and padded with a known value before being read by the CPU or DMA.

## Figure 22-51. RMASK Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RMASK   |
|------|---------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-24. RMASK Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RMASK   | R/W    | 0h      | Receive data mask n enable bit. 0h = Corresponding bit of receive data (after passing through reverse and rotate units) is masked out and then padded with the selected bit pad value (RPAD and RPBIT bits in RFMT). 1h = Corresponding bit of receive data (after passing through reverse and rotate units) is returned to CPU or DMA. |

<!-- image -->

<!-- image -->

## 22.4.1.14 RFMT Register (offset = 68h) [reset = 0h]

RFMT is shown in Figure 22-52 and described in Table 22-25.

The receive bit stream format register (RFMT) configures the receive data format.

## Figure 22-52. RFMT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RDATDLY  | RDATDLY  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RRVRS    | RPAD     |          |          |          | RPBIT    |          |          |
| R/W-0h   | R/W-0h   |          |          |          | R/W-0h   |          |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          | RSSZ     |          |          | RBUSEL   |          | RROT     |          |
|          | R/W-0h   |          |          | R/W-0h   |          | R/W-0h   |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-25. RFMT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                     |
| 17-16 | RDATDLY  | R/W    | 0h      | Receive bit delay. 0h = 0-bit delay. The first receive data bit, AXRn, occurs in same ACLKR cycle as the receive frame sync (AFSR). 1h = 1-bit delay. The first receive data bit, AXRn, occurs one ACLKR cycle after the receive frame sync (AFSR). 2h = 2-bit delay. The first receive data bit, AXRn, occurs two ACLKR cycles after the receive frame sync (AFSR). 3h = Reserved. |
| 15    | RRVRS    | R/W    | 0h      | Receive serial bitstream order. 0h = Bitstream is LSB first. No bit reversal is performed in receive format bit reverse unit. 1h = Bitstream is MSB first. Bit reversal is performed in receive format bit reverse unit.                                                                                                                                                            |
| 14-13 | RPAD     | R/W    | 0h      | Pad value for extra bits in slot not belonging to the word. This field only applies to bits when RMASK[n] = 0. 0h = Pad extra bits with 0. 1h = Pad extra bits with 1. 2h = Pad extra bits with one of the bits from the word as specified by RPBIT bits. 3h = Reserved.                                                                                                            |
| 12-8  | RPBIT    | R/W    | 0h      | RPBIT value determines which bit (as read by the CPU or DMA from RBUF[n]) is used to pad the extra bits. This field only applies when RPAD = 2h. 0h = Pad with bit 0 value. 1h = Pad with bit 1 to bit 31 value from 1h to 1Fh.                                                                                                                                                     |

## Table 22-25. RFMT Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 7-4   | RSSZ    | R/W    | 0h      | Receive slot size. 0h = Reseved. 1h = Reserved. 2h = Reserved. 3h = Slot size is 8 bits. 4h = Reserved 5h = Slot size is 12 bits. 6h = Reserved 7h = Slot size is 16 bits. 8h = Reserved 9h = Slot size is 20 bits. Ah = Reserved Bh = Slot size is 24 bits Ch = Reserved Dh = Slot size is 28 bits. Eh = Reserved Fh = Slot size is 32 bits.                                   |
| 3     | RBUSEL  | R/W    | 0h      | Selects whether reads from serializer buffer XRBUF[n] originate from the configuration bus (CFG) or the data (DAT) port. 0h = Reads from XRBUF[n] originate on data port. Reads from XRBUF[n] on configuration bus are ignored. 1h = Reads from XRBUF[n] originate on configuration bus. Reads from XRBUF[n] on data port are ignored.                                          |
| 2-0   | RROT    | R/W    | 0h      | Right-rotation value for receive rotate right format unit. 0h = Rotate right by 0 (no rotation). 1h = Rotate right by 4 bit positions. 2h = Rotate right by 8 bit positions. 3h = Rotate right by 12 bit positions. 4h = Rotate right by 16 bit positions. 5h = Rotate right by 20 bit positions. 6h = Rotate right by 24 bit positions. 7h = Rotate right by 28 bit positions. |

<!-- image -->

<!-- image -->

## 22.4.1.15 AFSRCTL Register (offset = 6Ch) [reset = 0h]

AFSRCTL is shown in Figure 22-53 and described in Table 22-26.

The receive frame sync control register (AFSRCTL) configures the receive frame sync (AFSR).

## Figure 22-53. AFSRCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RMOD     | RMOD     | RMOD     | RMOD     | RMOD     | RMOD     | RMOD     | RMOD     |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RMOD     | RESERVED | RESERVED | FRWID    | RESERVED | RESERVED | FSRM     | FSRP     |
| R/W-0h   | R-0h     | R-0h     | R/W-0h   | R-0h     | R-0h     | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-26. AFSRCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                        |
| 15-7  | RMOD     | R/W    | 0h      | Receive frame sync mode select bits. 1FFh = Reserved from 181h to 1FFh. 0h = Burst mode. 1h = Reserved. 2h = 2-slot TDM (I2S mode) to 32-slot TDM from 2h to 20h. 21h = Reserved from 21h to 17Fh. 180h = 384-slot TDM (external DIR IC inputting 384-slot DIR frames to McASP over I2S interface). 181h = Reserved from 181h to 1FFh. |
| 6-5   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                        |
| 4     | FRWID    | R/W    | 0h      | Receive frame sync width select bit indicates the width of the receive frame sync (AFSR) during its active period. 0h = Single bit. 1h = Single word.                                                                                                                                                                                  |
| 3-2   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                        |
| 1     | FSRM     | R/W    | 0h      | Receive frame sync generation select bit. 0h = Externally-generated receive frame sync. 1h = Internally-generated receive frame sync.                                                                                                                                                                                                  |
| 0     | FSRP     | R/W    | 0h      | Receive frame sync polarity select bit. 0h = A rising edge on receive frame sync (AFSR) indicates the beginning of a frame. 1h = A falling edge on receive frame sync (AFSR) indicates the beginning of a frame.                                                                                                                       |

## 22.4.1.16 ACLKRCTL Register (offset = 70h) [reset = 0h]

ACLKRCTL is shown in Figure 22-54 and described in Table 22-27.

The receive clock control register (ACLKRCTL) configures the receive bit clock (ACLKR) and the receive clock generator.

Figure 22-54. ACLKRCTL Register

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
| CLKRP    | RESERVED | CLKRM    |          |          | CLKRDIV  |          |          |
| R/W-0h   | R-0h     | R/W-0h   |          |          | R/W-0h   |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-27. ACLKRCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 7     | CLKRP    | R/W    | 0h      | Receive bitstream clock polarity select bit. 0h = Falling edge. Receiver samples data on the falling edge of the serial clock, so the external transmitter driving this receiver must shift data out on the rising edge of the serial clock. 1h = Rising edge. Receiver samples data on the rising edge of the serial clock, so the external transmitter driving this receiver must shift data out on the falling edge of the serial clock. |
| 6     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 5     | CLKRM    | R/W    | 0h      | Receive bit clock source bit. Note that this bit does not have any effect, if ACLKXCTL.ASYNC = 0. 0h = External receive clock source from ACLKR pin. 1h = Internal receive clock source from output of programmable bit clock divider.                                                                                                                                                                                                      |
| 4-0   | CLKRDIV  | R/W    | 0h      | Receive bit clock divide ratio bits determine the divide-down ratio from AHCLKR to ACLKR. Note that this bit does not have any effect, if ACLKXCTL.ASYNC = 0. 0h = Divide-by-1. 1h = Divide-by-2. 2h = Divide-by-3 to divide-by-32 from 2h to 1Fh.                                                                                                                                                                                          |

<!-- image -->

<!-- image -->

## 22.4.1.17 AHCLKRCTL Register (offset = 74h) [reset = 0h]

AHCLKRCTL is shown in Figure 22-55 and described in Table 22-28.

The receive high-frequency clock control register (AHCLKRCTL) configures the receive high-frequency master clock (AHCLKR) and the receive clock generator.

Figure 22-55. AHCLKRCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| HCLKRM   | HCLKRP   |          | RESERVED |          | HCLKRDIV |          |          |
| R/W-0h   | R/W-0h   |          | R-0h     |          | R/W-0h   |          |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| HCLKRDIV | HCLKRDIV | HCLKRDIV | HCLKRDIV | HCLKRDIV | HCLKRDIV | HCLKRDIV | HCLKRDIV |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-28. AHCLKRCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 15    | HCLKRM   | R/W    | 0h      | Receive high-frequency clock source bit. 0h = External receive high-frequency clock source from AHCLKR pin. 1h = Internal receive high-frequency clock source from output of programmable high clock divider.                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 14    | HCLKRP   | R/W    | 0h      | Receive bitstream high-frequency clock polarity select bit. 0h = AHCLKR is not inverted before programmable bit clock divider. In the special case where the receive bit clock (ACLKR) is internally generated and the programmable bit clock divider is set to divide-by- 1 (CLKRDIV = 0 in ACLKRCTL), AHCLKR is directly passed through to the ACLKR pin. 1h = AHCLKR is inverted before programmable bit clock divider. In the special case where the receive bit clock (ACLKR) is internally generated and the programmable bit clock divider is set to divide-by- 1 (CLKRDIV = 0 in ACLKRCTL), AHCLKR is directly passed through to the ACLKR pin. |
| 13-12 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 11-0  | HCLKRDIV | R/W    | 0h      | Receive high-frequency clock divide ratio bits determine the divide- down ratio from AUXCLK to AHCLKR. 0h = Divide-by-1. 1h = Divide-by-2. 2h = Divide-by-3 to divide-by-4096 from 2h to FFFh.                                                                                                                                                                                                                                                                                                                                                                                                                                                          |

## 22.4.1.18 RTDM Register (offset = 78h) [reset = 0h]

RTDM is shown in Figure 22-56 and described in Table 22-29.

The receive TDM time slot register (RTDM) specifies which TDM time slot the receiver is active.

## Figure 22-56. RTDM Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 RTDMS   |
|------|--------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-29. RTDM Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RTDMS   | R/W    | 0h      | Receiver mode during TDM time slot n. 0h = Receive TDM time slot n is inactive. The receive serializer does not shift in data during this slot. 1h = Receive TDM time slot n is active. The receive serializer shifts in data during this slot. |

<!-- image -->

<!-- image -->

www.ti.com

## 22.4.1.19 RINTCTL Register (offset = 7Ch) [reset = 0h]

RINTCTL is shown in Figure 22-57 and described in Table 22-30.

The receiver interrupt control register (RINTCTL) controls generation of the McASP receive interrupt (RINT). When the register bit(s) is set to 1, the occurrence of the enabled McASP condition(s) generates RINT. See the RSTAT register for a description of the interrupt conditions.

## Figure 22-57. RINTCTL Register

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
| RSTAFRM  | RESERVED | RDATA    | RLAST    | RDMAERR  | RCKFAIL  | RSYNCERR | ROVRN    |
| R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-30. RINTCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                               |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                           |
| 7     | RSTAFRM  | R/W    | 0h      | Receive start of frame interrupt enable bit. 0h = Interrupt is disabled. A receive start of frame interrupt does not generate a McASP receive interrupt (RINT). 1h = Interrupt is enabled. A receive start of frame interrupt generates a McASP receive interrupt (RINT). |
| 6     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                           |
| 5     | RDATA    | R/W    | 0h      | Receive data ready interrupt enable bit. 0h = Interrupt is disabled. A receive data ready interrupt does not generate a McASP receive interrupt (RINT). 1h = Interrupt is enabled. A receive data ready interrupt generates a McASP receive interrupt (RINT).             |
| 4     | RLAST    | R/W    | 0h      | Receive last slot interrupt enable bit. 0h = Interrupt is disabled. A receive last slot interrupt does not generate a McASP receive interrupt (RINT). 1h = Interrupt is enabled. A receive last slot interrupt generates a McASP receive interrupt (RINT).                |
| 3     | RDMAERR  | R/W    | 0h      | Receive DMA error interrupt enable bit. 0h = Interrupt is disabled. A receive DMA error interrupt does not generate a McASP receive interrupt (RINT). 1h = Interrupt is enabled. A receive DMA error interrupt generates a McASP receive interrupt (RINT).                |
| 2     | RCKFAIL  | R/W    | 0h      | Receive clock failure interrupt enable bit. 0h = Interrupt is disabled. A receive clock failure interrupt does not generate a McASP receive interrupt (RINT). 1h = Interrupt is enabled. A receive clock failure interrupt generates a McASP receive interrupt (RINT).    |

## Table 22-30. RINTCTL Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | RSYNCERR | R/W    | 0h      | Unexpected receive frame sync interrupt enable bit. 0h = Interrupt is disabled. An unexpected receive frame sync interrupt does not generate a McASP receive interrupt (RINT). 1h = Interrupt is enabled. An unexpected receive frame sync interrupt generates a McASP receive interrupt (RINT). |
|     0 | ROVRN    | R/W    | 0h      | Receiver overrun interrupt enable bit. 0h = Interrupt is disabled. A receiver overrun interrupt does not generate a McASP receive interrupt (RINT). 1h = Interrupt is enabled. A receiver overrun interrupt generates a McASP receive interrupt (RINT).                                          |

<!-- image -->

<!-- image -->

www.ti.com

## 22.4.1.20 RSTAT Register (offset = 80h) [reset = 0h]

RSTAT is shown in Figure 22-58 and described in Table 22-31.

The receiver status register (RSTAT) provides the receiver status and receive TDM time slot number. If the McASP logic attempts to set an interrupt flag in the same cycle that the CPU writes to the flag to clear it, the McASP logic has priority and the flag remains set. This also causes a new interrupt request to be generated.

Figure 22-58. RSTAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RERR     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RDMAERR  | RSTAFRM  | RDATA    | RLAST    | RTDMSLOT | RCKFAIL  | RSYNCERR | ROVRN    |
| R/W1C-0h | R/W1C-0h | R/W1C-0h | R/W1C-0h | R-0h     | R/W1C-0h | R/W1C-0h | R/W1C-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-31. RSTAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 8     | RERR     | R/W    | 0h      | RERR bit always returns a logic-OR of: ROVRN OR RSYNCERR OR RCKFAIL OR RDMAERR. Allows a single bit to be checked to determine if a receiver error interrupt has occurred. 0h = No errors have occurred. 1h = An error has occurred.                                                                                                                                                                                |
| 7     | RDMAERR  | R/W1C  | 0h      | Receive DMA error flag. RDMAERR is set when the CPU or DMA reads more serializers through the data port in a given time slot than were programmed as receivers. Causes a receive interrupt (RINT), if this bit is set and RDMAERR in RINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 to this bit has no effect. 0h = Receive DMA error did not occur. 1h = Receive DMA error did occur. |
| 6     | RSTAFRM  | R/W1C  | 0h      | Receive start of frame flag. Causes a receive interrupt (RINT), if this bit is set and RSTAFRM in RINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 to this bit has no effect. 0h = No new receive frame sync (AFSR) is detected. 1h = A new receive frame sync (AFSR) is detected.                                                                                                       |
| 5     | RDATA    | R/W1C  | 0h      | Receive data ready flag. Causes a receive interrupt (RINT), if this bit is set and RDATA in RINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 to this bit has no effect. 0h = No new data in RBUF. 1h = Data is transferred from XRSR to RBUF and ready to be serviced by the CPU or DMA. When RDATA is set, it always causes a DMA event (AREVT).                                        |

## Table 22-31. RSTAT Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     4 | RLAST    | R/W1C  | 0h      | Receive last slot flag. RLAST is set along with RDATA, if the current slot is the last slot in a frame. Causes a receive interrupt (RINT), if this bit is set and RLAST in RINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 to this bit has no effect. 0h = Current slot is not the last slot in a frame. 1h = Current slot is the last slot in a frame. RDATA is also set.                                 |
|     3 | RTDMSLOT | R      | 0h      | Returns the LSB of RSLOT. Allows a single read of RSTAT to determine whether the current TDM time slot is even or odd. 0h = Current TDM time slot is odd. 1h = Current TDM time slot is even.                                                                                                                                                                                                                                          |
|     2 | RCKFAIL  | R/W1C  | 0h      | Receive clock failure flag. RCKFAIL is set when the receive clock failure detection circuit reports an error. Causes a receive interrupt (RINT), if this bit is set and RCKFAIL in RINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 to this bit has no effect. 0h = Receive clock failure did not occur. 1h = Receive clock failure did occur.                                                              |
|     1 | RSYNCERR | R/W1C  | 0h      | Unexpected receive frame sync flag. RSYNCERR is set when a new receive frame sync (AFSR) occurs before it is expected. Causes a receive interrupt (RINT), if this bit is set and RSYNCERR in RINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 to this bit has no effect. 0h = Unexpected receive frame sync did not occur. 1h = Unexpected receive frame sync did occur.                                    |
|     0 | ROVRN    | R/W1C  | 0h      | Receiver overrun flag. ROVRN is set when the receive serializer is instructed to transfer data from XRSR to RBUF, but the former data in RBUF has not yet been read by the CPU or DMA. Causes a receive interrupt (RINT), if this bit is set and ROVRN in RINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 to this bit has no effect. 0h = Receiver overrun did not occur. 1h = Receiver overrun did occur. |

<!-- image -->

<!-- image -->

## 22.4.1.21 RSLOT Register (offset = 84h) [reset = 0h]

RSLOT is shown in Figure 22-59 and described in Table 22-32.

The current receive TDM time slot register (RSLOT) indicates the current time slot for the receive data frame.

## Figure 22-59. RSLOT Register

| 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|---------------------------------------------------------------------------------|
| RSLOTCNT                                                                        |
| R-0h R-0h                                                                       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-32. RSLOT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                 |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                             |
| 8-0   | RSLOTCNT | R      | 0h      | 0-17Fh = Current receive time slot count. Legal values: 0 to 383 (17Fh). TDM function is not supported for > 32 time slots. However, TDM time slot counter may count to 383 when used to receive a DIR block (transferred over TDM format). |

## 22.4.1.22 RCLKCHK Register (offset = 88h) [reset = 0h]

RCLKCHK is shown in Figure 22-60 and described in Table 22-33.

The receive clock check control register (RCLKCHK) configures the receive clock failure detection circuit.

## Figure 22-60. RCLKCHK Register

| 31   | 30   | 29   | 28 27   | 26   | 25   | 24   | 23   | 22       | 21   | 20   |        | 19   | 18     | 17   | 16   |
|------|------|------|---------|------|------|------|------|----------|------|------|--------|------|--------|------|------|
|      |      |      | RCNT    |      |      |      |      |          |      |      | RMAX   |      |        |      |      |
|      |      |      | R-0h    |      |      |      |      |          |      |      | R/W-0h |      |        |      |      |
| 15   | 14   | 13   | 12 11   | 10   | 9    | 8    | 7    | 6        |      | 5    | 4      | 3    | 2      | 1    | 0    |
|      |      |      | RMIN    |      |      |      |      | RESERVED |      |      |        | RPS  |        |      |      |
|      |      |      | R/W-0h  |      |      |      |      |          | R-0h |      |        |      | R/W-0h |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-33. RCLKCHK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RCNT     | R      | 0h      | Receive clock count value (from previous measurement). The clock circuit continually counts the number of system clocks for every 32 receive high-frequency master clock (AHCLKR) signals, and stores the count in RCNT until the next measurement is taken.                                                                                                                                                                   |
| 23-16 | RMAX     | R/W    | 0h      | Receive clock maximum boundary. This 8 bit unsigned value sets the maximum allowed boundary for the clock check counter after 32 receive high-frequency master clock (AHCLKR) signals have been received. If the current counter value is greater than RMAX after counting 32 AHCLKR signals, RCKFAIL in RSTAT is set. The comparison is performed using unsigned arithmetic.                                                  |
| 15-8  | RMIN     | R/W    | 0h      | Receive clock minimum boundary. This 8 bit unsigned value sets the minimum allowed boundary for the clock check counter after 32 receive high-frequency master clock (AHCLKR) signals have been received. If RCNT is less than RMIN after counting 32 AHCLKR signals, RCKFAIL in RSTAT is set. The comparison is performed using unsigned arithmetic.                                                                          |
| 7-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 3-0   | RPS      | R/W    | 0h      | Receive clock check prescaler value. 0h = McASP system clock divided by 1. 1h = McASP system clock divided by 2. 2h = McASP system clock divided by 4. 3h = McASP system clock divided by 8. 4h = McASP system clock divided by 16. 5h = McASP system clock divided by 32. 6h = McASP system clock divided by 64. 7h = McASP system clock divided by 128. 8h = McASP system clock divided by 256. 9h = Reserved from 9h to Fh. |

<!-- image -->

<!-- image -->

## 22.4.1.23 REVTCTL Register (offset = 8Ch) [reset = 0h]

REVTCTL is shown in Figure 22-61 and described in Table 22-34.

The receiver DMA event control register (REVTCTL) contains a disable bit for the receiver DMA event. Note for device-specific registers: Accessing REVTCTL not implemented on a specific device may cause improper operation.

## Figure 22-61. REVTCTL Register

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
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RDATDMA  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-34. REVTCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                               |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED | R      | 0h      |                                                                                                                                                           |
| 0     | RDATDMA  | R/W    | 0h      | Receive data DMA request enable bit. If writing to this bit, always write the default value of 0. 0h = Receive data DMA request is enabled. 1h = Reserved |

## 22.4.1.24 XGBLCTL Register (offset = A0h) [reset = 0h]

XGBLCTL is shown in Figure 22-62 and described in Table 22-35.

Alias of the global control register (GBLCTL). Writing to the transmitter global control register (XGBLCTL) affects only the transmit bits of GBLCTL (bits 12-8). Reads from XGBLCTL return the value of GBLCTL. XGBLCTL allows the transmitter to be reset independently from the receiver. See the GBLCTL register for a detailed description of GBLCTL.

Figure 22-62. XGBLCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|          | RESERVED |          | XFRST    | XSMRST   | XSRCLR   | XHCLKRST | XCLKRST  |
|          | R-0h     |          | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          | RESERVED |          | RFRST    | RSMRST   | RSRCLR   | RHCLKRST | RCLKRST  |
|          | R-0h     |          | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-35. XGBLCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                         |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                     |
| 12    | XFRST    | R/W    | 0h      | Transmit frame sync generator reset enable bit. A write to this bit affects the XFRST bit of GBLCTL. 0h = Transmit frame sync generator is reset. 1h = Transmit frame sync generator is active.                                     |
| 11    | XSMRST   | R/W    | 0h      | Transmit state machine reset enable bit. A write to this bit affects the XSMRST bit of GBLCTL. 0h = Transmit state machine is held in reset. 1h = Transmit state machine is released from reset.                                    |
| 10    | XSRCLR   | R/W    | 0h      | Transmit serializer clear enable bit. A write to this bit affects the XSRCLR bit of GBLCTL. 0h = Transmit serializers are cleared. 1h = Transmit serializers are active.                                                            |
| 9     | XHCLKRST | R/W    | 0h      | Transmit high-frequency clock divider reset enable bit. A write to this bit affects the XHCLKRST bit of GBLCTL. 0h = Transmit high-frequency clock divider is held in reset. 1h = Transmit high-frequency clock divider is running. |
| 8     | XCLKRST  | R/W    | 0h      | Transmit clock divider reset enable bit. A write to this bit affects the XCLKRST bit of GBLCTL. 0h = Transmit clock divider is held in reset. 1h = Transmit clock divider is running.                                               |
| 7-5   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                     |
| 4     | RFRST    | R      | 0h      | Receive frame sync generator reset enable bit. A read of this bit returns the RFRST bit value of GBLCTL. Writes have no effect.                                                                                                     |
| 3     | RSMRST   | R      | 0h      | Receive state machine reset enable bit. A read of this bit returns the RSMRST bit value of GBLCTL. Writes have no effect.                                                                                                           |
| 2     | RSRCLR   | R      | 0h      | Receive serializer clear enable bit. A read of this bit returns the RSRSCLR bit value of GBLCTL. Writes have no effect.                                                                                                             |

<!-- image -->

<!-- image -->

## Table 22-35. XGBLCTL Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | RHCLKRST | R      | 0h      | Receive high-frequency clock divider reset enable bit. A read of this bit returns the RHCLKRST bit value of GBLCTL. Writes have no effect. |
|     0 | RCLKRST  | R      | 0h      | Receive clock divider reset enable bit. A read of this bit returns the RCLKRST bit value of GBLCTL. Writes have no effect.                 |

## 22.4.1.25 XMASK Register (offset = A4h) [reset = 0h]

XMASK is shown in Figure 22-63 and described in Table 22-36.

The transmit format unit bit mask register (XMASK) determines which bits of the transmitted data are masked off and padded with a known value before being shifted out the McASP.

## Figure 22-63. XMASK Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | XMASK                                                                           |
|      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-36. XMASK Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | XMASK   | R/W    | 0h      | Transmit data mask n enable bit. 0h = Corresponding bit of transmit data (before passing through reverse and rotate units) is masked out and then padded with the selected bit pad value (XPAD and XPBIT bits in XFMT), which is transmitted out the McASP in place of the original bit. 1h = Corresponding bit of transmit data (before passing through reverse and rotate units) is transmitted out the McASP. |

<!-- image -->

<!-- image -->

www.ti.com

## 22.4.1.26 XFMT Register (offset = A8h) [reset = 0h]

XFMT is shown in Figure 22-64 and described in Table 22-37.

The transmit bit stream format register (XFMT) configures the transmit data format.

## Figure 22-64. XFMT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | XDATDLY  | XDATDLY  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| XRVRS    | XPAD     |          |          |          | XPBIT    |          |          |
| R/W-0h   | R/W-0h   |          |          |          | R/W-0h   |          |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          | XSSZ     |          |          | XBUSEL   |          | XROT     |          |
|          | R/W-0h   |          |          | R/W-0h   |          | R/W-0h   |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-37. XFMT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                 |
| 17-16 | XDATDLY  | R/W    | 0h      | Transmit sync bit delay. 0h = 0-bit delay. The first transmit data bit, AXRn, occurs in same ACLKX cycle as the transmit frame sync (AFSX). 1h = 1-bit delay. The first transmit data bit, AXRn, occurs one ACLKX cycle after the transmit frame sync (AFSX). 2h = 2-bit delay. The first transmit data bit, AXRn, occurs two ACLKX cycles after the transmit frame sync (AFSX). 3h = Reserved. |
| 15    | XRVRS    | R/W    | 0h      | Transmit serial bitstream order. 0h = Bitstream is LSB first. No bit reversal is performed in transmit format bit reverse unit. 1h = Bitstream is MSB first. Bit reversal is performed in transmit format bit reverse unit.                                                                                                                                                                     |
| 14-13 | XPAD     | R/W    | 0h      | Pad value for extra bits in slot not belonging to word defined by XMASK. This field only applies to bits when XMASK[n] = 0. 0h = Pad extra bits with 0. 1h = Pad extra bits with 1. 2h = Pad extra bits with one of the bits from the word as specified by XPBIT bits. 3h = Reserved.                                                                                                           |
| 12-8  | XPBIT    | R/W    | 0h      | XPBIT value determines which bit (as written by the CPU or DMA to XBUF[n]) is used to pad the extra bits before shifting. This field only applies when XPAD = 2h. 0h = Pad with bit 0 value. 1h = Pad with bit 1 to bit 31 value from 1h to 1Fh.                                                                                                                                                |

## Table 22-37. XFMT Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 7-4   | XSSZ    | R/W    | 0h      | Transmit slot size. 0h = Reserved. 1h = Reserved. 2h = Reserved. 3h = Slot size is 8 bits. 4h = Reserved. 5h = Slot size is 12 bits. 6h = Reserved. 7h = Slot size is 16 bits. 8h = Reserved. 9h = Slot size is 20 bits. Ah = Reserved. Bh = Slot size is 24 bits. Ch = Reserved. Dh = Slot size is 28 bits. Eh = Reserved. Fh = Slot size is 32 bits.                                                            |
| 3     | XBUSEL  | R/W    | 0h      | Selects whether writes to serializer buffer XRBUF[n] originate from the configuration bus (CFG) or the data (DAT) port. 0h = Writes to XRBUF[n] originate from the data port. Writes to XRBUF[n] from the configuration bus are ignored with no effect to the McASP. 1h = Writes to XRBUF[n] originate from the configuration bus. Writes to XRBUF[n] from the data port are ignored with no effect to the McASP. |
| 2-0   | XROT    | R/W    | 0h      | Right-rotation value for transmit rotate right format unit. 0h = Rotate right by 0 (no rotation). 1h = Rotate right by 4 bit positions. 2h = Rotate right by 8 bit positions. 3h = Rotate right by 12 bit positions. 4h = Rotate right by 16 bit positions. 5h = Rotate right by 20 bit positions. 6h = Rotate right by 24 bit positions. 7h = Rotate right by 28 bit positions.                                  |

<!-- image -->

<!-- image -->

## 22.4.1.27 AFSXCTL Register (offset = ACh) [reset = 0h]

AFSXCTL is shown in Figure 22-65 and described in Table 22-38.

The transmit frame sync control register (AFSXCTL) configures the transmit frame sync (AFSX).

## Figure 22-65. AFSXCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| XMOD     | XMOD     | XMOD     | XMOD     | XMOD     | XMOD     | XMOD     | XMOD     |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| XMOD     | RESERVED | RESERVED | FXWID    | RESERVED | RESERVED | FSXM     | FSXP     |
| R/W-0h   | R-0h     | R-0h     | R/W-0h   | R-0h     | R-0h     | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-38. AFSXCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                  |
| 15-7  | XMOD     | R/W    | 0h      | Transmit frame sync mode select bits. 1FFh = Reserved from 181h to 1FFh. 0h = Burst mode. 1h = Reserved. 2h = 2-slot TDM (I2S mode) to 32-slot TDM from 2h to 20h. 21h = Reserved from 21h to 17Fh. 180h = 384-slot DIT mode. 181h = Reserved from 181h to 1FFh. |
| 6-5   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                  |
| 4     | FXWID    | R/W    | 0h      | Transmit frame sync width select bit indicates the width of the transmit frame sync (AFSX) during its active period. 0h = Single bit. 1h = Single word.                                                                                                          |
| 3-2   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                  |
| 1     | FSXM     | R/W    | 0h      | Transmit frame sync generation select bit. 0h = Externally-generated transmit frame sync. 1h = Internally-generated transmit frame sync.                                                                                                                         |
| 0     | FSXP     | R/W    | 0h      | Transmit frame sync polarity select bit. 0h = A rising edge on transmit frame sync (AFSX) indicates the beginning of a frame. 1h = A falling edge on transmit frame sync (AFSX) indicates the beginning of a frame.                                              |

## 22.4.1.28 ACLKXCTL Register (offset = B0h) [reset = 60h]

ACLKXCTL is shown in Figure 22-66 and described in Table 22-39.

The transmit clock control register (ACLKXCTL) configures the transmit bit clock (ACLKX) and the transmit clock generator.

## Figure 22-66. ACLKXCTL Register

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
| CLKXP    | ASYNC    | CLKXM    |          |          | CLKXDIV  |          |          |
| R/W-0h   | R/W-1h   | R/W-1h   |          |          | R/W-0h   |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-39. ACLKXCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                  |
| 7     | CLKXP    | R/W    | 0h      | Transmit bitstream clock polarity select bit. 0h = Rising edge. External receiver samples data on the falling edge of the serial clock, so the transmitter must shift data out on the rising edge of the serial clock. 1h = Falling edge. External receiver samples data on the rising edge of the serial clock, so the transmitter must shift data out on the falling edge of the serial clock. |
| 6     | ASYNC    | R/W    | 1h      | Transmit/receive operation asynchronous enable bit. 0h = Synchronous. Transmit clock and frame sync provides the source for both the transmit and receive sections. 1h = Asynchronous. Separate clock and frame sync used by transmit and receive sections.                                                                                                                                      |
| 5     | CLKXM    | R/W    | 1h      | Transmit bit clock source bit. 0h = External transmit clock source from ACLKX pin. 1h = Internal transmit clock source from output of programmable bit clock divider.                                                                                                                                                                                                                            |
| 4-0   | CLKXDIV  | R/W    | 0h      | Transmit bit clock divide ratio bits determine the divide-down ratio from AHCLKX to ACLKX. 0h = Divide-by-1. 1h = Divide-by-2. 2h = Divide-by-3 to divide-by-32 from 2h to 1Fh.                                                                                                                                                                                                                  |

<!-- image -->

<!-- image -->

## 22.4.1.29 AHCLKXCTL Register (offset = B4h) [reset = 0h]

AHCLKXCTL is shown in Figure 22-67 and described in Table 22-40.

The transmit high-frequency clock control register (AHCLKXCTL) configures the transmit high-frequency master clock (AHCLKX) and the transmit clock generator.

## Figure 22-67. AHCLKXCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| HCLKXM   | HCLKXP   |          | RESERVED |          | HCLKXDIV |          |          |
| R/W-0h   | R/W-0h   |          | R-0h     |          | R/W-0h   |          |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| HCLKXDIV | HCLKXDIV | HCLKXDIV | HCLKXDIV | HCLKXDIV | HCLKXDIV | HCLKXDIV | HCLKXDIV |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-40. AHCLKXCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 15    | HCLKXM   | R/W    | 0h      | Transmit high-frequency clock source bit. 0h = External transmit high-frequency clock source from AHCLKX pin. 1h = Internal transmit high-frequency clock source from output of programmable high clock divider.                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 14    | HCLKXP   | R/W    | 0h      | Transmit bitstream high-frequency clock polarity select bit. 0h = AHCLKX is not inverted before programmable bit clock divider. In the special case where the transmit bit clock (ACLKX) is internally generated and the programmable bit clock divider is set to divide-by- 1 (CLKXDIV = 0 in ACLKXCTL), AHCLKX is directly passed through to the ACLKX pin. 1h = AHCLKX is inverted before programmable bit clock divider. In the special case where the transmit bit clock (ACLKX) is internally generated and the programmable bit clock divider is set to divide-by- 1 (CLKXDIV = 0 in ACLKXCTL), AHCLKX is directly passed through to the ACLKX pin. |
| 13-12 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 11-0  | HCLKXDIV | R/W    | 0h      | Transmit high-frequency clock divide ratio bits determine the divide- down ratio from AUXCLK to AHCLKX. 0h = Divide-by-1. 1h = Divide-by-2. 2h = Divide-by-3 to divide-by-4096 from 2h to FFFh.                                                                                                                                                                                                                                                                                                                                                                                                                                                            |

## 22.4.1.30 XTDM Register (offset = B8h) [reset = 0h]

XTDM is shown in Figure 22-68 and described in Table 22-41.

The transmit TDM time slot register (XTDM) specifies in which TDM time slot the transmitter is active. TDM time slot counter range is extended to 384 slots (to support SPDIF blocks of 384 subframes). XTDM operates modulo 32, that is, XTDMS specifies the TDM activity for time slots 0, 32, 64, 96, 128, and so on.

## Figure 22-68. XTDM Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 XTDMS   |
|------|---------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-41. XTDM Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                   |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | XTDMS   | R/W    | 0h      | Transmitter mode during TDM time slot n. 0h = Transmit TDM time slot n is inactive. The transmit serializer does not shift out data during this slot. 1h = Transmit TDM time slot n is active. The transmit serializer shifts out data during this slot according to the serializer control register (SRCTL). |

<!-- image -->

<!-- image -->

## 22.4.1.31 XINTCTL Register (offset = BCh) [reset = 0h]

XINTCTL is shown in Figure 22-69 and described in Table 22-42.

The transmitter interrupt control register (XINTCTL) controls generation of the McASP transmit interrupt (XINT). When the register bit(s) is set to 1, the occurrence of the enabled McASP condition(s) generates XINT. See the XSTAT register for a description of the interrupt conditions.

## Figure 22-69. XINTCTL Register

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
| XSTAFRM  | RESERVED | XDATA    | XLAST    | XDMAERR  | XCKFAIL  | XSYNCERR | XUNDRN   |
| R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-42. XINTCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                |
| 7     | XSTAFRM  | R/W    | 0h      | Transmit start of frame interrupt enable bit. 0h = Interrupt is disabled. A transmit start of frame interrupt does not generate a McASP transmit interrupt (XINT). 1h = Interrupt is enabled. A transmit start of frame interrupt generates a McASP transmit interrupt (XINT). |
| 6     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                |
| 5     | XDATA    | R/W    | 0h      | Transmit data ready interrupt enable bit. 0h = Interrupt is disabled. A transmit data ready interrupt does not generate a McASP transmit interrupt (XINT). 1h = Interrupt is enabled. A transmit data ready interrupt generates a McASP transmit interrupt (XINT).             |
| 4     | XLAST    | R/W    | 0h      | Transmit last slot interrupt enable bit. 0h = Interrupt is disabled. A transmit last slot interrupt does not generate a McASP transmit interrupt (XINT). 1h = Interrupt is enabled. A transmit last slot interrupt generates a McASP transmit interrupt (XINT).                |
| 3     | XDMAERR  | R/W    | 0h      | Transmit DMA error interrupt enable bit. 0h = Interrupt is disabled. A transmit DMA error interrupt does not generate a McASP transmit interrupt (XINT). 1h = Interrupt is enabled. A transmit DMA error interrupt generates a McASP transmit interrupt (XINT).                |
| 2     | XCKFAIL  | R/W    | 0h      | Transmit clock failure interrupt enable bit. 0h = Interrupt is disabled. A transmit clock failure interrupt does not generate a McASP transmit interrupt (XINT). 1h = Interrupt is enabled. A transmit clock failure interrupt generates a McASP transmit interrupt (XINT).    |

## Table 22-42. XINTCTL Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                           |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | XSYNCERR | R/W    | 0h      | Unexpected transmit frame sync interrupt enable bit. 0h = Interrupt is disabled. An unexpected transmit frame sync interrupt does not generate a McASP transmit interrupt (XINT). 1h = Interrupt is enabled. An unexpected transmit frame sync interrupt generates a McASP transmit interrupt (XINT). |
|     0 | XUNDRN   | R/W    | 0h      | Transmitter underrun interrupt enable bit. 0h = Interrupt is disabled. A transmitter underrun interrupt does not generate a McASP transmit interrupt (XINT). 1h = Interrupt is enabled. A transmitter underrun interrupt generates a McASP transmit interrupt (XINT).                                 |

<!-- image -->

<!-- image -->

www.ti.com

## 22.4.1.32 XSTAT Register (offset = C0h) [reset = 0h]

XSTAT is shown in Figure 22-70 and described in Table 22-43.

The transmitter status register (XSTAT) provides the transmitter status and transmit TDM time slot number. If the McASP logic attempts to set an interrupt flag in the same cycle that the CPU writes to the flag to clear it, the McASP logic has priority and the flag remains set. This also causes a new interrupt request to be generated.

Figure 22-70. XSTAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | XERR     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| XDMAERR  | XSTAFRM  | XDATA    | XLAST    | XTDMSLOT | XCKFAIL  | XSYNCERR | XUNDRN   |
| R/W1C-0h | R/W1C-0h | R/W1C-0h | R/W1C-0h | R-0h     | R/W1C-0h | R/W1C-0h | R/W1C-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-43. XSTAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 8     | XERR     | R/W    | 0h      | XERR bit always returns a logic-OR of: XUNDRN OR XSYNCERR OR XCKFAIL OR XDMAERR. Allows a single bit to be checked to determine if a transmitter error interrupt has occurred. 0h = No errors have occurred. 1h = An error has occurred.                                                                                                                                                                                                  |
| 7     | XDMAERR  | R/W1C  | 0h      | Transmit DMA error flag. XDMAERR is set when the CPU or DMA writes more serializers through the data port in a given time slot than were programmed as transmitters. Causes a transmit interrupt (XINT), if this bit is set and XDMAERR in XINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 has no effect. 0h = Transmit DMA error did not occur. 1h = Transmit DMA error did occur.                           |
| 6     | XSTAFRM  | R/W1C  | 0h      | Transmit start of frame flag. Causes a transmit interrupt (XINT), if this bit is set and XSTAFRM in XINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 has no effect. 0h = No new transmit frame sync (AFSX) is detected. 1h = A new transmit frame sync (AFSX) is detected.                                                                                                                                     |
| 5     | XDATA    | R/W1C  | 0h      | Transmit data ready flag. Causes a transmit interrupt (XINT), if this bit is set and XDATA in XINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 has no effect. 0h = XBUF is written and is full. 1h = Data is copied from XBUF to XRSR. XBUF is empty and ready to be written. XDATA is also set when the transmit serializers are taken out of reset. When XDATA is set, it always causes a DMA event (AXEVT). |

## Table 22-43. XSTAT Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     4 | XLAST    | R/W1C  | 0h      | Transmit last slot flag. XLAST is set along with XDATA, if the current slot is the last slot in a frame. Causes a transmit interrupt (XINT), if this bit is set and XLAST in XINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 has no effect. 0h = Current slot is not the last slot in a frame.                                                                                                                                                                                                                     |
|     3 | XTDMSLOT | R      | 0h      | Returns the LSB of XSLOT. Allows a single read of XSTAT to determine whether the current TDM time slot is even or odd. 0h = Current TDM time slot is odd. 1h = Current TDM time slot is even.                                                                                                                                                                                                                                                                                                                                                  |
|     2 | XCKFAIL  | R/W1C  | 0h      | Transmit clock failure flag. XCKFAIL is set when the transmit clock failure detection circuit reports an error. Causes a transmit interrupt (XINT), if this bit is set and XCKFAIL in XINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 has no effect. 0h = Transmit clock failure did not occur. 1h = Transmit clock failure did occur.                                                                                                                                                                             |
|     1 | XSYNCERR | R/W1C  | 0h      | Unexpected transmit frame sync flag. XSYNCERR is set when a new transmit frame sync (AFSX) occurs before it is expected. Causes a transmit interrupt (XINT), if this bit is set and XSYNCERR in XINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 has no effect. 0h = Unexpected transmit frame sync did not occur. 1h = Unexpected transmit frame sync did occur.                                                                                                                                                   |
|     0 | XUNDRN   | R/W1C  | 0h      | Transmitter underrun flag. XUNDRN is set when the transmit serializer is instructed to transfer data from XBUF to XRSR, but XBUF has not yet been serviced with new data since the last transfer. Causes a transmit interrupt (XINT), if this bit is set and XUNDRN in XINTCTL is set. This bit is cleared by writing a 1 to this bit. Writing a 0 has no effect. 0h = Transmitter underrun did not occur. 1h = Transmitter underrun did occur. For details on McASP action upon underrun conditions, see Buffer Underrun Error - Transmitter. |

<!-- image -->

<!-- image -->

## 22.4.1.33 XSLOT Register (offset = C4h) [reset = 0h]

XSLOT is shown in Figure 22-71 and described in Table 22-44.

The current transmit TDM time slot register (XSLOT) indicates the current time slot for the transmit data frame.

## Figure 22-71. XSLOT Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | XSLOTCNT                                                                              |
| R-0h                                                                                  | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-44. XSLOT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                   |
| 9-0   | XSLOTCNT | R      | 0h      | Current transmit time slot count. Legal values: 0 to 383 (17Fh). During reset, this counter value is 383 so the next count value, which is used to encode the first DIT group of data, will be 0 and encodes the B preamble. TDM function is not supported for >32 time slots. However, TDM time slot counter may count to 383 when used to transmit a DIT block. |

## 22.4.1.34 XCLKCHK Register (offset = C8h) [reset = 0h]

XCLKCHK is shown in Figure 22-72 and described in Table 22-45.

The transmit clock check control register (XCLKCHK) configures the transmit clock failure detection circuit.

## Figure 22-72. XCLKCHK Register

| 31   | 30   | 29   | 28 27   | 26   | 25   | 24   | 23   | 22       | 21   | 20   |        | 19   | 18     | 17   | 16   |
|------|------|------|---------|------|------|------|------|----------|------|------|--------|------|--------|------|------|
|      |      |      | XCNT    |      |      |      |      |          |      |      | XMAX   |      |        |      |      |
|      |      |      | R-0h    |      |      |      |      |          |      |      | R/W-0h |      |        |      |      |
| 15   | 14   | 13   | 12 11   | 10   | 9    | 8    | 7    | 6        |      | 5    | 4      | 3    | 2      | 1    | 0    |
|      |      |      | XMIN    |      |      |      |      | RESERVED |      |      |        | XPS  |        |      |      |
|      |      |      | R/W-0h  |      |      |      |      |          | R-0h |      |        |      | R/W-0h |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-45. XCLKCHK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | XCNT     | R      | 0h      | Transmit clock count value (from previous measurement). The clock circuit continually counts the number of system clocks for every 32 transmit high-frequency master clock (AHCLKX) signals, and stores the count in XCNT until the next measurement is taken.                                                                                                                                                                                               |
| 23-16 | XMAX     | R/W    | 0h      | Transmit clock maximum boundary. This 8 bit unsigned value sets the maximum allowed boundary for the clock check counter after 32 transmit high-frequency master clock (AHCLKX) signals have been received. If the current counter value is greater than XMAX after counting 32 AHCLKX signals, XCKFAIL in XSTAT is set. The comparison is performed using unsigned arithmetic.                                                                              |
| 15-8  | XMIN     | R/W    | 0h      | Transmit clock minimum boundary. This 8 bit unsigned value sets the minimum allowed boundary for the clock check counter after 32 transmit high-frequency master clock (AHCLKX) signals have been received. If XCNT is less than XMIN after counting 32 AHCLKX signals, XCKFAIL in XSTAT is set. The comparison is performed using unsigned arithmetic.                                                                                                      |
| 7-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 3-0   | XPS      | R/W    | 0h      | Transmit clock check prescaler value. Fh = Reserved from 9h to Fh. 0h = McASP system clock divided by 1. 1h = McASP system clock divided by 2. 2h = McASP system clock divided by 4. 3h = McASP system clock divided by 8. 4h = McASP system clock divided by 16. 5h = McASP system clock divided by 32. 6h = McASP system clock divided by 64. 7h = McASP system clock divided by 128. 8h = McASP system clock divided by 256. 9h = Reserved from 9h to Fh. |

<!-- image -->

<!-- image -->

## 22.4.1.35 XEVTCTL Register (offset = CCh) [reset = 0h]

XEVTCTL is shown in Figure 22-73 and described in Table 22-46.

The transmitter DMA event control register (XEVTCTL) contains a disable bit for the transmit DMA event. Note for device-specific registers: Accessing XEVTCTL not implemented on a specific device may cause improper device operation.

## Figure 22-73. XEVTCTL Register

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
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | XDATDMA  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-46. XEVTCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                 |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED | R      | 0h      |                                                                                                                                                             |
| 0     | XDATDMA  | R/W    | 0h      | Transmit data DMA request enable bit. If writing to this bit, always write the default value of 0. 0h = Transmit data DMA request is enabled. 1h = Reserved |

## 22.4.1.36 DITCSRA\_0 to DITCSRA\_5 Register (offset = 100h to 114h) [reset = 0h]

DITCSRA\_0 to DITCSRA\_5 is shown in Figure 22-74 and described in Table 22-47.

The DIT left channel status registers (DITCSRA) provide the status of each left channel (even TDM time slot). Each of the six 32-bit registers can store 192 bits of channel status data for a complete block of transmission. The DIT reuses the same data for the next block. It is your responsibility to update the register file in time, if a different set of data need to be sent.

## Figure 22-74. DITCSRA\_0 to DITCSRA\_5 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 DITCSRA   |
|------|-----------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-47. DITCSRA\_0 to DITCSRA\_5 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                        |
|-------|---------|--------|---------|------------------------------------|
| 31-0  | DITCSRA | R/W    | 0h      | DIT left channel status registers. |

<!-- image -->

<!-- image -->

www.ti.com

## 22.4.1.37 DITCSRB\_0 to DITCSRB\_5 Register (offset = 118h to 12Ch) [reset = 0h]

DITCSRB\_0 to DITCSRB\_5 is shown in Figure 22-75 and described in Table 22-48.

The DIT right channel status registers (DITCSRB) provide the status of each right channel (odd TDM time slot). Each of the six 32-bit registers can store 192 bits of channel status data for a complete block of transmission. The DIT reuses the same data for the next block. It is your responsibility to update the register file in time, if a different set of data need to be sent.

## Figure 22-75. DITCSRB\_0 to DITCSRB\_5 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 DITCSRB   |
|------|-----------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-48. DITCSRB\_0 to DITCSRB\_5 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                         |
|-------|---------|--------|---------|-------------------------------------|
| 31-0  | DITCSRB | R/W    | 0h      | DIT right channel status registers. |

## 22.4.1.38 DITUDRA\_0 to DITUDRA\_5 Register (offset = 130h to 144h) [reset = 0h]

DITUDRA\_0 to DITUDRA\_5 is shown in Figure 22-76 and described in Table 22-49.

The DIT left channel user data registers (DITUDRA) provides the user data of each left channel (even TDM time slot). Each of the six 32-bit registers can store 192 bits of user data for a complete block of transmission. The DIT reuses the same data for the next block. It is your responsibility to update the register in time, if a different set of data need to be sent.

## Figure 22-76. DITUDRA\_0 to DITUDRA\_5 Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 DITUDRA   |
|------|----------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-49. DITUDRA\_0 to DITUDRA\_5 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                           |
|-------|---------|--------|---------|---------------------------------------|
| 31-0  | DITUDRA | R/W    | 0h      | DIT left channel user data registers. |

<!-- image -->

<!-- image -->

www.ti.com

## 22.4.1.39 DITUDRB\_0 to DITUDRB\_5 Register (offset = 148h to 15Ch) [reset = 0h]

DITUDRB\_0 to DITUDRB\_5 is shown in Figure 22-77 and described in Table 22-50.

The DIT right channel user data registers (DITUDRB) provides the user data of each right channel (odd TDM time slot). Each of the six 32-bit registers can store 192 bits of user data for a complete block of transmission. The DIT reuses the same data for the next block. It is your responsibility to update the register in time, if a different set of data need to be sent.

## Figure 22-77. DITUDRB\_0 to DITUDRB\_5 Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 DITUDRB   |
|------|--------------------------------------------------------------------------------------|
|      | R/W-0h                                                                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-50. DITUDRB\_0 to DITUDRB\_5 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                            |
|-------|---------|--------|---------|----------------------------------------|
| 31-0  | DITUDRB | R/W    | 0h      | DIT right channel user data registers. |

## 22.4.1.40 SRCTL\_0 to SRCTL\_5 Register (offset = 180h to 194h) [reset = 0h]

SRCTL\_0 to SRCTL\_5 is shown in Figure 22-78 and described in Table 22-51.

Each serializer on the McASP has a serializer control register (SRCTL). There are up to 16 serializers per McASP. Note for device-specific registers: Accessing SRCTLn not implemented on a specific device may cause improper device operation.

Figure 22-78. SRCTL\_0 to SRCTL\_5 Register

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
| RESERVED | RESERVED | RRDY     | XRDY     | DISMOD   | DISMOD   | SRMOD    | SRMOD    |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-51. SRCTL\_0 to SRCTL\_5 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 5     | RRDY     | R      | 0h      | Receive buffer ready bit. RRDY indicates the current receive buffer state. Always reads 0 when programmed as a transmitter or as inactive. If SRMOD bit is set to receive (2h), RRDY switches from 0 to 1 whenever data is transferred from XRSR to RBUF. 0h = Receive buffer (RBUF) is empty. 1h = Receive buffer (RBUF) contains data and needs to be read before the start of the next time slot or a receiver overrun occurs.                                                                                                                                                                                                    |
| 4     | XRDY     | R      | 0h      | Transmit buffer ready bit. XRDY indicates the current transmit buffer state. Always reads 0 when programmed as a receiver or as inactive. If SRMOD bit is set to transmit (1h), XRDY switches from 0 to 1 when XSRCLR in GBLCTL is switched from 0 to 1 to indicate an empty transmitter. XRDY remains set until XSRCLR is forced to 0, data is written to the corresponding transmit buffer, or SRMOD bit is changed to receive (2h) or inactive (0). 0h = Transmit buffer (XBUF) contains data. 1h = Transmit buffer (XBUF) is empty and needs to be written before the start of the next time slot or a transmit underrun occurs. |
| 3-2   | DISMOD   | R/W    | 0h      | Serializer pin drive mode bit. Drive on pin when in inactive TDM slot of transmit mode or when serializer is inactive. This field only applies if the pin is configured as a McASP pin (PFUNC = 0). 0h = Drive on pin is 3-state. 1h = Reserved. 2h = Drive on pin is logic low. 3h = Drive on pin is logic high.                                                                                                                                                                                                                                                                                                                    |

<!-- image -->

<!-- image -->

## Table 22-51. SRCTL\_0 to SRCTL\_5 Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                   |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | SRMOD   | R/W    | 0h      | Serializer mode bit. 0h = Serializer is inactive. 1h = Serializer is transmitter. 2h = Serializer is receiver. 3h = Reserved. |

## 22.4.1.41 XBUF\_0 to XBUF\_5 Register (offset = 200h to 214h) [reset = 0h]

XBUF\_0 to XBUF\_5 is shown in Figure 22-79 and described in Table 22-52.

The transmit buffers for the serializers (XBUF) hold data from the transmit format unit. For transmit operations, the XBUF is an alias of the XRBUF in the serializer. Accessing XBUF registers not implemented on a specific device may cause improper device operation.

## Figure 22-79. XBUF\_0 to XBUF\_5 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | XBUF                                                                            |
|      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-52. XBUF\_0 to XBUF\_5 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                       |
|-------|---------|--------|---------|-----------------------------------|
| 31-0  | XBUF    | R/W    | 0h      | Transmit buffers for serializers. |

<!-- image -->

<!-- image -->

## 22.4.1.42 RBUF\_0 to RBUF\_5 Register (offset = 280h to 294h) [reset = 0h]

RBUF\_0 to RBUF\_5 is shown in Figure 22-80 and described in Table 22-53.

The receive buffers for the serializers (RBUF) hold data from the serializer before the data goes to the receive format unit. For receive operations, the RBUF is an alias of the XRBUF in the serializer. Accessing XBUF registers not implemented on a specific device may cause improper device operation.

## Figure 22-80. RBUF\_0 to RBUF\_5 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RBUF   |
|------|--------------------------------------------------------------------------------------|
|      | R/W-0h                                                                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-53. RBUF\_0 to RBUF\_5 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                      |
|-------|---------|--------|---------|----------------------------------|
| 31-0  | RBUF    | R/W    | 0h      | Receive buffers for serializers. |

## 22.4.1.43 WFIFOCTL Register (offset = 1000h) [reset = 0h]

WFIFOCTL is shown in Figure 22-81 and described in Table 22-54.

The WNUMEVT and WNUMDMA values must be set prior to enabling the Write FIFO. If the Write FIFO is to be enabled, it must be enabled prior to taking the McASP out of reset

## Figure 22-81. WFIFOCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | WENA     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| WNUMEVT  | WNUMEVT  | WNUMEVT  | WNUMEVT  | WNUMEVT  | WNUMEVT  | WNUMEVT  | WNUMEVT  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| WNUMDMA  | WNUMDMA  | WNUMDMA  | WNUMDMA  | WNUMDMA  | WNUMDMA  | WNUMDMA  | WNUMDMA  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-54. WFIFOCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 16    | WENA     | R/W    | 0h      | Write FIFO enable bit. 0h = Write FIFO is disabled. The WLVL bit in the Write FIFO status register (WFIFOSTS) is reset to 0 and pointers are initialized, that is, the Write FIFO is flushed. 1h = Write FIFO is enabled. If Write FIFO is to be enabled, it must be enabled prior to taking McASP out of reset.                                                                                                                                                                                                                           |
| 15-8  | WNUMEVT  | R/W    | 0h      | Write word count per DMA event (32 bit). When the Write FIFO has space for at least WNUMEVT words of data, then an AXEVT (transmit DMA event) is generated to the host/DMA controller. This value should be set to a non-zero integer multiple of the number of serializers enabled as transmitters. This value must be set prior to enabling the Write FIFO. 40h = 3 to 64 words from 3h to 40h. FFh = Reserved from 41h to FFh. 0h = 0 words 1h = 1 word 2h = 2 words 3h = 3 to 64 words from 3h to 40h. 41h = Reserved from 41h to FFh. |
| 7-0   | WNUMDMA  | R/W    | 0h      | Write word count per transfer (32 bit words). Upon a transmit DMA event from the McASP, WNUMDMA words are transferred from the Write FIFO to the McASP. This value must equal the number of McASP serializers used as transmitters. This value must be set prior to enabling the Write FIFO. FFh = Reserved from 11h to FFh. 0h = 0 words 1h = 1 word 2h = 2 words 3h = 3-16 words from 3h to 10h. 11h = Reserved from 11h to FFh.                                                                                                         |

<!-- image -->

<!-- image -->

## 22.4.1.44 WFIFOSTS Register (offset = 1004h) [reset = 0h]

WFIFOSTS is shown in Figure 22-82 and described in Table 22-55.

## Figure 22-82. WFIFOSTS Register

| 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|---------------------------------------------------------------------------|
| WLVL                                                                      |
| R-0h R-0h                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-55. WFIFOSTS Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                          |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                      |
| 7-0   | WLVL     | R      | 0h      | Write level (read-only). Number of 32 bit words currently in the Write FIFO. 40h = 3 to 64 words currently in Write FIFO from 3h to 40h. FFh = Reserved from 41h to FFh. 0h = 0 words currently in Write FIFO. 1h = 1 word currently in Write FIFO. 2h = 2 words currently in Write FIFO. 3h = 3 to 64 words currently in Write FIFO from 3h to 40h. 41h = Reserved from 41h to FFh. |

## 22.4.1.45 RFIFOCTL Register (offset = 1008h) [reset = 0h]

RFIFOCTL is shown in Figure 22-83 and described in Table 22-56.

The RNUMEVT and RNUMDMA values must be set prior to enabling the Read FIFO. If the Read FIFO is to be enabled, it must be enabled prior to taking the McASP out of reset

Figure 22-83. RFIFOCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RENA     |
|          |          |          | R-0h     |          |          |          | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RNUMEVT  | RNUMEVT  | RNUMEVT  | RNUMEVT  | RNUMEVT  | RNUMEVT  | RNUMEVT  | RNUMEVT  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RNUMDMA  | RNUMDMA  | RNUMDMA  | RNUMDMA  | RNUMDMA  | RNUMDMA  | RNUMDMA  | RNUMDMA  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 22-56. RFIFOCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 16    | RENA     | R/W    | 0h      | Read FIFO enable bit. 0h = Read FIFO is disabled. The RLVL bit in the Read FIFO status register (RFIFOSTS) is reset to 0 and pointers are initialized, that is, the Read FIFO is flushed. 1h = Read FIFO is enabled. If Read FIFO is to be enabled, it must be enabled prior to taking McASP out of reset.                                                                                                                                                                                    |
| 15-8  | RNUMEVT  | R/W    | 0h      | Read word count per DMA event (32 bit). When the Read FIFO contains at least RNUMEVT words of data, then an AREVT (receive DMA event) is generated to the host/DMA controller. This value should be set to a non-zero integer multiple of the number of serializers enabled as receivers. This value must be set prior to enabling the Read FIFO. 40h = 3 to 64 words from 3h to 40h. FFh = Reserved from 41h = FFh. 0h = 0 words 1h = 1 word 2h = 2 words 3h = 3 to 64 words from 3h to 40h. |
| 7-0   | RNUMDMA  | R/W    | 0h      | 41h = Reserved from 41h to FFh. Read word count per transfer (32 bit words). Upon a receive DMA event from the McASP, the Read FIFO reads RNUMDMA words from the McASP. This value must equal the number of McASP serializers used as receivers. This value must be set prior to enabling the Read FIFO. 10h = 3 to 16 words from 3h to 10h. FFh = Reserved from 11h to FFh. 0h = 0 words 1h = 1 word 2h = 2 words 3h = 3 to 16 words from 3h to 10h. 11h = Reserved from 11h to FFh.         |

<!-- image -->

<!-- image -->

## 22.4.1.46 RFIFOSTS Register (offset = 100Ch) [reset = 0h]

RFIFOSTS is shown in Figure 22-84 and described in Table 22-57.

## Figure 22-84. RFIFOSTS Register

| 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|------------------------------------------------------------------------------|
| RLVL                                                                         |
| R-0h R-0h                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 22-57. RFIFOSTS Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                               |
| 7-0   | RLVL     | R      | 0h      | Read level (read-only). Number of 32 bit words currently in the Read FIFO. 40h = 3 to 64 words currently in Read FIFO from 3h to 40h. FFh = Reserved from 41h to FFh. 0h = 0 words currently in Read FIFO. 1h = 1 word currently in Read FIFO. 2h = 2 words currently in Read FIFO. 3h = 3 to 64 words currently in Read FIFO from 3h to 40h. 41h = Reserved from 41h to FFh. |