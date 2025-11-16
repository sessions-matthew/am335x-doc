## 7.1.4.2.4 Other Technologies

Other supported device type interact with the GPMC through the NOR interface protocol.

OneNAND Flash is a high-density and low-power memory device. It is based on single- or multi-level-cell NAND core with SRAM and logic, and interfaces as a synchronous NOR Flash, plus has synchronous write capability. It reads faster than conventional NAND and writes faster than conventionnal NOR flash. Hence, it is appropriate for both mass storage and code storage.

pSRAM stands for pseudo-static random access memory. pSRAM is a low-power memory device for mobile applications. pSRAM is based on the DRAM cell with internal refresh and address control features, and interfaces as a synchronous NOR Flash, plus has synchronous write capability.

## 7.1.4.2.5 Supported Protocols

The GPMC supports the following interface protocols when communicating with external memory or external devices:

- Asynchronous read/write access
- Asynchronous read page access (4-8-16 Word16)
- Synchronous read/write access
- Synchronous read burst access without wrap capability (4-8-16 Word16)
- Synchronous read burst access with wrap capability (4-8-16 Word16)

## 7.1.4.2.6 GPMC Features and Settings

This section lists GPMC features and settings:

- Supported device type: up to four NAND or NOR protocol external memories or devices
- Operating Voltage: 3.3V
- Maximum GPMC addressing capability: 512 MBytes divided into eight chip-selects
- Maximum supported memory size: 256 MBytes (must be a power-of-2)
- Minimum supported memory size: 16 MBytes (must be a power-of-2). Aliasing occurs when addressing smaller memories.
- Data path to external memory or device: 8- and 16-bit wide
- Burst and page access: burst of 4-8-16 Word16
- Supports bus keeping
- Supports bus turn around

## 7.1.5 GPMC Registers

Table 7-48 lists the memory-mapped registers for the GPMC. All register offset addresses not listed in Table 7-48 should be considered as reserved locations and the register contents should not be modified.

## Table 7-48. GPMC Registers

| Offset   | Acronym              | Register Name Section   |
|----------|----------------------|-------------------------|
| 0h       | GPMC_REVISION        | Section 7.1.5.1         |
| 10h      | GPMC_SYSCONFIG       | Section 7.1.5.2         |
| 14h      | GPMC_SYSSTATUS       | Section 7.1.5.3         |
| 18h      | GPMC_IRQSTATUS       | Section 7.1.5.4         |
| 1Ch      | GPMC_IRQENABLE       | Section 7.1.5.5         |
| 40h      | GPMC_TIMEOUT_CONTROL | Section 7.1.5.6         |
| 44h      | GPMC_ERR_ADDRESS     | Section 7.1.5.7         |
| 48h      | GPMC_ERR_TYPE        | Section 7.1.5.8         |
| 50h      | GPMC_CONFIG          | Section 7.1.5.9         |
| 54h      | GPMC_STATUS          | Section 7.1.5.10        |

<!-- image -->

<!-- image -->

Table 7-48. GPMC Registers (continued)

| Offset   | Acronym             | Section          |
|----------|---------------------|------------------|
| 60h      | GPMC_CONFIG1_0      | Section 7.1.5.11 |
| 64h      | GPMC_CONFIG2_0      | Section 7.1.5.12 |
| 68h      | GPMC_CONFIG3_0      | Section 7.1.5.13 |
| 6Ch      | GPMC_CONFIG4_0      | Section 7.1.5.14 |
| 70h      | GPMC_CONFIG5_0      | Section 7.1.5.15 |
| 74h      | GPMC_CONFIG6_0      | Section 7.1.5.16 |
| 78h      | GPMC_CONFIG7_0      | Section 7.1.5.17 |
| 7Ch      | GPMC_NAND_COMMAND_0 | Section 7.1.5.18 |
| 80h      | GPMC_NAND_ADDRESS_0 | Section 7.1.5.19 |
| 84h      | GPMC_NAND_DATA_0    | Section 7.1.5.20 |
| 90h      | GPMC_CONFIG1_1      | Section 7.1.5.21 |
| 94h      | GPMC_CONFIG2_1      | Section 7.1.5.22 |
| 98h      | GPMC_CONFIG3_1      | Section 7.1.5.23 |
| 9Ch      | GPMC_CONFIG4_1      | Section 7.1.5.24 |
| A0h      | GPMC_CONFIG5_1      | Section 7.1.5.25 |
| A4h      | GPMC_CONFIG6_1      | Section 7.1.5.26 |
| A8h      | GPMC_CONFIG7_1      | Section 7.1.5.27 |
| ACh      | GPMC_NAND_COMMAND_1 | Section 7.1.5.28 |
| B0h      | GPMC_NAND_ADDRESS_1 | Section 7.1.5.29 |
| B4h      | GPMC_NAND_DATA_1    | Section 7.1.5.30 |
| C0h      | GPMC_CONFIG1_2      | Section 7.1.5.31 |
| C4h      | GPMC_CONFIG2_2      | Section 7.1.5.32 |
| C8h      | GPMC_CONFIG3_2      | Section 7.1.5.33 |
| CCh      | GPMC_CONFIG4_2      | Section 7.1.5.34 |
| D0h      | GPMC_CONFIG5_2      | Section 7.1.5.35 |
| D4h      | GPMC_CONFIG6_2      | Section 7.1.5.36 |
| D8h      | GPMC_CONFIG7_2      | Section 7.1.5.37 |
| DCh      | GPMC_NAND_COMMAND_2 | Section 7.1.5.38 |
| E0h      | GPMC_NAND_ADDRESS_2 | Section 7.1.5.39 |
| E4h      | GPMC_NAND_DATA_2    | Section 7.1.5.40 |
| F0h      | GPMC_CONFIG1_3      | Section 7.1.5.41 |
| F4h      | GPMC_CONFIG2_3      | Section 7.1.5.42 |
| F8h      | GPMC_CONFIG3_3      | Section 7.1.5.43 |
| FCh      | GPMC_CONFIG4_3      | Section 7.1.5.44 |
| 100h     | GPMC_CONFIG5_3      | Section 7.1.5.45 |
| 104h     | GPMC_CONFIG6_3      | Section 7.1.5.46 |
| 108h     | GPMC_CONFIG7_3      | Section 7.1.5.47 |
| 10Ch     | GPMC_NAND_COMMAND_3 | Section 7.1.5.48 |
| 110h     | GPMC_NAND_ADDRESS_3 | Section 7.1.5.49 |
| 114h     | GPMC_NAND_DATA_3    | Section 7.1.5.50 |
| 120h     | GPMC_CONFIG1_4      | Section 7.1.5.51 |
| 124h     | GPMC_CONFIG2_4      | Section 7.1.5.52 |
| 128h     | GPMC_CONFIG3_4      | Section 7.1.5.53 |
| 12Ch     | GPMC_CONFIG4_4      | Section 7.1.5.54 |
| 130h     | GPMC_CONFIG5_4      | Section 7.1.5.55 |
| 134h     | GPMC_CONFIG6_4      | Section 7.1.5.56 |
| 138h     | GPMC_CONFIG7_4      | Section 7.1.5.57 |

Table 7-48. GPMC Registers (continued)

| Offset    | Acronym                               | Register Name   | Section                             |
|-----------|---------------------------------------|-----------------|-------------------------------------|
| 13Ch      | GPMC_NAND_COMMAND_4                   |                 | Section 7.1.5.58                    |
| 140h      | GPMC_NAND_ADDRESS_4                   |                 | Section 7.1.5.59                    |
| 144h      | GPMC_NAND_DATA_4                      |                 | Section 7.1.5.60                    |
| 150h      | GPMC_CONFIG1_5                        |                 | Section 7.1.5.61                    |
| 154h      | GPMC_CONFIG2_5                        |                 | Section 7.1.5.62                    |
| 158h      | GPMC_CONFIG3_5                        |                 | Section 7.1.5.63                    |
| 15Ch      | GPMC_CONFIG4_5                        |                 | Section 7.1.5.64                    |
| 160h      | GPMC_CONFIG5_5                        |                 | Section 7.1.5.65                    |
| 164h      | GPMC_CONFIG6_5                        |                 | Section 7.1.5.66                    |
| 168h      | GPMC_CONFIG7_5                        |                 | Section 7.1.5.67                    |
| 16Ch      | GPMC_NAND_COMMAND_5                   |                 | Section 7.1.5.68                    |
| 170h      | GPMC_NAND_ADDRESS_5                   |                 | Section 7.1.5.69                    |
| 174h      | GPMC_NAND_DATA_5                      |                 | Section 7.1.5.70                    |
| 180h      | GPMC_CONFIG1_6                        |                 | Section 7.1.5.71                    |
| 184h      | GPMC_CONFIG2_6                        |                 | Section 7.1.5.72                    |
| 188h      | GPMC_CONFIG3_6                        |                 | Section 7.1.5.73                    |
| 18Ch      | GPMC_CONFIG4_6                        |                 | Section 7.1.5.74                    |
| 190h      | GPMC_CONFIG5_6                        |                 | Section 7.1.5.75                    |
| 194h      | GPMC_CONFIG6_6                        |                 | Section 7.1.5.76                    |
| 198h      | GPMC_CONFIG7_6                        |                 | Section 7.1.5.77                    |
| 19Ch      | GPMC_NAND_COMMAND_6                   |                 | Section 7.1.5.78                    |
| 1A0h      | GPMC_NAND_ADDRESS_6                   |                 | Section 7.1.5.79                    |
| 1A4h      | GPMC_NAND_DATA_6                      |                 | Section 7.1.5.80                    |
| 1E0h      | GPMC_PREFETCH_CONFIG1                 |                 | Section 7.1.5.81                    |
| 1E4h      | GPMC_PREFETCH_CONFIG2                 |                 | Section 7.1.5.82                    |
| 1ECh      | GPMC_PREFETCH_CONTROL                 |                 | Section 7.1.5.83                    |
| 1F0h      | GPMC_PREFETCH_STATUS                  |                 | Section 7.1.5.84                    |
| 1F4h      | GPMC_ECC_CONFIG                       |                 | Section 7.1.5.85                    |
| 1F8h      | GPMC_ECC_CONTROL                      |                 | Section 7.1.5.86                    |
| 1FCh      | GPMC_ECC_SIZE_CONFIG                  |                 | Section 7.1.5.87                    |
| 200h      | GPMC_ECC1_RESULT                      |                 | Section 7.1.5.88                    |
| 204h      | GPMC_ECC2_RESULT                      |                 | Section 7.1.5.89                    |
| 208h      | GPMC_ECC3_RESULT                      |                 | Section 7.1.5.90                    |
| 20Ch      | GPMC_ECC4_RESULT                      |                 | Section 7.1.5.91                    |
| 210h      | GPMC_ECC5_RESULT                      |                 | Section 7.1.5.92                    |
| 214h      | GPMC_ECC6_RESULT                      |                 | Section 7.1.5.93                    |
| 218h      | GPMC_ECC7_RESULT                      |                 | Section 7.1.5.94                    |
| 21Ch      | GPMC_ECC8_RESULT                      |                 | Section 7.1.5.95                    |
| 220h      | GPMC_ECC9_RESULT                      |                 | Section 7.1.5.96                    |
| 240h      | GPMC_BCH_RESULT0_0                    |                 | Section 7.1.5.97                    |
| 244h      | GPMC_BCH_RESULT1_0                    |                 | Section 7.1.5.98                    |
| 248h      | GPMC_BCH_RESULT2_0                    |                 | Section 7.1.5.99                    |
| 24Ch      | GPMC_BCH_RESULT3_0 GPMC_BCH_RESULT0_1 |                 | Section 7.1.5.100                   |
| 250h      |                                       |                 | Section 7.1.5.101                   |
| 254h 258h | GPMC_BCH_RESULT1_1 GPMC_BCH_RESULT2_1 |                 | Section 7.1.5.102 Section 7.1.5.103 |
| 25Ch      | GPMC_BCH_RESULT3_1                    |                 | Section 7.1.5.104                   |

<!-- image -->

<!-- image -->

Table 7-48. GPMC Registers (continued)

| Offset   | Acronym            | Section           |
|----------|--------------------|-------------------|
| 260h     | GPMC_BCH_RESULT0_2 | Section 7.1.5.105 |
| 264h     | GPMC_BCH_RESULT1_2 | Section 7.1.5.106 |
| 268h     | GPMC_BCH_RESULT2_2 | Section 7.1.5.107 |
| 26Ch     | GPMC_BCH_RESULT3_2 | Section 7.1.5.108 |
| 270h     | GPMC_BCH_RESULT0_3 | Section 7.1.5.109 |
| 274h     | GPMC_BCH_RESULT1_3 | Section 7.1.5.110 |
| 278h     | GPMC_BCH_RESULT2_3 | Section 7.1.5.111 |
| 27Ch     | GPMC_BCH_RESULT3_3 | Section 7.1.5.112 |
| 280h     | GPMC_BCH_RESULT0_4 | Section 7.1.5.113 |
| 284h     | GPMC_BCH_RESULT1_4 | Section 7.1.5.114 |
| 288h     | GPMC_BCH_RESULT2_4 | Section 7.1.5.115 |
| 28Ch     | GPMC_BCH_RESULT3_4 | Section 7.1.5.116 |
| 290h     | GPMC_BCH_RESULT0_5 | Section 7.1.5.117 |
| 294h     | GPMC_BCH_RESULT1_5 | Section 7.1.5.118 |
| 298h     | GPMC_BCH_RESULT2_5 | Section 7.1.5.119 |
| 29Ch     | GPMC_BCH_RESULT3_5 | Section 7.1.5.120 |
| 2A0h     | GPMC_BCH_RESULT0_6 | Section 7.1.5.121 |
| 2A4h     | GPMC_BCH_RESULT1_6 | Section 7.1.5.122 |
| 2A8h     | GPMC_BCH_RESULT2_6 | Section 7.1.5.123 |
| 2ACh     | GPMC_BCH_RESULT3_6 | Section 7.1.5.124 |
| 2B0h     | GPMC_BCH_RESULT0_7 | Section 7.1.5.125 |
| 2B4h     | GPMC_BCH_RESULT1_7 | Section 7.1.5.126 |
| 2B8h     | GPMC_BCH_RESULT2_7 | Section 7.1.5.127 |
| 2BCh     | GPMC_BCH_RESULT3_7 | Section 7.1.5.128 |
| 2D0h     | GPMC_BCH_SWDATA    | Section 7.1.5.129 |
| 300h     | GPMC_BCH_RESULT4_0 | Section 7.1.5.130 |
| 304h     | GPMC_BCH_RESULT5_0 | Section 7.1.5.131 |
| 308h     | GPMC_BCH_RESULT6_0 | Section 7.1.5.132 |
| 310h     | GPMC_BCH_RESULT4_1 | Section 7.1.5.133 |
| 314h     | GPMC_BCH_RESULT5_1 | Section 7.1.5.134 |
| 318h     | GPMC_BCH_RESULT6_1 | Section 7.1.5.135 |
| 320h     | GPMC_BCH_RESULT4_2 | Section 7.1.5.136 |
| 324h     | GPMC_BCH_RESULT5_2 | Section 7.1.5.137 |
| 328h     | GPMC_BCH_RESULT6_2 | Section 7.1.5.138 |
| 330h     | GPMC_BCH_RESULT4_3 | Section 7.1.5.139 |
| 334h     | GPMC_BCH_RESULT5_3 | Section 7.1.5.140 |
| 338h     | GPMC_BCH_RESULT6_3 | Section 7.1.5.141 |
| 340h     | GPMC_BCH_RESULT4_4 | Section 7.1.5.142 |
| 344h     | GPMC_BCH_RESULT5_4 | Section 7.1.5.143 |
| 348h     | GPMC_BCH_RESULT6_4 | Section 7.1.5.144 |
| 350h     | GPMC_BCH_RESULT4_5 | Section 7.1.5.145 |
| 354h     | GPMC_BCH_RESULT5_5 | Section 7.1.5.146 |
| 358h     | GPMC_BCH_RESULT6_5 | Section 7.1.5.147 |
| 360h     | GPMC_BCH_RESULT4_6 | Section 7.1.5.148 |
| 364h     | GPMC_BCH_RESULT5_6 | Section 7.1.5.149 |
| 368h     | GPMC_BCH_RESULT6_6 | Section 7.1.5.150 |
| 370h     | GPMC_BCH_RESULT4_7 | Section 7.1.5.151 |

## Table 7-48. GPMC Registers (continued)

| Offset   | Acronym            | Register Name   | Section           |
|----------|--------------------|-----------------|-------------------|
| 374h     | GPMC_BCH_RESULT5_7 |                 | Section 7.1.5.152 |
| 378h     | GPMC_BCH_RESULT6_7 |                 | Section 7.1.5.153 |

<!-- image -->

<!-- image -->

## 7.1.5.1 GPMC\_REVISION Register (offset = 0h) [reset = 0h]

GPMC\_REVISION is shown in Figure 7-47 and described in Table 7-49. The GPMC\_REVISION register contains the IP revision code.

## Figure 7-47. GPMC\_REVISION Register

| 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|---------------------------------------------------------------------------|
| REV                                                                       |
| R-0h R-0h                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-49. GPMC\_REVISION Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                          |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                      |
| 7-0   | REV      | R      | 0h      | IP revision. Major revision is [7:4]. Minor revision is [3:0]. Examples: 10h for revision 1.0, 21h for revision 2.1. |

## 7.1.5.2 GPMC\_SYSCONFIG Register (offset = 10h) [reset = 0h]

GPMC\_SYSCONFIG is shown in Figure 7-48 and described in Table 7-50.

The GPMC\_SYSCONFIG register controls the various parameters of the OCP interface.

## Figure 7-48. GPMC\_SYSCONFIG Register

| 31       | 30       | 29       | 28        | 27       | 26       | 25        | 24       |
|----------|----------|----------|-----------|----------|----------|-----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED | RESERVED | RESERVED  | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h      | R-0h     | R-0h     | R-0h      | R-0h     |
| 23       | 22       | 21       | 20        | 19       | 18       | 17        | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED | RESERVED | RESERVED  | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h      | R-0h     | R-0h     | R-0h      | R-0h     |
| 15       | 14       | 13       | 12        | 11       | 10       | 9         | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED | RESERVED | RESERVED  | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h      | R-0h     | R-0h     | R-0h      | R-0h     |
| 7        | 6        | 5        | 4         | 3        | 2        | 1         | 0        |
|          | RESERVED |          | SIDLEMODE |          | RESERVED | SOFTRESET | AUTOIDLE |
|          | R-0h     |          | R/W-0h    |          | R-0h     | R/W-0h    | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-50. GPMC\_SYSCONFIG Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                           |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                       |
| 4-3   | SIDLEMODE | R/W    | 0h      | Idle mode 0h = Force-idle. An idle request is acknowledged unconditionally 1h = No-idle. An idle request is never acknowledged 2h = Smart-idle. Acknowledgment to an idle request is given based on the internal activity of the module 3h = Reserved |
| 2     | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                       |
| 1     | SOFTRESET | R/W    | 0h      | Software reset (Set 1 to this bit triggers a module reset. This bit is automatically reset by hardware. During reads, it always returns 0). 0h = Normal mode 1h = The module is reset                                                                 |
| 0     | AUTOIDLE  | R/W    | 0h      | Internal OCP clock gating strategy. 0h = Interface clock is free-running 1h = Automatic interface clock gating strategy is applied based on the interconnect activity.                                                                                |

<!-- image -->

<!-- image -->

## 7.1.5.3 GPMC\_SYSSTATUS Register (offset = 14h) [reset = 0h]

GPMC\_SYSSTATUS is shown in Figure 7-49 and described in Table 7-51.

The GPMC\_SYSSTATUS register provides status information about the module, excluding the interrupt status information.

## Figure 7-49. GPMC\_SYSSTATUS Register

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

## Table 7-51. GPMC\_SYSSTATUS Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                   |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------|
| 31-1  | RESERVED  | R      | 0h      |                                                                                               |
| 0     | RESETDONE | R      | 0h      | Internal reset monitoring 0h (R) = Internal module reset in on-going 1h (R) = Reset completed |

## 7.1.5.4 GPMC\_IRQSTATUS Register (offset = 18h) [reset = 0h]

GPMC\_IRQSTATUS is shown in Figure 7-50 and described in Table 7-52.

The GPMC\_IRQSTATUS interrupt status register regroups all the status of the module internal events that can generate an interrupt.

Figure 7-50. GPMC\_IRQSTATUS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25                         | 24                         |
|----------|----------|----------|----------|----------|----------|----------------------------|----------------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED                   | RESERVED                   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                       | R-0h                       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17                         | 16                         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED                   | RESERVED                   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                       | R-0h                       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9                          | 8                          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | WAIT1EDGED ETECTIONSTA TUS | WAIT0EDGED ETECTIONSTA TUS |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h                     | R/W-0h                     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1                          | 0                          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | TERMINALCO UNTSTATUS       | FIFOEVENTST ATUS           |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h                     | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-52. GPMC\_IRQSTATUS Register Field Descriptions

| Bit   | Field                     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|---------------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 9     | WAIT1EDGEDETECTION STATUS | R/W    | 0h      | Status of the Wait1 Edge Detection interrupt 0h (W) = WAIT1EDGEDETECTIONSTATUS bit unchanged 0h (R) = A transition on WAIT1 input pin has not been detected 1h (W) = WAIT1EDGEDETECTIONSTATUS bit is reset 1h (R) = A transition on WAIT1 input pin has been detected                                                                                                                                                                                                                                                      |
| 8     | WAIT0EDGEDETECTION STATUS | R/W    | 0h      | Status of the Wait0 Edge Detection interrupt 0h (W) = WAIT0EDGEDETECTIONSTATUS bit unchanged 0h (R) = A transition on WAIT0 input pin has not been detected 1h (W) = WAIT0EDGEDETECTIONSTATUS bit is reset 1h (R) = A transition on WAIT0 input pin has been detected                                                                                                                                                                                                                                                      |
| 7-2   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 1     | TERMINALCOUNTSTAT US      | R/W    | 0h      | Status of the TerminalCountEvent interrupt 0h = TERMINALCOUNTSTATUS bit unchanged 1h = Indicates that CountValue is equal to 0                                                                                                                                                                                                                                                                                                                                                                                             |
| 0     | FIFOEVENTSTATUS           | R/W    | 0h      | Status of the FIFOEvent interrupt 0h (W) = FIFOEVENTSTATUS bit unchanged 0h (R) = Indicates than less than GPMC_PREFETCH_STATUS[16] FIFOTHRESHOLDSTATUS bytes are available in prefetch mode and less than FIFOTHRESHOLD bytes free places are available in write-posting mode. 1h (W) = FIFOEVENTSTATUS bit is reset 1h (R) = Indicates than at least GPMC_PREFETCH_STATUS[16] FIFOTHRESHOLDSTATUS bytes are available in prefetch mode and at least FIFOTHRESHOLD bytes free places are available in write-posting mode. |

<!-- image -->

<!-- image -->

## 7.1.5.5 GPMC\_IRQENABLE Register (offset = 1Ch) [reset = 0h]

GPMC\_IRQENABLE is shown in Figure 7-51 and described in Table 7-53.

The GPMC\_IRQENABLE interrupt enable register allows to mask/unmask the module internal sources of interrupt, on a event-by-event basis.

Figure 7-51. GPMC\_IRQENABLE Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25                         | 24                         |
|----------|----------|----------|----------|----------|----------|----------------------------|----------------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED                   | RESERVED                   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                       | R-0h                       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17                         | 16                         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED                   | RESERVED                   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                       | R-0h                       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9                          | 8                          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | WAIT1EDGED ETECTIONENA BLE | WAIT0EDGED ETECTIONENA BLE |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h                     | R/W-0h                     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1                          | 0                          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | TERMINALCO UNTEVENTEN ABLE | FIFOEVENTEN ABLE           |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h                     | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-53. GPMC\_IRQENABLE Register Field Descriptions

| Bit   | Field                     | Type   | Reset   | Description                                                                                                                                                                 |
|-------|---------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED                  | R      | 0h      |                                                                                                                                                                             |
| 9     | WAIT1EDGEDETECTION ENABLE | R/W    | 0h      | Enables the Wait1 Edge Detection interrupt 0h = Wait1EdgeDetection interrupt is masked 1h = Wait1EdgeDetection event generates an interrupt if occurs                       |
| 8     | WAIT0EDGEDETECTION ENABLE | R/W    | 0h      | Enables the Wait0 Edge Detection interrupt 0h = Wait0EdgeDetection interrupt is masked 1h = Wait0EdgeDetection event generates an interrupt if occurs                       |
| 7-2   | RESERVED                  | R      | 0h      |                                                                                                                                                                             |
| 1     | TERMINALCOUNTEVEN TENABLE | R/W    | 0h      | Enables TerminalCountEvent interrupt issuing in pre-fetch or write posting mode 0h = TerminalCountEvent interrupt is masked 1h = TerminalCountEvent interrupt is not masked |
| 0     | FIFOEVENTENABLE           | R/W    | 0h      | Enables the FIFOEvent interrupt 0h = FIFOEvent interrupt is masked 1h = FIFOEvent interrupt is not masked                                                                   |

## 7.1.5.6 GPMC\_TIMEOUT\_CONTROL Register (offset = 40h) [reset = 0h]

GPMC\_TIMEOUT\_CONTROL is shown in Figure 7-52 and described in Table 7-54.

The GPMC\_TIMEOUT\_CONTROL register allows the user to set the start value of the timeout counter

| Figure 7-52. GPMC_TIMEOUT_CONTROL Register   | Figure 7-52. GPMC_TIMEOUT_CONTROL Register   | Figure 7-52. GPMC_TIMEOUT_CONTROL Register   | Figure 7-52. GPMC_TIMEOUT_CONTROL Register   | Figure 7-52. GPMC_TIMEOUT_CONTROL Register   | Figure 7-52. GPMC_TIMEOUT_CONTROL Register   | Figure 7-52. GPMC_TIMEOUT_CONTROL Register   | Figure 7-52. GPMC_TIMEOUT_CONTROL Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| RESERVED                                     | RESERVED                                     | RESERVED                                     | RESERVED                                     | RESERVED                                     | RESERVED                                     | RESERVED                                     | RESERVED                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
| RESERVED                                     | RESERVED                                     | RESERVED                                     | RESERVED                                     | RESERVED                                     | RESERVED                                     | RESERVED                                     | RESERVED                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| RESERVED                                     | RESERVED                                     | RESERVED                                     | TIMEOUTSTARTVALUE                            | TIMEOUTSTARTVALUE                            | TIMEOUTSTARTVALUE                            | TIMEOUTSTARTVALUE                            | TIMEOUTSTARTVALUE                            |
| R-0h R/W-0h                                  | R-0h R/W-0h                                  | R-0h R/W-0h                                  | R-0h R/W-0h                                  | R-0h R/W-0h                                  | R-0h R/W-0h                                  | R-0h R/W-0h                                  | R-0h R/W-0h                                  |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| TIMEOUTSTARTVALUE                            | TIMEOUTSTARTVALUE                            | TIMEOUTSTARTVALUE                            | TIMEOUTSTARTVALUE                            | RESERVED                                     | RESERVED                                     | RESERVED                                     | TIMEOUTENA BLE                               |
| R/W-0h R-0h                                  | R/W-0h R-0h                                  | R/W-0h R-0h                                  | R/W-0h R-0h                                  | R/W-0h R-0h                                  | R/W-0h R-0h                                  | R/W-0h R-0h                                  | R/W-0h                                       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-54. GPMC\_TIMEOUT\_CONTROL Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                   |
|-------|-------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED          | R      | 0h      |                                                                                                                                                               |
| 12-4  | TIMEOUTSTARTVALUE | R/W    | 0h      | Start value of the time-out counter (000 corresponds to 0 GPMC.FCLK cycle, 1h corresponds to 1 GPMC.FCLK cycle, and 1FFh corresponds to 511 GPMC.FCLK cycles) |
| 3-1   | RESERVED          | R      | 0h      |                                                                                                                                                               |
| 0     | TIMEOUTENABLE     | R/W    | 0h      | Enable bit of the TimeOut feature 0h = TimeOut feature is disabled 1h = TimeOut feature is enabled                                                            |

<!-- image -->

<!-- image -->

## 7.1.5.7 GPMC\_ERR\_ADDRESS Register (offset = 44h) [reset = 0h]

GPMC\_ERR\_ADDRESS is shown in Figure 7-53 and described in Table 7-55.

The GPMC\_ERR\_ADDRESS register stores the address of the illegal access when an error occurs.

## Figure 7-53. GPMC\_ERR\_ADDRESS Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| RESERVED   | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD |
| R-0h       | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD | ILLEGALADD |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-55. GPMC\_ERR\_ADDRESS Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                     |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED   | R      | 0h      |                                                                                                                 |
| 30-0  | ILLEGALADD | R/W    | 0h      | Address of illegal access: A30 (0 for memory region, 1 for GPMC register region) and A29 to A0 (1GByte maximum) |

## 7.1.5.8 GPMC\_ERR\_TYPE Register (offset = 48h) [reset = 0h]

GPMC\_ERR\_TYPE is shown in Figure 7-54 and described in Table 7-56.

The GPMC\_ERR\_TYPE register stores the type of error when an error occurs.

## Figure 7-54. GPMC\_ERR\_TYPE Register

| 31       | 30       | 29       | 28               | 27                | 26            | 25          | 24          |
|----------|----------|----------|------------------|-------------------|---------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED         | RESERVED          | RESERVED      | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h             | R-0h              | R-0h          | R-0h        | R-0h        |
| 23       | 22       | 21       | 20               | 19                | 18            | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED         | RESERVED          | RESERVED      | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h             | R-0h              | R-0h          | R-0h        | R-0h        |
| 15       | 14       | 13       | 12               | 11                | 10            | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED         | RESERVED          | ILLEGALMCMD   | ILLEGALMCMD | ILLEGALMCMD |
| R-0h     | R-0h     | R-0h     | R-0h             | R-0h              | R/W-0h        | R/W-0h      | R/W-0h      |
| 7        | 6        | 5        | 4                | 3                 | 2             | 1           | 0           |
|          | RESERVED |          | ERRORNOTSU PPADD | ERRORNOTSU PPMCMD | ERRORTIMEO UT | RESERVED    | ERRORVALID  |
|          | R-0h     |          | R/W-0h           | R/W-0h            | R/W-0h        | R-0h        | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-56. GPMC\_ERR\_TYPE Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                  |
|-------|------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-11 | RESERVED         | R      | 0h      |                                                                                                                                                                              |
| 10-8  | ILLEGALMCMD      | R/W    | 0h      | System Command of the transaction that caused the error                                                                                                                      |
| 7-5   | RESERVED         | R      | 0h      |                                                                                                                                                                              |
| 4     | ERRORNOTSUPPADD  | R/W    | 0h      | Not supported Address error 0h = No error occurs 1h = The error is due to a non supported Address                                                                            |
| 3     | ERRORNOTSUPPMCMD | R/W    | 0h      | Not supported Command error 0h = No error occurs 1h = The error is due to a non supported Command                                                                            |
| 2     | ERRORTIMEOUT     | R/W    | 0h      | Time-out error 0h = No error occurs 1h = The error is due to a time out                                                                                                      |
| 1     | RESERVED         | R      | 0h      |                                                                                                                                                                              |
| 0     | ERRORVALID       | R/W    | 0h      | Error validity status - Must be explicitly cleared with a write 1 transaction 0h = All error fields no longer valid 1h = Error detected and logged in the other error fields |

<!-- image -->

<!-- image -->

## 7.1.5.9 GPMC\_CONFIG Register (offset = 50h) [reset = 0h]

GPMC\_CONFIG is shown in Figure 7-55 and described in Table 7-57. The configuration register allows global configuration of the GPMC.

## Figure 7-55. GPMC\_CONFIG Register

| 31       | 30       | 29       | 28            | 27       | 26       | 25                | 24                    |
|----------|----------|----------|---------------|----------|----------|-------------------|-----------------------|
| RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED | RESERVED | RESERVED          | RESERVED              |
| R-0h     | R-0h     | R-0h     | R-0h          | R-0h     | R-0h     | R-0h              | R-0h                  |
| 23       | 22       | 21       | 20            | 19       | 18       | 17                | 16                    |
| RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED | RESERVED | RESERVED          | RESERVED              |
| R-0h     | R-0h     | R-0h     | R-0h          | R-0h     | R-0h     | R-0h              | R-0h                  |
| 15       | 14       | 13       | 12            | 11       | 10       | 9                 | 8                     |
| RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED | RESERVED | WAIT1PINPOL ARITY | WAIT0PINPOL ARITY     |
| R-0h     | R-0h     | R-0h     | R-0h          | R-0h     | R-0h     | R/W-0h            | R/W-0h                |
| 7        | 6        | 5        | 4             | 3        | 2        | 1                 | 0                     |
|          | RESERVED |          | WRITEPROTE CT | RESERVED | RESERVED | LIMITEDADDR ESS   | NANDFORCEP OSTEDWRITE |
|          | R-0h     |          | R/W-0h        | R-0h     | R-0h     | R/W-0h            | R/W-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-57. GPMC\_CONFIG Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                  |
|-------|-----------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED              | R      | 0h      |                                                                                                                                              |
| 9     | WAIT1PINPOLARITY      | R/W    | 0h      | Selects the polarity of input pin WAIT1. 0h = WAIT1 active low 1h = WAIT1 active high                                                        |
| 8     | WAIT0PINPOLARITY      | R/W    | 0h      | Selects the polarity of input pin WAIT0. 0h = WAIT0 active low 1h = WAIT0 active high                                                        |
| 7-5   | RESERVED              | R      | 0h      |                                                                                                                                              |
| 4     | WRITEPROTECT          | R/W    | 0h      | Controls the WP output pin level. 0h = WP output pin is low 1h = WP output pin is high                                                       |
| 3-2   | RESERVED              | R      | 0h      |                                                                                                                                              |
| 1     | LIMITEDADDRESS        | R/W    | 0h      | Limited Address device support. 0h = No effect. GPMC controls all addresses. 1h = A26-A11 are not modified during an external memory access. |
| 0     | NANDFORCEPOSTEDW RITE | R/W    | 0h      | 0h = Disables Force Posted Write 1h = Enables Force Posted Write                                                                             |

## 7.1.5.10 GPMC\_STATUS Register (offset = 54h) [reset = 0h]

GPMC\_STATUS is shown in Figure 7-56 and described in Table 7-58.

The status register provides global status bits of the GPMC.

## Figure 7-56. GPMC\_STATUS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25          | 24                       |
|----------|----------|----------|----------|----------|----------|-------------|--------------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED                 |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h                     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17          | 16                       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED                 |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h                     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9           | 8                        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | WAIT1STATUS | WAIT0STATUS              |
|          |          |          |          |          |          | R/W-0h      | R/W-0h                   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1           | 0                        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | EMPTYWRITE BUFFERSTAT US |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R/W-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-58. GPMC\_STATUS Register Field Descriptions

| Bit   | Field                   | Type   | Reset   | Description                                                                                                                                    |
|-------|-------------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED                | R      | 0h      |                                                                                                                                                |
| 9     | WAIT1STATUS             | R/W    | 0h      | Is a copy of input pin WAIT1. (Reset value is WAIT1 input pin sampled at IC reset) 0h = WAIT1 asserted (inactive state) 1h = WAIT1 de-asserted |
| 8     | WAIT0STATUS             | R/W    | 0h      | Is a copy of input pin WAIT0. (Reset value is WAIT0 input pin sampled at IC reset) 0h = WAIT0 asserted (inactive state) 1h = WAIT0 de-asserted |
| 7-1   | RESERVED                | R      | 0h      |                                                                                                                                                |
| 0     | EMPTYWRITEBUFFERS TATUS | R/W    | 0h      | Stores the empty status of the write buffer 0h = Write Buffer is not empty 1h = Write Buffer is empty                                          |

<!-- image -->

<!-- image -->

## 7.1.5.11 GPMC\_CONFIG1\_0 Register (offset = 60h) [reset = 0h]

GPMC\_CONFIG1\_0 is shown in Figure 7-57 and described in Table 7-59.

The configuration 1 register sets signal control parameters per chip select.

## Figure 7-57. GPMC\_CONFIG1\_0 Register

| 31                         | 30                  | 29                   | 28                   | 27                 | 26                 | 25                | 24                         |
|----------------------------|---------------------|----------------------|----------------------|--------------------|--------------------|-------------------|----------------------------|
| WRAPBURST                  | READMULTIPL E       | READTYPE             | WRITEMULTIP LE       | WRITETYPE          | CLKACTIVATIONTIME  | CLKACTIVATIONTIME | ATTACHEDDE VICEPAGELEN GTH |
| R/W-0h                     | R/W-0h              | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 23                         | 22                  | 21                   | 20                   | 19                 | 18                 | 17                | 16                         |
| ATTACHEDDE VICEPAGELEN GTH | WAITREADMO NITORING | WAITWRITEM ONITORING | RESERVED             | WAITMONITORINGTIME | WAITMONITORINGTIME | WAITPINSELECT     | WAITPINSELECT              |
| R/W-0h                     | R/W-0h              | R/W-0h               | R-0h                 | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 15                         | 14                  | 13                   | 12                   | 11                 | 10                 | 9                 | 8                          |
| RESERVED                   | RESERVED            | DEVICESIZE           | DEVICESIZE           | DEVICETYPE         | DEVICETYPE         | MUXADDDATA        | MUXADDDATA                 |
| R-0h                       | R-0h                | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 7                          | 6                   | 5                    | 4                    | 3                  | 2                  | 1                 | 0                          |
| RESERVED                   | RESERVED            | RESERVED             | TIMEPARAGR ANULARITY | RESERVED           | RESERVED           | GPMCFCLKDIVIDER   | GPMCFCLKDIVIDER            |
| R-0h                       | R-0h                | R-0h                 | R/W-0h               | R-0h               | R-0h               | R/W-0h            | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-59. GPMC\_CONFIG1\_0 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                          |
|-------|-------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | WRAPBURST         | R/W    | 0h      | Enables the wrapping burst capability. Must be set if the attached device is configured in wrapping burst 0h = Synchronous wrapping burst not supported 1h = Synchronous wrapping burst supported                                                                    |
| 30    | READMULTIPLE      | R/W    | 0h      | Selects the read single or multiple access 0h = single access 1h = multiple access (burst if synchronous, page if asynchronous)                                                                                                                                      |
| 29    | READTYPE          | R/W    | 0h      | Selects the read mode operation 0h = Read Asynchronous 1h = Read Synchronous                                                                                                                                                                                         |
| 28    | WRITEMULTIPLE     | R/W    | 0h      | Selects the write single or multiple access 0h = Single access 1h = Multiple access (burst if synchronous, considered as single if asynchronous)                                                                                                                     |
| 27    | WRITETYPE         | R/W    | 0h      | Selects the write mode operation 0h = Write Asynchronous 1h = Write Synchronous                                                                                                                                                                                      |
| 26-25 | CLKACTIVATIONTIME | R/W    | 0h      | Output GPMC.CLK activation time 0h = First rising edge of GPMC_CLK at start access time 1h = First rising edge of GPMC_CLK one GPMC_FCLK cycle after start access time 2h = First rising edge of GPMC_CLK two GPMC_FCLK cycles after start access time 3h = Reserved |

<!-- image -->

## Table 7-59. GPMC\_CONFIG1\_0 Register Field Descriptions (continued)

| Bit   | Field                     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                           |
|-------|---------------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 24-23 | ATTACHEDDEVICEPAG ELENGTH | R/W    | 0h      | Specifies the attached device page (burst) length (1 Word = Interface size) 0h = 4 Words 1h = 8 Words 2h = 16 Words 3h = Reserved                                                                                                                                                                                                     |
| 22    | WAITREADMONITORING        | R/W    | 0h      | Selects the Wait monitoring configuration for Read accesses. 0h = WAIT pin is not monitored for read accesses 1h = WAIT pin is monitored for read accesses                                                                                                                                                                            |
| 21    | WAITWRITEMONITORIN G      | R/W    | 0h      | Selects the Wait monitoring configuration for Write accesses 0h = WAIT pin is not monitored for write accesses 1h = WAIT pin is monitored for write accesses                                                                                                                                                                          |
| 20    | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 19-18 | WAITMONITORINGTIME        | R/W    | 0h      | Selects input pin Wait monitoring time 0h = WAIT pin is monitored with valid data 1h = WAIT pin is monitored one GPMC_CLK cycle before valid data 2h = WAIT pin is monitored two GPMC_CLK cycle before valid data 3h = Reserved                                                                                                       |
| 17-16 | WAITPINSELECT             | R/W    | 0h      | Selects the input WAIT pin for this chip select. 0h = WAIT input pin is WAIT0 1h = WAIT input pin is WAIT1 2h = Reserved 3h = Reserved                                                                                                                                                                                                |
| 15-14 | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 13-12 | DEVICESIZE                | R/W    | 0h      | Selects the device size attached (Reset value is SYSBOOT[8] input pin sampled at IC reset for CS[0] (active low) and 01 for CS[1] to CS[6] (active low)). 0h = 8 bit 1h = 16 bit 2h = Reserved 3h = Reserved                                                                                                                          |
| 11-10 | DEVICETYPE                | R/W    | 0h      | Selects the attached device type 0h = NOR Flash like, asynchronous and synchronous devices 1h = Reserved 2h = NAND Flash like devices, stream mode 3h = Reserved                                                                                                                                                                      |
| 9-8   | MUXADDDATA                | R/W    | 0h      | Enables the Address and data multiplexed protocol (Reset value is SYSBOOT[11] and SYSBOOT[10] input pins sampled at IC reset for CS[0] (active low) and 0 for CS[1] to CS[6] (active low)). 0h = Non-multiplexed attached device 1h = AAD-multiplexed protocol device 2h = Address and data multiplexed attached device 3h = Reserved |
| 7-5   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 4     | TIMEPARAGRANULARIT Y      | R/W    | 0h      | Signals timing latencies scalar factor (Rd/WRCycleTime, AccessTime, PageBurstAccessTime, CSOnTime, CSRd/WrOffTime, ADVOnTime, ADVRd/WrOffTime, OEOnTime, OEOffTime, WEOnTime, WEOffTime, Cycle2CycleDelay, BusTurnAround, TimeOutStartValue) 0h = x1 latencies 1h = x2 latencies                                                      |
| 3-2   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |

<!-- image -->

## Table 7-59. GPMC\_CONFIG1\_0 Register Field Descriptions (continued)

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                               |
|-------|-----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | GPMCFCLKDIVIDER | R/W    | 0h      | Divides the GPMC.FCLK clock 0h = GPMC_CLK frequency = GPMC_FCLK frequency 1h = GPMC_CLK frequency = GPMC_FCLK frequency/2 2h = GPMC_CLK frequency = GPMC_FCLK frequency/3 3h = GPMC_CLK frequency = GPMC_FCLK frequency/4 |

## 7.1.5.12 GPMC\_CONFIG2\_0 Register (offset = 64h) [reset = 0h]

GPMC\_CONFIG2\_0 is shown in Figure 7-58 and described in Table 7-60.

Chip-select signal timing parameter configuration.

Figure 7-58. GPMC\_CONFIG2\_0 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| CSEXTRADEL AY        | RESERVED             | RESERVED             | RESERVED             | CSONTIME             | CSONTIME             | CSONTIME             | CSONTIME             |
| R/W-0h               | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-60. GPMC\_CONFIG2\_0 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 20-16 | CSWROFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                     |
| 15-13 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 12-8  | CSRDOFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                      |
| 7     | CSEXTRADELAY | R/W    | 0h      | CS# Add Extra Half GPMC.FCLK cycle 0h = CS i Timing control signal is not delayed 1h = CS i Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 3-0   | CSONTIME     | R/W    | 0h      | CS# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 15 GPMC_FCLK cycles                                           |

<!-- image -->

<!-- image -->

## 7.1.5.13 GPMC\_CONFIG3\_0 Register (offset = 68h) [reset = 0h]

GPMC\_CONFIG3\_0 is shown in Figure 7-59 and described in Table 7-61. ADV# signal timing parameter configuration.

Figure 7-59. GPMC\_CONFIG3\_0 Register

| 31             | 30                 | 29                 | 28                 | 27            | 26                 | 25                 | 24                 |
|----------------|--------------------|--------------------|--------------------|---------------|--------------------|--------------------|--------------------|
| RESERVED       | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | RESERVED      | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME |
| R-0h           | R/W-0h             | R/W-0h             | R/W-0h             | R-0h          | R/W-0h             | R/W-0h             | R/W-0h             |
| 23             | 22                 | 21                 | 20                 | 19            | 18                 | 17                 | 16                 |
| RESERVED       | RESERVED           | RESERVED           | ADVWROFFTIME       | ADVWROFFTIME  | ADVWROFFTIME       | ADVWROFFTIME       | ADVWROFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 15             | 14                 | 13                 | 12                 | 11            | 10                 | 9                  | 8                  |
| RESERVED       | RESERVED           | RESERVED           | ADVRDOFFTIME       | ADVRDOFFTIME  | ADVRDOFFTIME       | ADVRDOFFTIME       | ADVRDOFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 7              | 6                  | 5                  | 4                  | 3             | 2                  | 1                  | 0                  |
| ADVEXTRADE LAY | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVONTIME     | ADVONTIME          | ADVONTIME          | ADVONTIME          |
| R/W-0h         | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-61. GPMC\_CONFIG3\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                         |
|-------|---------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 30-28 | ADVAADMUXWROFFTIM E | R/W    | 0h      | ADV# de-assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                     |
| 27    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 26-24 | ADVAADMUXRDOFFTIM E | R/W    | 0h      | ADV# assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                        |
| 23-21 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 20-16 | ADVWROFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                             |
| 15-13 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 12-8  | ADVRDOFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                              |
| 7     | ADVEXTRADELAY       | R/W    | 0h      | ADV# Add Extra Half GPMC.FCLK cycle 0h = ADV (active low) Timing control signal is not delayed 1h = ADV (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | ADVAADMUXONTIME     | R/W    | 0h      | ADV# assertion for first address phase when using the AAD- Multiplexed protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                               |

<!-- image -->

## Table 7-61. GPMC\_CONFIG3\_0 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------|
| 3-0   | ADVONTIME | R/W    | 0h      | ADV# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles |

<!-- image -->

## 7.1.5.14 GPMC\_CONFIG4\_0 Register (offset = 6Ch) [reset = 0h]

GPMC\_CONFIG4\_0 is shown in Figure 7-60 and described in Table 7-62. WE# and OE# signals timing parameter configuration.

## Figure 7-60. GPMC\_CONFIG4\_0 Register

| 31              | 30              | 29              | 28             | 27          | 26          | 25          | 24          |
|-----------------|-----------------|-----------------|----------------|-------------|-------------|-------------|-------------|
|                 | RESERVED        |                 | WEOFFTIME      | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   |
|                 | R-0h            |                 | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 23              | 22              | 21              | 20             | 19          | 18          | 17          | 16          |
| WEEXTRADEL AY   | RESERVED        | RESERVED        | RESERVED       | WEONTIME    | WEONTIME    | WEONTIME    | WEONTIME    |
| R/W-0h          | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h    | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h |
| 15              | 14              | 13              | 12             | 11          | 10          | 9           | 8           |
| OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEOFFTIME      | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7               | 6               | 5               | 4              | 3           | 2           | 1           | 0           |
| OEEXTRADEL AY   | OEAADMUXONTIME  | OEAADMUXONTIME  | OEAADMUXONTIME | OEONTIME    | OEONTIME    | OEONTIME    | OEONTIME    |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-62. GPMC\_CONFIG4\_0 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                      |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 28-24 | WEOFFTIME       | R/W    | 0h      | WE# de-assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                                              |
| 23    | WEEXTRADELAY    | R/W    | 0h      | WE# Add Extra Half GPMC.FCLK cycle 0h = WE (active low) Timing control signal is not delayed 1h = WE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 22-20 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 19-16 | WEONTIME        | R/W    | 0h      | WE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                  |
| 15-13 | OEAADMUXOFFTIME | R/W    | 0h      | OE# de-assertion time for the first address phase in an AAD- Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                            |
| 12-8  | OEOFFTIME       | R/W    | 0h      | OE# de-assertion time from start cycle time 0h = (R/W) 0 GPMC_FCLK cycle 1h = (R/W) 1 GPMC_FCLK cycle 1Fh = (R/W) 31 GPMC_FCLK cycles                                            |
| 7     | OEEXTRADELAY    | R/W    | 0h      | OE# Add Extra Half GPMC.FCLK cycle 0h = OE (active low) Timing control signal is not delayed 1h = OE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |

<!-- image -->

## Table 7-62. GPMC\_CONFIG4\_0 Register Field Descriptions (continued)

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | OEAADMUXONTIME | R/W    | 0h      | OE# assertion time for the first address phase in an AAD-Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles |
| 3-0   | OEONTIME       | R/W    | 0h      | OE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                   |

<!-- image -->

## 7.1.5.15 GPMC\_CONFIG5\_0 Register (offset = 70h) [reset = 0h]

GPMC\_CONFIG5\_0 is shown in Figure 7-61 and described in Table 7-63. RdAccessTime and CycleTime timing parameters configuration.

## Figure 7-61. GPMC\_CONFIG5\_0 Register

| 31          | 30          | 29          | 28           | 27                  | 26                  | 25                  | 24                  |
|-------------|-------------|-------------|--------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED    | RESERVED    | RESERVED    |              | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME |
| R-0h        | R-0h        | R-0h        |              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 23          | 22          | 21          | 20           | 19                  | 18                  | 17                  | 16                  |
| RESERVED    | RESERVED    | RESERVED    | RDACCESSTIME | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 15          | 14          | 13          | 12           | 11                  | 10                  | 9                   | 8                   |
| RESERVED    | RESERVED    | RESERVED    | WRCYCLETIME  | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 7           | 6           | 5           | 4            | 3                   | 2                   | 1                   | 0                   |
| RESERVED    | RESERVED    | RESERVED    | RDCYCLETIME  | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         |
| R-0h        | R-0h        | R-0h        | R/W-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-63. GPMC\_CONFIG5\_0 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                 |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED             | R      | 0h      |                                                                                                                             |
| 27-24 | PAGEBURSTACCESSTI ME | R/W    | 0h      | Delay between successive words in a multiple access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles  |
| 23-21 | RESERVED             | R      | 0h      |                                                                                                                             |
| 20-16 | RDACCESSTIME         | R/W    | 0h      | Delay between start cycle time and first data valid 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 15-13 | RESERVED             | R      | 0h      |                                                                                                                             |
| 12-8  | WRCYCLETIME          | R/W    | 0h      | Total write cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                              |
| 7-5   | RESERVED             | R      | 0h      |                                                                                                                             |
| 4-0   | RDCYCLETIME          | R/W    | 0h      | Total read cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                               |

## 7.1.5.16 GPMC\_CONFIG6\_0 Register (offset = 74h) [reset = F070000h]

GPMC\_CONFIG6\_0 is shown in Figure 7-62 and described in Table 7-64.

WrAccessTime, WrDataOnADmuxBus, Cycle2Cycle, and BusTurnAround parameters configuration

Figure 7-62. GPMC\_CONFIG6\_0 Register

| 31                   | 30                   | 29       | 28               | 27               | 26               | 25               | 24               |
|----------------------|----------------------|----------|------------------|------------------|------------------|------------------|------------------|
| RESERVED             | RESERVED             | RESERVED | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     |
| R-0h                 | R-0h                 | R-0h     | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           |
| 23                   | 22                   | 21       | 20               | 19               | 18               | 17               | 16               |
| RESERVED             | RESERVED             | RESERVED | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS |
| R-0h                 | R-0h                 | R-0h     | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           |
| 15                   | 14                   | 13       | 12               | 11               | 10               | 9                | 8                |
| RESERVED             | RESERVED             | RESERVED | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY |
| R-0h                 | R-0h                 | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 7                    | 6                    | 5        | 4                | 3                | 2                | 1                | 0                |
| CYCLE2CYCL ESAMECSEN | CYCLE2CYCL EDIFFCSEN | RESERVED |                  | BUSTURNAROUND    | BUSTURNAROUND    | BUSTURNAROUND    |                  |
| R/W-0h               | R/W-0h               | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-64. GPMC\_CONFIG6\_0 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                                                                                                                            |
|-------|----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED             | R      | 0h      | Reset value for bit 31 is 1.                                                                                                                                                                                                                           |
| 28-24 | WRACCESSTIME         | R/W    | Fh      | Delay from StartAccessTime to the GPMC.FCLK rising edge corresponding the the GPMC.CLK rising edge used by the attached memory for the first data capture. Reset value is 0xF. 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 23-20 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 19-16 | WRDATAONADMUXBUS     | R/W    | 7h      | Specifies on which GPMC.FCLK rising edge the first data of the synchronous burst write is driven in the add/data multiplexed bus. Reset value is 0x7.                                                                                                  |
| 15-12 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 11-8  | CYCLE2CYCLEDELAY     | R/W    | 0h      | Chip select high pulse delay between two successive accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                                                                    |
| 7     | CYCLE2CYCLESAMECS EN | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to the same chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                        |
| 6     | CYCLE2CYCLEDIFFCSE N | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to a different chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                     |
| 5-4   | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 3-0   | BUSTURNAROUND        | R/W    | 0h      | Bus turn around latency between two successive accesses to the same chip-select (read to write) or to a different chip-select (read to read and read to write) 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                  |

<!-- image -->

<!-- image -->

## 7.1.5.17 GPMC\_CONFIG7\_0 Register (offset = 78h) [reset = 0h]

GPMC\_CONFIG7\_0 is shown in Figure 7-63 and described in Table 7-65.

Chip-select address mapping configuration.

## Figure 7-63. GPMC\_CONFIG7\_0 Register

| 31       | 30       | 29       | 28       | 27          | 26          | 25          | 24          |
|----------|----------|----------|----------|-------------|-------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 23       | 22       | 21       | 20       | 19          | 18          | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11          | 10          | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | MASKADDRESS | MASKADDRESS | MASKADDRESS | MASKADDRESS |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7        | 6        | 5        | 4        | 3           | 2           | 1           | 0           |
| RESERVED | CSVALID  |          |          | BASEADDRESS |             |             |             |
| R-0h     | R/W-0h   |          |          | R/W-0h      |             |             |             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-65. GPMC\_CONFIG7\_0 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                          |
|-------|-------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 11-8  | MASKADDRESS | R/W    | 0h      | Chip-select mask address. Values not listed must be avoided as they create holes in the chip- select address space. 0h = Chip-select size of 256 Mbytes 8h = Chip-select size of 128 Mbytes Ch = Chip-select size of 64 Mbytes Eh = Chip-select size of 32 Mbytes Fh = Chip-select size of 16 Mbytes |
| 7     | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 6     | CSVALID     | R/W    | 0h      | Chip-select enable (reset value is 1 for CS[0] (active low) and 0 for CS[1] to CS[5] (active low)). 0h = CS (active low) disabled 1h = CS (active low) enabled                                                                                                                                       |
| 5-0   | BASEADDRESS | R/W    | 0h      | Chip-select base address. CSi base address where i = 0 to 6 (16 Mbytes minimum granularity). Bits 5 to 0 correspond to A29, A28, A27, A26, A25, and A24.                                                                                                                                             |

## 7.1.5.18 GPMC\_NAND\_COMMAND\_0 Register (offset = 7Ch) [reset = 0h]

GPMC\_NAND\_COMMAND\_0 is shown in Figure 7-64 and described in Table 7-66.

This register is not a true register, just an address location.

## Figure 7-64. GPMC\_NAND\_COMMAND\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_COMMAND_0   |
|------|--------------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-66. GPMC\_NAND\_COMMAND\_0 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_COMMAN D_0 | W      | 0h      | Writing data at the GPMC_NAND_COMMAND_0 location places the data as the NAND command value on the bus, using a regular asynchronous write access. |

<!-- image -->

<!-- image -->

## 7.1.5.19 GPMC\_NAND\_ADDRESS\_0 Register (offset = 80h) [reset = 0h]

GPMC\_NAND\_ADDRESS\_0 is shown in Figure 7-65 and described in Table 7-67.

This register is not a true register, just an address location.

## Figure 7-65. GPMC\_NAND\_ADDRESS\_0 Register

22

21

20

19

18

17

16

15

14

13

12

GPMC\_NAND\_ADDRESS\_0

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-67. GPMC\_NAND\_ADDRESS\_0 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                               |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_ADDRESS _0 | W      | 0h      | Writing data at the GPMC_NAND_ADDRESS_0 location places the data as the NAND partial address value on the bus, using a regular asynchronous write access. |

11

10

9

8

31

30

29

28

27

26

25

24

23

7

6

5

4

3

2

1

0

## 7.1.5.20 GPMC\_NAND\_DATA\_0 Register (offset = 84h) [reset = 0h]

GPMC\_NAND\_DATA\_0 is shown in Figure 7-66 and described in Table 7-68.

This register is not a true register, just an address location.

## Figure 7-66. GPMC\_NAND\_DATA\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_DATA_0   |
|------|-----------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-68. GPMC\_NAND\_DATA\_0 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                             |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_DATA_0 | R/W    | 0h      | Reading data from the GPMC_NAND_DATA_0 location or from any location in the associated chip-select memory region activates an asynchronous read access. |

<!-- image -->

<!-- image -->

## 7.1.5.21 GPMC\_CONFIG1\_1 Register (offset = 90h) [reset = 0h]

GPMC\_CONFIG1\_1 is shown in Figure 7-67 and described in Table 7-69.

The configuration 1 register sets signal control parameters per chip select.

## Figure 7-67. GPMC\_CONFIG1\_1 Register

| 31                         | 30                  | 29                   | 28                   | 27                 | 26                 | 25                | 24                         |
|----------------------------|---------------------|----------------------|----------------------|--------------------|--------------------|-------------------|----------------------------|
| WRAPBURST                  | READMULTIPL E       | READTYPE             | WRITEMULTIP LE       | WRITETYPE          | CLKACTIVATIONTIME  | CLKACTIVATIONTIME | ATTACHEDDE VICEPAGELEN GTH |
| R/W-0h                     | R/W-0h              | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 23                         | 22                  | 21                   | 20                   | 19                 | 18                 | 17                | 16                         |
| ATTACHEDDE VICEPAGELEN GTH | WAITREADMO NITORING | WAITWRITEM ONITORING | RESERVED             | WAITMONITORINGTIME | WAITMONITORINGTIME | WAITPINSELECT     | WAITPINSELECT              |
| R/W-0h                     | R/W-0h              | R/W-0h               | R-0h                 | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 15                         | 14                  | 13                   | 12                   | 11                 | 10                 | 9                 | 8                          |
| RESERVED                   | RESERVED            | DEVICESIZE           | DEVICESIZE           | DEVICETYPE         | DEVICETYPE         | MUXADDDATA        | MUXADDDATA                 |
| R-0h                       | R-0h                | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 7                          | 6                   | 5                    | 4                    | 3                  | 2                  | 1                 | 0                          |
| RESERVED                   | RESERVED            | RESERVED             | TIMEPARAGR ANULARITY | RESERVED           | RESERVED           | GPMCFCLKDIVIDER   | GPMCFCLKDIVIDER            |
| R-0h                       | R-0h                | R-0h                 | R/W-0h               | R-0h               | R-0h               | R/W-0h            | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-69. GPMC\_CONFIG1\_1 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                          |
|-------|-------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | WRAPBURST         | R/W    | 0h      | Enables the wrapping burst capability. Must be set if the attached device is configured in wrapping burst 0h = Synchronous wrapping burst not supported 1h = Synchronous wrapping burst supported                                                                    |
| 30    | READMULTIPLE      | R/W    | 0h      | Selects the read single or multiple access 0h = single access 1h = multiple access (burst if synchronous, page if asynchronous)                                                                                                                                      |
| 29    | READTYPE          | R/W    | 0h      | Selects the read mode operation 0h = Read Asynchronous 1h = Read Synchronous                                                                                                                                                                                         |
| 28    | WRITEMULTIPLE     | R/W    | 0h      | Selects the write single or multiple access 0h = Single access 1h = Multiple access (burst if synchronous, considered as single if asynchronous)                                                                                                                     |
| 27    | WRITETYPE         | R/W    | 0h      | Selects the write mode operation 0h = Write Asynchronous 1h = Write Synchronous                                                                                                                                                                                      |
| 26-25 | CLKACTIVATIONTIME | R/W    | 0h      | Output GPMC.CLK activation time 0h = First rising edge of GPMC_CLK at start access time 1h = First rising edge of GPMC_CLK one GPMC_FCLK cycle after start access time 2h = First rising edge of GPMC_CLK two GPMC_FCLK cycles after start access time 3h = Reserved |

<!-- image -->

## Table 7-69. GPMC\_CONFIG1\_1 Register Field Descriptions (continued)

| Bit   | Field                     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                           |
|-------|---------------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 24-23 | ATTACHEDDEVICEPAG ELENGTH | R/W    | 0h      | Specifies the attached device page (burst) length (1 Word = Interface size) 0h = 4 Words 1h = 8 Words 2h = 16 Words 3h = Reserved                                                                                                                                                                                                     |
| 22    | WAITREADMONITORING        | R/W    | 0h      | Selects the Wait monitoring configuration for Read accesses. 0h = WAIT pin is not monitored for read accesses 1h = WAIT pin is monitored for read accesses                                                                                                                                                                            |
| 21    | WAITWRITEMONITORIN G      | R/W    | 0h      | Selects the Wait monitoring configuration for Write accesses 0h = WAIT pin is not monitored for write accesses 1h = WAIT pin is monitored for write accesses                                                                                                                                                                          |
| 20    | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 19-18 | WAITMONITORINGTIME        | R/W    | 0h      | Selects input pin Wait monitoring time 0h = WAIT pin is monitored with valid data 1h = WAIT pin is monitored one GPMC_CLK cycle before valid data 2h = WAIT pin is monitored two GPMC_CLK cycle before valid data 3h = Reserved                                                                                                       |
| 17-16 | WAITPINSELECT             | R/W    | 0h      | Selects the input WAIT pin for this chip select. 0h = WAIT input pin is WAIT0 1h = WAIT input pin is WAIT1 2h = Reserved 3h = Reserved                                                                                                                                                                                                |
| 15-14 | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 13-12 | DEVICESIZE                | R/W    | 0h      | Selects the device size attached (Reset value is SYSBOOT[8] input pin sampled at IC reset for CS[0] (active low) and 01 for CS[1] to CS[6] (active low)). 0h = 8 bit 1h = 16 bit 2h = Reserved 3h = Reserved                                                                                                                          |
| 11-10 | DEVICETYPE                | R/W    | 0h      | Selects the attached device type. 0h = NOR Flash like, asynchronous and synchronous devices 1h = Reserved 2h = NAND Flash like devices, stream mode 3h = Reserved                                                                                                                                                                     |
| 9-8   | MUXADDDATA                | R/W    | 0h      | Enables the Address and data multiplexed protocol (Reset value is SYSBOOT[11] and SYSBOOT[10] input pins sampled at IC reset for CS[0] (active low) and 0 for CS[1] to CS[6] (active low)). 0h = Non-multiplexed attached device 1h = AAD-multiplexed protocol device 2h = Address and data multiplexed attached device 3h = Reserved |
| 7-5   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 4     | TIMEPARAGRANULARIT Y      | R/W    | 0h      | Signals timing latencies scalar factor (Rd/WRCycleTime, AccessTime, PageBurstAccessTime, CSOnTime, CSRd/WrOffTime, ADVOnTime, ADVRd/WrOffTime, OEOnTime, OEOffTime, WEOnTime, WEOffTime, Cycle2CycleDelay, BusTurnAround, TimeOutStartValue) 0h = x1 latencies 1h = x2 latencies                                                      |
| 3-2   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |

<!-- image -->

## Table 7-69. GPMC\_CONFIG1\_1 Register Field Descriptions (continued)

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | GPMCFCLKDIVIDER | R/W    | 0h      | Divides the GPMC.FCLK clock. 0h = GPMC_CLK frequency = GPMC_FCLK frequency 1h = GPMC_CLK frequency = GPMC_FCLK frequency/2 2h = GPMC_CLK frequency = GPMC_FCLK frequency/3 3h = GPMC_CLK frequency = GPMC_FCLK frequency/4 |

## 7.1.5.22 GPMC\_CONFIG2\_1 Register (offset = 94h) [reset = 0h]

GPMC\_CONFIG2\_1 is shown in Figure 7-68 and described in Table 7-70. Chip-select signal timing parameter configuration.

Figure 7-68. GPMC\_CONFIG2\_1 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| CSEXTRADEL AY        | RESERVED             | RESERVED             | RESERVED             | CSONTIME             | CSONTIME             | CSONTIME             | CSONTIME             |
| R/W-0h               | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-70. GPMC\_CONFIG2\_1 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 20-16 | CSWROFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                     |
| 15-13 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 12-8  | CSRDOFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                      |
| 7     | CSEXTRADELAY | R/W    | 0h      | CS# Add Extra Half GPMC.FCLK cycle 0h = CS i Timing control signal is not delayed 1h = CS i Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 3-0   | CSONTIME     | R/W    | 0h      | CS# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 15 GPMC_FCLK cycles                                           |

<!-- image -->

<!-- image -->

## 7.1.5.23 GPMC\_CONFIG3\_1 Register (offset = 98h) [reset = 0h]

GPMC\_CONFIG3\_1 is shown in Figure 7-69 and described in Table 7-71. ADV# signal timing parameter configuration.

Figure 7-69. GPMC\_CONFIG3\_1 Register

| 31             | 30                 | 29                 | 28                 | 27            | 26                 | 25                 | 24                 |
|----------------|--------------------|--------------------|--------------------|---------------|--------------------|--------------------|--------------------|
| RESERVED       | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | RESERVED      | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME |
| R-0h           | R/W-0h             | R/W-0h             | R/W-0h             | R-0h          | R/W-0h             | R/W-0h             | R/W-0h             |
| 23             | 22                 | 21                 | 20                 | 19            | 18                 | 17                 | 16                 |
| RESERVED       | RESERVED           | RESERVED           | ADVWROFFTIME       | ADVWROFFTIME  | ADVWROFFTIME       | ADVWROFFTIME       | ADVWROFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 15             | 14                 | 13                 | 12                 | 11            | 10                 | 9                  | 8                  |
| RESERVED       | RESERVED           | RESERVED           | ADVRDOFFTIME       | ADVRDOFFTIME  | ADVRDOFFTIME       | ADVRDOFFTIME       | ADVRDOFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 7              | 6                  | 5                  | 4                  | 3             | 2                  | 1                  | 0                  |
| ADVEXTRADE LAY | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVONTIME     | ADVONTIME          | ADVONTIME          | ADVONTIME          |
| R/W-0h         | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-71. GPMC\_CONFIG3\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                         |
|-------|---------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 30-28 | ADVAADMUXWROFFTIM E | R/W    | 0h      | ADV# de-assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                     |
| 27    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 26-24 | ADVAADMUXRDOFFTIM E | R/W    | 0h      | ADV# assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                        |
| 23-21 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 20-16 | ADVWROFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                             |
| 15-13 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 12-8  | ADVRDOFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                              |
| 7     | ADVEXTRADELAY       | R/W    | 0h      | ADV# Add Extra Half GPMC.FCLK cycle 0h = ADV (active low) Timing control signal is not delayed 1h = ADV (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | ADVAADMUXONTIME     | R/W    | 0h      | ADV# assertion for first address phase when using the AAD- Multiplexed protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                               |

<!-- image -->

## Table 7-71. GPMC\_CONFIG3\_1 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------|
| 3-0   | ADVONTIME | R/W    | 0h      | ADV# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles |

<!-- image -->

## 7.1.5.24 GPMC\_CONFIG4\_1 Register (offset = 9Ch) [reset = 0h]

GPMC\_CONFIG4\_1 is shown in Figure 7-70 and described in Table 7-72. WE# and OE# signals timing parameter configuration.

## Figure 7-70. GPMC\_CONFIG4\_1 Register

| 31              | 30              | 29              | 28             | 27          | 26          | 25          | 24          |
|-----------------|-----------------|-----------------|----------------|-------------|-------------|-------------|-------------|
|                 | RESERVED        |                 | WEOFFTIME      | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   |
|                 | R-0h            |                 | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 23              | 22              | 21              | 20             | 19          | 18          | 17          | 16          |
| WEEXTRADEL AY   | RESERVED        | RESERVED        | RESERVED       | WEONTIME    | WEONTIME    | WEONTIME    | WEONTIME    |
| R/W-0h          | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h    | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h |
| 15              | 14              | 13              | 12             | 11          | 10          | 9           | 8           |
| OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEOFFTIME      | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7               | 6               | 5               | 4              | 3           | 2           | 1           | 0           |
| OEEXTRADEL AY   | OEAADMUXONTIME  | OEAADMUXONTIME  | OEAADMUXONTIME | OEONTIME    | OEONTIME    | OEONTIME    | OEONTIME    |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-72. GPMC\_CONFIG4\_1 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                      |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 28-24 | WEOFFTIME       | R/W    | 0h      | WE# de-assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                                              |
| 23    | WEEXTRADELAY    | R/W    | 0h      | WE# Add Extra Half GPMC.FCLK cycle 0h = WE (active low) Timing control signal is not delayed 1h = WE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 22-20 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 19-16 | WEONTIME        | R/W    | 0h      | WE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                  |
| 15-13 | OEAADMUXOFFTIME | R/W    | 0h      | OE# de-assertion time for the first address phase in an AAD- Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                            |
| 12-8  | OEOFFTIME       | R/W    | 0h      | OE# de-assertion time from start cycle time 0h = (R/W) 0 GPMC_FCLK cycle 1h = (R/W) 1 GPMC_FCLK cycle 1Fh = (R/W) 31 GPMC_FCLK cycles                                            |
| 7     | OEEXTRADELAY    | R/W    | 0h      | OE# Add Extra Half GPMC.FCLK cycle 0h = OE (active low) Timing control signal is not delayed 1h = OE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |

<!-- image -->

## Table 7-72. GPMC\_CONFIG4\_1 Register Field Descriptions (continued)

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | OEAADMUXONTIME | R/W    | 0h      | OE# assertion time for the first address phase in an AAD-Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles |
| 3-0   | OEONTIME       | R/W    | 0h      | OE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                   |

<!-- image -->

## 7.1.5.25 GPMC\_CONFIG5\_1 Register (offset = A0h) [reset = 0h]

GPMC\_CONFIG5\_1 is shown in Figure 7-71 and described in Table 7-73. RdAccessTime and CycleTime timing parameters configuration.

## Figure 7-71. GPMC\_CONFIG5\_1 Register

| 31          | 30          | 29          | 28           | 27                  | 26                  | 25                  | 24                  |
|-------------|-------------|-------------|--------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED    | RESERVED    | RESERVED    |              | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME |
| R-0h        | R-0h        | R-0h        |              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 23          | 22          | 21          | 20           | 19                  | 18                  | 17                  | 16                  |
| RESERVED    | RESERVED    | RESERVED    | RDACCESSTIME | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 15          | 14          | 13          | 12           | 11                  | 10                  | 9                   | 8                   |
| RESERVED    | RESERVED    | RESERVED    | WRCYCLETIME  | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 7           | 6           | 5           | 4            | 3                   | 2                   | 1                   | 0                   |
| RESERVED    | RESERVED    | RESERVED    | RDCYCLETIME  | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         |
| R-0h        | R-0h        | R-0h        | R/W-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-73. GPMC\_CONFIG5\_1 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                 |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED             | R      | 0h      |                                                                                                                             |
| 27-24 | PAGEBURSTACCESSTI ME | R/W    | 0h      | Delay between successive words in a multiple access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles  |
| 23-21 | RESERVED             | R      | 0h      |                                                                                                                             |
| 20-16 | RDACCESSTIME         | R/W    | 0h      | Delay between start cycle time and first data valid 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 15-13 | RESERVED             | R      | 0h      |                                                                                                                             |
| 12-8  | WRCYCLETIME          | R/W    | 0h      | Total write cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                              |
| 7-5   | RESERVED             | R      | 0h      |                                                                                                                             |
| 4-0   | RDCYCLETIME          | R/W    | 0h      | Total read cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                               |

## 7.1.5.26 GPMC\_CONFIG6\_1 Register (offset = A4h) [reset = F070000h]

GPMC\_CONFIG6\_1 is shown in Figure 7-72 and described in Table 7-74.

WrAccessTime, WrDataOnADmuxBus, Cycle2Cycle, and BusTurnAround parameters configuration

Figure 7-72. GPMC\_CONFIG6\_1 Register

| 31                   | 30                   | 29       | 28               | 27               | 26               | 25               | 24               |
|----------------------|----------------------|----------|------------------|------------------|------------------|------------------|------------------|
| RESERVED             | RESERVED             | RESERVED | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     |
| R-0h                 | R-0h                 | R-0h     | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           |
| 23                   | 22                   | 21       | 20               | 19               | 18               | 17               | 16               |
| RESERVED             | RESERVED             | RESERVED | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS |
| R-0h                 | R-0h                 | R-0h     | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           |
| 15                   | 14                   | 13       | 12               | 11               | 10               | 9                | 8                |
| RESERVED             | RESERVED             | RESERVED | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY |
| R-0h                 | R-0h                 | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 7                    | 6                    | 5        | 4                | 3                | 2                | 1                | 0                |
| CYCLE2CYCL ESAMECSEN | CYCLE2CYCL EDIFFCSEN | RESERVED |                  | BUSTURNAROUND    | BUSTURNAROUND    | BUSTURNAROUND    |                  |
| R/W-0h               | R/W-0h               | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-74. GPMC\_CONFIG6\_1 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                                                                                                                            |
|-------|----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED             | R      | 0h      | Reset value for bit 31 is 1.                                                                                                                                                                                                                           |
| 28-24 | WRACCESSTIME         | R/W    | Fh      | Delay from StartAccessTime to the GPMC.FCLK rising edge corresponding the the GPMC.CLK rising edge used by the attached memory for the first data capture. Reset value is 0xF. 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 23-20 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 19-16 | WRDATAONADMUXBUS     | R/W    | 7h      | Specifies on which GPMC.FCLK rising edge the first data of the synchronous burst write is driven in the add/data multiplexed bus. Reset value is 0x7.                                                                                                  |
| 15-12 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 11-8  | CYCLE2CYCLEDELAY     | R/W    | 0h      | Chip select high pulse delay between two successive accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                                                                    |
| 7     | CYCLE2CYCLESAMECS EN | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to the same chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                        |
| 6     | CYCLE2CYCLEDIFFCSE N | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to a different chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                     |
| 5-4   | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 3-0   | BUSTURNAROUND        | R/W    | 0h      | Bus turn around latency between two successive accesses to the same chip-select (read to write) or to a different chip-select (read to read and read to write) 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                  |

<!-- image -->

<!-- image -->

## 7.1.5.27 GPMC\_CONFIG7\_1 Register (offset = A8h) [reset = 0h]

GPMC\_CONFIG7\_1 is shown in Figure 7-73 and described in Table 7-75. Chip-select address mapping configuration.

## Figure 7-73. GPMC\_CONFIG7\_1 Register

| 31       | 30       | 29       | 28       | 27          | 26          | 25          | 24          |
|----------|----------|----------|----------|-------------|-------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 23       | 22       | 21       | 20       | 19          | 18          | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11          | 10          | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | MASKADDRESS | MASKADDRESS | MASKADDRESS | MASKADDRESS |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7        | 6        | 5        | 4        | 3           | 2           | 1           | 0           |
| RESERVED | CSVALID  |          |          | BASEADDRESS |             |             |             |
| R-0h     | R/W-0h   |          |          | R/W-0h      |             |             |             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-75. GPMC\_CONFIG7\_1 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                          |
|-------|-------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 11-8  | MASKADDRESS | R/W    | 0h      | Chip-select mask address. Values not listed must be avoided as they create holes in the chip- select address space. 0h = Chip-select size of 256 Mbytes 8h = Chip-select size of 128 Mbytes Ch = Chip-select size of 64 Mbytes Eh = Chip-select size of 32 Mbytes Fh = Chip-select size of 16 Mbytes |
| 7     | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 6     | CSVALID     | R/W    | 0h      | Chip-select enable (reset value is 1 for CS[0] (active low) and 0 for CS[1] to CS[5] (active low)). 0h = CS (active low) disabled 1h = CS (active low) enabled                                                                                                                                       |
| 5-0   | BASEADDRESS | R/W    | 0h      | Chip-select base address. CSi base address where i = 0 to 6 (16 Mbytes minimum granularity). Bits 5 to 0 correspond to A29, A28, A27, A26, A25, and A24.                                                                                                                                             |

## 7.1.5.28 GPMC\_NAND\_COMMAND\_1 Register (offset = ACh) [reset = 0h]

GPMC\_NAND\_COMMAND\_1 is shown in Figure 7-74 and described in Table 7-76.

This register is not a true register, just an address location.

## Figure 7-74. GPMC\_NAND\_COMMAND\_1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_COMMAND_1   |
|------|--------------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-76. GPMC\_NAND\_COMMAND\_1 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_COMMAN D_1 | W      | 0h      | Writing data at the GPMC_NAND_COMMAND_1 location places the data as the NAND command value on the bus, using a regular asynchronous write access. |

<!-- image -->

<!-- image -->

## 7.1.5.29 GPMC\_NAND\_ADDRESS\_1 Register (offset = B0h) [reset = 0h]

GPMC\_NAND\_ADDRESS\_1 is shown in Figure 7-75 and described in Table 7-77.

This register is not a true register, just an address location.

## Figure 7-75. GPMC\_NAND\_ADDRESS\_1 Register

22

21

20

19

18

17

16

15

14

13

12

GPMC\_NAND\_ADDRESS\_1

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-77. GPMC\_NAND\_ADDRESS\_1 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                               |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_ADDRESS _1 | W      | 0h      | Writing data at the GPMC_NAND_ADDRESS_1 location places the data as the NAND partial address value on the bus, using a regular asynchronous write access. |

11

10

9

8

31

30

29

28

27

26

25

24

23

7

6

5

4

3

2

1

0

## 7.1.5.30 GPMC\_NAND\_DATA\_1 Register (offset = B4h) [reset = 0h]

GPMC\_NAND\_DATA\_1 is shown in Figure 7-76 and described in Table 7-78.

This register is not a true register, just an address location.

## Figure 7-76. GPMC\_NAND\_DATA\_1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_DATA_1   |
|------|-----------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-78. GPMC\_NAND\_DATA\_1 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                             |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_DATA_1 | R/W    | 0h      | Reading data from the GPMC_NAND_DATA_1 location or from any location in the associated chip-select memory region activates an asynchronous read access. |

<!-- image -->

<!-- image -->

## 7.1.5.31 GPMC\_CONFIG1\_2 Register (offset = C0h) [reset = 0h]

GPMC\_CONFIG1\_2 is shown in Figure 7-77 and described in Table 7-79.

The configuration 1 register sets signal control parameters per chip select.

## Figure 7-77. GPMC\_CONFIG1\_2 Register

| 31                         | 30                  | 29                   | 28                   | 27                 | 26                 | 25                | 24                         |
|----------------------------|---------------------|----------------------|----------------------|--------------------|--------------------|-------------------|----------------------------|
| WRAPBURST                  | READMULTIPL E       | READTYPE             | WRITEMULTIP LE       | WRITETYPE          | CLKACTIVATIONTIME  | CLKACTIVATIONTIME | ATTACHEDDE VICEPAGELEN GTH |
| R/W-0h                     | R/W-0h              | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 23                         | 22                  | 21                   | 20                   | 19                 | 18                 | 17                | 16                         |
| ATTACHEDDE VICEPAGELEN GTH | WAITREADMO NITORING | WAITWRITEM ONITORING | RESERVED             | WAITMONITORINGTIME | WAITMONITORINGTIME | WAITPINSELECT     | WAITPINSELECT              |
| R/W-0h                     | R/W-0h              | R/W-0h               | R-0h                 | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 15                         | 14                  | 13                   | 12                   | 11                 | 10                 | 9                 | 8                          |
| RESERVED                   | RESERVED            | DEVICESIZE           | DEVICESIZE           | DEVICETYPE         | DEVICETYPE         | MUXADDDATA        | MUXADDDATA                 |
| R-0h                       | R-0h                | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 7                          | 6                   | 5                    | 4                    | 3                  | 2                  | 1                 | 0                          |
| RESERVED                   | RESERVED            | RESERVED             | TIMEPARAGR ANULARITY | RESERVED           | RESERVED           | GPMCFCLKDIVIDER   | GPMCFCLKDIVIDER            |
| R-0h                       | R-0h                | R-0h                 | R/W-0h               | R-0h               | R-0h               | R/W-0h            | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-79. GPMC\_CONFIG1\_2 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                          |
|-------|-------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | WRAPBURST         | R/W    | 0h      | Enables the wrapping burst capability. Must be set if the attached device is configured in wrapping burst 0h = Synchronous wrapping burst not supported 1h = Synchronous wrapping burst supported                                                                    |
| 30    | READMULTIPLE      | R/W    | 0h      | Selects the read single or multiple access 0h = single access 1h = multiple access (burst if synchronous, page if asynchronous)                                                                                                                                      |
| 29    | READTYPE          | R/W    | 0h      | Selects the read mode operation 0h = Read Asynchronous 1h = Read Synchronous                                                                                                                                                                                         |
| 28    | WRITEMULTIPLE     | R/W    | 0h      | Selects the write single or multiple access 0h = Single access 1h = Multiple access (burst if synchronous, considered as single if asynchronous)                                                                                                                     |
| 27    | WRITETYPE         | R/W    | 0h      | Selects the write mode operation 0h = Write Asynchronous 1h = Write Synchronous                                                                                                                                                                                      |
| 26-25 | CLKACTIVATIONTIME | R/W    | 0h      | Output GPMC.CLK activation time 0h = First rising edge of GPMC_CLK at start access time 1h = First rising edge of GPMC_CLK one GPMC_FCLK cycle after start access time 2h = First rising edge of GPMC_CLK two GPMC_FCLK cycles after start access time 3h = Reserved |

<!-- image -->

## Table 7-79. GPMC\_CONFIG1\_2 Register Field Descriptions (continued)

| Bit   | Field                     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                           |
|-------|---------------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 24-23 | ATTACHEDDEVICEPAG ELENGTH | R/W    | 0h      | Specifies the attached device page (burst) length (1 Word = Interface size) 0h = 4 Words 1h = 8 Words 2h = 16 Words 3h = Reserved                                                                                                                                                                                                     |
| 22    | WAITREADMONITORING        | R/W    | 0h      | Selects the Wait monitoring configuration for Read accesses. 0h = WAIT pin is not monitored for read accesses 1h = WAIT pin is monitored for read accesses                                                                                                                                                                            |
| 21    | WAITWRITEMONITORIN G      | R/W    | 0h      | Selects the Wait monitoring configuration for Write accesses 0h = WAIT pin is not monitored for write accesses 1h = WAIT pin is monitored for write accesses                                                                                                                                                                          |
| 20    | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 19-18 | WAITMONITORINGTIME        | R/W    | 0h      | Selects input pin Wait monitoring time 0h = WAIT pin is monitored with valid data 1h = WAIT pin is monitored one GPMC_CLK cycle before valid data 2h = WAIT pin is monitored two GPMC_CLK cycle before valid data 3h = Reserved                                                                                                       |
| 17-16 | WAITPINSELECT             | R/W    | 0h      | Selects the input WAIT pin for this chip select. 0h = WAIT input pin is WAIT0 1h = WAIT input pin is WAIT1 2h = Reserved 3h = Reserved                                                                                                                                                                                                |
| 15-14 | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 13-12 | DEVICESIZE                | R/W    | 0h      | Selects the device size attached (Reset value is SYSBOOT[8] input pin sampled at IC reset for CS[0] (active low) and 01 for CS[1] to CS[6] (active low)). 0h = 8 bit 1h = 16 bit 2h = Reserved 3h = Reserved                                                                                                                          |
| 11-10 | DEVICETYPE                | R/W    | 0h      | Selects the attached device type. 0h = NOR Flash like, asynchronous and synchronous devices 1h = Reserved 2h = NAND Flash like devices, stream mode 3h = Reserved                                                                                                                                                                     |
| 9-8   | MUXADDDATA                | R/W    | 0h      | Enables the Address and data multiplexed protocol (Reset value is SYSBOOT[11] and SYSBOOT[10] input pins sampled at IC reset for CS[0] (active low) and 0 for CS[1] to CS[6] (active low)). 0h = Non-multiplexed attached device 1h = AAD-multiplexed protocol device 2h = Address and data multiplexed attached device 3h = Reserved |
| 7-5   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 4     | TIMEPARAGRANULARIT Y      | R/W    | 0h      | Signals timing latencies scalar factor (Rd/WRCycleTime, AccessTime, PageBurstAccessTime, CSOnTime, CSRd/WrOffTime, ADVOnTime, ADVRd/WrOffTime, OEOnTime, OEOffTime, WEOnTime, WEOffTime, Cycle2CycleDelay, BusTurnAround, TimeOutStartValue). 0h = x1 latencies 1h = x2 latencies                                                     |
| 3-2   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |

<!-- image -->

## Table 7-79. GPMC\_CONFIG1\_2 Register Field Descriptions (continued)

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | GPMCFCLKDIVIDER | R/W    | 0h      | Divides the GPMC.FCLK clock. 0h = GPMC_CLK frequency = GPMC_FCLK frequency 1h = GPMC_CLK frequency = GPMC_FCLK frequency/2 2h = GPMC_CLK frequency = GPMC_FCLK frequency/3 3h = GPMC_CLK frequency = GPMC_FCLK frequency/4 |

## 7.1.5.32 GPMC\_CONFIG2\_2 Register (offset = C4h) [reset = 0h]

GPMC\_CONFIG2\_2 is shown in Figure 7-78 and described in Table 7-80.

Chip-select signal timing parameter configuration.

Figure 7-78. GPMC\_CONFIG2\_2 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| CSEXTRADEL AY        | RESERVED             | RESERVED             | RESERVED             | CSONTIME             | CSONTIME             | CSONTIME             | CSONTIME             |
| R/W-0h               | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-80. GPMC\_CONFIG2\_2 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 20-16 | CSWROFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                     |
| 15-13 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 12-8  | CSRDOFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                      |
| 7     | CSEXTRADELAY | R/W    | 0h      | CS# Add Extra Half GPMC.FCLK cycle 0h = CS i Timing control signal is not delayed 1h = CS i Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 3-0   | CSONTIME     | R/W    | 0h      | CS# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 15 GPMC_FCLK cycles                                           |

<!-- image -->

<!-- image -->

## 7.1.5.33 GPMC\_CONFIG3\_2 Register (offset = C8h) [reset = 0h]

GPMC\_CONFIG3\_2 is shown in Figure 7-79 and described in Table 7-81. ADV# signal timing parameter configuration.

Figure 7-79. GPMC\_CONFIG3\_2 Register

| 31             | 30                 | 29                 | 28                 | 27            | 26                 | 25                 | 24                 |
|----------------|--------------------|--------------------|--------------------|---------------|--------------------|--------------------|--------------------|
| RESERVED       | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | RESERVED      | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME |
| R-0h           | R/W-0h             | R/W-0h             | R/W-0h             | R-0h          | R/W-0h             | R/W-0h             | R/W-0h             |
| 23             | 22                 | 21                 | 20                 | 19            | 18                 | 17                 | 16                 |
| RESERVED       | RESERVED           | RESERVED           | ADVWROFFTIME       | ADVWROFFTIME  | ADVWROFFTIME       | ADVWROFFTIME       | ADVWROFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 15             | 14                 | 13                 | 12                 | 11            | 10                 | 9                  | 8                  |
| RESERVED       | RESERVED           | RESERVED           | ADVRDOFFTIME       | ADVRDOFFTIME  | ADVRDOFFTIME       | ADVRDOFFTIME       | ADVRDOFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 7              | 6                  | 5                  | 4                  | 3             | 2                  | 1                  | 0                  |
| ADVEXTRADE LAY | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVONTIME     | ADVONTIME          | ADVONTIME          | ADVONTIME          |
| R/W-0h         | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-81. GPMC\_CONFIG3\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                         |
|-------|---------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 30-28 | ADVAADMUXWROFFTIM E | R/W    | 0h      | ADV# de-assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                     |
| 27    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 26-24 | ADVAADMUXRDOFFTIM E | R/W    | 0h      | ADV# assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                        |
| 23-21 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 20-16 | ADVWROFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                             |
| 15-13 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 12-8  | ADVRDOFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                              |
| 7     | ADVEXTRADELAY       | R/W    | 0h      | ADV# Add Extra Half GPMC.FCLK cycle 0h = ADV (active low) Timing control signal is not delayed 1h = ADV (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | ADVAADMUXONTIME     | R/W    | 0h      | ADV# assertion for first address phase when using the AAD- Multiplexed protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                               |

<!-- image -->

## Table 7-81. GPMC\_CONFIG3\_2 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------|
| 3-0   | ADVONTIME | R/W    | 0h      | ADV# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles |

<!-- image -->

## 7.1.5.34 GPMC\_CONFIG4\_2 Register (offset = CCh) [reset = 0h]

GPMC\_CONFIG4\_2 is shown in Figure 7-80 and described in Table 7-82. WE# and OE# signals timing parameter configuration.

## Figure 7-80. GPMC\_CONFIG4\_2 Register

| 31              | 30              | 29              | 28             | 27          | 26          | 25          | 24          |
|-----------------|-----------------|-----------------|----------------|-------------|-------------|-------------|-------------|
|                 | RESERVED        |                 | WEOFFTIME      | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   |
|                 | R-0h            |                 | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 23              | 22              | 21              | 20             | 19          | 18          | 17          | 16          |
| WEEXTRADEL AY   | RESERVED        | RESERVED        | RESERVED       | WEONTIME    | WEONTIME    | WEONTIME    | WEONTIME    |
| R/W-0h          | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h    | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h |
| 15              | 14              | 13              | 12             | 11          | 10          | 9           | 8           |
| OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEOFFTIME      | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7               | 6               | 5               | 4              | 3           | 2           | 1           | 0           |
| OEEXTRADEL AY   | OEAADMUXONTIME  | OEAADMUXONTIME  | OEAADMUXONTIME | OEONTIME    | OEONTIME    | OEONTIME    | OEONTIME    |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-82. GPMC\_CONFIG4\_2 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                      |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 28-24 | WEOFFTIME       | R/W    | 0h      | WE# de-assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                                              |
| 23    | WEEXTRADELAY    | R/W    | 0h      | WE# Add Extra Half GPMC.FCLK cycle 0h = WE (active low) Timing control signal is not delayed 1h = WE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 22-20 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 19-16 | WEONTIME        | R/W    | 0h      | WE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                  |
| 15-13 | OEAADMUXOFFTIME | R/W    | 0h      | OE# de-assertion time for the first address phase in an AAD- Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                            |
| 12-8  | OEOFFTIME       | R/W    | 0h      | OE# de-assertion time from start cycle time 0h = (R/W) 0 GPMC_FCLK cycle 1h = (R/W) 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                                  |
| 7     | OEEXTRADELAY    | R/W    | 0h      | OE# Add Extra Half GPMC.FCLK cycle 0h = OE (active low) Timing control signal is not delayed 1h = OE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |

<!-- image -->

## Table 7-82. GPMC\_CONFIG4\_2 Register Field Descriptions (continued)

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | OEAADMUXONTIME | R/W    | 0h      | OE# assertion time for the first address phase in an AAD-Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles |
| 3-0   | OEONTIME       | R/W    | 0h      | OE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                   |

<!-- image -->

## 7.1.5.35 GPMC\_CONFIG5\_2 Register (offset = D0h) [reset = 0h]

GPMC\_CONFIG5\_2 is shown in Figure 7-81 and described in Table 7-83. RdAccessTime and CycleTime timing parameters configuration.

## Figure 7-81. GPMC\_CONFIG5\_2 Register

| 31          | 30          | 29          | 28           | 27                  | 26                  | 25                  | 24                  |
|-------------|-------------|-------------|--------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED    | RESERVED    | RESERVED    |              | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME |
| R-0h        | R-0h        | R-0h        |              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 23          | 22          | 21          | 20           | 19                  | 18                  | 17                  | 16                  |
| RESERVED    | RESERVED    | RESERVED    | RDACCESSTIME | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 15          | 14          | 13          | 12           | 11                  | 10                  | 9                   | 8                   |
| RESERVED    | RESERVED    | RESERVED    | WRCYCLETIME  | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 7           | 6           | 5           | 4            | 3                   | 2                   | 1                   | 0                   |
| RESERVED    | RESERVED    | RESERVED    | RDCYCLETIME  | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         |
| R-0h        | R-0h        | R-0h        | R/W-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-83. GPMC\_CONFIG5\_2 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                 |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED             | R      | 0h      |                                                                                                                             |
| 27-24 | PAGEBURSTACCESSTI ME | R/W    | 0h      | Delay between successive words in a multiple access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles  |
| 23-21 | RESERVED             | R      | 0h      |                                                                                                                             |
| 20-16 | RDACCESSTIME         | R/W    | 0h      | Delay between start cycle time and first data valid 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 15-13 | RESERVED             | R      | 0h      |                                                                                                                             |
| 12-8  | WRCYCLETIME          | R/W    | 0h      | Total write cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                              |
| 7-5   | RESERVED             | R      | 0h      |                                                                                                                             |
| 4-0   | RDCYCLETIME          | R/W    | 0h      | Total read cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                               |

## 7.1.5.36 GPMC\_CONFIG6\_2 Register (offset = D4h) [reset = F070000h]

GPMC\_CONFIG6\_2 is shown in Figure 7-82 and described in Table 7-84.

WrAccessTime, WrDataOnADmuxBus, Cycle2Cycle, and BusTurnAround parameters configuration

Figure 7-82. GPMC\_CONFIG6\_2 Register

| 31                   | 30                   | 29       | 28               | 27               | 26               | 25               | 24               |
|----------------------|----------------------|----------|------------------|------------------|------------------|------------------|------------------|
| RESERVED             | RESERVED             | RESERVED | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     |
| R-0h                 | R-0h                 | R-0h     | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           |
| 23                   | 22                   | 21       | 20               | 19               | 18               | 17               | 16               |
| RESERVED             | RESERVED             | RESERVED | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS |
| R-0h                 | R-0h                 | R-0h     | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           |
| 15                   | 14                   | 13       | 12               | 11               | 10               | 9                | 8                |
| RESERVED             | RESERVED             | RESERVED | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY |
| R-0h                 | R-0h                 | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 7                    | 6                    | 5        | 4                | 3                | 2                | 1                | 0                |
| CYCLE2CYCL ESAMECSEN | CYCLE2CYCL EDIFFCSEN | RESERVED |                  | BUSTURNAROUND    | BUSTURNAROUND    | BUSTURNAROUND    |                  |
| R/W-0h               | R/W-0h               | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-84. GPMC\_CONFIG6\_2 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                                                                                                                            |
|-------|----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED             | R      | 0h      | Reset value for bit 31 is 1.                                                                                                                                                                                                                           |
| 28-24 | WRACCESSTIME         | R/W    | Fh      | Delay from StartAccessTime to the GPMC.FCLK rising edge corresponding the the GPMC.CLK rising edge used by the attached memory for the first data capture. Reset value is 0xF. 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 23-20 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 19-16 | WRDATAONADMUXBUS     | R/W    | 7h      | Specifies on which GPMC.FCLK rising edge the first data of the synchronous burst write is driven in the add/data multiplexed bus. Reset value is 0x7.                                                                                                  |
| 15-12 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 11-8  | CYCLE2CYCLEDELAY     | R/W    | 0h      | Chip select high pulse delay between two successive accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                                                                    |
| 7     | CYCLE2CYCLESAMECS EN | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to the same chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                        |
| 6     | CYCLE2CYCLEDIFFCSE N | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to a different chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                     |
| 5-4   | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 3-0   | BUSTURNAROUND        | R/W    | 0h      | Bus turn around latency between two successive accesses to the same chip-select (read to write) or to a different chip-select (read to read and read to write) 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                  |

<!-- image -->

<!-- image -->

## 7.1.5.37 GPMC\_CONFIG7\_2 Register (offset = D8h) [reset = 0h]

GPMC\_CONFIG7\_2 is shown in Figure 7-83 and described in Table 7-85.

Chip-select address mapping configuration.

## Figure 7-83. GPMC\_CONFIG7\_2 Register

| 31       | 30       | 29       | 28       | 27          | 26          | 25          | 24          |
|----------|----------|----------|----------|-------------|-------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 23       | 22       | 21       | 20       | 19          | 18          | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11          | 10          | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | MASKADDRESS | MASKADDRESS | MASKADDRESS | MASKADDRESS |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7        | 6        | 5        | 4        | 3           | 2           | 1           | 0           |
| RESERVED | CSVALID  |          |          | BASEADDRESS |             |             |             |
| R-0h     | R/W-0h   |          |          | R/W-0h      |             |             |             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-85. GPMC\_CONFIG7\_2 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                          |
|-------|-------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 11-8  | MASKADDRESS | R/W    | 0h      | Chip-select mask address. Values not listed must be avoided as they create holes in the chip- select address space. 0h = Chip-select size of 256 Mbytes 8h = Chip-select size of 128 Mbytes Ch = Chip-select size of 64 Mbytes Eh = Chip-select size of 32 Mbytes Fh = Chip-select size of 16 Mbytes |
| 7     | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 6     | CSVALID     | R/W    | 0h      | Chip-select enable (reset value is 1 for CS[0] (active low) and 0 for CS[1] to CS[5] (active low)). 0h = CS (active low) disabled 1h = CS (active low) enabled                                                                                                                                       |
| 5-0   | BASEADDRESS | R/W    | 0h      | Chip-select base address. CSi base address where i = 0 to 6 (16 Mbytes minimum granularity). Bits 5 to 0 correspond to A29, A28, A27, A26, A25, and A24.                                                                                                                                             |

## 7.1.5.38 GPMC\_NAND\_COMMAND\_2 Register (offset = DCh) [reset = 0h]

GPMC\_NAND\_COMMAND\_2 is shown in Figure 7-84 and described in Table 7-86.

This register is not a true register, just an address location.

## Figure 7-84. GPMC\_NAND\_COMMAND\_2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_COMMAND_2   |
|------|--------------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-86. GPMC\_NAND\_COMMAND\_2 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_COMMAN D_2 | W      | 0h      | Writing data at the GPMC_NAND_COMMAND_2 location places the data as the NAND command value on the bus, using a regular asynchronous write access. |

<!-- image -->

<!-- image -->

## 7.1.5.39 GPMC\_NAND\_ADDRESS\_2 Register (offset = E0h) [reset = 0h]

GPMC\_NAND\_ADDRESS\_2 is shown in Figure 7-85 and described in Table 7-87.

This register is not a true register, just an address location.

## Figure 7-85. GPMC\_NAND\_ADDRESS\_2 Register

22

21

20

19

18

17

16

15

14

13

12

GPMC\_NAND\_ADDRESS\_2

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-87. GPMC\_NAND\_ADDRESS\_2 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                               |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_ADDRESS _2 | W      | 0h      | Writing data at the GPMC_NAND_ADDRESS_2 location places the data as the NAND partial address value on the bus, using a regular asynchronous write access. |

11

10

9

8

31

30

29

28

27

26

25

24

23

7

6

5

4

3

2

1

0

## 7.1.5.40 GPMC\_NAND\_DATA\_2 Register (offset = E4h) [reset = 0h]

GPMC\_NAND\_DATA\_2 is shown in Figure 7-86 and described in Table 7-88.

This register is not a true register, just an address location.

## Figure 7-86. GPMC\_NAND\_DATA\_2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_DATA_2   |
|------|-----------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-88. GPMC\_NAND\_DATA\_2 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                             |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_DATA_2 | R/W    | 0h      | Reading data from the GPMC_NAND_DATA_2 location or from any location in the associated chip-select memory region activates an asynchronous read access. |

<!-- image -->

<!-- image -->

## 7.1.5.41 GPMC\_CONFIG1\_3 Register (offset = F0h) [reset = 0h]

GPMC\_CONFIG1\_3 is shown in Figure 7-87 and described in Table 7-89.

The configuration 1 register sets signal control parameters per chip select.

## Figure 7-87. GPMC\_CONFIG1\_3 Register

| 31                         | 30                  | 29                   | 28                   | 27                 | 26                 | 25                | 24                         |
|----------------------------|---------------------|----------------------|----------------------|--------------------|--------------------|-------------------|----------------------------|
| WRAPBURST                  | READMULTIPL E       | READTYPE             | WRITEMULTIP LE       | WRITETYPE          | CLKACTIVATIONTIME  | CLKACTIVATIONTIME | ATTACHEDDE VICEPAGELEN GTH |
| R/W-0h                     | R/W-0h              | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 23                         | 22                  | 21                   | 20                   | 19                 | 18                 | 17                | 16                         |
| ATTACHEDDE VICEPAGELEN GTH | WAITREADMO NITORING | WAITWRITEM ONITORING | RESERVED             | WAITMONITORINGTIME | WAITMONITORINGTIME | WAITPINSELECT     | WAITPINSELECT              |
| R/W-0h                     | R/W-0h              | R/W-0h               | R-0h                 | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 15                         | 14                  | 13                   | 12                   | 11                 | 10                 | 9                 | 8                          |
| RESERVED                   | RESERVED            | DEVICESIZE           | DEVICESIZE           | DEVICETYPE         | DEVICETYPE         | MUXADDDATA        | MUXADDDATA                 |
| R-0h                       | R-0h                | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 7                          | 6                   | 5                    | 4                    | 3                  | 2                  | 1                 | 0                          |
| RESERVED                   | RESERVED            | RESERVED             | TIMEPARAGR ANULARITY | RESERVED           | RESERVED           | GPMCFCLKDIVIDER   | GPMCFCLKDIVIDER            |
| R-0h                       | R-0h                | R-0h                 | R/W-0h               | R-0h               | R-0h               | R/W-0h            | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-89. GPMC\_CONFIG1\_3 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                          |
|-------|-------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | WRAPBURST         | R/W    | 0h      | Enables the wrapping burst capability. Must be set if the attached device is configured in wrapping burst 0h = Synchronous wrapping burst not supported 1h = Synchronous wrapping burst supported                                                                    |
| 30    | READMULTIPLE      | R/W    | 0h      | Selects the read single or multiple access 0h = single access 1h = multiple access (burst if synchronous, page if asynchronous)                                                                                                                                      |
| 29    | READTYPE          | R/W    | 0h      | Selects the read mode operation 0h = Read Asynchronous 1h = Read Synchronous                                                                                                                                                                                         |
| 28    | WRITEMULTIPLE     | R/W    | 0h      | Selects the write single or multiple access 0h = Single access 1h = Multiple access (burst if synchronous, considered as single if asynchronous)                                                                                                                     |
| 27    | WRITETYPE         | R/W    | 0h      | Selects the write mode operation 0h = Write Asynchronous 1h = Write Synchronous                                                                                                                                                                                      |
| 26-25 | CLKACTIVATIONTIME | R/W    | 0h      | Output GPMC.CLK activation time 0h = First rising edge of GPMC_CLK at start access time 1h = First rising edge of GPMC_CLK one GPMC_FCLK cycle after start access time 2h = First rising edge of GPMC_CLK two GPMC_FCLK cycles after start access time 3h = Reserved |

<!-- image -->

## Table 7-89. GPMC\_CONFIG1\_3 Register Field Descriptions (continued)

| Bit   | Field                     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                           |
|-------|---------------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 24-23 | ATTACHEDDEVICEPAG ELENGTH | R/W    | 0h      | Specifies the attached device page (burst) length (1 Word = Interface size) 0h = 4 Words 1h = 8 Words 2h = 16 Words 3h = Reserved                                                                                                                                                                                                     |
| 22    | WAITREADMONITORING        | R/W    | 0h      | Selects the Wait monitoring configuration for Read accesses. 0h = WAIT pin is not monitored for read accesses 1h = WAIT pin is monitored for read accesses                                                                                                                                                                            |
| 21    | WAITWRITEMONITORIN G      | R/W    | 0h      | Selects the Wait monitoring configuration for Write accesses 0h = WAIT pin is not monitored for write accesses 1h = WAIT pin is monitored for write accesses                                                                                                                                                                          |
| 20    | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 19-18 | WAITMONITORINGTIME        | R/W    | 0h      | Selects input pin Wait monitoring time 0h = WAIT pin is monitored with valid data 1h = WAIT pin is monitored one GPMC_CLK cycle before valid data 2h = WAIT pin is monitored two GPMC_CLK cycle before valid data 3h = Reserved                                                                                                       |
| 17-16 | WAITPINSELECT             | R/W    | 0h      | Selects the input WAIT pin for this chip select. 0h = WAIT input pin is WAIT0 1h = WAIT input pin is WAIT1 2h = Reserved 3h = Reserved                                                                                                                                                                                                |
| 15-14 | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 13-12 | DEVICESIZE                | R/W    | 0h      | Selects the device size attached (Reset value is SYSBOOT[8] input pin sampled at IC reset for CS[0] (active low) and 01 for CS[1] to CS[6] (active low)). 0h = 8 bit 1h = 16 bit 2h = Reserved 3h = Reserved                                                                                                                          |
| 11-10 | DEVICETYPE                | R/W    | 0h      | Selects the attached device type 0h = NOR Flash like, asynchronous and synchronous devices 1h = Reserved 2h = NAND Flash like devices, stream mode 3h = Reserved                                                                                                                                                                      |
| 9-8   | MUXADDDATA                | R/W    | 0h      | Enables the Address and data multiplexed protocol (Reset value is SYSBOOT[11] and SYSBOOT[10] input pins sampled at IC reset for CS[0] (active low) and 0 for CS[1] to CS[6] (active low)). 0h = Non-multiplexed attached device 1h = AAD-multiplexed protocol device 2h = Address and data multiplexed attached device 3h = Reserved |
| 7-5   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 4     | TIMEPARAGRANULARIT Y      | R/W    | 0h      | Signals timing latencies scalar factor (Rd/WRCycleTime, AccessTime, PageBurstAccessTime, CSOnTime, CSRd/WrOffTime, ADVOnTime, ADVRd/WrOffTime, OEOnTime, OEOffTime, WEOnTime, WEOffTime, Cycle2CycleDelay, BusTurnAround, TimeOutStartValue). 0h = x1 latencies 1h = x2 latencies                                                     |
| 3-2   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |

<!-- image -->

## Table 7-89. GPMC\_CONFIG1\_3 Register Field Descriptions (continued)

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | GPMCFCLKDIVIDER | R/W    | 0h      | Divides the GPMC.FCLK clock. 0h = GPMC_CLK frequency = GPMC_FCLK frequency 1h = GPMC_CLK frequency = GPMC_FCLK frequency/2 2h = GPMC_CLK frequency = GPMC_FCLK frequency/3 3h = GPMC_CLK frequency = GPMC_FCLK frequency/4 |

## 7.1.5.42 GPMC\_CONFIG2\_3 Register (offset = F4h) [reset = 0h]

GPMC\_CONFIG2\_3 is shown in Figure 7-88 and described in Table 7-90.

Chip-select signal timing parameter configuration.

Figure 7-88. GPMC\_CONFIG2\_3 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| CSEXTRADEL AY        | RESERVED             | RESERVED             | RESERVED             | CSONTIME             | CSONTIME             | CSONTIME             | CSONTIME             |
| R/W-0h               | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-90. GPMC\_CONFIG2\_3 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 20-16 | CSWROFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                     |
| 15-13 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 12-8  | CSRDOFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                      |
| 7     | CSEXTRADELAY | R/W    | 0h      | CS# Add Extra Half GPMC.FCLK cycle 0h = CS i Timing control signal is not delayed 1h = CS i Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 3-0   | CSONTIME     | R/W    | 0h      | CS# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 15 GPMC_FCLK cycles                                           |

<!-- image -->

<!-- image -->

## 7.1.5.43 GPMC\_CONFIG3\_3 Register (offset = F8h) [reset = 0h]

GPMC\_CONFIG3\_3 is shown in Figure 7-89 and described in Table 7-91. ADV# signal timing parameter configuration.

Figure 7-89. GPMC\_CONFIG3\_3 Register

| 31             | 30                 | 29                 | 28                 | 27            | 26                 | 25                 | 24                 |
|----------------|--------------------|--------------------|--------------------|---------------|--------------------|--------------------|--------------------|
| RESERVED       | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | RESERVED      | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME |
| R-0h           | R/W-0h             | R/W-0h             | R/W-0h             | R-0h          | R/W-0h             | R/W-0h             | R/W-0h             |
| 23             | 22                 | 21                 | 20                 | 19            | 18                 | 17                 | 16                 |
| RESERVED       | RESERVED           | RESERVED           | ADVWROFFTIME       | ADVWROFFTIME  | ADVWROFFTIME       | ADVWROFFTIME       | ADVWROFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 15             | 14                 | 13                 | 12                 | 11            | 10                 | 9                  | 8                  |
| RESERVED       | RESERVED           | RESERVED           | ADVRDOFFTIME       | ADVRDOFFTIME  | ADVRDOFFTIME       | ADVRDOFFTIME       | ADVRDOFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 7              | 6                  | 5                  | 4                  | 3             | 2                  | 1                  | 0                  |
| ADVEXTRADE LAY | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVONTIME     | ADVONTIME          | ADVONTIME          | ADVONTIME          |
| R/W-0h         | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-91. GPMC\_CONFIG3\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                         |
|-------|---------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 30-28 | ADVAADMUXWROFFTIM E | R/W    | 0h      | ADV# de-assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                     |
| 27    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 26-24 | ADVAADMUXRDOFFTIM E | R/W    | 0h      | ADV# assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                        |
| 23-21 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 20-16 | ADVWROFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                             |
| 15-13 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 12-8  | ADVRDOFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                              |
| 7     | ADVEXTRADELAY       | R/W    | 0h      | ADV# Add Extra Half GPMC.FCLK cycle 0h = ADV (active low) Timing control signal is not delayed 1h = ADV (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | ADVAADMUXONTIME     | R/W    | 0h      | ADV# assertion for first address phase when using the AAD- Multiplexed protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                               |

<!-- image -->

## Table 7-91. GPMC\_CONFIG3\_3 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------|
| 3-0   | ADVONTIME | R/W    | 0h      | ADV# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles |

<!-- image -->

## 7.1.5.44 GPMC\_CONFIG4\_3 Register (offset = FCh) [reset = 0h]

GPMC\_CONFIG4\_3 is shown in Figure 7-90 and described in Table 7-92. WE# and OE# signals timing parameter configuration.

## Figure 7-90. GPMC\_CONFIG4\_3 Register

| 31              | 30              | 29              | 28             | 27          | 26          | 25          | 24          |
|-----------------|-----------------|-----------------|----------------|-------------|-------------|-------------|-------------|
|                 | RESERVED        |                 | WEOFFTIME      | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   |
|                 | R-0h            |                 | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 23              | 22              | 21              | 20             | 19          | 18          | 17          | 16          |
| WEEXTRADEL AY   | RESERVED        | RESERVED        | RESERVED       | WEONTIME    | WEONTIME    | WEONTIME    | WEONTIME    |
| R/W-0h          | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h    | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h |
| 15              | 14              | 13              | 12             | 11          | 10          | 9           | 8           |
| OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEOFFTIME      | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7               | 6               | 5               | 4              | 3           | 2           | 1           | 0           |
| OEEXTRADEL AY   | OEAADMUXONTIME  | OEAADMUXONTIME  | OEAADMUXONTIME | OEONTIME    | OEONTIME    | OEONTIME    | OEONTIME    |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-92. GPMC\_CONFIG4\_3 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                      |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 28-24 | WEOFFTIME       | R/W    | 0h      | WE# de-assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                                              |
| 23    | WEEXTRADELAY    | R/W    | 0h      | WE# Add Extra Half GPMC.FCLK cycle 0h = WE (active low) Timing control signal is not delayed 1h = WE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 22-20 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 19-16 | WEONTIME        | R/W    | 0h      | WE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                  |
| 15-13 | OEAADMUXOFFTIME | R/W    | 0h      | OE# de-assertion time for the first address phase in an AAD- Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                            |
| 12-8  | OEOFFTIME       | R/W    | 0h      | OE# de-assertion time from start cycle time 0h = (R/W) 0 GPMC_FCLK cycle 1h = (R/W) 1 GPMC_FCLK cycle 1Fh = (R/W) 31 GPMC_FCLK cycles                                            |
| 7     | OEEXTRADELAY    | R/W    | 0h      | OE# Add Extra Half GPMC.FCLK cycle 0h = OE (active low) Timing control signal is not delayed 1h = OE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |

<!-- image -->

## Table 7-92. GPMC\_CONFIG4\_3 Register Field Descriptions (continued)

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | OEAADMUXONTIME | R/W    | 0h      | OE# assertion time for the first address phase in an AAD-Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles |
| 3-0   | OEONTIME       | R/W    | 0h      | OE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                   |

<!-- image -->

## 7.1.5.45 GPMC\_CONFIG5\_3 Register (offset = 100h) [reset = 0h]

GPMC\_CONFIG5\_3 is shown in Figure 7-91 and described in Table 7-93. RdAccessTime and CycleTime timing parameters configuration.

## Figure 7-91. GPMC\_CONFIG5\_3 Register

| 31          | 30          | 29          | 28           | 27                  | 26                  | 25                  | 24                  |
|-------------|-------------|-------------|--------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED    | RESERVED    | RESERVED    |              | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME |
| R-0h        | R-0h        | R-0h        |              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 23          | 22          | 21          | 20           | 19                  | 18                  | 17                  | 16                  |
| RESERVED    | RESERVED    | RESERVED    | RDACCESSTIME | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 15          | 14          | 13          | 12           | 11                  | 10                  | 9                   | 8                   |
| RESERVED    | RESERVED    | RESERVED    | WRCYCLETIME  | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 7           | 6           | 5           | 4            | 3                   | 2                   | 1                   | 0                   |
| RESERVED    | RESERVED    | RESERVED    | RDCYCLETIME  | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         |
| R-0h        | R-0h        | R-0h        | R/W-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-93. GPMC\_CONFIG5\_3 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                 |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED             | R      | 0h      |                                                                                                                             |
| 27-24 | PAGEBURSTACCESSTI ME | R/W    | 0h      | Delay between successive words in a multiple access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles  |
| 23-21 | RESERVED             | R      | 0h      |                                                                                                                             |
| 20-16 | RDACCESSTIME         | R/W    | 0h      | Delay between start cycle time and first data valid 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 15-13 | RESERVED             | R      | 0h      |                                                                                                                             |
| 12-8  | WRCYCLETIME          | R/W    | 0h      | Total write cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                              |
| 7-5   | RESERVED             | R      | 0h      |                                                                                                                             |
| 4-0   | RDCYCLETIME          | R/W    | 0h      | Total read cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                               |

## 7.1.5.46 GPMC\_CONFIG6\_3 Register (offset = 104h) [reset = F070000h]

GPMC\_CONFIG6\_3 is shown in Figure 7-92 and described in Table 7-94.

WrAccessTime, WrDataOnADmuxBus, Cycle2Cycle, and BusTurnAround parameters configuration

Figure 7-92. GPMC\_CONFIG6\_3 Register

| 31                   | 30                   | 29       | 28               | 27               | 26               | 25               | 24               |
|----------------------|----------------------|----------|------------------|------------------|------------------|------------------|------------------|
| RESERVED             | RESERVED             | RESERVED | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     |
| R-0h                 | R-0h                 | R-0h     | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           |
| 23                   | 22                   | 21       | 20               | 19               | 18               | 17               | 16               |
| RESERVED             | RESERVED             | RESERVED | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS |
| R-0h                 | R-0h                 | R-0h     | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           |
| 15                   | 14                   | 13       | 12               | 11               | 10               | 9                | 8                |
| RESERVED             | RESERVED             | RESERVED | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY |
| R-0h                 | R-0h                 | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 7                    | 6                    | 5        | 4                | 3                | 2                | 1                | 0                |
| CYCLE2CYCL ESAMECSEN | CYCLE2CYCL EDIFFCSEN | RESERVED |                  | BUSTURNAROUND    | BUSTURNAROUND    | BUSTURNAROUND    |                  |
| R/W-0h               | R/W-0h               | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-94. GPMC\_CONFIG6\_3 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                                                                                                                            |
|-------|----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED             | R      | 0h      | Reset value for bit 31 is 1.                                                                                                                                                                                                                           |
| 28-24 | WRACCESSTIME         | R/W    | Fh      | Delay from StartAccessTime to the GPMC.FCLK rising edge corresponding the the GPMC.CLK rising edge used by the attached memory for the first data capture. Reset value is 0xF. 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 23-20 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 19-16 | WRDATAONADMUXBUS     | R/W    | 7h      | Specifies on which GPMC.FCLK rising edge the first data of the synchronous burst write is driven in the add/data multiplexed bus. Reset value is 0x7.                                                                                                  |
| 15-12 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 11-8  | CYCLE2CYCLEDELAY     | R/W    | 0h      | Chip select high pulse delay between two successive accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                                                                    |
| 7     | CYCLE2CYCLESAMECS EN | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to the same chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                        |
| 6     | CYCLE2CYCLEDIFFCSE N | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to a different chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                     |
| 5-4   | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 3-0   | BUSTURNAROUND        | R/W    | 0h      | Bus turn around latency between two successive accesses to the same chip-select (read to write) or to a different chip-select (read to read and read to write) 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                  |

<!-- image -->

<!-- image -->

## 7.1.5.47 GPMC\_CONFIG7\_3 Register (offset = 108h) [reset = 0h]

GPMC\_CONFIG7\_3 is shown in Figure 7-93 and described in Table 7-95. Chip-select address mapping configuration.

## Figure 7-93. GPMC\_CONFIG7\_3 Register

| 31       | 30       | 29       | 28       | 27          | 26          | 25          | 24          |
|----------|----------|----------|----------|-------------|-------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 23       | 22       | 21       | 20       | 19          | 18          | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11          | 10          | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | MASKADDRESS | MASKADDRESS | MASKADDRESS | MASKADDRESS |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7        | 6        | 5        | 4        | 3           | 2           | 1           | 0           |
| RESERVED | CSVALID  |          |          | BASEADDRESS |             |             |             |
| R-0h     | R/W-0h   |          |          | R/W-0h      |             |             |             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-95. GPMC\_CONFIG7\_3 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                          |
|-------|-------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 11-8  | MASKADDRESS | R/W    | 0h      | Chip-select mask address. Values not listed must be avoided as they create holes in the chip- select address space. 0h = Chip-select size of 256 Mbytes 8h = Chip-select size of 128 Mbytes Ch = Chip-select size of 64 Mbytes Eh = Chip-select size of 32 Mbytes Fh = Chip-select size of 16 Mbytes |
| 7     | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 6     | CSVALID     | R/W    | 0h      | Chip-select enable (reset value is 1 for CS[0] (active low) and 0 for CS[1] to CS[5] (active low)). 0h = CS (active low) disabled 1h = CS (active low) enabled                                                                                                                                       |
| 5-0   | BASEADDRESS | R/W    | 0h      | Chip-select base address. CSi base address where i = 0 to 6 (16 Mbytes minimum granularity). Bits 5 to 0 correspond to A29, A28, A27, A26, A25, and A24.                                                                                                                                             |

## 7.1.5.48 GPMC\_NAND\_COMMAND\_3 Register (offset = 10Ch) [reset = 0h]

GPMC\_NAND\_COMMAND\_3 is shown in Figure 7-94 and described in Table 7-96.

This register is not a true register, just an address location.

## Figure 7-94. GPMC\_NAND\_COMMAND\_3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_COMMAND_3   |
|------|--------------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-96. GPMC\_NAND\_COMMAND\_3 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_COMMAN D_3 | W      | 0h      | Writing data at the GPMC_NAND_COMMAND_3 location places the data as the NAND command value on the bus, using a regular asynchronous write access. |

<!-- image -->

<!-- image -->

## 7.1.5.49 GPMC\_NAND\_ADDRESS\_3 Register (offset = 110h) [reset = 0h]

GPMC\_NAND\_ADDRESS\_3 is shown in Figure 7-95 and described in Table 7-97.

This register is not a true register, just an address location.

## Figure 7-95. GPMC\_NAND\_ADDRESS\_3 Register

## 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

GPMC\_NAND\_ADDRESS\_3

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-97. GPMC\_NAND\_ADDRESS\_3 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                               |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_ADDRESS _3 | W      | 0h      | Writing data at the GPMC_NAND_ADDRESS_3 location places the data as the NAND partial address value on the bus, using a regular asynchronous write access. |

## 7.1.5.50 GPMC\_NAND\_DATA\_3 Register (offset = 114h) [reset = 0h]

GPMC\_NAND\_DATA\_3 is shown in Figure 7-96 and described in Table 7-98.

This register is not a true register, just an address location.

## Figure 7-96. GPMC\_NAND\_DATA\_3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_DATA_3   |
|------|-----------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-98. GPMC\_NAND\_DATA\_3 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                             |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_DATA_3 | R/W    | 0h      | Reading data from the GPMC_NAND_DATA_3 location or from any location in the associated chip-select memory region activates an asynchronous read access. |

<!-- image -->

<!-- image -->

## 7.1.5.51 GPMC\_CONFIG1\_4 Register (offset = 120h) [reset = 0h]

GPMC\_CONFIG1\_4 is shown in Figure 7-97 and described in Table 7-99.

The configuration 1 register sets signal control parameters per chip select.

## Figure 7-97. GPMC\_CONFIG1\_4 Register

| 31                         | 30                  | 29                   | 28                   | 27                 | 26                 | 25                | 24                         |
|----------------------------|---------------------|----------------------|----------------------|--------------------|--------------------|-------------------|----------------------------|
| WRAPBURST                  | READMULTIPL E       | READTYPE             | WRITEMULTIP LE       | WRITETYPE          | CLKACTIVATIONTIME  | CLKACTIVATIONTIME | ATTACHEDDE VICEPAGELEN GTH |
| R/W-0h                     | R/W-0h              | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 23                         | 22                  | 21                   | 20                   | 19                 | 18                 | 17                | 16                         |
| ATTACHEDDE VICEPAGELEN GTH | WAITREADMO NITORING | WAITWRITEM ONITORING | RESERVED             | WAITMONITORINGTIME | WAITMONITORINGTIME | WAITPINSELECT     | WAITPINSELECT              |
| R/W-0h                     | R/W-0h              | R/W-0h               | R-0h                 | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 15                         | 14                  | 13                   | 12                   | 11                 | 10                 | 9                 | 8                          |
| RESERVED                   | RESERVED            | DEVICESIZE           | DEVICESIZE           | DEVICETYPE         | DEVICETYPE         | MUXADDDATA        | MUXADDDATA                 |
| R-0h                       | R-0h                | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 7                          | 6                   | 5                    | 4                    | 3                  | 2                  | 1                 | 0                          |
| RESERVED                   | RESERVED            | RESERVED             | TIMEPARAGR ANULARITY | RESERVED           | RESERVED           | GPMCFCLKDIVIDER   | GPMCFCLKDIVIDER            |
| R-0h                       | R-0h                | R-0h                 | R/W-0h               | R-0h               | R-0h               | R/W-0h            | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-99. GPMC\_CONFIG1\_4 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                          |
|-------|-------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | WRAPBURST         | R/W    | 0h      | Enables the wrapping burst capability. Must be set if the attached device is configured in wrapping burst 0h = Synchronous wrapping burst not supported 1h = Synchronous wrapping burst supported                                                                    |
| 30    | READMULTIPLE      | R/W    | 0h      | Selects the read single or multiple access 0h = single access 1h = multiple access (burst if synchronous, page if asynchronous)                                                                                                                                      |
| 29    | READTYPE          | R/W    | 0h      | Selects the read mode operation 0h = Read Asynchronous 1h = Read Synchronous                                                                                                                                                                                         |
| 28    | WRITEMULTIPLE     | R/W    | 0h      | Selects the write single or multiple access 0h = Single access 1h = Multiple access (burst if synchronous, considered as single if asynchronous)                                                                                                                     |
| 27    | WRITETYPE         | R/W    | 0h      | Selects the write mode operation 0h = Write Asynchronous 1h = Write Synchronous                                                                                                                                                                                      |
| 26-25 | CLKACTIVATIONTIME | R/W    | 0h      | Output GPMC.CLK activation time 0h = First rising edge of GPMC_CLK at start access time 1h = First rising edge of GPMC_CLK one GPMC_FCLK cycle after start access time 2h = First rising edge of GPMC_CLK two GPMC_FCLK cycles after start access time 3h = Reserved |

<!-- image -->

## Table 7-99. GPMC\_CONFIG1\_4 Register Field Descriptions (continued)

| Bit   | Field                     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                           |
|-------|---------------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 24-23 | ATTACHEDDEVICEPAG ELENGTH | R/W    | 0h      | Specifies the attached device page (burst) length (1 Word = Interface size) 0h = 4 Words 1h = 8 Words 2h = 16 Words 3h = Reserved                                                                                                                                                                                                     |
| 22    | WAITREADMONITORING        | R/W    | 0h      | Selects the Wait monitoring configuration for Read accesses. 0h = WAIT pin is not monitored for read accesses 1h = WAIT pin is monitored for read accesses                                                                                                                                                                            |
| 21    | WAITWRITEMONITORIN G      | R/W    | 0h      | Selects the Wait monitoring configuration for Write accesses 0h = WAIT pin is not monitored for write accesses 1h = WAIT pin is monitored for write accesses                                                                                                                                                                          |
| 20    | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 19-18 | WAITMONITORINGTIME        | R/W    | 0h      | Selects input pin Wait monitoring time 0h = WAIT pin is monitored with valid data 1h = WAIT pin is monitored one GPMC_CLK cycle before valid data 2h = WAIT pin is monitored two GPMC_CLK cycle before valid data 3h = Reserved                                                                                                       |
| 17-16 | WAITPINSELECT             | R/W    | 0h      | Selects the input WAIT pin for this chip select. 0h = WAIT input pin is WAIT0 1h = WAIT input pin is WAIT1 2h = Reserved 3h = Reserved                                                                                                                                                                                                |
| 15-14 | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 13-12 | DEVICESIZE                | R/W    | 0h      | Selects the device size attached (Reset value is SYSBOOT[8] input pin sampled at IC reset for CS[0] (active low) and 01 for CS[1] to CS[6] (active low)). 0h = 8 bit 1h = 16 bit 2h = Reserved 3h = Reserved                                                                                                                          |
| 11-10 | DEVICETYPE                | R/W    | 0h      | Selects the attached device type 0h = NOR Flash like, asynchronous and synchronous devices 1h = Reserved 2h = NAND Flash like devices, stream mode 3h = Reserved                                                                                                                                                                      |
| 9-8   | MUXADDDATA                | R/W    | 0h      | Enables the Address and data multiplexed protocol (Reset value is SYSBOOT[11] and SYSBOOT[10] input pins sampled at IC reset for CS[0] (active low) and 0 for CS[1] to CS[6] (active low)). 0h = Non-multiplexed attached device 1h = AAD-multiplexed protocol device 2h = Address and data multiplexed attached device 3h = Reserved |
| 7-5   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 4     | TIMEPARAGRANULARIT Y      | R/W    | 0h      | Signals timing latencies scalar factor (Rd/WRCycleTime, AccessTime, PageBurstAccessTime, CSOnTime, CSRd/WrOffTime, ADVOnTime, ADVRd/WrOffTime, OEOnTime, OEOffTime, WEOnTime, WEOffTime, Cycle2CycleDelay, BusTurnAround, TimeOutStartValue). 0h = x1 latencies 1h = x2 latencies                                                     |
| 3-2   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |

<!-- image -->

## Table 7-99. GPMC\_CONFIG1\_4 Register Field Descriptions (continued)

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | GPMCFCLKDIVIDER | R/W    | 0h      | Divides the GPMC.FCLK clock. 0h = GPMC_CLK frequency = GPMC_FCLK frequency 1h = GPMC_CLK frequency = GPMC_FCLK frequency/2 2h = GPMC_CLK frequency = GPMC_FCLK frequency/3 3h = GPMC_CLK frequency = GPMC_FCLK frequency/4 |

## 7.1.5.52 GPMC\_CONFIG2\_4 Register (offset = 124h) [reset = 0h]

GPMC\_CONFIG2\_4 is shown in Figure 7-98 and described in Table 7-100.

Chip-select signal timing parameter configuration.

Figure 7-98. GPMC\_CONFIG2\_4 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| CSEXTRADEL AY        | RESERVED             | RESERVED             | RESERVED             | CSONTIME             | CSONTIME             | CSONTIME             | CSONTIME             |
| R/W-0h               | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-100. GPMC\_CONFIG2\_4 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 20-16 | CSWROFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                     |
| 15-13 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 12-8  | CSRDOFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                      |
| 7     | CSEXTRADELAY | R/W    | 0h      | CS# Add Extra Half GPMC.FCLK cycle 0h = CS i Timing control signal is not delayed 1h = CS i Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 3-0   | CSONTIME     | R/W    | 0h      | CS# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 15 GPMC_FCLK cycles                                           |

<!-- image -->

<!-- image -->

## 7.1.5.53 GPMC\_CONFIG3\_4 Register (offset = 128h) [reset = 0h]

GPMC\_CONFIG3\_4 is shown in Figure 7-99 and described in Table 7-101. ADV# signal timing parameter configuration.

Figure 7-99. GPMC\_CONFIG3\_4 Register

| 31             | 30                 | 29                 | 28                 | 27            | 26                 | 25                 | 24                 |
|----------------|--------------------|--------------------|--------------------|---------------|--------------------|--------------------|--------------------|
| RESERVED       | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | RESERVED      | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME |
| R-0h           | R/W-0h             | R/W-0h             | R/W-0h             | R-0h          | R/W-0h             | R/W-0h             | R/W-0h             |
| 23             | 22                 | 21                 | 20                 | 19            | 18                 | 17                 | 16                 |
| RESERVED       | RESERVED           | RESERVED           | ADVWROFFTIME       | ADVWROFFTIME  | ADVWROFFTIME       | ADVWROFFTIME       | ADVWROFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 15             | 14                 | 13                 | 12                 | 11            | 10                 | 9                  | 8                  |
| RESERVED       | RESERVED           | RESERVED           | ADVRDOFFTIME       | ADVRDOFFTIME  | ADVRDOFFTIME       | ADVRDOFFTIME       | ADVRDOFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 7              | 6                  | 5                  | 4                  | 3             | 2                  | 1                  | 0                  |
| ADVEXTRADE LAY | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVONTIME     | ADVONTIME          | ADVONTIME          | ADVONTIME          |
| R/W-0h         | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-101. GPMC\_CONFIG3\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                         |
|-------|---------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 30-28 | ADVAADMUXWROFFTIM E | R/W    | 0h      | ADV# de-assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                     |
| 27    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 26-24 | ADVAADMUXRDOFFTIM E | R/W    | 0h      | ADV# assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                        |
| 23-21 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 20-16 | ADVWROFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                             |
| 15-13 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 12-8  | ADVRDOFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                              |
| 7     | ADVEXTRADELAY       | R/W    | 0h      | ADV# Add Extra Half GPMC.FCLK cycle 0h = ADV (active low) Timing control signal is not delayed 1h = ADV (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | ADVAADMUXONTIME     | R/W    | 0h      | ADV# assertion for first address phase when using the AAD- Multiplexed protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                               |

<!-- image -->

## Table 7-101. GPMC\_CONFIG3\_4 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------|
| 3-0   | ADVONTIME | R/W    | 0h      | ADV# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles |

<!-- image -->

## 7.1.5.54 GPMC\_CONFIG4\_4 Register (offset = 12Ch) [reset = 0h]

GPMC\_CONFIG4\_4 is shown in Figure 7-100 and described in Table 7-102. WE# and OE# signals timing parameter configuration.

## Figure 7-100. GPMC\_CONFIG4\_4 Register

| 31              | 30              | 29              | 28             | 27          | 26          | 25          | 24          |
|-----------------|-----------------|-----------------|----------------|-------------|-------------|-------------|-------------|
|                 | RESERVED        |                 | WEOFFTIME      | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   |
|                 | R-0h            |                 | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 23              | 22              | 21              | 20             | 19          | 18          | 17          | 16          |
| WEEXTRADEL AY   | RESERVED        | RESERVED        | RESERVED       | WEONTIME    | WEONTIME    | WEONTIME    | WEONTIME    |
| R/W-0h          | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h    | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h |
| 15              | 14              | 13              | 12             | 11          | 10          | 9           | 8           |
| OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEOFFTIME      | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7               | 6               | 5               | 4              | 3           | 2           | 1           | 0           |
| OEEXTRADEL AY   | OEAADMUXONTIME  | OEAADMUXONTIME  | OEAADMUXONTIME | OEONTIME    | OEONTIME    | OEONTIME    | OEONTIME    |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-102. GPMC\_CONFIG4\_4 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                      |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 28-24 | WEOFFTIME       | R/W    | 0h      | WE# de-assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                                              |
| 23    | WEEXTRADELAY    | R/W    | 0h      | WE# Add Extra Half GPMC.FCLK cycle 0h = WE (active low) Timing control signal is not delayed 1h = WE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 22-20 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 19-16 | WEONTIME        | R/W    | 0h      | WE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                  |
| 15-13 | OEAADMUXOFFTIME | R/W    | 0h      | OE# de-assertion time for the first address phase in an AAD- Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                            |
| 12-8  | OEOFFTIME       | R/W    | 0h      | OE# de-assertion time from start cycle time 0h = (R/W) 0 GPMC_FCLK cycle 1h = (R/W) 1 GPMC_FCLK cycle 1Fh = (R/W) 31 GPMC_FCLK cycles                                            |
| 7     | OEEXTRADELAY    | R/W    | 0h      | OE# Add Extra Half GPMC.FCLK cycle 0h = OE (active low) Timing control signal is not delayed 1h = OE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |

<!-- image -->

## Table 7-102. GPMC\_CONFIG4\_4 Register Field Descriptions (continued)

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | OEAADMUXONTIME | R/W    | 0h      | OE# assertion time for the first address phase in an AAD-Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles |
| 3-0   | OEONTIME       | R/W    | 0h      | OE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                   |

<!-- image -->

## 7.1.5.55 GPMC\_CONFIG5\_4 Register (offset = 130h) [reset = 0h]

GPMC\_CONFIG5\_4 is shown in Figure 7-101 and described in Table 7-103. RdAccessTime and CycleTime timing parameters configuration.

## Figure 7-101. GPMC\_CONFIG5\_4 Register

| 31          | 30          | 29          | 28           | 27                  | 26                  | 25                  | 24                  |
|-------------|-------------|-------------|--------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED    | RESERVED    | RESERVED    |              | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME |
| R-0h        | R-0h        | R-0h        |              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 23          | 22          | 21          | 20           | 19                  | 18                  | 17                  | 16                  |
| RESERVED    | RESERVED    | RESERVED    | RDACCESSTIME | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 15          | 14          | 13          | 12           | 11                  | 10                  | 9                   | 8                   |
| RESERVED    | RESERVED    | RESERVED    | WRCYCLETIME  | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 7           | 6           | 5           | 4            | 3                   | 2                   | 1                   | 0                   |
| RESERVED    | RESERVED    | RESERVED    | RDCYCLETIME  | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         |
| R-0h        | R-0h        | R-0h        | R/W-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-103. GPMC\_CONFIG5\_4 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                 |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED             | R      | 0h      |                                                                                                                             |
| 27-24 | PAGEBURSTACCESSTI ME | R/W    | 0h      | Delay between successive words in a multiple access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles  |
| 23-21 | RESERVED             | R      | 0h      |                                                                                                                             |
| 20-16 | RDACCESSTIME         | R/W    | 0h      | Delay between start cycle time and first data valid 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 15-13 | RESERVED             | R      | 0h      |                                                                                                                             |
| 12-8  | WRCYCLETIME          | R/W    | 0h      | Total write cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                              |
| 7-5   | RESERVED             | R      | 0h      |                                                                                                                             |
| 4-0   | RDCYCLETIME          | R/W    | 0h      | Total read cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                               |

## 7.1.5.56 GPMC\_CONFIG6\_4 Register (offset = 134h) [reset = F070000h]

GPMC\_CONFIG6\_4 is shown in Figure 7-102 and described in Table 7-104.

WrAccessTime, WrDataOnADmuxBus, Cycle2Cycle, and BusTurnAround parameters configuration

Figure 7-102. GPMC\_CONFIG6\_4 Register

| 31                   | 30                   | 29       | 28               | 27               | 26               | 25               | 24               |
|----------------------|----------------------|----------|------------------|------------------|------------------|------------------|------------------|
| RESERVED             | RESERVED             | RESERVED | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     |
| R-0h                 | R-0h                 | R-0h     | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           |
| 23                   | 22                   | 21       | 20               | 19               | 18               | 17               | 16               |
| RESERVED             | RESERVED             | RESERVED | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS |
| R-0h                 | R-0h                 | R-0h     | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           |
| 15                   | 14                   | 13       | 12               | 11               | 10               | 9                | 8                |
| RESERVED             | RESERVED             | RESERVED | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY |
| R-0h                 | R-0h                 | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 7                    | 6                    | 5        | 4                | 3                | 2                | 1                | 0                |
| CYCLE2CYCL ESAMECSEN | CYCLE2CYCL EDIFFCSEN | RESERVED |                  | BUSTURNAROUND    | BUSTURNAROUND    | BUSTURNAROUND    |                  |
| R/W-0h               | R/W-0h               | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-104. GPMC\_CONFIG6\_4 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                                                                                                                            |
|-------|----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED             | R      | 0h      | Reset value for bit 31 is 1.                                                                                                                                                                                                                           |
| 28-24 | WRACCESSTIME         | R/W    | Fh      | Delay from StartAccessTime to the GPMC.FCLK rising edge corresponding the the GPMC.CLK rising edge used by the attached memory for the first data capture. Reset value is 0xF. 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 23-20 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 19-16 | WRDATAONADMUXBUS     | R/W    | 7h      | Specifies on which GPMC.FCLK rising edge the first data of the synchronous burst write is driven in the add/data multiplexed bus. Reset value is 0x7.                                                                                                  |
| 15-12 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 11-8  | CYCLE2CYCLEDELAY     | R/W    | 0h      | Chip select high pulse delay between two successive accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                                                                    |
| 7     | CYCLE2CYCLESAMECS EN | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to the same chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                        |
| 6     | CYCLE2CYCLEDIFFCSE N | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to a different chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                     |
| 5-4   | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 3-0   | BUSTURNAROUND        | R/W    | 0h      | Bus turn around latency between two successive accesses to the same chip-select (read to write) or to a different chip-select (read to read and read to write) 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                  |

<!-- image -->

<!-- image -->

## 7.1.5.57 GPMC\_CONFIG7\_4 Register (offset = 138h) [reset = 0h]

GPMC\_CONFIG7\_4 is shown in Figure 7-103 and described in Table 7-105. Chip-select address mapping configuration.

Figure 7-103. GPMC\_CONFIG7\_4 Register

| 31       | 30       | 29       | 28       | 27          | 26          | 25          | 24          |
|----------|----------|----------|----------|-------------|-------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 23       | 22       | 21       | 20       | 19          | 18          | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11          | 10          | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | MASKADDRESS | MASKADDRESS | MASKADDRESS | MASKADDRESS |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7        | 6        | 5        | 4        | 3           | 2           | 1           | 0           |
| RESERVED | CSVALID  |          |          | BASEADDRESS |             |             |             |
| R-0h     | R/W-0h   |          |          | R/W-0h      |             |             |             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-105. GPMC\_CONFIG7\_4 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                          |
|-------|-------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 11-8  | MASKADDRESS | R/W    | 0h      | Chip-select mask address. Values not listed must be avoided as they create holes in the chip- select address space. 0h = Chip-select size of 256 Mbytes 8h = Chip-select size of 128 Mbytes Ch = Chip-select size of 64 Mbytes Eh = Chip-select size of 32 Mbytes Fh = Chip-select size of 16 Mbytes |
| 7     | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 6     | CSVALID     | R/W    | 0h      | Chip-select enable (reset value is 1 for CS[0] (active low) and 0 for CS[1] to CS[5] (active low)). 0h = CS (active low) disabled 1h = CS (active low) enabled                                                                                                                                       |
| 5-0   | BASEADDRESS | R/W    | 0h      | Chip-select base address. CSi base address where i = 0 to 6 (16 Mbytes minimum granularity). Bits 5 to 0 correspond to A29, A28, A27, A26, A25, and A24.                                                                                                                                             |

<!-- image -->

## 7.1.5.58 GPMC\_NAND\_COMMAND\_4 Register (offset = 13Ch) [reset = 0h]

GPMC\_NAND\_COMMAND\_4 is shown in Figure 7-104 and described in Table 7-106.

This register is not a true register, just an address location.

## Figure 7-104. GPMC\_NAND\_COMMAND\_4 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_COMMAND_4   |
|------|--------------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-106. GPMC\_NAND\_COMMAND\_4 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_COMMAN D_4 | W      | 0h      | Writing data at the GPMC_NAND_COMMAND_4 location places the data as the NAND command value on the bus, using a regular asynchronous write access. |

<!-- image -->

## 7.1.5.59 GPMC\_NAND\_ADDRESS\_4 Register (offset = 140h) [reset = 0h]

GPMC\_NAND\_ADDRESS\_4 is shown in Figure 7-105 and described in Table 7-107.

This register is not a true register, just an address location.

## Figure 7-105. GPMC\_NAND\_ADDRESS\_4 Register

22

21

20

19

18

17

16

15

14

13

12

GPMC\_NAND\_ADDRESS\_4

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-107. GPMC\_NAND\_ADDRESS\_4 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                               |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_ADDRESS _4 | W      | 0h      | Writing data at the GPMC_NAND_ADDRESS_4 location places the data as the NAND partial address value on the bus, using a regular asynchronous write access. |

11

10

9

8

7

31

30

29

28

27

26

25

24

23

6

5

4

3

2

1

0

## 7.1.5.60 GPMC\_NAND\_DATA\_4 Register (offset = 144h) [reset = 0h]

GPMC\_NAND\_DATA\_4 is shown in Figure 7-106 and described in Table 7-108.

This register is not a true register, just an address location.

## Figure 7-106. GPMC\_NAND\_DATA\_4 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_DATA_4   |
|------|-----------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-108. GPMC\_NAND\_DATA\_4 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                             |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_DATA_4 | R/W    | 0h      | Reading data from the GPMC_NAND_DATA_4 location or from any location in the associated chip-select memory region activates an asynchronous read access. |

<!-- image -->

<!-- image -->

## 7.1.5.61 GPMC\_CONFIG1\_5 Register (offset = 150h) [reset = 0h]

GPMC\_CONFIG1\_5 is shown in Figure 7-107 and described in Table 7-109.

The configuration 1 register sets signal control parameters per chip select.

## Figure 7-107. GPMC\_CONFIG1\_5 Register

| 31                         | 30                  | 29                   | 28                   | 27                 | 26                 | 25                | 24                         |
|----------------------------|---------------------|----------------------|----------------------|--------------------|--------------------|-------------------|----------------------------|
| WRAPBURST                  | READMULTIPL E       | READTYPE             | WRITEMULTIP LE       | WRITETYPE          | CLKACTIVATIONTIME  | CLKACTIVATIONTIME | ATTACHEDDE VICEPAGELEN GTH |
| R/W-0h                     | R/W-0h              | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 23                         | 22                  | 21                   | 20                   | 19                 | 18                 | 17                | 16                         |
| ATTACHEDDE VICEPAGELEN GTH | WAITREADMO NITORING | WAITWRITEM ONITORING | RESERVED             | WAITMONITORINGTIME | WAITMONITORINGTIME | WAITPINSELECT     | WAITPINSELECT              |
| R/W-0h                     | R/W-0h              | R/W-0h               | R-0h                 | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 15                         | 14                  | 13                   | 12                   | 11                 | 10                 | 9                 | 8                          |
| RESERVED                   | RESERVED            | DEVICESIZE           | DEVICESIZE           | DEVICETYPE         | DEVICETYPE         | MUXADDDATA        | MUXADDDATA                 |
| R-0h                       | R-0h                | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 7                          | 6                   | 5                    | 4                    | 3                  | 2                  | 1                 | 0                          |
| RESERVED                   | RESERVED            | RESERVED             | TIMEPARAGR ANULARITY | RESERVED           | RESERVED           | GPMCFCLKDIVIDER   | GPMCFCLKDIVIDER            |
| R-0h                       | R-0h                | R-0h                 | R/W-0h               | R-0h               | R-0h               | R/W-0h            | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-109. GPMC\_CONFIG1\_5 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                          |
|-------|-------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | WRAPBURST         | R/W    | 0h      | Enables the wrapping burst capability. Must be set if the attached device is configured in wrapping burst 0h = Synchronous wrapping burst not supported 1h = Synchronous wrapping burst supported                                                                    |
| 30    | READMULTIPLE      | R/W    | 0h      | Selects the read single or multiple access 0h = single access 1h = multiple access (burst if synchronous, page if asynchronous)                                                                                                                                      |
| 29    | READTYPE          | R/W    | 0h      | Selects the read mode operation 0h = Read Asynchronous 1h = Read Synchronous                                                                                                                                                                                         |
| 28    | WRITEMULTIPLE     | R/W    | 0h      | Selects the write single or multiple access 0h = Single access 1h = Multiple access (burst if synchronous, considered as single if asynchronous)                                                                                                                     |
| 27    | WRITETYPE         | R/W    | 0h      | Selects the write mode operation 0h = Write Asynchronous 1h = Write Synchronous                                                                                                                                                                                      |
| 26-25 | CLKACTIVATIONTIME | R/W    | 0h      | Output GPMC.CLK activation time 0h = First rising edge of GPMC_CLK at start access time 1h = First rising edge of GPMC_CLK one GPMC_FCLK cycle after start access time 2h = First rising edge of GPMC_CLK two GPMC_FCLK cycles after start access time 3h = Reserved |

<!-- image -->

## Table 7-109. GPMC\_CONFIG1\_5 Register Field Descriptions (continued)

| Bit   | Field                     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                           |
|-------|---------------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 24-23 | ATTACHEDDEVICEPAG ELENGTH | R/W    | 0h      | Specifies the attached device page (burst) length (1 Word = Interface size) 0h = 4 Words 1h = 8 Words 2h = 16 Words 3h = Reserved                                                                                                                                                                                                     |
| 22    | WAITREADMONITORING        | R/W    | 0h      | Selects the Wait monitoring configuration for Read accesses. 0h = WAIT pin is not monitored for read accesses 1h = WAIT pin is monitored for read accesses                                                                                                                                                                            |
| 21    | WAITWRITEMONITORIN G      | R/W    | 0h      | Selects the Wait monitoring configuration for Write accesses 0h = WAIT pin is not monitored for write accesses 1h = WAIT pin is monitored for write accesses                                                                                                                                                                          |
| 20    | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 19-18 | WAITMONITORINGTIME        | R/W    | 0h      | Selects input pin Wait monitoring time 0h = WAIT pin is monitored with valid data 1h = WAIT pin is monitored one GPMC_CLK cycle before valid data 2h = WAIT pin is monitored two GPMC_CLK cycle before valid data 3h = Reserved                                                                                                       |
| 17-16 | WAITPINSELECT             | R/W    | 0h      | Selects the input WAIT pin for this chip select. 0h = WAIT input pin is WAIT0 1h = WAIT input pin is WAIT1 2h = Reserved 3h = Reserved                                                                                                                                                                                                |
| 15-14 | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 13-12 | DEVICESIZE                | R/W    | 0h      | Selects the device size attached (Reset value is SYSBOOT[8] input pin sampled at IC reset for CS[0] (active low) and 01 for CS[1] to CS[6] (active low)). 0h = 8 bit 1h = 16 bit 2h = Reserved 3h = Reserved                                                                                                                          |
| 11-10 | DEVICETYPE                | R/W    | 0h      | Selects the attached device type 0h = NOR Flash like, asynchronous and synchronous devices 1h = Reserved 2h = NAND Flash like devices, stream mode 3h = Reserved                                                                                                                                                                      |
| 9-8   | MUXADDDATA                | R/W    | 0h      | Enables the Address and data multiplexed protocol (Reset value is SYSBOOT[11] and SYSBOOT[10] input pins sampled at IC reset for CS[0] (active low) and 0 for CS[1] to CS[6] (active low)). 0h = Non-multiplexed attached device 1h = AAD-multiplexed protocol device 2h = Address and data multiplexed attached device 3h = Reserved |
| 7-5   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |
| 4     | TIMEPARAGRANULARIT Y      | R/W    | 0h      | Signals timing latencies scalar factor (Rd/WRCycleTime, AccessTime, PageBurstAccessTime, CSOnTime, CSRd/WrOffTime, ADVOnTime, ADVRd/WrOffTime, OEOnTime, OEOffTime, WEOnTime, WEOffTime, Cycle2CycleDelay, BusTurnAround, TimeOutStartValue). 0h = x1 latencies 1h = x2 latencies                                                     |
| 3-2   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                       |

<!-- image -->

## Table 7-109. GPMC\_CONFIG1\_5 Register Field Descriptions (continued)

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | GPMCFCLKDIVIDER | R/W    | 0h      | Divides the GPMC.FCLK clock. 0h = GPMC_CLK frequency = GPMC_FCLK frequency 1h = GPMC_CLK frequency = GPMC_FCLK frequency/2 2h = GPMC_CLK frequency = GPMC_FCLK frequency/3 3h = GPMC_CLK frequency = GPMC_FCLK frequency/4 |

## 7.1.5.62 GPMC\_CONFIG2\_5 Register (offset = 154h) [reset = 0h]

GPMC\_CONFIG2\_5 is shown in Figure 7-108 and described in Table 7-110. Chip-select signal timing parameter configuration.

Figure 7-108. GPMC\_CONFIG2\_5 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| CSEXTRADEL AY        | RESERVED             | RESERVED             | RESERVED             | CSONTIME             | CSONTIME             | CSONTIME             | CSONTIME             |
| R/W-0h               | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-110. GPMC\_CONFIG2\_5 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 20-16 | CSWROFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                     |
| 15-13 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 12-8  | CSRDOFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                      |
| 7     | CSEXTRADELAY | R/W    | 0h      | CS# Add Extra Half GPMC.FCLK cycle 0h = CS i Timing control signal is not delayed 1h = CS i Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 3-0   | CSONTIME     | R/W    | 0h      | CS# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 15 GPMC_FCLK cycles                                           |

<!-- image -->

<!-- image -->

## 7.1.5.63 GPMC\_CONFIG3\_5 Register (offset = 158h) [reset = 0h]

GPMC\_CONFIG3\_5 is shown in Figure 7-109 and described in Table 7-111. ADV# signal timing parameter configuration.

Figure 7-109. GPMC\_CONFIG3\_5 Register

| 31             | 30                 | 29                 | 28                 | 27            | 26                 | 25                 | 24                 |
|----------------|--------------------|--------------------|--------------------|---------------|--------------------|--------------------|--------------------|
| RESERVED       | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | RESERVED      | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME |
| R-0h           | R/W-0h             | R/W-0h             | R/W-0h             | R-0h          | R/W-0h             | R/W-0h             | R/W-0h             |
| 23             | 22                 | 21                 | 20                 | 19            | 18                 | 17                 | 16                 |
| RESERVED       | RESERVED           | RESERVED           | ADVWROFFTIME       | ADVWROFFTIME  | ADVWROFFTIME       | ADVWROFFTIME       | ADVWROFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 15             | 14                 | 13                 | 12                 | 11            | 10                 | 9                  | 8                  |
| RESERVED       | RESERVED           | RESERVED           | ADVRDOFFTIME       | ADVRDOFFTIME  | ADVRDOFFTIME       | ADVRDOFFTIME       | ADVRDOFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 7              | 6                  | 5                  | 4                  | 3             | 2                  | 1                  | 0                  |
| ADVEXTRADE LAY | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVONTIME     | ADVONTIME          | ADVONTIME          | ADVONTIME          |
| R/W-0h         | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-111. GPMC\_CONFIG3\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                         |
|-------|---------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 30-28 | ADVAADMUXWROFFTIM E | R/W    | 0h      | ADV# de-assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                     |
| 27    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 26-24 | ADVAADMUXRDOFFTIM E | R/W    | 0h      | ADV# assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                        |
| 23-21 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 20-16 | ADVWROFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                             |
| 15-13 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 12-8  | ADVRDOFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                              |
| 7     | ADVEXTRADELAY       | R/W    | 0h      | ADV# Add Extra Half GPMC.FCLK cycle 0h = ADV (active low) Timing control signal is not delayed 1h = ADV (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | ADVAADMUXONTIME     | R/W    | 0h      | ADV# assertion for first address phase when using the AAD- Multiplexed protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                               |

<!-- image -->

## Table 7-111. GPMC\_CONFIG3\_5 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------|
| 3-0   | ADVONTIME | R/W    | 0h      | ADV# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles |

<!-- image -->

## 7.1.5.64 GPMC\_CONFIG4\_5 Register (offset = 15Ch) [reset = 0h]

GPMC\_CONFIG4\_5 is shown in Figure 7-110 and described in Table 7-112. WE# and OE# signals timing parameter configuration.

## Figure 7-110. GPMC\_CONFIG4\_5 Register

| 31              | 30              | 29              | 28             | 27          | 26          | 25          | 24          |
|-----------------|-----------------|-----------------|----------------|-------------|-------------|-------------|-------------|
|                 | RESERVED        |                 | WEOFFTIME      | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   |
|                 | R-0h            |                 | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 23              | 22              | 21              | 20             | 19          | 18          | 17          | 16          |
| WEEXTRADEL AY   | RESERVED        | RESERVED        | RESERVED       | WEONTIME    | WEONTIME    | WEONTIME    | WEONTIME    |
| R/W-0h          | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h    | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h |
| 15              | 14              | 13              | 12             | 11          | 10          | 9           | 8           |
| OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEOFFTIME      | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7               | 6               | 5               | 4              | 3           | 2           | 1           | 0           |
| OEEXTRADEL AY   | OEAADMUXONTIME  | OEAADMUXONTIME  | OEAADMUXONTIME | OEONTIME    | OEONTIME    | OEONTIME    | OEONTIME    |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-112. GPMC\_CONFIG4\_5 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                      |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 28-24 | WEOFFTIME       | R/W    | 0h      | WE# de-assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                                              |
| 23    | WEEXTRADELAY    | R/W    | 0h      | WE# Add Extra Half GPMC.FCLK cycle 0h = WE (active low) Timing control signal is not delayed 1h = WE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 22-20 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 19-16 | WEONTIME        | R/W    | 0h      | WE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                  |
| 15-13 | OEAADMUXOFFTIME | R/W    | 0h      | OE# de-assertion time for the first address phase in an AAD- Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                            |
| 12-8  | OEOFFTIME       | R/W    | 0h      | OE# de-assertion time from start cycle time 0h = (R/W) 0 GPMC_FCLK cycle 1h = (R/W) 1 GPMC_FCLK cycle 1Fh = (R/W) 31 GPMC_FCLK cycles                                            |
| 7     | OEEXTRADELAY    | R/W    | 0h      | OE# Add Extra Half GPMC.FCLK cycle 0h = OE (active low) Timing control signal is not delayed 1h = OE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |

<!-- image -->

## Table 7-112. GPMC\_CONFIG4\_5 Register Field Descriptions (continued)

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | OEAADMUXONTIME | R/W    | 0h      | OE# assertion time for the first address phase in an AAD-Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles |
| 3-0   | OEONTIME       | R/W    | 0h      | OE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                   |

<!-- image -->

## 7.1.5.65 GPMC\_CONFIG5\_5 Register (offset = 160h) [reset = 0h]

GPMC\_CONFIG5\_5 is shown in Figure 7-111 and described in Table 7-113. RdAccessTime and CycleTime timing parameters configuration.

## Figure 7-111. GPMC\_CONFIG5\_5 Register

| 31          | 30          | 29          | 28           | 27                  | 26                  | 25                  | 24                  |
|-------------|-------------|-------------|--------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED    | RESERVED    | RESERVED    |              | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME |
| R-0h        | R-0h        | R-0h        |              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 23          | 22          | 21          | 20           | 19                  | 18                  | 17                  | 16                  |
| RESERVED    | RESERVED    | RESERVED    | RDACCESSTIME | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 15          | 14          | 13          | 12           | 11                  | 10                  | 9                   | 8                   |
| RESERVED    | RESERVED    | RESERVED    | WRCYCLETIME  | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 7           | 6           | 5           | 4            | 3                   | 2                   | 1                   | 0                   |
| RESERVED    | RESERVED    | RESERVED    | RDCYCLETIME  | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         |
| R-0h        | R-0h        | R-0h        | R/W-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-113. GPMC\_CONFIG5\_5 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                 |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED             | R      | 0h      |                                                                                                                             |
| 27-24 | PAGEBURSTACCESSTI ME | R/W    | 0h      | Delay between successive words in a multiple access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles  |
| 23-21 | RESERVED             | R      | 0h      |                                                                                                                             |
| 20-16 | RDACCESSTIME         | R/W    | 0h      | Delay between start cycle time and first data valid 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 15-13 | RESERVED             | R      | 0h      |                                                                                                                             |
| 12-8  | WRCYCLETIME          | R/W    | 0h      | Total write cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                              |
| 7-5   | RESERVED             | R      | 0h      |                                                                                                                             |
| 4-0   | RDCYCLETIME          | R/W    | 0h      | Total read cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                               |

## 7.1.5.66 GPMC\_CONFIG6\_5 Register (offset = 164h) [reset = F070000h]

GPMC\_CONFIG6\_5 is shown in Figure 7-112 and described in Table 7-114.

WrAccessTime, WrDataOnADmuxBus, Cycle2Cycle, and BusTurnAround parameters configuration

Figure 7-112. GPMC\_CONFIG6\_5 Register

| 31                   | 30                   | 29       | 28               | 27               | 26               | 25               | 24               |
|----------------------|----------------------|----------|------------------|------------------|------------------|------------------|------------------|
| RESERVED             | RESERVED             | RESERVED | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     |
| R-0h                 | R-0h                 | R-0h     | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           |
| 23                   | 22                   | 21       | 20               | 19               | 18               | 17               | 16               |
| RESERVED             | RESERVED             | RESERVED | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS |
| R-0h                 | R-0h                 | R-0h     | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           |
| 15                   | 14                   | 13       | 12               | 11               | 10               | 9                | 8                |
| RESERVED             | RESERVED             | RESERVED | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY |
| R-0h                 | R-0h                 | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 7                    | 6                    | 5        | 4                | 3                | 2                | 1                | 0                |
| CYCLE2CYCL ESAMECSEN | CYCLE2CYCL EDIFFCSEN | RESERVED |                  | BUSTURNAROUND    | BUSTURNAROUND    | BUSTURNAROUND    |                  |
| R/W-0h               | R/W-0h               | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-114. GPMC\_CONFIG6\_5 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                                                                                                                            |
|-------|----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED             | R      | 0h      | Reset value for bit 31 is 1.                                                                                                                                                                                                                           |
| 28-24 | WRACCESSTIME         | R/W    | Fh      | Delay from StartAccessTime to the GPMC.FCLK rising edge corresponding the the GPMC.CLK rising edge used by the attached memory for the first data capture. Reset value is 0xF. 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 23-20 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 19-16 | WRDATAONADMUXBUS     | R/W    | 7h      | Specifies on which GPMC.FCLK rising edge the first data of the synchronous burst write is driven in the add/data multiplexed bus. Reset value is 0x7.                                                                                                  |
| 15-12 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 11-8  | CYCLE2CYCLEDELAY     | R/W    | 0h      | Chip select high pulse delay between two successive accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                                                                    |
| 7     | CYCLE2CYCLESAMECS EN | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to the same chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                        |
| 6     | CYCLE2CYCLEDIFFCSE N | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to a different chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                     |
| 5-4   | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 3-0   | BUSTURNAROUND        | R/W    | 0h      | Bus turn around latency between two successive accesses to the same chip-select (read to write) or to a different chip-select (read to read and read to write) 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                  |

<!-- image -->

<!-- image -->

## 7.1.5.67 GPMC\_CONFIG7\_5 Register (offset = 168h) [reset = 0h]

GPMC\_CONFIG7\_5 is shown in Figure 7-113 and described in Table 7-115. Chip-select address mapping configuration.

## Figure 7-113. GPMC\_CONFIG7\_5 Register

| 31       | 30       | 29          | 28          | 27          | 26          | 25          | 24          |
|----------|----------|-------------|-------------|-------------|-------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 23       | 22       | 21          | 20          | 19          | 18          | 17          | 16          |
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 15       | 14       | 13          | 12          | 11          | 10          | 9           | 8           |
| RESERVED | RESERVED | RESERVED    | RESERVED    | MASKADDRESS | MASKADDRESS | MASKADDRESS | MASKADDRESS |
| R-0h     | R-0h     | R-0h        | R-0h        | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7        | 6        | 5           | 4           | 3           | 2           | 1           | 0           |
| RESERVED | CSVALID  | BASEADDRESS | BASEADDRESS | BASEADDRESS | BASEADDRESS | BASEADDRESS | BASEADDRESS |
| R-0h     | R/W-0h   | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-115. GPMC\_CONFIG7\_5 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                          |
|-------|-------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 11-8  | MASKADDRESS | R/W    | 0h      | Chip-select mask address. Values not listed must be avoided as they create holes in the chip- select address space. 0h = Chip-select size of 256 Mbytes 8h = Chip-select size of 128 Mbytes Ch = Chip-select size of 64 Mbytes Eh = Chip-select size of 32 Mbytes Fh = Chip-select size of 16 Mbytes |
| 7     | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 6     | CSVALID     | R/W    | 0h      | Chip-select enable (reset value is 1 for CS[0] (active low) and 0 for CS[1] to CS[5] (active low)). 0h = CS (active low) disabled 1h = CS (active low) enabled                                                                                                                                       |
| 5-0   | BASEADDRESS | R/W    | 0h      | Chip-select base address. CSi base address where i = 0 to 6 (16 Mbytes minimum granularity). Bits 5 to 0 correspond to A29, A28, A27, A26, A25, and A24.                                                                                                                                             |

<!-- image -->

## 7.1.5.68 GPMC\_NAND\_COMMAND\_5 Register (offset = 16Ch) [reset = 0h]

GPMC\_NAND\_COMMAND\_5 is shown in Figure 7-114 and described in Table 7-116.

This register is not a true register, just an address location.

## Figure 7-114. GPMC\_NAND\_COMMAND\_5 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_COMMAND_5   |
|------|--------------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-116. GPMC\_NAND\_COMMAND\_5 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_COMMAN D_5 | W      | 0h      | Writing data at the GPMC_NAND_COMMAND_5 location places the data as the NAND command value on the bus, using a regular asynchronous write access. |

<!-- image -->

## 7.1.5.69 GPMC\_NAND\_ADDRESS\_5 Register (offset = 170h) [reset = 0h]

GPMC\_NAND\_ADDRESS\_5 is shown in Figure 7-115 and described in Table 7-117.

This register is not a true register, just an address location.

## Figure 7-115. GPMC\_NAND\_ADDRESS\_5 Register

22

21

20

19

18

17

16

15

14

13

12

GPMC\_NAND\_ADDRESS\_5

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-117. GPMC\_NAND\_ADDRESS\_5 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                               |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_ADDRESS _5 | W      | 0h      | Writing data at the GPMC_NAND_ADDRESS_5 location places the data as the NAND partial address value on the bus, using a regular asynchronous write access. |

11

10

9

8

7

31

30

29

28

27

26

25

24

23

6

5

4

3

2

1

0

## 7.1.5.70 GPMC\_NAND\_DATA\_5 Register (offset = 174h) [reset = 0h]

GPMC\_NAND\_DATA\_5 is shown in Figure 7-116 and described in Table 7-118.

This register is not a true register, just an address location.

## Figure 7-116. GPMC\_NAND\_DATA\_5 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_DATA_5   |
|------|-----------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-118. GPMC\_NAND\_DATA\_5 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                             |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_DATA_5 | R/W    | 0h      | Reading data from the GPMC_NAND_DATA_5 location or from any location in the associated chip-select memory region activates an asynchronous read access. |

<!-- image -->

<!-- image -->

## 7.1.5.71 GPMC\_CONFIG1\_6 Register (offset = 180h) [reset = 0h]

GPMC\_CONFIG1\_6 is shown in Figure 7-117 and described in Table 7-119.

The configuration 1 register sets signal control parameters per chip select.

## Figure 7-117. GPMC\_CONFIG1\_6 Register

| 31                         | 30                  | 29                   | 28                   | 27                 | 26                 | 25                | 24                         |
|----------------------------|---------------------|----------------------|----------------------|--------------------|--------------------|-------------------|----------------------------|
| WRAPBURST                  | READMULTIPL E       | READTYPE             | WRITEMULTIP LE       | WRITETYPE          | CLKACTIVATIONTIME  | CLKACTIVATIONTIME | ATTACHEDDE VICEPAGELEN GTH |
| R/W-0h                     | R/W-0h              | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 23                         | 22                  | 21                   | 20                   | 19                 | 18                 | 17                | 16                         |
| ATTACHEDDE VICEPAGELEN GTH | WAITREADMO NITORING | WAITWRITEM ONITORING | RESERVED             | WAITMONITORINGTIME | WAITMONITORINGTIME | WAITPINSELECT     | WAITPINSELECT              |
| R/W-0h                     | R/W-0h              | R/W-0h               | R-0h                 | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 15                         | 14                  | 13                   | 12                   | 11                 | 10                 | 9                 | 8                          |
| RESERVED                   | RESERVED            | DEVICESIZE           | DEVICESIZE           | DEVICETYPE         | DEVICETYPE         | MUXADDDATA        | MUXADDDATA                 |
| R-0h                       | R-0h                | R/W-0h               | R/W-0h               | R/W-0h             | R/W-0h             | R/W-0h            | R/W-0h                     |
| 7                          | 6                   | 5                    | 4                    | 3                  | 2                  | 1                 | 0                          |
| RESERVED                   | RESERVED            | RESERVED             | TIMEPARAGR ANULARITY | RESERVED           | RESERVED           | GPMCFCLKDIVIDER   | GPMCFCLKDIVIDER            |
| R-0h                       | R-0h                | R-0h                 | R/W-0h               | R-0h               | R-0h               | R/W-0h            | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-119. GPMC\_CONFIG1\_6 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                          |
|-------|-------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | WRAPBURST         | R/W    | 0h      | Enables the wrapping burst capability. Must be set if the attached device is configured in wrapping burst 0h = Synchronous wrapping burst not supported 1h = Synchronous wrapping burst supported                                                                    |
| 30    | READMULTIPLE      | R/W    | 0h      | Selects the read single or multiple access 0h = single access 1h = multiple access (burst if synchronous, page if asynchronous)                                                                                                                                      |
| 29    | READTYPE          | R/W    | 0h      | Selects the read mode operation 0h = Read Asynchronous 1h = Read Synchronous                                                                                                                                                                                         |
| 28    | WRITEMULTIPLE     | R/W    | 0h      | Selects the write single or multiple access 0h = Single access 1h = Multiple access (burst if synchronous, considered as single if asynchronous)                                                                                                                     |
| 27    | WRITETYPE         | R/W    | 0h      | Selects the write mode operation 0h = Write Asynchronous 1h = Write Synchronous                                                                                                                                                                                      |
| 26-25 | CLKACTIVATIONTIME | R/W    | 0h      | Output GPMC.CLK activation time 0h = First rising edge of GPMC_CLK at start access time 1h = First rising edge of GPMC_CLK one GPMC_FCLK cycle after start access time 2h = First rising edge of GPMC_CLK two GPMC_FCLK cycles after start access time 3h = Reserved |

<!-- image -->

## Table 7-119. GPMC\_CONFIG1\_6 Register Field Descriptions (continued)

| Bit   | Field                     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                          |
|-------|---------------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 24-23 | ATTACHEDDEVICEPAG ELENGTH | R/W    | 0h      | Specifies the attached device page (burst) length (1 Word = Interface size) 0h = 4 Words 1h = 8 Words 2h = 16 Words 3h = Reserved                                                                                                                                                                                                    |
| 22    | WAITREADMONITORING        | R/W    | 0h      | Selects the Wait monitoring configuration for Read accesses. 0h = WAIT pin is not monitored for read accesses 1h = WAIT pin is monitored for read accesses                                                                                                                                                                           |
| 21    | WAITWRITEMONITORIN G      | R/W    | 0h      | Selects the Wait monitoring configuration for Write accesses 0h = WAIT pin is not monitored for write accesses 1h = WAIT pin is monitored for write accesses                                                                                                                                                                         |
| 20    | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                      |
| 19-18 | WAITMONITORINGTIME        | R/W    | 0h      | Selects input pin Wait monitoring time 0h = WAIT pin is monitored with valid data 1h = WAIT pin is monitored one GPMC_CLK cycle before valid data 2h = WAIT pin is monitored two GPMC_CLK cycle before valid data 3h = Reserved                                                                                                      |
| 17-16 | WAITPINSELECT             | R/W    | 0h      | Selects the input WAIT pin for this chip select. 0h = WAIT input pin is WAIT0 1h = WAIT input pin is WAIT1 2h = Reserved 3h = Reserved                                                                                                                                                                                               |
| 15-14 | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                      |
| 13-12 | DEVICESIZE                | R/W    | 0h      | Selects the device size attached (Reset value is SYSBOOT[8] input pin sampled at IC reset for CS[0] (active low) and 01 for CS[1] to CS[6] (active low)). 0h = 8 bit 1h = 16 bit 2h = Reserved 3h = Reserved                                                                                                                         |
| 11-10 | DEVICETYPE                | R/W    | 0h      | Selects the attached device type 0h = NOR Flash like, asynchronous and synchronous devices 1h = Reserved 2h = NAND Flash like devices, stream mode 3h = Reserved                                                                                                                                                                     |
| 9-8   | MUXADDDATA                | R/W    | 0h      | Enables the Address and data multiplexed protocol (Reset value is SYSBOOT[11] and SYSBOOT[10] input pin sampled at IC reset for CS[0] (active low) and 0 for CS[1] to CS[6] (active low)). 0h = Non-multiplexed attached device 1h = AAD-multiplexed protocol device 2h = Address and data multiplexed attached device 3h = Reserved |
| 7-5   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                      |
| 4     | TIMEPARAGRANULARIT Y      | R/W    | 0h      | Signals timing latencies scalar factor (Rd/WRCycleTime, AccessTime, PageBurstAccessTime, CSOnTime, CSRd/WrOffTime, ADVOnTime, ADVRd/WrOffTime, OEOnTime, OEOffTime, WEOnTime, WEOffTime, Cycle2CycleDelay, BusTurnAround, TimeOutStartValue). 0h = x1 latencies 1h = x2 latencies                                                    |
| 3-2   | RESERVED                  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

## Table 7-119. GPMC\_CONFIG1\_6 Register Field Descriptions (continued)

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | GPMCFCLKDIVIDER | R/W    | 0h      | Divides the GPMC.FCLK clock. 0h = GPMC_CLK frequency = GPMC_FCLK frequency 1h = GPMC_CLK frequency = GPMC_FCLK frequency/2 2h = GPMC_CLK frequency = GPMC_FCLK frequency/3 3h = GPMC_CLK frequency = GPMC_FCLK frequency/4 |

## 7.1.5.72 GPMC\_CONFIG2\_6 Register (offset = 184h) [reset = 0h]

GPMC\_CONFIG2\_6 is shown in Figure 7-118 and described in Table 7-120.

Chip-select signal timing parameter configuration.

Figure 7-118. GPMC\_CONFIG2\_6 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 | R-0h                 |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME | RESERVED CSWROFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME | RESERVED CSRDOFFTIME |
| R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| CSEXTRADEL AY        | RESERVED             | RESERVED             | RESERVED             | CSONTIME             | CSONTIME             | CSONTIME             | CSONTIME             |
| R/W-0h               | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          | R-0h R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-120. GPMC\_CONFIG2\_6 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 20-16 | CSWROFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                     |
| 15-13 | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 12-8  | CSRDOFFTIME  | R/W    | 0h      | CS# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                      |
| 7     | CSEXTRADELAY | R/W    | 0h      | CS# Add Extra Half GPMC.FCLK cycle 0h = CS i Timing control signal is not delayed 1h = CS i Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | RESERVED     | R      | 0h      |                                                                                                                                                            |
| 3-0   | CSONTIME     | R/W    | 0h      | CS# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 15 GPMC_FCLK cycles                                           |

<!-- image -->

<!-- image -->

## 7.1.5.73 GPMC\_CONFIG3\_6 Register (offset = 188h) [reset = 0h]

GPMC\_CONFIG3\_6 is shown in Figure 7-119 and described in Table 7-121. ADV# signal timing parameter configuration.

Figure 7-119. GPMC\_CONFIG3\_6 Register

| 31             | 30                 | 29                 | 28                 | 27            | 26                 | 25                 | 24                 |
|----------------|--------------------|--------------------|--------------------|---------------|--------------------|--------------------|--------------------|
| RESERVED       | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | ADVAADMUXWROFFTIME | RESERVED      | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME | ADVAADMUXRDOFFTIME |
| R-0h           | R/W-0h             | R/W-0h             | R/W-0h             | R-0h          | R/W-0h             | R/W-0h             | R/W-0h             |
| 23             | 22                 | 21                 | 20                 | 19            | 18                 | 17                 | 16                 |
| RESERVED       | RESERVED           | RESERVED           | ADVWROFFTIME       | ADVWROFFTIME  | ADVWROFFTIME       | ADVWROFFTIME       | ADVWROFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 15             | 14                 | 13                 | 12                 | 11            | 10                 | 9                  | 8                  |
| RESERVED       | RESERVED           | RESERVED           | ADVRDOFFTIME       | ADVRDOFFTIME  | ADVRDOFFTIME       | ADVRDOFFTIME       | ADVRDOFFTIME       |
| R-0h R/W-0h    | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h   | R-0h R/W-0h        | R-0h R/W-0h        | R-0h R/W-0h        |
| 7              | 6                  | 5                  | 4                  | 3             | 2                  | 1                  | 0                  |
| ADVEXTRADE LAY | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVAADMUXONTIME    | ADVONTIME     | ADVONTIME          | ADVONTIME          | ADVONTIME          |
| R/W-0h         | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h | R/W-0h R/W-0h      | R/W-0h R/W-0h      | R/W-0h R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-121. GPMC\_CONFIG3\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                         |
|-------|---------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 30-28 | ADVAADMUXWROFFTIM E | R/W    | 0h      | ADV# de-assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                     |
| 27    | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 26-24 | ADVAADMUXRDOFFTIM E | R/W    | 0h      | ADV# assertion for first address phase when using the AAD-Mux protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                                        |
| 23-21 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 20-16 | ADVWROFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for write accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                             |
| 15-13 | RESERVED            | R      | 0h      |                                                                                                                                                                                     |
| 12-8  | ADVRDOFFTIME        | R/W    | 0h      | ADV# de-assertion time from start cycle time for read accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                              |
| 7     | ADVEXTRADELAY       | R/W    | 0h      | ADV# Add Extra Half GPMC.FCLK cycle 0h = ADV (active low) Timing control signal is not delayed 1h = ADV (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 6-4   | ADVAADMUXONTIME     | R/W    | 0h      | ADV# assertion for first address phase when using the AAD- Multiplexed protocol 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                               |

<!-- image -->

## Table 7-121. GPMC\_CONFIG3\_6 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                      |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------|
| 3-0   | ADVONTIME | R/W    | 0h      | ADV# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles |

<!-- image -->

## 7.1.5.74 GPMC\_CONFIG4\_6 Register (offset = 18Ch) [reset = 0h]

GPMC\_CONFIG4\_6 is shown in Figure 7-120 and described in Table 7-122. WE# and OE# signals timing parameter configuration.

## Figure 7-120. GPMC\_CONFIG4\_6 Register

| 31              | 30              | 29              | 28             | 27          | 26          | 25          | 24          |
|-----------------|-----------------|-----------------|----------------|-------------|-------------|-------------|-------------|
|                 | RESERVED        |                 | WEOFFTIME      | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   | WEOFFTIME   |
|                 | R-0h            |                 | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 23              | 22              | 21              | 20             | 19          | 18          | 17          | 16          |
| WEEXTRADEL AY   | RESERVED        | RESERVED        | RESERVED       | WEONTIME    | WEONTIME    | WEONTIME    | WEONTIME    |
| R/W-0h          | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h    | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h |
| 15              | 14              | 13              | 12             | 11          | 10          | 9           | 8           |
| OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEAADMUXOFFTIME | OEOFFTIME      | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   | OEOFFTIME   |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7               | 6               | 5               | 4              | 3           | 2           | 1           | 0           |
| OEEXTRADEL AY   | OEAADMUXONTIME  | OEAADMUXONTIME  | OEAADMUXONTIME | OEONTIME    | OEONTIME    | OEONTIME    | OEONTIME    |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-122. GPMC\_CONFIG4\_6 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                      |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 28-24 | WEOFFTIME       | R/W    | 0h      | WE# de-assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                                                              |
| 23    | WEEXTRADELAY    | R/W    | 0h      | WE# Add Extra Half GPMC.FCLK cycle 0h = WE (active low) Timing control signal is not delayed 1h = WE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |
| 22-20 | RESERVED        | R      | 0h      |                                                                                                                                                                                  |
| 19-16 | WEONTIME        | R/W    | 0h      | WE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                  |
| 15-13 | OEAADMUXOFFTIME | R/W    | 0h      | OE# de-assertion time for the first address phase in an AAD- Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles                            |
| 12-8  | OEOFFTIME       | R/W    | 0h      | OE# de-assertion time from start cycle time 0h = (R/W) 0 GPMC_FCLK cycle 1h = (R/W) 1 GPMC_FCLK cycle 1Fh = (R/W) 31 GPMC_FCLK cycles                                            |
| 7     | OEEXTRADELAY    | R/W    | 0h      | OE# Add Extra Half GPMC.FCLK cycle 0h = OE (active low) Timing control signal is not delayed 1h = OE (active low) Timing control signal is delayed of half GPMC_FCLK clock cycle |

<!-- image -->

## Table 7-122. GPMC\_CONFIG4\_6 Register Field Descriptions (continued)

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | OEAADMUXONTIME | R/W    | 0h      | OE# assertion time for the first address phase in an AAD-Multiplexed access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles |
| 3-0   | OEONTIME       | R/W    | 0h      | OE# assertion time from start cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                   |

<!-- image -->

## 7.1.5.75 GPMC\_CONFIG5\_6 Register (offset = 190h) [reset = 0h]

GPMC\_CONFIG5\_6 is shown in Figure 7-121 and described in Table 7-123. RdAccessTime and CycleTime timing parameters configuration.

## Figure 7-121. GPMC\_CONFIG5\_6 Register

| 31          | 30          | 29          | 28           | 27                  | 26                  | 25                  | 24                  |
|-------------|-------------|-------------|--------------|---------------------|---------------------|---------------------|---------------------|
| RESERVED    | RESERVED    | RESERVED    |              | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME | PAGEBURSTACCESSTIME |
| R-0h        | R-0h        | R-0h        |              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |
| 23          | 22          | 21          | 20           | 19                  | 18                  | 17                  | 16                  |
| RESERVED    | RESERVED    | RESERVED    | RDACCESSTIME | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        | RDACCESSTIME        |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 15          | 14          | 13          | 12           | 11                  | 10                  | 9                   | 8                   |
| RESERVED    | RESERVED    | RESERVED    | WRCYCLETIME  | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         | WRCYCLETIME         |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         | R-0h R/W-0h         |
| 7           | 6           | 5           | 4            | 3                   | 2                   | 1                   | 0                   |
| RESERVED    | RESERVED    | RESERVED    | RDCYCLETIME  | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         | RDCYCLETIME         |
| R-0h        | R-0h        | R-0h        | R/W-0h       | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-123. GPMC\_CONFIG5\_6 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                 |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED             | R      | 0h      |                                                                                                                             |
| 27-24 | PAGEBURSTACCESSTI ME | R/W    | 0h      | Delay between successive words in a multiple access 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles  |
| 23-21 | RESERVED             | R      | 0h      |                                                                                                                             |
| 20-16 | RDACCESSTIME         | R/W    | 0h      | Delay between start cycle time and first data valid 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 15-13 | RESERVED             | R      | 0h      |                                                                                                                             |
| 12-8  | WRCYCLETIME          | R/W    | 0h      | Total write cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                              |
| 7-5   | RESERVED             | R      | 0h      |                                                                                                                             |
| 4-0   | RDCYCLETIME          | R/W    | 0h      | Total read cycle time 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles                               |

## 7.1.5.76 GPMC\_CONFIG6\_6 Register (offset = 194h) [reset = F070000h]

GPMC\_CONFIG6\_6 is shown in Figure 7-122 and described in Table 7-124.

WrAccessTime, WrDataOnADmuxBus, Cycle2Cycle, and BusTurnAround parameters configuration

Figure 7-122. GPMC\_CONFIG6\_6 Register

| 31                   | 30                   | 29       | 28               | 27               | 26               | 25               | 24               |
|----------------------|----------------------|----------|------------------|------------------|------------------|------------------|------------------|
| RESERVED             | RESERVED             | RESERVED | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     | WRACCESSTIME     |
| R-0h                 | R-0h                 | R-0h     | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           | R/W-Fh           |
| 23                   | 22                   | 21       | 20               | 19               | 18               | 17               | 16               |
| RESERVED             | RESERVED             | RESERVED | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS | WRDATAONADMUXBUS |
| R-0h                 | R-0h                 | R-0h     | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           | R/W-7h           |
| 15                   | 14                   | 13       | 12               | 11               | 10               | 9                | 8                |
| RESERVED             | RESERVED             | RESERVED | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY | CYCLE2CYCLEDELAY |
| R-0h                 | R-0h                 | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 7                    | 6                    | 5        | 4                | 3                | 2                | 1                | 0                |
| CYCLE2CYCL ESAMECSEN | CYCLE2CYCL EDIFFCSEN | RESERVED |                  | BUSTURNAROUND    | BUSTURNAROUND    | BUSTURNAROUND    |                  |
| R/W-0h               | R/W-0h               | R-0h     | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-124. GPMC\_CONFIG6\_6 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                                                                                                                            |
|-------|----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | RESERVED             | R      | 0h      | Reset value for bit 31 is 1.                                                                                                                                                                                                                           |
| 28-24 | WRACCESSTIME         | R/W    | Fh      | Delay from StartAccessTime to the GPMC.FCLK rising edge corresponding the the GPMC.CLK rising edge used by the attached memory for the first data capture. Reset value is 0xF. 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 1Fh = 31 GPMC_FCLK cycles |
| 23-20 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 19-16 | WRDATAONADMUXBUS     | R/W    | 7h      | Specifies on which GPMC.FCLK rising edge the first data of the synchronous burst write is driven in the add/data multiplexed bus. Reset value is 0x7.                                                                                                  |
| 15-12 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 11-8  | CYCLE2CYCLEDELAY     | R/W    | 0h      | Chip select high pulse delay between two successive accesses 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                                                                                                                    |
| 7     | CYCLE2CYCLESAMECS EN | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to the same chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                        |
| 6     | CYCLE2CYCLEDIFFCSE N | R/W    | 0h      | Add Cycle2CycleDelay between two successive accesses to a different chip-select (any access type) 0h = No delay between the two accesses 1h = Add CYCLE2CYCLEDELAY                                                                                     |
| 5-4   | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                        |
| 3-0   | BUSTURNAROUND        | R/W    | 0h      | Bus turn around latency between two successive accesses to the same chip-select (read to write) or to a different chip-select (read to read and read to write) 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle Fh = 15 GPMC_FCLK cycles                  |

<!-- image -->

<!-- image -->

## 7.1.5.77 GPMC\_CONFIG7\_6 Register (offset = 198h) [reset = 0h]

GPMC\_CONFIG7\_6 is shown in Figure 7-123 and described in Table 7-125. Chip-select address mapping configuration.

## Figure 7-123. GPMC\_CONFIG7\_6 Register

| 31       | 30       | 29       | 28       | 27          | 26          | 25          | 24          |
|----------|----------|----------|----------|-------------|-------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 23       | 22       | 21       | 20       | 19          | 18          | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11          | 10          | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | MASKADDRESS | MASKADDRESS | MASKADDRESS | MASKADDRESS |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |
| 7        | 6        | 5        | 4        | 3           | 2           | 1           | 0           |
| RESERVED | CSVALID  |          |          | BASEADDRESS |             |             |             |
| R-0h     | R/W-0h   |          |          | R/W-0h      |             |             |             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-125. GPMC\_CONFIG7\_6 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                          |
|-------|-------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 11-8  | MASKADDRESS | R/W    | 0h      | Chip-select mask address. Values not listed must be avoided as they create holes in the chip- select address space. 0h = Chip-select size of 256 Mbytes 8h = Chip-select size of 128 Mbytes Ch = Chip-select size of 64 Mbytes Eh = Chip-select size of 32 Mbytes Fh = Chip-select size of 16 Mbytes |
| 7     | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 6     | CSVALID     | R/W    | 0h      | Chip-select enable (reset value is 1 for CS[0] (active low) and 0 for CS[1] to CS[5] (active low)). 0h = CS (active low) disabled 1h = CS (active low) enabled                                                                                                                                       |
| 5-0   | BASEADDRESS | R/W    | 0h      | Chip-select base address. CSi base address where i = 0 to 6 (16 Mbytes minimum granularity). Bits 5 to 0 correspond to A29, A28, A27, A26, A25, and A24.                                                                                                                                             |

<!-- image -->

## 7.1.5.78 GPMC\_NAND\_COMMAND\_6 Register (offset = 19Ch) [reset = 0h]

GPMC\_NAND\_COMMAND\_6 is shown in Figure 7-124 and described in Table 7-126.

This register is not a true register, just an address location.

## Figure 7-124. GPMC\_NAND\_COMMAND\_6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_COMMAND_6   |
|------|--------------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-126. GPMC\_NAND\_COMMAND\_6 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                       |
|-------|----------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_COMMAN D_6 | W      | 0h      | Writing data at the GPMC_NAND_COMMAND_6 location places the data as the NAND command value on the bus, using a regular asynchronous write access. |

<!-- image -->

## 7.1.5.79 GPMC\_NAND\_ADDRESS\_6 Register (offset = 1A0h) [reset = 0h]

GPMC\_NAND\_ADDRESS\_6 is shown in Figure 7-125 and described in Table 7-127.

This register is not a true register, just an address location.

## Figure 7-125. GPMC\_NAND\_ADDRESS\_6 Register

22

21

20

19

18

17

16

15

14

13

12

GPMC\_NAND\_ADDRESS\_6

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-127. GPMC\_NAND\_ADDRESS\_6 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                               |
|-------|----------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_ADDRESS _6 | W      | 0h      | Writing data at the GPMC_NAND_ADDRESS_6 location places the data as the NAND partial address value on the bus, using a regular asynchronous write access. |

11

10

9

8

7

31

30

29

28

27

26

25

24

23

6

5

4

3

2

1

0

## 7.1.5.80 GPMC\_NAND\_DATA\_6 Register (offset = 1A4h) [reset = 0h]

GPMC\_NAND\_DATA\_6 is shown in Figure 7-126 and described in Table 7-128.

This register is not a true register, just an address location.

## Figure 7-126. GPMC\_NAND\_DATA\_6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GPMC_NAND_DATA_6   |
|------|-----------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-128. GPMC\_NAND\_DATA\_6 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                             |
|-------|------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GPMC_NAND_DATA_6 | R/W    | 0h      | Reading data from the GPMC_NAND_DATA_6 location or from any location in the associated chip-select memory region activates an asynchronous read access. |

<!-- image -->

<!-- image -->

## 7.1.5.81 GPMC\_PREFETCH\_CONFIG1 Register (offset = 1E0h) [reset = 0h]

GPMC\_PREFETCH\_CONFIG1 is shown in Figure 7-127 and described in Table 7-129.

## Figure 7-127. GPMC\_PREFETCH\_CONFIG1 Register

| 31                | 30                | 29                | 28                | 27                     | 26               | 25               | 24               |
|-------------------|-------------------|-------------------|-------------------|------------------------|------------------|------------------|------------------|
| RESERVED          | CYCLEOPTIMIZATION | CYCLEOPTIMIZATION | CYCLEOPTIMIZATION | ENABLEOPTIM IZEDACCESS | ENGINECSSELECTOR | ENGINECSSELECTOR | ENGINECSSELECTOR |
| R-0h              | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h                 | R/W-0h           | R/W-0h           | R/W-0h           |
| 23                | 22                | 21                | 20                | 19                     | 18               | 17               | 16               |
| PFPWENROU NDROBIN | RESERVED          | RESERVED          | RESERVED          | PFPWWEIGHTEDPRIO       | PFPWWEIGHTEDPRIO | PFPWWEIGHTEDPRIO | PFPWWEIGHTEDPRIO |
| R/W-0h            | R-0h              | R-0h              | R-0h              | R/W-0h                 | R/W-0h           | R/W-0h           | R/W-0h           |
| 15                | 14                | 13                | 12                | 11                     | 10               | 9                | 8                |
| RESERVED          | FIFOTHRESHOLD     | FIFOTHRESHOLD     | FIFOTHRESHOLD     | FIFOTHRESHOLD          | FIFOTHRESHOLD    | FIFOTHRESHOLD    | FIFOTHRESHOLD    |
| R-0h              | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h                 | R/W-0h           | R/W-0h           | R/W-0h           |
| 7                 | 6                 | 5                 | 4                 | 3                      | 2                | 1                | 0                |
| ENABLEENGIN E     | RESERVED          | WAITPINSELECTOR   | WAITPINSELECTOR   | SYNCHROMO DE           | DMAMODE          | RESERVED         | ACCESSMODE       |
| R/W-0h            | R-0h              | R/W-0h            | R/W-0h            | R/W-0h                 | R/W-0h           | R-0h             | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-129. GPMC\_PREFETCH\_CONFIG1 Register Field Descriptions

| Bit   | Field                  | Type   | Reset   | Description                                                                                                                                                                                                                                         |
|-------|------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED               | R      | 0h      |                                                                                                                                                                                                                                                     |
| 30-28 | CYCLEOPTIMIZATION      | R/W    | 0h      | Define the number of GPMC.FCLK cycles to be substracted from RdCycleTime, WrCycleTime, AccessTime, CSRdOffTime, CSWrOffTime, ADVRdOffTime, ADVWrOffTime, OEOffTime, WEOffTime 0h = 0 GPMC_FCLK cycle 1h = 1 GPMC_FCLK cycle 7h = 7 GPMC_FCLK cycles |
| 27    | ENABLEOPTIMIZEDACC ESS | R/W    | 0h      | Enables access cycle optimization 0h = Access cycle optimization is disabled 1h = Access cycle optimization is enabled                                                                                                                              |
| 26-24 | ENGINECSSELECTOR       | R/W    | 0h      | Selects the CS (active low) where Prefetch Postwrite engine is active 0h = CS0 (active low) 1h = CS1 (active low) 2h = CS2 (active low) 3h = CS3 (active low) 4h = CS4 (active low) 5h = CS5 (active low) 6h = CS6 (active low)                     |
| 23    | PFPWENROUNDROBIN       | R/W    | 0h      | 0h = Prefetch Postwrite engine round robin arbitration is disabled 1h = Prefetch Postwrite engine round robin arbitration is enabled                                                                                                                |
| 22-20 | RESERVED               | R      | 0h      |                                                                                                                                                                                                                                                     |
| 19-16 | PFPWWEIGHTEDPRIO       | R/W    | 0h      | 0h = The next access is granted to the PFPW engine 1h = The two next accesses are granted to the PFPW engine Fh = The 16 next accesses are granted to the PFPW engine                                                                               |
| 15    | RESERVED               | R      | 0h      |                                                                                                                                                                                                                                                     |
| 14-8  | FIFOTHRESHOLD          | R/W    | 0h      | 0h = 0 byte 1h = 1 byte 40h = 64 bytes                                                                                                                                                                                                              |

<!-- image -->

## Table 7-129. GPMC\_PREFETCH\_CONFIG1 Register Field Descriptions (continued)

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                      |
|-------|-----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 7     | ENABLEENGINE    | R/W    | 0h      | 0h = Prefetch Postwrite engine is disabled 1h = Prefetch Postwrite engine is enabled                                                                                                             |
| 6     | RESERVED        | R      | 0h      |                                                                                                                                                                                                  |
| 5-4   | WAITPINSELECTOR | R/W    | 0h      | 0h = Selects Wait0EdgeDetection 1h = Selects Wait1EdgeDetection 2h = Reserved 3h = Reserved                                                                                                      |
| 3     | SYNCHROMODE     | R/W    | 0h      | 0h = Engine starts the access to CS as soon as STARTENGINE is set 1h = Engine starts the access to CS as soon as STARTENGINE is set AND wait to non wait edge detection on the selected wait pin |
| 2     | DMAMODE         | R/W    | 0h      | 0h = Interrupt synchronization is enabled. Only interrupt line will be activated on FIFO threshold crossing. 1h = DMA request synchronization is enabled. A DMA request protocol is used.        |
| 1     | RESERVED        | R      | 0h      |                                                                                                                                                                                                  |
| 0     | ACCESSMODE      | R/W    | 0h      | 0h = Prefetch read mode 1h = Write-posting mode                                                                                                                                                  |

<!-- image -->

## 7.1.5.82 GPMC\_PREFETCH\_CONFIG2 Register (offset = 1E4h) [reset = 0h]

GPMC\_PREFETCH\_CONFIG2 is shown in Figure 7-128 and described in Table 7-130.

## Figure 7-128. GPMC\_PREFETCH\_CONFIG2 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|-----------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------|
| RESERVED                                                                                | TRANSFERCOUNT                                                                           |
| R-0h                                                                                    | R/W-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-130. GPMC\_PREFETCH\_CONFIG2 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                              |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------|
| 31-14 | RESERVED      | R      | 0h      |                                                                                                                                          |
| 13-0  | TRANSFERCOUNT | R/W    | 0h      | Selects the number of bytes to be read or written by the engine to the selected CS (active low) 0h = 0 byte 1h = 1 byte 2000h = 8 Kbytes |

<!-- image -->

## 7.1.5.83 GPMC\_PREFETCH\_CONTROL Register (offset = 1ECh) [reset = 0h]

GPMC\_PREFETCH\_CONTROL is shown in Figure 7-129 and described in Table 7-131.

## Figure 7-129. GPMC\_PREFETCH\_CONTROL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24          |
|----------|----------|----------|----------|----------|----------|----------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | STARTENGINE |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-131. GPMC\_PREFETCH\_CONTROL Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                          |
|-------|-------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                      |
| 0     | STARTENGINE | R/W    | 0h      | Resets the FIFO pointer and starts the engine 0h (W) = Stops the engine 0h (R) = Engine is stopped 1h (W) = Resets the FIFO pointer to 0 in prefetch mode and 40h in postwrite mode and starts the engine 1h (R) = Engine is running |

<!-- image -->

## 7.1.5.84 GPMC\_PREFETCH\_STATUS Register (offset = 1F0h) [reset = 0h]

GPMC\_PREFETCH\_STATUS is shown in Figure 7-130 and described in Table 7-132.

## Figure 7-130. GPMC\_PREFETCH\_STATUS Register

| 31         | 30          | 29          | 28          | 27          | 26          | 25          | 24                   |
|------------|-------------|-------------|-------------|-------------|-------------|-------------|----------------------|
| RESERVED   | FIFOPOINTER | FIFOPOINTER | FIFOPOINTER | FIFOPOINTER | FIFOPOINTER | FIFOPOINTER | FIFOPOINTER          |
| R-0h       | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h                 |
| 23         | 22          | 21          | 20          | 19          | 18          | 17          | 16                   |
|            | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | FIFOTHRESH OLDSTATUS |
|            | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h                 |
| 15         | 14          | 13          | 12          | 11          | 10          | 9           | 8                    |
| RESERVED   | RESERVED    | COUNTVALUE  | COUNTVALUE  | COUNTVALUE  | COUNTVALUE  | COUNTVALUE  | COUNTVALUE           |
| R-0h       | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h                 |
| 7          | 6           | 5           | 4           | 3           | 2           | 1           | 0                    |
| COUNTVALUE | COUNTVALUE  | COUNTVALUE  | COUNTVALUE  | COUNTVALUE  | COUNTVALUE  | COUNTVALUE  | COUNTVALUE           |
| R-0h       | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-132. GPMC\_PREFETCH\_STATUS Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                                                                                                                                         |
|-------|----------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                                     |
| 30-24 | FIFOPOINTER          | R      | 0h      | FIFOPOINTER. 0h = 0 byte available to be read or 0 free empty place to be written 40h = 64 bytes available to be read or 64 empty places to be written                                                                                                              |
| 23-17 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                                     |
| 16    | FIFOTHRESHOLDSTATU S | R      | 0h      | Set when FIFOPointer exceeds FIFOThreshold value. 0h = FIFOPointer smaller or equal to FIFOThreshold. Writing to this bit has no effect 1h = FIFOPointer greater than FIFOThreshold. Writing to this bit has no effect                                              |
| 15-14 | RESERVED             | R      | 0h      |                                                                                                                                                                                                                                                                     |
| 13-0  | COUNTVALUE           | R      | 0h      | Number of remaining bytes to be read or to be written by the engine according to the TransferCount value. 0h = 0 byte remaining to be read or to be written 1h = 1 byte remaining to be read or to be writte 2000h = 8 Kbytes remaining to be read or to be written |

## 7.1.5.85 GPMC\_ECC\_CONFIG Register (offset = 1F4h) [reset = 0h]

GPMC\_ECC\_CONFIG is shown in Figure 7-131 and described in Table 7-133.

## Figure 7-131. GPMC\_ECC\_CONFIG Register

| 31       | 30           | 29           | 28           | 27          | 26          | 25          | 24            |
|----------|--------------|--------------|--------------|-------------|-------------|-------------|---------------|
| RESERVED | RESERVED     | RESERVED     | RESERVED     | RESERVED    | RESERVED    | RESERVED    | RESERVED      |
| R-0h     | R-0h         | R-0h         | R-0h         | R-0h        | R-0h        | R-0h        | R-0h          |
| 23       | 22           | 21           | 20           | 19          | 18          | 17          | 16            |
|          |              |              | RESERVED     |             |             |             | ECCALGORIT HM |
| R-0h     | R-0h         | R-0h         | R-0h         | R-0h        | R-0h        | R-0h        | R/W-0h        |
| 15       | 14           | 13           | 12           | 11          | 10          | 9           | 8             |
| RESERVED | RESERVED     | ECCBCHTSEL   | ECCBCHTSEL   | ECCWRAPMODE | ECCWRAPMODE | ECCWRAPMODE | ECCWRAPMODE   |
| R-0h     | R-0h         | R/W-0h       | R/W-0h       |             | R/W-0h      | R/W-0h      | R/W-0h        |
| 7        | 6            | 5            | 4            | 3           | 2           | 1           | 0             |
| ECC16B   | ECCTOPSECTOR | ECCTOPSECTOR | ECCTOPSECTOR | ECCCS       | ECCCS       | ECCCS       | ECCENABLE     |
| R/W-0h   | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-133. GPMC\_ECC\_CONFIG Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                 |
|-------|--------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED     | R      | 0h      |                                                                                                                                                                                             |
| 16    | ECCALGORITHM | R/W    | 0h      | ECC algorithm used 0h = Hamming code 1h = BCH code                                                                                                                                          |
| 15-14 | RESERVED     | R      | 0h      |                                                                                                                                                                                             |
| 13-12 | ECCBCHTSEL   | R/W    | 0h      | Error correction capability used for BCH 0h = Up to 4 bits error correction (t = 4) 1h = Up to 8 bits error correction (t = 8) 2h = Up to 16 bits error correction (t = 16) 3h = Reserved   |
| 11-8  | ECCWRAPMODE  | R/W    | 0h      | Spare area organization definition for the BCH algorithm. See the BCH syndrome/parity calculator module functional specification for more details                                           |
| 7     | ECC16B       | R/W    | 0h      | Selects an ECC calculated on 16 columns 0h = ECC calculated on 8 columns 1h = ECC calculated on 16 columns                                                                                  |
| 6-4   | ECCTOPSECTOR | R/W    | 0h      | Number of sectors to process with the BCH algorithm 0h = 1 sector (512kB page) 1h = 2 sectors 3h = 4 sectors (2kB page) 7h = 8 sectors (4kB page)                                           |
| 3-1   | ECCCS        | R/W    | 0h      | Selects the Chip-select where ECC is computed 0h = Chip-select 0 1h = Chip-select 1 2h = Chip-select 2 3h = Chip-select 3 4h = Chip-select 4 5h = Chip-select 5 6h = Reserved 7h = Reserved |

<!-- image -->

<!-- image -->

## Table 7-133. GPMC\_ECC\_CONFIG Register Field Descriptions (continued)

|   Bit | Field     | Type   | Reset   | Description                                                |
|-------|-----------|--------|---------|------------------------------------------------------------|
|     0 | ECCENABLE | R/W    | 0h      | Enables the ECC feature 0h = ECC disabled 1h = ECC enabled |

## 7.1.5.86 GPMC\_ECC\_CONTROL Register (offset = 1F8h) [reset = 0h]

GPMC\_ECC\_CONTROL is shown in Figure 7-132 and described in Table 7-134.

## Figure 7-132. GPMC\_ECC\_CONTROL Register

| 31       | 30       | 29       | 28                | 27       | 26       | 25       | 24       |
|----------|----------|----------|-------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED          | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22       | 22                | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h  | 18                | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13       | 13                | 13       | 13       | 13       | 13       |
| 12       | 12       | 12       | 12                | 12       | 12       | 12       | 12       |
| 11       | 10       | 9        | 8 ECCCLEAR R/W-0h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5        | 5                 | 5        | 5        | 5        | 4        |
| 3        | 3        | 3        | 3                 | 3        | 3        | 3        | 2        |
| 1        | 0        | RESERVED | ECCPOINTER        |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-134. GPMC\_ECC\_CONTROL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 8     | ECCCLEAR   | R/W    | 0h      | Clear all ECC result registers 0h (W) = Ignored 0h (R) = All reads return 0 1h (W) = Clears all ECC result registers                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 7-4   | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 3-0   | ECCPOINTER | R/W    | 0h      | Selects ECC result register (Reads to this field give the dynamic position of the ECC pointer - Writes to this field select the ECC result register where the first ECC computation will be stored). Writing values not listed disables the ECC engine (ECCEnable bit of GPMC_ECC_CONFIG cleared to 0). 0h = Writing 0 disables the ECC engine (ECCENABLE bit of GPMC_ECC_CONFIG cleared to 0) 1h = ECC result register 1 selected 2h = ECC result register 2 selected 3h = ECC result register 3 selected 4h = ECC result register 4 selected 5h = ECC result register 5 selected 6h = ECC result register 6 selected 7h = ECC result register 7 selected 8h = ECC result register 8 selected 9h = ECC result register 9 selected |

<!-- image -->

<!-- image -->

## 7.1.5.87 GPMC\_ECC\_SIZE\_CONFIG Register (offset = 1FCh) [reset = 0h]

GPMC\_ECC\_SIZE\_CONFIG is shown in Figure 7-133 and described in Table 7-135.

## Figure 7-133. GPMC\_ECC\_SIZE\_CONFIG Register

| 31              | 30              | 29              | 28              | 27              | 26              | 25              | 24              |
|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|
| RESERVED        | RESERVED        | ECCSIZE1        | ECCSIZE1        | ECCSIZE1        | ECCSIZE1        | ECCSIZE1        | ECCSIZE1        |
| R-0h            | R-0h            | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |
| 23              | 22              | 21              | 20              | 19              | 18              | 17              | 16              |
| ECCSIZE1        | ECCSIZE1        | RESERVED        | RESERVED        | ECCSIZE0        | ECCSIZE0        | ECCSIZE0        | ECCSIZE0        |
| R/W-0h          | R/W-0h          | R-0h            | R-0h            | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |
| 15              | 14              | 13              | 12              | 11              | 10              | 9               | 8               |
| ECCSIZE0        | ECCSIZE0        | ECCSIZE0        | ECCSIZE0        | RESERVED        | RESERVED        | RESERVED        | ECC9RESULT SIZE |
| R/W-0h R-0h     | R/W-0h R-0h     | R/W-0h R-0h     | R/W-0h R-0h     | R/W-0h R-0h     | R/W-0h R-0h     | R/W-0h R-0h     | R/W-0h          |
| 7               | 6               | 5               | 4               | 3               | 2               | 1               | 0               |
| ECC8RESULT SIZE | ECC7RESULT SIZE | ECC6RESULT SIZE | ECC5RESULT SIZE | ECC4RESULT SIZE | ECC3RESULT SIZE | ECC2RESULT SIZE | ECC1RESULT SIZE |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-135. GPMC\_ECC\_SIZE\_CONFIG Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                              |
|-------|----------------|--------|---------|------------------------------------------------------------------------------------------|
| 31-30 | RESERVED       | R      | 0h      |                                                                                          |
| 29-22 | ECCSIZE1       | R/W    | 0h      | Defines ECC size 1 0h = 2 Bytes 1h = 4 Bytes 2h = 6 Bytes 3h = 8 Bytes FFh = 512 Bytes   |
| 21-20 | RESERVED       | R      | 0h      |                                                                                          |
| 19-12 | ECCSIZE0       | R/W    | 0h      | Defines ECC size 0 0h = 2 Bytes 1h = 4 Bytes 2h = 6 Bytes 3h = 8 Bytes FFh = 512 Bytes   |
| 11-9  | RESERVED       | R      | 0h      |                                                                                          |
| 8     | ECC9RESULTSIZE | R/W    | 0h      | Selects ECC size for ECC 9 result register 0h = ECCSIZE0 selected 1h = ECCSIZE1 selected |
| 7     | ECC8RESULTSIZE | R/W    | 0h      | Selects ECC size for ECC 8 result register 0h = ECCSIZE0 selected 1h = ECCSIZE1 selected |
| 6     | ECC7RESULTSIZE | R/W    | 0h      | Selects ECC size for ECC 7 result register 0h = ECCSIZE0 selected 1h = ECCSIZE1 selected |
| 5     | ECC6RESULTSIZE | R/W    | 0h      | Selects ECC size for ECC 6 result register 0h = ECCSIZE0 selected 1h = ECCSIZE1 selected |
| 4     | ECC5RESULTSIZE | R/W    | 0h      | Selects ECC size for ECC 5 result register 0h = ECCSIZE0 selected 1h = ECCSIZE1 selected |

<!-- image -->

## Table 7-135. GPMC\_ECC\_SIZE\_CONFIG Register Field Descriptions (continued)

|   Bit | Field          | Type   | Reset   | Description                                                                              |
|-------|----------------|--------|---------|------------------------------------------------------------------------------------------|
|     3 | ECC4RESULTSIZE | R/W    | 0h      | Selects ECC size for ECC 4 result register 0h = ECCSIZE0 selected 1h = ECCSIZE1 selected |
|     2 | ECC3RESULTSIZE | R/W    | 0h      | Selects ECC size for ECC 3 result register 0h = ECCSIZE0 selected 1h = ECCSIZE1 selected |
|     1 | ECC2RESULTSIZE | R/W    | 0h      | Selects ECC size for ECC 2 result register 0h = ECCSIZE0 selected 1h = ECCSIZE1 selected |
|     0 | ECC1RESULTSIZE | R/W    | 0h      | Selects ECC size for ECC 1 result register 0h = ECCSIZE0 selected 1h = ECCSIZE1 selected |

<!-- image -->

## 7.1.5.88 GPMC\_ECC1\_RESULT Register (offset = 200h) [reset = 0h]

GPMC\_ECC1\_RESULT is shown in Figure 7-134 and described in Table 7-136.

## Figure 7-134. GPMC\_ECC1\_RESULT Register

| 31       | 30       | 29       | 28       | 27     | 26     | 25    | 24    |
|----------|----------|----------|----------|--------|--------|-------|-------|
| RESERVED | RESERVED | RESERVED | RESERVED | P2048O | P1024O | P512O | P256O |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 23       | 22       | 21       | 20       | 19     | 18     | 17    | 16    |
| P128O    | P64O     | P32O     | P16O     | P8O    | P4O    | P2O   | P1O   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 15       | 14       | 13       | 12       | 11     | 10     | 9     | 8     |
| RESERVED | RESERVED | RESERVED | RESERVED | P2048E | P1024E | P512E | P256E |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 7        | 6        | 5        | 4        | 3      | 2      | 1     | 0     |
| P128E    | P64E     | P32E     | P16E     | P8E    | P4E    | P2E   | P1E   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-136. GPMC\_ECC1\_RESULT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------|
| 31-28 | RESERVED | R      | 0h      |                                                                   |
| 27    | P2048O   | R      | 0h      | Odd Row Parity bit 2048, only used for ECC computed on 512 Bytes  |
| 26    | P1024O   | R      | 0h      | Odd Row Parity bit 1024                                           |
| 25    | P512O    | R      | 0h      | Odd Row Parity bit 512                                            |
| 24    | P256O    | R      | 0h      | Odd Row Parity bit 256                                            |
| 23    | P128O    | R      | 0h      | Odd Row Parity bit 128                                            |
| 22    | P64O     | R      | 0h      | Odd Row Parity bit 64                                             |
| 21    | P32O     | R      | 0h      | Odd Row Parity bit 32                                             |
| 20    | P16O     | R      | 0h      | Odd Row Parity bit 16                                             |
| 19    | P8O      | R      | 0h      | Odd Row Parity bit 8                                              |
| 18    | P4O      | R      | 0h      | Odd Column Parity bit 4                                           |
| 17    | P2O      | R      | 0h      | Odd Column Parity bit 2                                           |
| 16    | P1O      | R      | 0h      | Odd Column Parity bit 1                                           |
| 15-12 | RESERVED | R      | 0h      |                                                                   |
| 11    | P2048E   | R      | 0h      | Even Row Parity bit 2048, only used for ECC computed on 512 Bytes |
| 10    | P1024E   | R      | 0h      | Even Row Parity bit 1024                                          |
| 9     | P512E    | R      | 0h      | Even Row Parity bit 512                                           |
| 8     | P256E    | R      | 0h      | Even Row Parity bit 256                                           |
| 7     | P128E    | R      | 0h      | Even Row Parity bit 128                                           |
| 6     | P64E     | R      | 0h      | Even Row Parity bit 64                                            |
| 5     | P32E     | R      | 0h      | Even Row Parity bit 32                                            |
| 4     | P16E     | R      | 0h      | Even Row Parity bit 16                                            |
| 3     | P8E      | R      | 0h      | Even Row Parity bit 8                                             |
| 2     | P4E      | R      | 0h      | Even Column Parity bit 4                                          |
| 1     | P2E      | R      | 0h      | Even Column Parity bit 2                                          |

<!-- image -->

## Table 7-136. GPMC\_ECC1\_RESULT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
|     0 | P1E     | R      | 0h      | Even Column Parity bit 1 |

<!-- image -->

## 7.1.5.89 GPMC\_ECC2\_RESULT Register (offset = 204h) [reset = 0h]

GPMC\_ECC2\_RESULT is shown in Figure 7-135 and described in Table 7-137.

## Figure 7-135. GPMC\_ECC2\_RESULT Register

| 31       | 30       | 29       | 28       | 27     | 26     | 25    | 24    |
|----------|----------|----------|----------|--------|--------|-------|-------|
| RESERVED | RESERVED | RESERVED | RESERVED | P2048O | P1024O | P512O | P256O |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 23       | 22       | 21       | 20       | 19     | 18     | 17    | 16    |
| P128O    | P64O     | P32O     | P16O     | P8O    | P4O    | P2O   | P1O   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 15       | 14       | 13       | 12       | 11     | 10     | 9     | 8     |
| RESERVED | RESERVED | RESERVED | RESERVED | P2048E | P1024E | P512E | P256E |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 7        | 6        | 5        | 4        | 3      | 2      | 1     | 0     |
| P128E    | P64E     | P32E     | P16E     | P8E    | P4E    | P2E   | P1E   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-137. GPMC\_ECC2\_RESULT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------|
| 31-28 | RESERVED | R      | 0h      |                                                                   |
| 27    | P2048O   | R      | 0h      | Odd Row Parity bit 2048, only used for ECC computed on 512 Bytes  |
| 26    | P1024O   | R      | 0h      | Odd Row Parity bit 1024                                           |
| 25    | P512O    | R      | 0h      | Odd Row Parity bit 512                                            |
| 24    | P256O    | R      | 0h      | Odd Row Parity bit 256                                            |
| 23    | P128O    | R      | 0h      | Odd Row Parity bit 128                                            |
| 22    | P64O     | R      | 0h      | Odd Row Parity bit 64                                             |
| 21    | P32O     | R      | 0h      | Odd Row Parity bit 32                                             |
| 20    | P16O     | R      | 0h      | Odd Row Parity bit 16                                             |
| 19    | P8O      | R      | 0h      | Odd Row Parity bit 8                                              |
| 18    | P4O      | R      | 0h      | Odd Column Parity bit 4                                           |
| 17    | P2O      | R      | 0h      | Odd Column Parity bit 2                                           |
| 16    | P1O      | R      | 0h      | Odd Column Parity bit 1                                           |
| 15-12 | RESERVED | R      | 0h      |                                                                   |
| 11    | P2048E   | R      | 0h      | Even Row Parity bit 2048, only used for ECC computed on 512 Bytes |
| 10    | P1024E   | R      | 0h      | Even Row Parity bit 1024                                          |
| 9     | P512E    | R      | 0h      | Even Row Parity bit 512                                           |
| 8     | P256E    | R      | 0h      | Even Row Parity bit 256                                           |
| 7     | P128E    | R      | 0h      | Even Row Parity bit 128                                           |
| 6     | P64E     | R      | 0h      | Even Row Parity bit 64                                            |
| 5     | P32E     | R      | 0h      | Even Row Parity bit 32                                            |
| 4     | P16E     | R      | 0h      | Even Row Parity bit 16                                            |
| 3     | P8E      | R      | 0h      | Even Row Parity bit 8                                             |
| 2     | P4E      | R      | 0h      | Even Column Parity bit 4                                          |
| 1     | P2E      | R      | 0h      | Even Column Parity bit 2                                          |

<!-- image -->

## Table 7-137. GPMC\_ECC2\_RESULT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
|     0 | P1E     | R      | 0h      | Even Column Parity bit 1 |

<!-- image -->

## 7.1.5.90 GPMC\_ECC3\_RESULT Register (offset = 208h) [reset = 0h]

GPMC\_ECC3\_RESULT is shown in Figure 7-136 and described in Table 7-138.

## Figure 7-136. GPMC\_ECC3\_RESULT Register

| 31       | 30       | 29       | 28       | 27     | 26     | 25    | 24    |
|----------|----------|----------|----------|--------|--------|-------|-------|
| RESERVED | RESERVED | RESERVED | RESERVED | P2048O | P1024O | P512O | P256O |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 23       | 22       | 21       | 20       | 19     | 18     | 17    | 16    |
| P128O    | P64O     | P32O     | P16O     | P8O    | P4O    | P2O   | P1O   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 15       | 14       | 13       | 12       | 11     | 10     | 9     | 8     |
| RESERVED | RESERVED | RESERVED | RESERVED | P2048E | P1024E | P512E | P256E |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 7        | 6        | 5        | 4        | 3      | 2      | 1     | 0     |
| P128E    | P64E     | P32E     | P16E     | P8E    | P4E    | P2E   | P1E   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-138. GPMC\_ECC3\_RESULT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------|
| 31-28 | RESERVED | R      | 0h      |                                                                   |
| 27    | P2048O   | R      | 0h      | Odd Row Parity bit 2048, only used for ECC computed on 512 Bytes  |
| 26    | P1024O   | R      | 0h      | Odd Row Parity bit 1024                                           |
| 25    | P512O    | R      | 0h      | Odd Row Parity bit 512                                            |
| 24    | P256O    | R      | 0h      | Odd Row Parity bit 256                                            |
| 23    | P128O    | R      | 0h      | Odd Row Parity bit 128                                            |
| 22    | P64O     | R      | 0h      | Odd Row Parity bit 64                                             |
| 21    | P32O     | R      | 0h      | Odd Row Parity bit 32                                             |
| 20    | P16O     | R      | 0h      | Odd Row Parity bit 16                                             |
| 19    | P8O      | R      | 0h      | Odd Row Parity bit 8                                              |
| 18    | P4O      | R      | 0h      | Odd Column Parity bit 4                                           |
| 17    | P2O      | R      | 0h      | Odd Column Parity bit 2                                           |
| 16    | P1O      | R      | 0h      | Odd Column Parity bit 1                                           |
| 15-12 | RESERVED | R      | 0h      |                                                                   |
| 11    | P2048E   | R      | 0h      | Even Row Parity bit 2048, only used for ECC computed on 512 Bytes |
| 10    | P1024E   | R      | 0h      | Even Row Parity bit 1024                                          |
| 9     | P512E    | R      | 0h      | Even Row Parity bit 512                                           |
| 8     | P256E    | R      | 0h      | Even Row Parity bit 256                                           |
| 7     | P128E    | R      | 0h      | Even Row Parity bit 128                                           |
| 6     | P64E     | R      | 0h      | Even Row Parity bit 64                                            |
| 5     | P32E     | R      | 0h      | Even Row Parity bit 32                                            |
| 4     | P16E     | R      | 0h      | Even Row Parity bit 16                                            |
| 3     | P8E      | R      | 0h      | Even Row Parity bit 8                                             |
| 2     | P4E      | R      | 0h      | Even Column Parity bit 4                                          |
| 1     | P2E      | R      | 0h      | Even Column Parity bit 2                                          |

<!-- image -->

## Table 7-138. GPMC\_ECC3\_RESULT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
|     0 | P1E     | R      | 0h      | Even Column Parity bit 1 |

<!-- image -->

## 7.1.5.91 GPMC\_ECC4\_RESULT Register (offset = 20Ch) [reset = 0h]

GPMC\_ECC4\_RESULT is shown in Figure 7-137 and described in Table 7-139.

## Figure 7-137. GPMC\_ECC4\_RESULT Register

| 31       | 30       | 29       | 28       | 27     | 26     | 25    | 24    |
|----------|----------|----------|----------|--------|--------|-------|-------|
| RESERVED | RESERVED | RESERVED | RESERVED | P2048O | P1024O | P512O | P256O |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 23       | 22       | 21       | 20       | 19     | 18     | 17    | 16    |
| P128O    | P64O     | P32O     | P16O     | P8O    | P4O    | P2O   | P1O   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 15       | 14       | 13       | 12       | 11     | 10     | 9     | 8     |
| RESERVED | RESERVED | RESERVED | RESERVED | P2048E | P1024E | P512E | P256E |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 7        | 6        | 5        | 4        | 3      | 2      | 1     | 0     |
| P128E    | P64E     | P32E     | P16E     | P8E    | P4E    | P2E   | P1E   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-139. GPMC\_ECC4\_RESULT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------|
| 31-28 | RESERVED | R      | 0h      |                                                                   |
| 27    | P2048O   | R      | 0h      | Odd Row Parity bit 2048, only used for ECC computed on 512 Bytes  |
| 26    | P1024O   | R      | 0h      | Odd Row Parity bit 1024                                           |
| 25    | P512O    | R      | 0h      | Odd Row Parity bit 512                                            |
| 24    | P256O    | R      | 0h      | Odd Row Parity bit 256                                            |
| 23    | P128O    | R      | 0h      | Odd Row Parity bit 128                                            |
| 22    | P64O     | R      | 0h      | Odd Row Parity bit 64                                             |
| 21    | P32O     | R      | 0h      | Odd Row Parity bit 32                                             |
| 20    | P16O     | R      | 0h      | Odd Row Parity bit 16                                             |
| 19    | P8O      | R      | 0h      | Odd Row Parity bit 8                                              |
| 18    | P4O      | R      | 0h      | Odd Column Parity bit 4                                           |
| 17    | P2O      | R      | 0h      | Odd Column Parity bit 2                                           |
| 16    | P1O      | R      | 0h      | Odd Column Parity bit 1                                           |
| 15-12 | RESERVED | R      | 0h      |                                                                   |
| 11    | P2048E   | R      | 0h      | Even Row Parity bit 2048, only used for ECC computed on 512 Bytes |
| 10    | P1024E   | R      | 0h      | Even Row Parity bit 1024                                          |
| 9     | P512E    | R      | 0h      | Even Row Parity bit 512                                           |
| 8     | P256E    | R      | 0h      | Even Row Parity bit 256                                           |
| 7     | P128E    | R      | 0h      | Even Row Parity bit 128                                           |
| 6     | P64E     | R      | 0h      | Even Row Parity bit 64                                            |
| 5     | P32E     | R      | 0h      | Even Row Parity bit 32                                            |
| 4     | P16E     | R      | 0h      | Even Row Parity bit 16                                            |
| 3     | P8E      | R      | 0h      | Even Row Parity bit 8                                             |
| 2     | P4E      | R      | 0h      | Even Column Parity bit 4                                          |
| 1     | P2E      | R      | 0h      | Even Column Parity bit 2                                          |

<!-- image -->

## Table 7-139. GPMC\_ECC4\_RESULT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
|     0 | P1E     | R      | 0h      | Even Column Parity bit 1 |

<!-- image -->

## 7.1.5.92 GPMC\_ECC5\_RESULT Register (offset = 210h) [reset = 0h]

GPMC\_ECC5\_RESULT is shown in Figure 7-138 and described in Table 7-140.

## Figure 7-138. GPMC\_ECC5\_RESULT Register

| 31       | 30       | 29       | 28       | 27     | 26     | 25    | 24    |
|----------|----------|----------|----------|--------|--------|-------|-------|
| RESERVED | RESERVED | RESERVED | RESERVED | P2048O | P1024O | P512O | P256O |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 23       | 22       | 21       | 20       | 19     | 18     | 17    | 16    |
| P128O    | P64O     | P32O     | P16O     | P8O    | P4O    | P2O   | P1O   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 15       | 14       | 13       | 12       | 11     | 10     | 9     | 8     |
| RESERVED | RESERVED | RESERVED | RESERVED | P2048E | P1024E | P512E | P256E |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 7        | 6        | 5        | 4        | 3      | 2      | 1     | 0     |
| P128E    | P64E     | P32E     | P16E     | P8E    | P4E    | P2E   | P1E   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-140. GPMC\_ECC5\_RESULT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------|
| 31-28 | RESERVED | R      | 0h      |                                                                   |
| 27    | P2048O   | R      | 0h      | Odd Row Parity bit 2048, only used for ECC computed on 512 Bytes  |
| 26    | P1024O   | R      | 0h      | Odd Row Parity bit 1024                                           |
| 25    | P512O    | R      | 0h      | Odd Row Parity bit 512                                            |
| 24    | P256O    | R      | 0h      | Odd Row Parity bit 256                                            |
| 23    | P128O    | R      | 0h      | Odd Row Parity bit 128                                            |
| 22    | P64O     | R      | 0h      | Odd Row Parity bit 64                                             |
| 21    | P32O     | R      | 0h      | Odd Row Parity bit 32                                             |
| 20    | P16O     | R      | 0h      | Odd Row Parity bit 16                                             |
| 19    | P8O      | R      | 0h      | Odd Row Parity bit 8                                              |
| 18    | P4O      | R      | 0h      | Odd Column Parity bit 4                                           |
| 17    | P2O      | R      | 0h      | Odd Column Parity bit 2                                           |
| 16    | P1O      | R      | 0h      | Odd Column Parity bit 1                                           |
| 15-12 | RESERVED | R      | 0h      |                                                                   |
| 11    | P2048E   | R      | 0h      | Even Row Parity bit 2048, only used for ECC computed on 512 Bytes |
| 10    | P1024E   | R      | 0h      | Even Row Parity bit 1024                                          |
| 9     | P512E    | R      | 0h      | Even Row Parity bit 512                                           |
| 8     | P256E    | R      | 0h      | Even Row Parity bit 256                                           |
| 7     | P128E    | R      | 0h      | Even Row Parity bit 128                                           |
| 6     | P64E     | R      | 0h      | Even Row Parity bit 64                                            |
| 5     | P32E     | R      | 0h      | Even Row Parity bit 32                                            |
| 4     | P16E     | R      | 0h      | Even Row Parity bit 16                                            |
| 3     | P8E      | R      | 0h      | Even Row Parity bit 8                                             |
| 2     | P4E      | R      | 0h      | Even Column Parity bit 4                                          |
| 1     | P2E      | R      | 0h      | Even Column Parity bit 2                                          |

<!-- image -->

## Table 7-140. GPMC\_ECC5\_RESULT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
|     0 | P1E     | R      | 0h      | Even Column Parity bit 1 |

<!-- image -->

## 7.1.5.93 GPMC\_ECC6\_RESULT Register (offset = 214h) [reset = 0h]

GPMC\_ECC6\_RESULT is shown in Figure 7-139 and described in Table 7-141.

## Figure 7-139. GPMC\_ECC6\_RESULT Register

| 31       | 30       | 29       | 28       | 27     | 26     | 25    | 24    |
|----------|----------|----------|----------|--------|--------|-------|-------|
| RESERVED | RESERVED | RESERVED | RESERVED | P2048O | P1024O | P512O | P256O |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 23       | 22       | 21       | 20       | 19     | 18     | 17    | 16    |
| P128O    | P64O     | P32O     | P16O     | P8O    | P4O    | P2O   | P1O   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 15       | 14       | 13       | 12       | 11     | 10     | 9     | 8     |
| RESERVED | RESERVED | RESERVED | RESERVED | P2048E | P1024E | P512E | P256E |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 7        | 6        | 5        | 4        | 3      | 2      | 1     | 0     |
| P128E    | P64E     | P32E     | P16E     | P8E    | P4E    | P2E   | P1E   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-141. GPMC\_ECC6\_RESULT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------|
| 31-28 | RESERVED | R      | 0h      |                                                                   |
| 27    | P2048O   | R      | 0h      | Odd Row Parity bit 2048, only used for ECC computed on 512 Bytes  |
| 26    | P1024O   | R      | 0h      | Odd Row Parity bit 1024                                           |
| 25    | P512O    | R      | 0h      | Odd Row Parity bit 512                                            |
| 24    | P256O    | R      | 0h      | Odd Row Parity bit 256                                            |
| 23    | P128O    | R      | 0h      | Odd Row Parity bit 128                                            |
| 22    | P64O     | R      | 0h      | Odd Row Parity bit 64                                             |
| 21    | P32O     | R      | 0h      | Odd Row Parity bit 32                                             |
| 20    | P16O     | R      | 0h      | Odd Row Parity bit 16                                             |
| 19    | P8O      | R      | 0h      | Odd Row Parity bit 8                                              |
| 18    | P4O      | R      | 0h      | Odd Column Parity bit 4                                           |
| 17    | P2O      | R      | 0h      | Odd Column Parity bit 2                                           |
| 16    | P1O      | R      | 0h      | Odd Column Parity bit 1                                           |
| 15-12 | RESERVED | R      | 0h      |                                                                   |
| 11    | P2048E   | R      | 0h      | Even Row Parity bit 2048, only used for ECC computed on 512 Bytes |
| 10    | P1024E   | R      | 0h      | Even Row Parity bit 1024                                          |
| 9     | P512E    | R      | 0h      | Even Row Parity bit 512                                           |
| 8     | P256E    | R      | 0h      | Even Row Parity bit 256                                           |
| 7     | P128E    | R      | 0h      | Even Row Parity bit 128                                           |
| 6     | P64E     | R      | 0h      | Even Row Parity bit 64                                            |
| 5     | P32E     | R      | 0h      | Even Row Parity bit 32                                            |
| 4     | P16E     | R      | 0h      | Even Row Parity bit 16                                            |
| 3     | P8E      | R      | 0h      | Even Row Parity bit 8                                             |
| 2     | P4E      | R      | 0h      | Even Column Parity bit 4                                          |
| 1     | P2E      | R      | 0h      | Even Column Parity bit 2                                          |

<!-- image -->

## Table 7-141. GPMC\_ECC6\_RESULT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
|     0 | P1E     | R      | 0h      | Even Column Parity bit 1 |

<!-- image -->

## 7.1.5.94 GPMC\_ECC7\_RESULT Register (offset = 218h) [reset = 0h]

GPMC\_ECC7\_RESULT is shown in Figure 7-140 and described in Table 7-142.

## Figure 7-140. GPMC\_ECC7\_RESULT Register

| 31       | 30       | 29       | 28       | 27     | 26     | 25    | 24    |
|----------|----------|----------|----------|--------|--------|-------|-------|
| RESERVED | RESERVED | RESERVED | RESERVED | P2048O | P1024O | P512O | P256O |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 23       | 22       | 21       | 20       | 19     | 18     | 17    | 16    |
| P128O    | P64O     | P32O     | P16O     | P8O    | P4O    | P2O   | P1O   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 15       | 14       | 13       | 12       | 11     | 10     | 9     | 8     |
| RESERVED | RESERVED | RESERVED | RESERVED | P2048E | P1024E | P512E | P256E |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 7        | 6        | 5        | 4        | 3      | 2      | 1     | 0     |
| P128E    | P64E     | P32E     | P16E     | P8E    | P4E    | P2E   | P1E   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-142. GPMC\_ECC7\_RESULT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------|
| 31-28 | RESERVED | R      | 0h      |                                                                   |
| 27    | P2048O   | R      | 0h      | Odd Row Parity bit 2048, only used for ECC computed on 512 Bytes  |
| 26    | P1024O   | R      | 0h      | Odd Row Parity bit 1024                                           |
| 25    | P512O    | R      | 0h      | Odd Row Parity bit 512                                            |
| 24    | P256O    | R      | 0h      | Odd Row Parity bit 256                                            |
| 23    | P128O    | R      | 0h      | Odd Row Parity bit 128                                            |
| 22    | P64O     | R      | 0h      | Odd Row Parity bit 64                                             |
| 21    | P32O     | R      | 0h      | Odd Row Parity bit 32                                             |
| 20    | P16O     | R      | 0h      | Odd Row Parity bit 16                                             |
| 19    | P8O      | R      | 0h      | Odd Row Parity bit 8                                              |
| 18    | P4O      | R      | 0h      | Odd Column Parity bit 4                                           |
| 17    | P2O      | R      | 0h      | Odd Column Parity bit 2                                           |
| 16    | P1O      | R      | 0h      | Odd Column Parity bit 1                                           |
| 15-12 | RESERVED | R      | 0h      |                                                                   |
| 11    | P2048E   | R      | 0h      | Even Row Parity bit 2048, only used for ECC computed on 512 Bytes |
| 10    | P1024E   | R      | 0h      | Even Row Parity bit 1024                                          |
| 9     | P512E    | R      | 0h      | Even Row Parity bit 512                                           |
| 8     | P256E    | R      | 0h      | Even Row Parity bit 256                                           |
| 7     | P128E    | R      | 0h      | Even Row Parity bit 128                                           |
| 6     | P64E     | R      | 0h      | Even Row Parity bit 64                                            |
| 5     | P32E     | R      | 0h      | Even Row Parity bit 32                                            |
| 4     | P16E     | R      | 0h      | Even Row Parity bit 16                                            |
| 3     | P8E      | R      | 0h      | Even Row Parity bit 8                                             |
| 2     | P4E      | R      | 0h      | Even Column Parity bit 4                                          |
| 1     | P2E      | R      | 0h      | Even Column Parity bit 2                                          |

<!-- image -->

## Table 7-142. GPMC\_ECC7\_RESULT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
|     0 | P1E     | R      | 0h      | Even Column Parity bit 1 |

<!-- image -->

## 7.1.5.95 GPMC\_ECC8\_RESULT Register (offset = 21Ch) [reset = 0h]

GPMC\_ECC8\_RESULT is shown in Figure 7-141 and described in Table 7-143.

## Figure 7-141. GPMC\_ECC8\_RESULT Register

| 31       | 30       | 29       | 28       | 27     | 26     | 25    | 24    |
|----------|----------|----------|----------|--------|--------|-------|-------|
| RESERVED | RESERVED | RESERVED | RESERVED | P2048O | P1024O | P512O | P256O |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 23       | 22       | 21       | 20       | 19     | 18     | 17    | 16    |
| P128O    | P64O     | P32O     | P16O     | P8O    | P4O    | P2O   | P1O   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 15       | 14       | 13       | 12       | 11     | 10     | 9     | 8     |
| RESERVED | RESERVED | RESERVED | RESERVED | P2048E | P1024E | P512E | P256E |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 7        | 6        | 5        | 4        | 3      | 2      | 1     | 0     |
| P128E    | P64E     | P32E     | P16E     | P8E    | P4E    | P2E   | P1E   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-143. GPMC\_ECC8\_RESULT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------|
| 31-28 | RESERVED | R      | 0h      |                                                                   |
| 27    | P2048O   | R      | 0h      | Odd Row Parity bit 2048, only used for ECC computed on 512 Bytes  |
| 26    | P1024O   | R      | 0h      | Odd Row Parity bit 1024                                           |
| 25    | P512O    | R      | 0h      | Odd Row Parity bit 512                                            |
| 24    | P256O    | R      | 0h      | Odd Row Parity bit 256                                            |
| 23    | P128O    | R      | 0h      | Odd Row Parity bit 128                                            |
| 22    | P64O     | R      | 0h      | Odd Row Parity bit 64                                             |
| 21    | P32O     | R      | 0h      | Odd Row Parity bit 32                                             |
| 20    | P16O     | R      | 0h      | Odd Row Parity bit 16                                             |
| 19    | P8O      | R      | 0h      | Odd Row Parity bit 8                                              |
| 18    | P4O      | R      | 0h      | Odd Column Parity bit 4                                           |
| 17    | P2O      | R      | 0h      | Odd Column Parity bit 2                                           |
| 16    | P1O      | R      | 0h      | Odd Column Parity bit 1                                           |
| 15-12 | RESERVED | R      | 0h      |                                                                   |
| 11    | P2048E   | R      | 0h      | Even Row Parity bit 2048, only used for ECC computed on 512 Bytes |
| 10    | P1024E   | R      | 0h      | Even Row Parity bit 1024                                          |
| 9     | P512E    | R      | 0h      | Even Row Parity bit 512                                           |
| 8     | P256E    | R      | 0h      | Even Row Parity bit 256                                           |
| 7     | P128E    | R      | 0h      | Even Row Parity bit 128                                           |
| 6     | P64E     | R      | 0h      | Even Row Parity bit 64                                            |
| 5     | P32E     | R      | 0h      | Even Row Parity bit 32                                            |
| 4     | P16E     | R      | 0h      | Even Row Parity bit 16                                            |
| 3     | P8E      | R      | 0h      | Even Row Parity bit 8                                             |
| 2     | P4E      | R      | 0h      | Even Column Parity bit 4                                          |
| 1     | P2E      | R      | 0h      | Even Column Parity bit 2                                          |

<!-- image -->

## Table 7-143. GPMC\_ECC8\_RESULT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
|     0 | P1E     | R      | 0h      | Even Column Parity bit 1 |

<!-- image -->

## 7.1.5.96 GPMC\_ECC9\_RESULT Register (offset = 220h) [reset = 0h]

GPMC\_ECC9\_RESULT is shown in Figure 7-142 and described in Table 7-144.

## Figure 7-142. GPMC\_ECC9\_RESULT Register

| 31       | 30       | 29       | 28       | 27     | 26     | 25    | 24    |
|----------|----------|----------|----------|--------|--------|-------|-------|
| RESERVED | RESERVED | RESERVED | RESERVED | P2048O | P1024O | P512O | P256O |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 23       | 22       | 21       | 20       | 19     | 18     | 17    | 16    |
| P128O    | P64O     | P32O     | P16O     | P8O    | P4O    | P2O   | P1O   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 15       | 14       | 13       | 12       | 11     | 10     | 9     | 8     |
| RESERVED | RESERVED | RESERVED | RESERVED | P2048E | P1024E | P512E | P256E |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |
| 7        | 6        | 5        | 4        | 3      | 2      | 1     | 0     |
| P128E    | P64E     | P32E     | P16E     | P8E    | P4E    | P2E   | P1E   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h   | R-0h   | R-0h  | R-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-144. GPMC\_ECC9\_RESULT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------|
| 31-28 | RESERVED | R      | 0h      |                                                                   |
| 27    | P2048O   | R      | 0h      | Odd Row Parity bit 2048, only used for ECC computed on 512 Bytes  |
| 26    | P1024O   | R      | 0h      | Odd Row Parity bit 1024                                           |
| 25    | P512O    | R      | 0h      | Odd Row Parity bit 512                                            |
| 24    | P256O    | R      | 0h      | Odd Row Parity bit 256                                            |
| 23    | P128O    | R      | 0h      | Odd Row Parity bit 128                                            |
| 22    | P64O     | R      | 0h      | Odd Row Parity bit 64                                             |
| 21    | P32O     | R      | 0h      | Odd Row Parity bit 32                                             |
| 20    | P16O     | R      | 0h      | Odd Row Parity bit 16                                             |
| 19    | P8O      | R      | 0h      | Odd Row Parity bit 8                                              |
| 18    | P4O      | R      | 0h      | Odd Column Parity bit 4                                           |
| 17    | P2O      | R      | 0h      | Odd Column Parity bit 2                                           |
| 16    | P1O      | R      | 0h      | Odd Column Parity bit 1                                           |
| 15-12 | RESERVED | R      | 0h      |                                                                   |
| 11    | P2048E   | R      | 0h      | Even Row Parity bit 2048, only used for ECC computed on 512 Bytes |
| 10    | P1024E   | R      | 0h      | Even Row Parity bit 1024                                          |
| 9     | P512E    | R      | 0h      | Even Row Parity bit 512                                           |
| 8     | P256E    | R      | 0h      | Even Row Parity bit 256                                           |
| 7     | P128E    | R      | 0h      | Even Row Parity bit 128                                           |
| 6     | P64E     | R      | 0h      | Even Row Parity bit 64                                            |
| 5     | P32E     | R      | 0h      | Even Row Parity bit 32                                            |
| 4     | P16E     | R      | 0h      | Even Row Parity bit 16                                            |
| 3     | P8E      | R      | 0h      | Even Row Parity bit 8                                             |
| 2     | P4E      | R      | 0h      | Even Column Parity bit 4                                          |
| 1     | P2E      | R      | 0h      | Even Column Parity bit 2                                          |

<!-- image -->

## Table 7-144. GPMC\_ECC9\_RESULT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
|     0 | P1E     | R      | 0h      | Even Column Parity bit 1 |

<!-- image -->

## 7.1.5.97 GPMC\_BCH\_RESULT0\_0 Register (offset = 240h) [reset = 0h]

GPMC\_BCH\_RESULT0\_0 is shown in Figure 7-143 and described in Table 7-145.

## Figure 7-143. GPMC\_BCH\_RESULT0\_0 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT0_0   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-145. GPMC\_BCH\_RESULT0\_0 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                  |
|-------|---------------|--------|---------|------------------------------|
| 31-0  | BCH_RESULT0_0 | R/W    | 0h      | BCH ECC result, bits 0 to 31 |

## 7.1.5.98 GPMC\_BCH\_RESULT1\_0 Register (offset = 244h) [reset = 0h]

GPMC\_BCH\_RESULT1\_0 is shown in Figure 7-144 and described in Table 7-146.

## Figure 7-144. GPMC\_BCH\_RESULT1\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT1_0   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-146. GPMC\_BCH\_RESULT1\_0 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT1_0 | R/W    | 0h      | BCH ECC result, bits 32 to 63 |

<!-- image -->

<!-- image -->

## 7.1.5.99 GPMC\_BCH\_RESULT2\_0 Register (offset = 248h) [reset = 0h]

GPMC\_BCH\_RESULT2\_0 is shown in Figure 7-145 and described in Table 7-147.

## Figure 7-145. GPMC\_BCH\_RESULT2\_0 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT2_0   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-147. GPMC\_BCH\_RESULT2\_0 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT2_0 | R/W    | 0h      | BCH ECC result, bits 64 to 95 |

## 7.1.5.100 GPMC\_BCH\_RESULT3\_0 Register (offset = 24Ch) [reset = 0h]

GPMC\_BCH\_RESULT3\_0 is shown in Figure 7-146 and described in Table 7-148.

## Figure 7-146. GPMC\_BCH\_RESULT3\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT3_0   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-148. GPMC\_BCH\_RESULT3\_0 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                    |
|-------|---------------|--------|---------|--------------------------------|
| 31-0  | BCH_RESULT3_0 | R/W    | 0h      | BCH ECC result, bits 96 to 127 |

<!-- image -->

<!-- image -->

## 7.1.5.101 GPMC\_BCH\_RESULT0\_1 Register (offset = 250h) [reset = 0h]

GPMC\_BCH\_RESULT0\_1 is shown in Figure 7-147 and described in Table 7-149.

## Figure 7-147. GPMC\_BCH\_RESULT0\_1 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT0_1   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-149. GPMC\_BCH\_RESULT0\_1 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                  |
|-------|---------------|--------|---------|------------------------------|
| 31-0  | BCH_RESULT0_1 | R/W    | 0h      | BCH ECC result, bits 0 to 31 |

## 7.1.5.102 GPMC\_BCH\_RESULT1\_1 Register (offset = 254h) [reset = 0h]

GPMC\_BCH\_RESULT1\_1 is shown in Figure 7-148 and described in Table 7-150.

## Figure 7-148. GPMC\_BCH\_RESULT1\_1 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT1_1   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-150. GPMC\_BCH\_RESULT1\_1 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT1_1 | R/W    | 0h      | BCH ECC result, bits 32 to 63 |

<!-- image -->

<!-- image -->

## 7.1.5.103 GPMC\_BCH\_RESULT2\_1 Register (offset = 258h) [reset = 0h]

GPMC\_BCH\_RESULT2\_1 is shown in Figure 7-149 and described in Table 7-151.

## Figure 7-149. GPMC\_BCH\_RESULT2\_1 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT2_1   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-151. GPMC\_BCH\_RESULT2\_1 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT2_1 | R/W    | 0h      | BCH ECC result, bits 64 to 95 |

## 7.1.5.104 GPMC\_BCH\_RESULT3\_1 Register (offset = 25Ch) [reset = 0h]

GPMC\_BCH\_RESULT3\_1 is shown in Figure 7-150 and described in Table 7-152.

## Figure 7-150. GPMC\_BCH\_RESULT3\_1 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT3_1   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-152. GPMC\_BCH\_RESULT3\_1 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                    |
|-------|---------------|--------|---------|--------------------------------|
| 31-0  | BCH_RESULT3_1 | R/W    | 0h      | BCH ECC result, bits 96 to 127 |

<!-- image -->

<!-- image -->

## 7.1.5.105 GPMC\_BCH\_RESULT0\_2 Register (offset = 260h) [reset = 0h]

GPMC\_BCH\_RESULT0\_2 is shown in Figure 7-151 and described in Table 7-153.

## Figure 7-151. GPMC\_BCH\_RESULT0\_2 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT0_2   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-153. GPMC\_BCH\_RESULT0\_2 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                  |
|-------|---------------|--------|---------|------------------------------|
| 31-0  | BCH_RESULT0_2 | R/W    | 0h      | BCH ECC result, bits 0 to 31 |

## 7.1.5.106 GPMC\_BCH\_RESULT1\_2 Register (offset = 264h) [reset = 0h]

GPMC\_BCH\_RESULT1\_2 is shown in Figure 7-152 and described in Table 7-154.

## Figure 7-152. GPMC\_BCH\_RESULT1\_2 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT1_2   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-154. GPMC\_BCH\_RESULT1\_2 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT1_2 | R/W    | 0h      | BCH ECC result, bits 32 to 63 |

<!-- image -->

<!-- image -->

## 7.1.5.107 GPMC\_BCH\_RESULT2\_2 Register (offset = 268h) [reset = 0h]

GPMC\_BCH\_RESULT2\_2 is shown in Figure 7-153 and described in Table 7-155.

## Figure 7-153. GPMC\_BCH\_RESULT2\_2 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT2_2   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-155. GPMC\_BCH\_RESULT2\_2 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT2_2 | R/W    | 0h      | BCH ECC result, bits 64 to 95 |

## 7.1.5.108 GPMC\_BCH\_RESULT3\_2 Register (offset = 26Ch) [reset = 0h]

GPMC\_BCH\_RESULT3\_2 is shown in Figure 7-154 and described in Table 7-156.

## Figure 7-154. GPMC\_BCH\_RESULT3\_2 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT3_2   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-156. GPMC\_BCH\_RESULT3\_2 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                    |
|-------|---------------|--------|---------|--------------------------------|
| 31-0  | BCH_RESULT3_2 | R/W    | 0h      | BCH ECC result, bits 96 to 127 |

<!-- image -->

<!-- image -->

## 7.1.5.109 GPMC\_BCH\_RESULT0\_3 Register (offset = 270h) [reset = 0h]

GPMC\_BCH\_RESULT0\_3 is shown in Figure 7-155 and described in Table 7-157.

## Figure 7-155. GPMC\_BCH\_RESULT0\_3 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT0_3   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-157. GPMC\_BCH\_RESULT0\_3 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                  |
|-------|---------------|--------|---------|------------------------------|
| 31-0  | BCH_RESULT0_3 | R/W    | 0h      | BCH ECC result, bits 0 to 31 |

## 7.1.5.110 GPMC\_BCH\_RESULT1\_3 Register (offset = 274h) [reset = 0h]

GPMC\_BCH\_RESULT1\_3 is shown in Figure 7-156 and described in Table 7-158.

## Figure 7-156. GPMC\_BCH\_RESULT1\_3 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT1_3   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-158. GPMC\_BCH\_RESULT1\_3 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT1_3 | R/W    | 0h      | BCH ECC result, bits 32 to 63 |

<!-- image -->

<!-- image -->

## 7.1.5.111 GPMC\_BCH\_RESULT2\_3 Register (offset = 278h) [reset = 0h]

GPMC\_BCH\_RESULT2\_3 is shown in Figure 7-157 and described in Table 7-159.

## Figure 7-157. GPMC\_BCH\_RESULT2\_3 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT2_3   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-159. GPMC\_BCH\_RESULT2\_3 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT2_3 | R/W    | 0h      | BCH ECC result, bits 64 to 95 |

## 7.1.5.112 GPMC\_BCH\_RESULT3\_3 Register (offset = 27Ch) [reset = 0h]

GPMC\_BCH\_RESULT3\_3 is shown in Figure 7-158 and described in Table 7-160.

## Figure 7-158. GPMC\_BCH\_RESULT3\_3 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT3_3   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-160. GPMC\_BCH\_RESULT3\_3 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                    |
|-------|---------------|--------|---------|--------------------------------|
| 31-0  | BCH_RESULT3_3 | R/W    | 0h      | BCH ECC result, bits 96 to 127 |

<!-- image -->

<!-- image -->

## 7.1.5.113 GPMC\_BCH\_RESULT0\_4 Register (offset = 280h) [reset = 0h]

GPMC\_BCH\_RESULT0\_4 is shown in Figure 7-159 and described in Table 7-161.

## Figure 7-159. GPMC\_BCH\_RESULT0\_4 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT0_4   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-161. GPMC\_BCH\_RESULT0\_4 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                  |
|-------|---------------|--------|---------|------------------------------|
| 31-0  | BCH_RESULT0_4 | R/W    | 0h      | BCH ECC result, bits 0 to 31 |

## 7.1.5.114 GPMC\_BCH\_RESULT1\_4 Register (offset = 284h) [reset = 0h]

GPMC\_BCH\_RESULT1\_4 is shown in Figure 7-160 and described in Table 7-162.

## Figure 7-160. GPMC\_BCH\_RESULT1\_4 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT1_4   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-162. GPMC\_BCH\_RESULT1\_4 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT1_4 | R/W    | 0h      | BCH ECC result, bits 32 to 63 |

<!-- image -->

<!-- image -->

## 7.1.5.115 GPMC\_BCH\_RESULT2\_4 Register (offset = 288h) [reset = 0h]

GPMC\_BCH\_RESULT2\_4 is shown in Figure 7-161 and described in Table 7-163.

## Figure 7-161. GPMC\_BCH\_RESULT2\_4 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT2_4   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-163. GPMC\_BCH\_RESULT2\_4 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT2_4 | R/W    | 0h      | BCH ECC result, bits 64 to 95 |

## 7.1.5.116 GPMC\_BCH\_RESULT3\_4 Register (offset = 28Ch) [reset = 0h]

GPMC\_BCH\_RESULT3\_4 is shown in Figure 7-162 and described in Table 7-164.

## Figure 7-162. GPMC\_BCH\_RESULT3\_4 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT3_4   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-164. GPMC\_BCH\_RESULT3\_4 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                    |
|-------|---------------|--------|---------|--------------------------------|
| 31-0  | BCH_RESULT3_4 | R/W    | 0h      | BCH ECC result, bits 96 to 127 |

<!-- image -->

<!-- image -->

## 7.1.5.117 GPMC\_BCH\_RESULT0\_5 Register (offset = 290h) [reset = 0h]

GPMC\_BCH\_RESULT0\_5 is shown in Figure 7-163 and described in Table 7-165.

## Figure 7-163. GPMC\_BCH\_RESULT0\_5 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT0_5   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-165. GPMC\_BCH\_RESULT0\_5 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                  |
|-------|---------------|--------|---------|------------------------------|
| 31-0  | BCH_RESULT0_5 | R/W    | 0h      | BCH ECC result, bits 0 to 31 |

## 7.1.5.118 GPMC\_BCH\_RESULT1\_5 Register (offset = 294h) [reset = 0h]

GPMC\_BCH\_RESULT1\_5 is shown in Figure 7-164 and described in Table 7-166.

## Figure 7-164. GPMC\_BCH\_RESULT1\_5 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT1_5   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-166. GPMC\_BCH\_RESULT1\_5 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT1_5 | R/W    | 0h      | BCH ECC result, bits 32 to 63 |

<!-- image -->

<!-- image -->

## 7.1.5.119 GPMC\_BCH\_RESULT2\_5 Register (offset = 298h) [reset = 0h]

GPMC\_BCH\_RESULT2\_5 is shown in Figure 7-165 and described in Table 7-167.

## Figure 7-165. GPMC\_BCH\_RESULT2\_5 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT2_5   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-167. GPMC\_BCH\_RESULT2\_5 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT2_5 | R/W    | 0h      | BCH ECC result, bits 64 to 95 |

## 7.1.5.120 GPMC\_BCH\_RESULT3\_5 Register (offset = 29Ch) [reset = 0h]

GPMC\_BCH\_RESULT3\_5 is shown in Figure 7-166 and described in Table 7-168.

## Figure 7-166. GPMC\_BCH\_RESULT3\_5 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT3_5   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-168. GPMC\_BCH\_RESULT3\_5 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                    |
|-------|---------------|--------|---------|--------------------------------|
| 31-0  | BCH_RESULT3_5 | R/W    | 0h      | BCH ECC result, bits 96 to 127 |

<!-- image -->

<!-- image -->

## 7.1.5.121 GPMC\_BCH\_RESULT0\_6 Register (offset = 2A0h) [reset = 0h]

GPMC\_BCH\_RESULT0\_6 is shown in Figure 7-167 and described in Table 7-169.

## Figure 7-167. GPMC\_BCH\_RESULT0\_6 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT0_6   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-169. GPMC\_BCH\_RESULT0\_6 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                  |
|-------|---------------|--------|---------|------------------------------|
| 31-0  | BCH_RESULT0_6 | R/W    | 0h      | BCH ECC result, bits 0 to 31 |

## 7.1.5.122 GPMC\_BCH\_RESULT1\_6 Register (offset = 2A4h) [reset = 0h]

GPMC\_BCH\_RESULT1\_6 is shown in Figure 7-168 and described in Table 7-170.

## Figure 7-168. GPMC\_BCH\_RESULT1\_6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT1_6   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-170. GPMC\_BCH\_RESULT1\_6 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT1_6 | R/W    | 0h      | BCH ECC result, bits 32 to 63 |

<!-- image -->

<!-- image -->

## 7.1.5.123 GPMC\_BCH\_RESULT2\_6 Register (offset = 2A8h) [reset = 0h]

GPMC\_BCH\_RESULT2\_6 is shown in Figure 7-169 and described in Table 7-171.

## Figure 7-169. GPMC\_BCH\_RESULT2\_6 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT2_6   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-171. GPMC\_BCH\_RESULT2\_6 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT2_6 | R/W    | 0h      | BCH ECC result, bits 64 to 95 |

## 7.1.5.124 GPMC\_BCH\_RESULT3\_6 Register (offset = 2ACh) [reset = 0h]

GPMC\_BCH\_RESULT3\_6 is shown in Figure 7-170 and described in Table 7-172.

## Figure 7-170. GPMC\_BCH\_RESULT3\_6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT3_6   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-172. GPMC\_BCH\_RESULT3\_6 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                    |
|-------|---------------|--------|---------|--------------------------------|
| 31-0  | BCH_RESULT3_6 | R/W    | 0h      | BCH ECC result, bits 96 to 127 |

<!-- image -->

<!-- image -->

## 7.1.5.125 GPMC\_BCH\_RESULT0\_7 Register (offset = 2B0h) [reset = 0h]

GPMC\_BCH\_RESULT0\_7 is shown in Figure 7-171 and described in Table 7-173.

## Figure 7-171. GPMC\_BCH\_RESULT0\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT0_7   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-173. GPMC\_BCH\_RESULT0\_7 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                  |
|-------|---------------|--------|---------|------------------------------|
| 31-0  | BCH_RESULT0_7 | R/W    | 0h      | BCH ECC result, bits 0 to 31 |

## 7.1.5.126 GPMC\_BCH\_RESULT1\_7 Register (offset = 2B4h) [reset = 0h]

GPMC\_BCH\_RESULT1\_7 is shown in Figure 7-172 and described in Table 7-174.

## Figure 7-172. GPMC\_BCH\_RESULT1\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT1_7   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-174. GPMC\_BCH\_RESULT1\_7 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT1_7 | R/W    | 0h      | BCH ECC result, bits 32 to 63 |

<!-- image -->

<!-- image -->

## 7.1.5.127 GPMC\_BCH\_RESULT2\_7 Register (offset = 2B8h) [reset = 0h]

GPMC\_BCH\_RESULT2\_7 is shown in Figure 7-173 and described in Table 7-175.

## Figure 7-173. GPMC\_BCH\_RESULT2\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT2_7   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-175. GPMC\_BCH\_RESULT2\_7 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                   |
|-------|---------------|--------|---------|-------------------------------|
| 31-0  | BCH_RESULT2_7 | R/W    | 0h      | BCH ECC result, bits 64 to 95 |

## 7.1.5.128 GPMC\_BCH\_RESULT3\_7 Register (offset = 2BCh) [reset = 0h]

GPMC\_BCH\_RESULT3\_7 is shown in Figure 7-174 and described in Table 7-176.

## Figure 7-174. GPMC\_BCH\_RESULT3\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT3_7   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-176. GPMC\_BCH\_RESULT3\_7 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                    |
|-------|---------------|--------|---------|--------------------------------|
| 31-0  | BCH_RESULT3_7 | R/W    | 0h      | BCH ECC result, bits 96 to 127 |

<!-- image -->

<!-- image -->

## 7.1.5.129 GPMC\_BCH\_SWDATA Register (offset = 2D0h) [reset = 0h]

GPMC\_BCH\_SWDATA is shown in Figure 7-175 and described in Table 7-177.

This register is used to directly pass data to the BCH ECC calculator without accessing the actual NAND flash interface.

## Figure 7-175. GPMC\_BCH\_SWDATA Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | BCH_DATA                                                                              |
| R-0h                                                                                  | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-177. GPMC\_BCH\_SWDATA Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                          |
| 15-0  | BCH_DATA | R/W    | 0h      | Data to be included in the BCH calculation. Only bits 0 to 7 are taken into account, if the calculator is configured to use 8 bits data (GPMC_ECC_CONFIG[7] ECC16B = 0). |

## 7.1.5.130 GPMC\_BCH\_RESULT4\_0 Register (offset = 300h) [reset = 0h]

GPMC\_BCH\_RESULT4\_0 is shown in Figure 7-176 and described in Table 7-178.

## Figure 7-176. GPMC\_BCH\_RESULT4\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT4_0   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-178. GPMC\_BCH\_RESULT4\_0 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT4_0 | R/W    | 0h      | BCH ECC result, bits 128 to 159 |

<!-- image -->

<!-- image -->

## 7.1.5.131 GPMC\_BCH\_RESULT5\_0 Register (offset = 304h) [reset = 0h]

GPMC\_BCH\_RESULT5\_0 is shown in Figure 7-177 and described in Table 7-179.

## Figure 7-177. GPMC\_BCH\_RESULT5\_0 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT5_0   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-179. GPMC\_BCH\_RESULT5\_0 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT5_0 | R/W    | 0h      | BCH ECC result, bits 160 to 191 |

## 7.1.5.132 GPMC\_BCH\_RESULT6\_0 Register (offset = 308h) [reset = 0h]

GPMC\_BCH\_RESULT6\_0 is shown in Figure 7-178 and described in Table 7-180.

## Figure 7-178. GPMC\_BCH\_RESULT6\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT6_0   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-180. GPMC\_BCH\_RESULT6\_0 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT6_0 | R/W    | 0h      | BCH ECC result, bits 192 to 207 |

<!-- image -->

<!-- image -->

## 7.1.5.133 GPMC\_BCH\_RESULT4\_1 Register (offset = 310h) [reset = 0h]

GPMC\_BCH\_RESULT4\_1 is shown in Figure 7-179 and described in Table 7-181.

## Figure 7-179. GPMC\_BCH\_RESULT4\_1 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT4_1   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-181. GPMC\_BCH\_RESULT4\_1 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT4_1 | R/W    | 0h      | BCH ECC result, bits 128 to 159 |

## 7.1.5.134 GPMC\_BCH\_RESULT5\_1 Register (offset = 314h) [reset = 0h]

GPMC\_BCH\_RESULT5\_1 is shown in Figure 7-180 and described in Table 7-182.

## Figure 7-180. GPMC\_BCH\_RESULT5\_1 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT5_1   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-182. GPMC\_BCH\_RESULT5\_1 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT5_1 | R/W    | 0h      | BCH ECC result, bits 160 to 191 |

<!-- image -->

<!-- image -->

## 7.1.5.135 GPMC\_BCH\_RESULT6\_1 Register (offset = 318h) [reset = 0h]

GPMC\_BCH\_RESULT6\_1 is shown in Figure 7-181 and described in Table 7-183.

## Figure 7-181. GPMC\_BCH\_RESULT6\_1 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT6_1   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-183. GPMC\_BCH\_RESULT6\_1 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT6_1 | R/W    | 0h      | BCH ECC result, bits 192 to 207 |

## 7.1.5.136 GPMC\_BCH\_RESULT4\_2 Register (offset = 320h) [reset = 0h]

GPMC\_BCH\_RESULT4\_2 is shown in Figure 7-182 and described in Table 7-184.

## Figure 7-182. GPMC\_BCH\_RESULT4\_2 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT4_2   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-184. GPMC\_BCH\_RESULT4\_2 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT4_2 | R/W    | 0h      | BCH ECC result, bits 128 to 159 |

<!-- image -->

<!-- image -->

## 7.1.5.137 GPMC\_BCH\_RESULT5\_2 Register (offset = 324h) [reset = 0h]

GPMC\_BCH\_RESULT5\_2 is shown in Figure 7-183 and described in Table 7-185.

## Figure 7-183. GPMC\_BCH\_RESULT5\_2 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT5_2   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-185. GPMC\_BCH\_RESULT5\_2 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT5_2 | R/W    | 0h      | BCH ECC result, bits 160 to 191 |

## 7.1.5.138 GPMC\_BCH\_RESULT6\_2 Register (offset = 328h) [reset = 0h]

GPMC\_BCH\_RESULT6\_2 is shown in Figure 7-184 and described in Table 7-186.

## Figure 7-184. GPMC\_BCH\_RESULT6\_2 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT6_2   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-186. GPMC\_BCH\_RESULT6\_2 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT6_2 | R/W    | 0h      | BCH ECC result, bits 192 to 207 |

<!-- image -->

<!-- image -->

## 7.1.5.139 GPMC\_BCH\_RESULT4\_3 Register (offset = 330h) [reset = 0h]

GPMC\_BCH\_RESULT4\_3 is shown in Figure 7-185 and described in Table 7-187.

## Figure 7-185. GPMC\_BCH\_RESULT4\_3 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT4_3   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-187. GPMC\_BCH\_RESULT4\_3 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT4_3 | R/W    | 0h      | BCH ECC result, bits 128 to 159 |

## 7.1.5.140 GPMC\_BCH\_RESULT5\_3 Register (offset = 334h) [reset = 0h]

GPMC\_BCH\_RESULT5\_3 is shown in Figure 7-186 and described in Table 7-188.

## Figure 7-186. GPMC\_BCH\_RESULT5\_3 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT5_3   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-188. GPMC\_BCH\_RESULT5\_3 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT5_3 | R/W    | 0h      | BCH ECC result, bits 160 to 191 |

<!-- image -->

<!-- image -->

## 7.1.5.141 GPMC\_BCH\_RESULT6\_3 Register (offset = 338h) [reset = 0h]

GPMC\_BCH\_RESULT6\_3 is shown in Figure 7-187 and described in Table 7-189.

## Figure 7-187. GPMC\_BCH\_RESULT6\_3 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT6_3   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-189. GPMC\_BCH\_RESULT6\_3 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT6_3 | R/W    | 0h      | BCH ECC result, bits 192 to 207 |

## 7.1.5.142 GPMC\_BCH\_RESULT4\_4 Register (offset = 340h) [reset = 0h]

GPMC\_BCH\_RESULT4\_4 is shown in Figure 7-188 and described in Table 7-190.

## Figure 7-188. GPMC\_BCH\_RESULT4\_4 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT4_4   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-190. GPMC\_BCH\_RESULT4\_4 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT4_4 | R/W    | 0h      | BCH ECC result, bits 128 to 159 |

<!-- image -->

<!-- image -->

## 7.1.5.143 GPMC\_BCH\_RESULT5\_4 Register (offset = 344h) [reset = 0h]

GPMC\_BCH\_RESULT5\_4 is shown in Figure 7-189 and described in Table 7-191.

## Figure 7-189. GPMC\_BCH\_RESULT5\_4 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT5_4   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-191. GPMC\_BCH\_RESULT5\_4 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT5_4 | R/W    | 0h      | BCH ECC result, bits 160 to 191 |

## 7.1.5.144 GPMC\_BCH\_RESULT6\_4 Register (offset = 348h) [reset = 0h]

GPMC\_BCH\_RESULT6\_4 is shown in Figure 7-190 and described in Table 7-192.

## Figure 7-190. GPMC\_BCH\_RESULT6\_4 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|
| BCH_RESULT6_4                                                                         |
| R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-192. GPMC\_BCH\_RESULT6\_4 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT6_4 | R/W    | 0h      | BCH ECC result, bits 192 to 207 |

<!-- image -->

<!-- image -->

## 7.1.5.145 GPMC\_BCH\_RESULT4\_5 Register (offset = 350h) [reset = 0h]

GPMC\_BCH\_RESULT4\_5 is shown in Figure 7-191 and described in Table 7-193.

## Figure 7-191. GPMC\_BCH\_RESULT4\_5 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT4_5   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-193. GPMC\_BCH\_RESULT4\_5 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT4_5 | R/W    | 0h      | BCH ECC result, bits 128 to 159 |

## 7.1.5.146 GPMC\_BCH\_RESULT5\_5 Register (offset = 354h) [reset = 0h]

GPMC\_BCH\_RESULT5\_5 is shown in Figure 7-192 and described in Table 7-194.

## Figure 7-192. GPMC\_BCH\_RESULT5\_5 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT5_5   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-194. GPMC\_BCH\_RESULT5\_5 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT5_5 | R/W    | 0h      | BCH ECC result, bits 160 to 191 |

<!-- image -->

<!-- image -->

## 7.1.5.147 GPMC\_BCH\_RESULT6\_5 Register (offset = 358h) [reset = 0h]

GPMC\_BCH\_RESULT6\_5 is shown in Figure 7-193 and described in Table 7-195.

## Figure 7-193. GPMC\_BCH\_RESULT6\_5 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT6_5   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-195. GPMC\_BCH\_RESULT6\_5 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT6_5 | R/W    | 0h      | BCH ECC result, bits 192 to 207 |

## 7.1.5.148 GPMC\_BCH\_RESULT4\_6 Register (offset = 360h) [reset = 0h]

GPMC\_BCH\_RESULT4\_6 is shown in Figure 7-194 and described in Table 7-196.

## Figure 7-194. GPMC\_BCH\_RESULT4\_6 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT4_6   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-196. GPMC\_BCH\_RESULT4\_6 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT4_6 | R/W    | 0h      | BCH ECC result, bits 128 to 159 |

<!-- image -->

<!-- image -->

## 7.1.5.149 GPMC\_BCH\_RESULT5\_6 Register (offset = 364h) [reset = 0h]

GPMC\_BCH\_RESULT5\_6 is shown in Figure 7-195 and described in Table 7-197.

## Figure 7-195. GPMC\_BCH\_RESULT5\_6 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT5_6   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-197. GPMC\_BCH\_RESULT5\_6 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT5_6 | R/W    | 0h      | BCH ECC result, bits 160 to 191 |

## 7.1.5.150 GPMC\_BCH\_RESULT6\_6 Register (offset = 368h) [reset = 0h]

GPMC\_BCH\_RESULT6\_6 is shown in Figure 7-196 and described in Table 7-198.

## Figure 7-196. GPMC\_BCH\_RESULT6\_6 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT6_6   |
|---------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-198. GPMC\_BCH\_RESULT6\_6 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT6_6 | R/W    | 0h      | BCH ECC result, bits 192 to 207 |

<!-- image -->

<!-- image -->

## 7.1.5.151 GPMC\_BCH\_RESULT4\_7 Register (offset = 370h) [reset = 0h]

GPMC\_BCH\_RESULT4\_7 is shown in Figure 7-197 and described in Table 7-199.

## Figure 7-197. GPMC\_BCH\_RESULT4\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT4_7   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-199. GPMC\_BCH\_RESULT4\_7 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT4_7 | R/W    | 0h      | BCH ECC result, bits 128 to 159 |

## 7.1.5.152 GPMC\_BCH\_RESULT5\_7 Register (offset = 374h) [reset = 0h]

GPMC\_BCH\_RESULT5\_7 is shown in Figure 7-198 and described in Table 7-200.

## Figure 7-198. GPMC\_BCH\_RESULT5\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT5_7   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-200. GPMC\_BCH\_RESULT5\_7 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT5_7 | R/W    | 0h      | BCH ECC result, bits 160 to 191 |

<!-- image -->

<!-- image -->

## 7.1.5.153 GPMC\_BCH\_RESULT6\_7 Register (offset = 378h) [reset = 0h]

GPMC\_BCH\_RESULT6\_7 is shown in Figure 7-199 and described in Table 7-201.

## Figure 7-199. GPMC\_BCH\_RESULT6\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BCH_RESULT6_7   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-201. GPMC\_BCH\_RESULT6\_7 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | BCH_RESULT6_7 | R/W    | 0h      | BCH ECC result, bits 192 to 207 |