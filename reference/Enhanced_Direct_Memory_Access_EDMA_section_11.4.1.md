## 11.4 EDMA3 Registers

## 11.4.1 EDMA3CC Registers

Table 11-26 lists the memory-mapped registers for the EDMA3CC. All register offset addresses not listed in Table 11-26 should be considered as reserved locations and the register contents should not be modified.

Table 11-26. EDMA3CC Registers

| Offset       | Acronym                | Register Name                                       | Section           |
|--------------|------------------------|-----------------------------------------------------|-------------------|
| 0h           | PID                    | Peripheral Identification Register                  | Section 11.4.1.1  |
| 4h           | CCCFG                  | EDMA3CC Configuration Register                      | Section 11.4.1.2  |
| 10h          | SYSCONFIG              | EDMA3CC System Configuration Register               | Section 15.1.3.2  |
| 100h to 1FCh | DCHMAP_0 to DCHMAP_63  | DMA Channel Mapping Registers 0-63                  | Section 11.4.1.4  |
| 200h to 21Ch | QCHMAP_0 to QCHMAP_7   | QDMA Channel Mapping Registers 0-7                  | Section 11.4.1.5  |
| 240h to 25Ch | DMAQNUM_0 to DMAQNUM_7 | DMA Queue Number Registers 0-7                      | Section 11.4.1.6  |
| 260h         | QDMAQNUM               | QDMA Queue Number Register                          | Section 11.4.1.7  |
| 284h         | QUEPRI                 | Queue Priority Register                             | Section 11.4.1.8  |
| 300h         | EMR                    | Event Missed Register                               | Section 11.4.1.9  |
| 304h         | EMRH                   | Event Missed Register High                          | Section 11.4.1.10 |
| 308h         | EMCR                   | Event Missed Clear Register                         | Section 11.4.1.11 |
| 30Ch         | EMCRH                  | Event Missed Clear Register High                    | Section 11.4.1.12 |
| 310h         | QEMR                   | QDMA Event Missed Register                          | Section 11.4.1.13 |
| 314h         | QEMCR                  | QDMA Event Missed Clear Register                    | Section 11.4.1.14 |
| 318h         | CCERR                  | EDMA3CC Error Register                              | Section 11.4.1.15 |
| 31Ch         | CCERRCLR               | EDMA3CC Error Clear Register                        | Section 11.4.1.16 |
| 320h         | EEVAL                  | Error Evaluate Register                             | Section 11.4.1.17 |
| 340h         | DRAE0                  | DMA Region Access Enable Register for Region 0      | Section 11.4.1.18 |
| 344h         | DRAEH0                 | DMA Region Access Enable Register High for Region 0 | Section 11.4.1.19 |
| 348h         | DRAE1                  | DMA Region Access Enable Register for Region 1      | Section 11.4.1.20 |
| 34Ch         | DRAEH1                 | DMA Region Access Enable Register High for Region 1 | Section 11.4.1.21 |
| 350h         | DRAE2                  | DMA Region Access Enable Register for Region 2      | Section 11.4.1.22 |
| 354h         | DRAEH2                 | DMA Region Access Enable Register High for Region 2 | Section 11.4.1.23 |
| 358h         | DRAE3                  | DMA Region Access Enable Register for Region 3      | Section 11.4.1.24 |
| 35Ch         | DRAEH3                 | DMA Region Access Enable Register High for Region 3 | Section 11.4.1.25 |
| 360h         | DRAE4                  | DMA Region Access Enable Register for Region 4      | Section 11.4.1.26 |
| 364h         | DRAEH4                 | DMA Region Access Enable Register High for Region 4 | Section 11.4.1.27 |
| 368h         | DRAE5                  | DMA Region Access Enable Register for Region 5      | Section 11.4.1.28 |
| 36Ch         | DRAEH5                 | DMA Region Access Enable Register High for Region 5 | Section 11.4.1.29 |
| 370h         | DRAE6                  | DMA Region Access Enable Register for Region 6      | Section 11.4.1.30 |
| 374h         | DRAEH6                 | DMA Region Access Enable Register High for Region 6 | Section 11.4.1.31 |
| 378h         | DRAE7                  | DMA Region Access Enable Register for Region 7      | Section 11.4.1.32 |
| 37Ch         | DRAEH7                 | DMA Region Access Enable Register High for Region 7 | Section 11.4.1.33 |

<!-- image -->

<!-- image -->

www.ti.com

Table 11-26. EDMA3CC Registers (continued)

| Offset       | Acronym          | Register Name                                      | Section                             |
|--------------|------------------|----------------------------------------------------|-------------------------------------|
| 380h to 39Ch | QRAE_0 to QRAE_7 | QDMA Region Access Enable Registers for Region 0-7 | Section 11.4.1.34                   |
| 400h         | Q0E0             | Event Queue 0 Entry 0 Register                     | Section 11.4.1.35                   |
| 404h         | Q0E1             | Event Queue 0 Entry 1 Register                     | Section 11.4.1.36                   |
| 408h         | Q0E2             | Event Queue 0 Entry 2 Register                     | Section 11.4.1.37                   |
| 40Ch         | Q0E3             | Event Queue 0 Entry 3 Register                     | Section 11.4.1.38                   |
| 410h         | Q0E4             | Event Queue 0 Entry 4 Register                     | Section 11.4.1.39                   |
| 414h         | Q0E5             | Event Queue 0 Entry 5 Register                     | Section 11.4.1.40                   |
| 418h         | Q0E6             | Event Queue 0 Entry 6 Register                     | Section 11.4.1.41                   |
| 41Ch         | Q0E7             | Event Queue 0 Entry 7 Register                     | Section 11.4.1.42                   |
| 420h         | Q0E8             | Event Queue 0 Entry 8 Register                     | Section 11.4.1.43                   |
| 424h         | Q0E9             | Event Queue 0 Entry 9 Register                     | Section 11.4.1.44                   |
| 428h         | Q0E10            | Event Queue 0 Entry 10 Register                    | Section 11.4.1.45                   |
| 42Ch         | Q0E11            | Event Queue 0 Entry 11 Register                    | Section 11.4.1.46                   |
| 430h         | Q0E12            | Event Queue 0 Entry 12 Register                    | Section 11.4.1.47                   |
| 434h         | Q0E13            | Event Queue 0 Entry 13 Register                    | Section 11.4.1.48                   |
| 438h         | Q0E14            | Event Queue 0 Entry 14 Register                    | Section 11.4.1.49                   |
| 43Ch         | Q0E15            | Event Queue 0 Entry 15 Register                    | Section 11.4.1.50                   |
| 440h         | Q1E0             | Event Queue 1 Entry 0 Register                     | Section 11.4.1.51                   |
| 444h         | Q1E1             | Event Queue 1 Entry 1 Register                     | Section 11.4.1.52                   |
| 448h         | Q1E2             | Event Queue 1 Entry 2 Register                     | Section 11.4.1.53                   |
| 44Ch         | Q1E3             | Event Queue 1 Entry 3 Register                     | Section 11.4.1.54                   |
| 450h         | Q1E4             | Event Queue 1 Entry 4 Register                     | Section 11.4.1.55                   |
| 454h         | Q1E5             | Event Queue 1 Entry 5 Register                     | Section 11.4.1.56                   |
| 458h         | Q1E6             | Event Queue 1 Entry 6 Register                     | Section 11.4.1.57                   |
| 45Ch         | Q1E7             | Event Queue 1 Entry 7 Register                     | Section 11.4.1.58                   |
| 460h         | Q1E8             | Event Queue 1 Entry 8 Register                     | Section 11.4.1.59                   |
| 464h         | Q1E9             | Event Queue 1 Entry 9 Register                     | Section 11.4.1.60                   |
| 468h         | Q1E10            | Event Queue 1 Entry 10 Register                    | Section 11.4.1.61                   |
| 46Ch         | Q1E11            | Event Queue 1 Entry 11 Register                    | Section 11.4.1.62                   |
| 470h         | Q1E12            | Event Queue 1 Entry 12 Register                    | Section 11.4.1.63                   |
| 474h         | Q1E13            | Event Queue 1 Entry 13 Register                    | Section 11.4.1.64                   |
| 478h         | Q1E14            | Event Queue 1 Entry 14 Register                    | Section 11.4.1.65                   |
| 47Ch         | Q1E15            | Event Queue 1 Entry 15 Register                    | Section 11.4.1.66                   |
| 480h         | Q2E0             | Event Queue 2 Entry 0 Register                     | Section 11.4.1.67                   |
| 484h         | Q2E1             | Event Queue 2 Entry 1 Register                     | Section 11.4.1.68                   |
| 488h         | Q2E2             | Event Queue 2 Entry 2 Register                     | Section 11.4.1.69                   |
| 48Ch         | Q2E3             | Event Queue 2 Entry 3 Register                     | Section 11.4.1.70                   |
| 490h         | Q2E4             | Event Queue 2 Entry 4 Register                     | Section 11.4.1.71                   |
| 494h         | Q2E5             | Event Queue 2 Entry 5 Register                     | Section 11.4.1.72                   |
| 498h         | Q2E6             | Event Queue 2 Entry 6 Register                     | Section 11.4.1.73                   |
| 49Ch         | Q2E7             | Event Queue 2 Entry 7 Register                     | Section 11.4.1.74                   |
| 4A0h         | Q2E8             | Event Queue 2 Entry 8 Register                     | Section 11.4.1.75                   |
| 4A4h         | Q2E9             | Event Queue 2 Entry 9 Register                     | Section 11.4.1.76                   |
| 4A8h         | Q2E10            | Event Queue 2 Entry 10 Register                    | Section 11.4.1.77                   |
| 4ACh         | Q2E11            | Event Queue 2 Entry 11 Register                    | Section 11.4.1.78                   |
| 4B0h         | Q2E12            | Event Queue 2 Entry 12 Register                    | Section 11.4.1.79 Section 11.4.1.80 |
| 4B4h         | Q2E13            | Event Queue 2 Entry 13 Register                    |                                     |

Table 11-26. EDMA3CC Registers (continued)

| Offset       | Acronym            | Register Name                                    | Section            |
|--------------|--------------------|--------------------------------------------------|--------------------|
| 4B8h         | Q2E14              | Event Queue 2 Entry 14 Register                  | Section 11.4.1.81  |
| 4BCh         | Q2E15              | Event Queue 2 Entry 15 Register                  | Section 11.4.1.82  |
| 600h to 608h | QSTAT_0 to QSTAT_2 | Queue Status Registers 0-2                       | Section 11.4.1.83  |
| 620h         | QWMTHRA            | Queue Watermark Threshold A Register             | Section 11.4.1.84  |
| 640h         | CCSTAT             | EDMA3CC Status Register                          | Section 11.4.1.85  |
| 800h         | MPFAR              | Memory Protection Fault Address Register         | Section 11.4.1.86  |
| 804h         | MPFSR              | Memory Protection Fault Status Register          | Section 11.4.1.87  |
| 808h         | MPFCR              | Memory Protection Fault Command Register         | Section 11.4.1.88  |
| 80Ch         | MPPAG              | Memory Protection Page Attribute Register Global | Section 11.4.1.89  |
| 810h to 82Ch | MPPA_0 to MPPA_7   | Memory Protection Page Attribute Registers       | Section 11.4.1.90  |
| 1000h        | ER                 | Event Register                                   | Section 11.4.1.91  |
| 1004h        | ERH                | Event Register High                              | Section 11.4.1.92  |
| 1008h        | ECR                | Event Clear Register                             | Section 11.4.1.93  |
| 100Ch        | ECRH               | Event Clear Register High                        | Section 11.4.1.94  |
| 1010h        | ESR                | Event Set Register                               | Section 11.4.1.95  |
| 1014h        | ESRH               | Event Set Register High                          | Section 11.4.1.96  |
| 1018h        | CER                | Chained Event Register                           | Section 11.4.1.97  |
| 101Ch        | CERH               | Chained Event Register High                      | Section 11.4.1.98  |
| 1020h        | EER                | Event Enable Register                            | Section 11.4.1.99  |
| 1024h        | EERH               | Event Enable Register High                       | Section 11.4.1.100 |
| 1028h        | EECR               | Event Enable Clear Register                      | Section 11.4.1.101 |
| 102Ch        | EECRH              | Event Enable Clear Register High                 | Section 11.4.1.102 |
| 1030h        | EESR               | Event Enable Set Register                        | Section 11.4.1.103 |
| 1034h        | EESRH              | Event Enable Set Register High                   | Section 11.4.1.104 |
| 1038h        | SER                | Secondary Event Register                         | Section 11.4.1.105 |
| 103Ch        | SERH               | Secondary Event Register High                    | Section 11.4.1.106 |
| 1040h        | SECR               | Secondary Event Clear Register                   | Section 11.4.1.107 |
| 1044h        | SECRH              | Secondary Event Clear Register High              | Section 11.4.1.108 |
| 1050h        | IER                | Interrupt Enable Register                        | Section 11.4.1.109 |
| 1054h        | IERH               | Interrupt Enable Register High                   | Section 11.4.1.110 |
| 1058h        | IECR               | Interrupt Enable Clear Register                  | Section 11.4.1.111 |
| 105Ch        | IECRH              | Interrupt Enable Clear Register High             | Section 11.4.1.112 |
| 1060h        | IESR               | Interrupt Enable Set Register                    | Section 11.4.1.113 |
| 1064h        | IESRH              | Interrupt Enable Set Register High               | Section 11.4.1.114 |
| 1068h        | IPR                | Interrupt Pending Register                       | Section 11.4.1.115 |
| 106Ch        | IPRH               | Interrupt Pending Register High                  | Section 11.4.1.116 |
| 1070h        | ICR                | Interrupt Clear Register                         | Section 11.4.1.117 |
| 1074h        | ICRH               | Interrupt Clear Register High                    | Section 11.4.1.118 |
| 1078h        | IEVAL              | Interrupt Evaluate Register                      | Section 11.4.1.119 |
| 1080h        | QER                | QDMA Event Register                              | Section 11.4.1.120 |
| 1084h        | QEER               | QDMA Event Enable Register                       | Section 11.4.1.121 |
| 1088h        | QEECR              | QDMA Event Enable Clear Register                 | Section 11.4.1.122 |
| 108Ch        | QEESR              | QDMA Event Enable Set Register                   | Section 11.4.1.123 |
| 1090h        | QSER               | QDMA Secondary Event Register                    | Section 11.4.1.124 |
| 1094h        | QSECR              | QDMA Secondary Event Clear Register              | Section 11.4.1.125 |

<!-- image -->

<!-- image -->

## 11.4.1.1 PID Register (offset = 0h) [reset = 0h]

PID is shown in Figure 11-40 and described in Table 11-27.

The peripheral identification register (PID) uniquely identifies the EDMA3CC and the specific revision of the EDMA3CC.

## Figure 11-40. PID Register

| 15   | 14   | 13   | 12   | 11   | 10   | 9   | 8 7   | 6   | 5   | 4   | 3   | 2 1   | 0   |
|------|------|------|------|------|------|-----|-------|-----|-----|-----|-----|-------|-----|
|      |      |      |      |      |      |     | PID   |     |     |     |     |       |     |
|      |      |      |      |      |      |     | R-0h  |     |     |     |     |       |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-27. PID Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                            |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-0  | PID     | R      | 0h      | Peripheral identifier uniquely identifies the EDMA3CC and the specific revision of the EDMA3CC. Value 0 to FFFF FFFFh. Reset value for PID[31] to PID[16] is 4001h. Peripheral identifier uniquely identifies the EDMA3CC and the specific revision of the EDMA3CC. Value 0 to FFFF FFFFh. Reset value for PID[15] to PID[0] is 4C00h. |

## 11.4.1.2 CCCFG Register (offset = 4h) [reset = 3224445h]

CCCFG is shown in Figure 11-41 and described in Table 11-28.

The EDMA3CC configuration register (CCCFG) provides the features/resources for the EDMA3CC in a particular device.

## Figure 11-41. CCCFG Register

| 31       | 30       | 29          | 28       | 27       | 26        | 25        | 24          |
|----------|----------|-------------|----------|----------|-----------|-----------|-------------|
|          | RESERVED | RESERVED    | RESERVED |          |           | MP_EXIST  | CHMAP_EXIST |
|          | R-0h     | R-0h        | R-0h     |          |           | R-1h      | R-1h        |
| 23       | 22       | 21          | 20       | 19       | 18        | 17        | 16          |
| RESERVED | RESERVED | NUM_REGN    | NUM_REGN | RESERVED |           | NUM_EVQUE |             |
| R-0h     | R-0h     | R-2h        | R-2h     | R-0h     |           | R-2h      |             |
| 15       | 14       | 13          | 12       | 11       | 10        | 9         | 8           |
| RESERVED |          | NUM_PAENTRY |          | RESERVED | NUM_INTCH | NUM_INTCH | NUM_INTCH   |
| R-0h     |          | R-4h        |          | R-0h     |           | R-4h      |             |
| 7        | 6        | 5           | 4        | 3        | 2         | 1         | 0           |
| RESERVED |          | NUM_QDMACH  |          |          |           | NUM_DMACH |             |
| R-0h     |          |             |          | RESERVED |           |           |             |
|          |          | R-4h        |          | R-0h     |           | R-5h      |             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-28. CCCFG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                            |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | RESERVED    | R      | 0h      |                                                                                                                                        |
| 25    | MP_EXIST    | R      | 1h      | Memory protection existence. 0h = Reserved. 1h = Memory protection logic included.                                                     |
| 24    | CHMAP_EXIST | R      | 1h      | Channel mapping existence. 0h = Reserved. 1h = Channel mapping logic included.                                                         |
| 23-22 | RESERVED    | R      | 0h      |                                                                                                                                        |
| 21-20 | NUM_REGN    | R      | 2h      | Number of MP and shadow regions. 0h = Reserved. 1h = Reserved 2h = 4 regions. 3h = Reserved.                                           |
| 19    | RESERVED    | R      | 0h      |                                                                                                                                        |
| 18-16 | NUM_EVQUE   | R      | 2h      | Number of queues/number of TCs. 0h = Reserved. 1h = Reserved. 2h = 3 EDMA3TCs/Event Queues 3h = Reserved from 3h to 7h. 7h = Reserved. |
| 15    | RESERVED    | R      | 0h      |                                                                                                                                        |
| 14-12 | NUM_PAENTRY | R      | 4h      | Number of PaRAM sets. 0h = Reserved from 0h to 3h. 3h = Reserved 4h = 256 PaRAM sets. 5h = Reserved from 5h to 7h. 7h = Reserved.      |
| 11    | RESERVED    | R      | 0h      |                                                                                                                                        |

<!-- image -->

<!-- image -->

Table 11-28. CCCFG Register Field Descriptions (continued)

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                      |
|-------|------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------|
| 10-8  | NUM_INTCH  | R      | 4h      | Number of interrupt channels. 0h = Reserved from 0h to 3h. 3h = Reserved. 4h = 64 interrupt channels. 5h = Reserved from 5h to 7. 7h = Reserved. |
| 7     | RESERVED   | R      | 0h      |                                                                                                                                                  |
| 6-4   | NUM_QDMACH | R      | 4h      | Number of QDMA channels. 0h = Reserved from 0h to 3h. 3h = Reserved. 4h = 8 QDMA channels. 5h = Reserved from 5h to 7. 7h = Reserved.            |
| 3     | RESERVED   | R      | 0h      |                                                                                                                                                  |
| 2-0   | NUM_DMACH  | R      | 5h      | Number of DMA channels. 0h = Reserved from 0h to 4h. 4h = Reserved. 5h = 64 DMA channels. 6h = Reserved. 7h = Reserved.                          |

## 11.4.1.3 SYSCONFIG Register (offset = 10h) [reset = 8h]

SYSCONFIG is shown in Figure 15-4 and described in Table 15-7.

The EDMA3CC system configuration register is used for clock management configuration.

## Figure 11-42. SYSCONFIG Register

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
| RESERVED | RESERVED | RESERVED | RESERVED | IDLEMODE | IDLEMODE | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-2h   | R/W-2h   | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-29. SYSCONFIG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 5-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 3-2   | IDLEMODE | R/W    | 2h      | Configuration of the local target state management mode. By definition, target can handle read/write transaction as long as it is out of IDLE state. 0h = Force-idle mode: local target's idle state follows (acknowledges) the system's idle requests unconditionally, i.e. regardless of the IP module's internal requirements. Backup mode, for debug only. 1h = No-idle mode: local target never enters idle state. Backup mode, for debug only. 2h = Smart-idle mode: local target's idle state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements. IP module shall not generate (IRQ- or DMA-request-related) wakeup events. 3h = Smart-idle wakeup-capable mode: local target's idle state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements. IP module may generate (IRQ- or DMA-request-related) wakeup events when in idle state. Mode is only relevant if the appropriate IP module "swakeup" output(s) is (are) implemented. |
| 1     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 0     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |

<!-- image -->

<!-- image -->

## 11.4.1.4 DCHMAP\_0 to DCHMAP\_63 Register (offset = 100h to 1FCh) [reset = 0h]

DCHMAP\_0 to DCHMAP\_63 is shown in Figure 11-43 and described in Table 11-30.

## Figure 11-43. DCHMAP\_0 to DCHMAP\_63 Register

| 31                        | 30                        | 29                        | 28                        | 27                        | 26                        | 25                        | 24                        | 23                        | 22                        | 21                        | 20                        | 19                        | 18                        | 17                        | 16                        |                           |
|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|
| RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  | RESERVED                  |
| R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      | R-0h                      |
| 15                        | 14                        | 13                        | 12                        | 11                        | 10                        | 9                         | 8                         | 7                         | 6                         | 5                         | 4                         | 3                         | 2                         | 1                         | 0                         |                           |
| RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED | RESERVED PAENTRY RESERVED |
| R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          | R-0h R/W-0h R-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-30. DCHMAP\_0 to DCHMAP\_63 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------|
| 31-14 | RESERVED | R      | 0h      |                                                                   |
| 13-5  | PAENTRY  | R/W    | 0h      | Points to the PaRAM set number for DMA channel n. Value 0 to FFh. |
| 4-0   | RESERVED | R      | 0h      |                                                                   |

## 11.4.1.5 QCHMAP\_0 to QCHMAP\_7 Register (offset = 200h to 21Ch) [reset = 0h]

QCHMAP\_0 to QCHMAP\_7 is shown in Figure 11-44 and described in Table 11-31.

Each QDMA channel in EDMA3CC can be associated with any PaRAM set available on the device. Furthermore, the specific trigger word (0-7) of the PaRAM set can be programmed. The PaRAM set association and trigger word for every QDMA channel register is configurable using the QDMA channel map register (QCHMAPn). At reset the QDMA channel map registers for all QDMA channels point to PaRAM set 0. If an application makes use of both a DMA channel that points to PaRAM set 0 and any QDMA channels, ensure that QCHMAP is programmed appropriately to point to a different PaRAM entry.

Figure 11-44. QCHMAP\_0 to QCHMAP\_7 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | PAENTRY  | PAENTRY  | PAENTRY  | PAENTRY  | PAENTRY  | PAENTRY  |
| R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| PAENTRY  | PAENTRY  | PAENTRY  | TRWORD   | TRWORD   | TRWORD   | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-31. QCHMAP\_0 to QCHMAP\_7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                 |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-14 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                             |
| 13-5  | PAENTRY  | R/W    | 0h      | PAENTRY points to the PaRAM set number for QDMA channel . 0h = Parameter entry 0 through 255, from 0 to FFh. 1h = Reserved, from 100h to 1FFh. Always write 0 to this bit. Writes of 1 to this bit are not supported and attempts to do so may result in undefine behavior. |
| 4-2   | TRWORD   | R/W    | 0h      | Points to the specific trigger word of the PaRAM set defined by PAENTRY. A write to the trigger word results in a QDMA event being recognized.                                                                                                                              |
| 1-0   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                             |

<!-- image -->

<!-- image -->

www.ti.com

## 11.4.1.6 DMAQNUM\_0 to DMAQNUM\_7 Register (offset = 240h to 25Ch) [reset = 0h]

DMAQNUM\_0 to DMAQNUM\_7 is shown in Figure 11-45 and described in Table 11-32.

The DMA channel queue number register (DMAQNUMn) allows programmability of each of the 64 DMA channels in the EDMA3CC to submit its associated synchronization event to any event queue in the EDMA3CC. At reset, all channels point to event queue 0. Because the event queues in EDMA3CC have a fixed association to the transfer controllers, that is, Q0 TRs are submitted to TC0, Q1 TRs are submitted to TC1, etc., by programming DMAQNUM for a particular DMA channel also dictates which transfer controller is utilized for the data movement (or which EDMA3TC receives the TR request).

Figure 11-45. DMAQNUM\_0 to DMAQNUM\_7 Register

| 31       | 30   | 29     | 28   | 27       | 26   | 25     | 24   |
|----------|------|--------|------|----------|------|--------|------|
| RESERVED |      | E7     |      | RESERVED |      | E6     |      |
| R-0h     |      | R/W-0h |      | R-0h     |      | R/W-0h |      |
| 23       | 22   | 21     | 20   | 19       | 18   | 17     | 16   |
| RESERVED |      | E5     |      | RESERVED |      | E4     |      |
| R-0h     |      | R/W-0h |      | R-0h     |      | R/W-0h |      |
| 15       | 14   | 13     | 12   | 11       | 10   | 9      | 8    |
| RESERVED |      | E3     |      | RESERVED |      | E2     |      |
| R-0h     |      | R/W-0h |      | R-0h     |      | R/W-0h |      |
| 7        | 6    | 5      | 4    | 3        | 2    | 1      | 0    |
| RESERVED |      | E1     |      | RESERVED |      | E0     |      |
| R-0h     |      | R/W-0h |      | R-0h     |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-32. DMAQNUM\_0 to DMAQNUM\_7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 30-28 | E7       | R/W    | 0h      | DMA queue number. Contains the event queue number to be used for the corresponding DMA channel. Programming DMAQNUM for an event queue number to a value more then the number of queues available in the EDMA3CC results in undefined behavior. On DMAQNUM0, E[30] to E[28] is E7. On DMAQNUM1, E[30] to E[28] is E15. On DMAQNUM2, E[30] to E[28] is E23. On DMAQNUM3, E[30] to E[28] is E31. On DMAQNUM4, E[30] to E[28] is E39. On DMAQNUM5, E[30] to E[28] is E47. On DMAQNUM6, E[30] to E[28] is E55. On DMAQNUM7, E[30] to E[28] is E63. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 27    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |

<!-- image -->

Table 11-32. DMAQNUM\_0 to DMAQNUM\_7 Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 26-24 | E6       | R/W    | 0h      | DMA queue number. Contains the event queue number to be used for the corresponding DMA channel. Programming DMAQNUM for an event queue number to a value more then the number of queues available in the EDMA3CC results in undefined behavior. On DMAQNUM0, E[26] to E[24] is E6. On DMAQNUM1, E[26] to E[24] is E14. On DMAQNUM2, E[26] to E[24] is E22. On DMAQNUM3, E[26] to E[24] is E30. On DMAQNUM4, E[26] to E[24] is E38. On DMAQNUM5, E[26] to E[24] is E46. On DMAQNUM6, E[26] to E[24] is E54. On DMAQNUM7, E[26] to E[24] is E62. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 23    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 22-20 | E5       | R/W    | 0h      | DMA queue number. Contains the event queue number to be used for the corresponding DMA channel. Programming DMAQNUM for an event queue number to a value more then the number of queues available in the EDMA3CC results in undefined behavior. On DMAQNUM0, E[22] to E[20] is E5. On DMAQNUM1, E[22] to E[20] is E13. On DMAQNUM2, E[22] to E[20] is E21. On DMAQNUM3, E[22] to E[20] is E29. On DMAQNUM4, E[22] to E[20] is E37. On DMAQNUM5, E[22] to E[20] is E45. On DMAQNUM6, E[22] to E[20] is E53. On DMAQNUM7, E[22] to E[20] is E61. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 19    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |

<!-- image -->

www.ti.com

Table 11-32. DMAQNUM\_0 to DMAQNUM\_7 Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 18-16 | E4       | R/W    | 0h      | DMA queue number. Contains the event queue number to be used for the corresponding DMA channel. Programming DMAQNUM for an event queue number to a value more then the number of queues available in the EDMA3CC results in undefined behavior. On DMAQNUM0, E[18] to E[16] is E4. On DMAQNUM1, E[18] to E[16] is E12. On DMAQNUM2, E[18] to E[16] is E20. On DMAQNUM3, E[18] to E[16] is E28. On DMAQNUM4, E[18] to E[16] is E36. On DMAQNUM5, E[18] to E[16] is E44. On DMAQNUM6, E[18] to E[16] is E52. On DMAQNUM7, E[18] to E[16] is E60. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 15    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 14-12 | E3       | R/W    | 0h      | DMA queue number. Contains the event queue number to be used for the corresponding DMA channel. Programming DMAQNUM for an event queue number to a value more then the number of queues available in the EDMA3CC results in undefined behavior. On DMAQNUM0, E[14] to E[12] is E3. On DMAQNUM1, E[14] to E[12] is E11. On DMAQNUM2, E[14] to E[12] is E19. On DMAQNUM3, E[14] to E[12] is E27. On DMAQNUM4, E[14] to E[12] is E35. On DMAQNUM5, E[14] to E[12] is E43. On DMAQNUM6, E[14] to E[12] is E51. On DMAQNUM7, E[14] to E[12] is E59. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 11    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |

<!-- image -->

Table 11-32. DMAQNUM\_0 to DMAQNUM\_7 Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 10-8  | E2       | R/W    | 0h      | DMA queue number. Contains the event queue number to be used for the corresponding DMA channel. Programming DMAQNUM for an event queue number to a value more then the number of queues available in the EDMA3CC results in undefined behavior. On DMAQNUM0, E[10] to E[8] is E2. On DMAQNUM1, E[10] to E[8] is E10. On DMAQNUM2, E[10] to E[8] is E18. On DMAQNUM3, E[10] to E[8] is E26. On DMAQNUM4, E[10] to E[8] is E34. On DMAQNUM5, E[10] to E[8] is E42. On DMAQNUM6, E[10] to E[8] is E50. On DMAQNUM7, E[10] to E[8] is E58. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 7     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 6-4   | E1       | R/W    | 0h      | DMA queue number. Contains the event queue number to be used for the corresponding DMA channel. Programming DMAQNUM for an event queue number to a value more then the number of queues available in the EDMA3CC results in undefined behavior. On DMAQNUM0, E[6] to E[4] is E1. On DMAQNUM1, E[6] to E[4] is E9. On DMAQNUM2, E[6] to E[4] is E17. On DMAQNUM3, E[6] to E[4] is E25. On DMAQNUM4, E[6] to E[4] is E33. On DMAQNUM5, E[6] to E[4] is E41. On DMAQNUM6, E[6] to E[4] is E49. On DMAQNUM7, E[6] to E[4] is E57. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior.          |
| 3     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |

<!-- image -->

Table 11-32. DMAQNUM\_0 to DMAQNUM\_7 Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 2-0   | E0      | R/W    | 0h      | DMA queue number. Contains the event queue number to be used for the corresponding DMA channel. Programming DMAQNUM for an event queue number to a value more then the number of queues available in the EDMA3CC results in undefined behavior. On DMAQNUM0, E[2] to E[0] is E0. On DMAQNUM1, E[2] to E[0] is E8. On DMAQNUM2, E[2] to E[0] is E16. On DMAQNUM3, E[2] to E[0] is E24. On DMAQNUM4, E[2] to E[0] is E32. On DMAQNUM5, E[2] to E[0] is E40. On DMAQNUM6, E[2] to E[0] is E48. On DMAQNUM7, E[2] to E[0] is E56. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |

## 11.4.1.7 QDMAQNUM Register (offset = 260h) [reset = 0h]

QDMAQNUM is shown in Figure 11-46 and described in Table 11-33.

The QDMA channel queue number register (QDMAQNUMn) is used to program all the QDMA channels in the EDMA3CC to submit the associated QDMA event to any of the event queues in the EDMA3CC.

Figure 11-46. QDMAQNUM Register

| 31       | 30   | 29     | 28   | 27       | 26   | 25     | 24   |
|----------|------|--------|------|----------|------|--------|------|
| RESERVED |      | E7     |      | RESERVED |      | E6     |      |
| R-0h     |      | R/W-0h |      | R-0h     |      | R/W-0h |      |
| 23       | 22   | 21     | 20   | 19       | 18   | 17     | 16   |
| RESERVED |      | E5     |      | RESERVED |      | E4     |      |
| R-0h     |      | R/W-0h |      | R-0h     |      | R/W-0h |      |
| 15       | 14   | 13     | 12   | 11       | 10   | 9      | 8    |
| RESERVED |      | E3     |      | RESERVED |      | E2     |      |
| R-0h     |      | R/W-0h |      | R-0h     |      | R/W-0h |      |
| 7        | 6    | 5      | 4    | 3        | 2    | 1      | 0    |
| RESERVED |      | E1     |      | RESERVED |      | E0     |      |
| R-0h     |      | R/W-0h |      | R-0h     |      | R/W-0h |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-33. QDMAQNUM Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 30-28 | E7       | R/W    | 0h      | QDMA queue number. Contains the event queue number to be used for the corresponding QDMA channel. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 27    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 26-24 | E6       | R/W    | 0h      | QDMA queue number. Contains the event queue number to be used for the corresponding QDMA channel. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 23    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

www.ti.com

Table 11-33. QDMAQNUM Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 22-20 | E5       | R/W    | 0h      | QDMA queue number. Contains the event queue number to be used for the corresponding QDMA channel. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 19    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 18-16 | E4       | R/W    | 0h      | QDMA queue number. Contains the event queue number to be used for the corresponding QDMA channel. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 15    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 14-12 | E3       | R/W    | 0h      | QDMA queue number. Contains the event queue number to be used for the corresponding QDMA channel. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 11    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 10-8  | E2       | R/W    | 0h      | QDMA queue number. Contains the event queue number to be used for the corresponding QDMA channel. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined           |
| 7     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Table 11-33. QDMAQNUM Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | E1       | R/W    | 0h      | QDMA queue number. Contains the event queue number to be used for the corresponding QDMA channel. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 3     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 2-0   | E0       | R/W    | 0h      | QDMA queue number. Contains the event queue number to be used for the corresponding QDMA channel. 0h = Event n is queued on Q0. 1h = Event n is queued on Q1. 2h = Event n is queued on Q2. 3h = Reserved, from 3h to 7h. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. 7h = Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |

<!-- image -->

<!-- image -->

## 11.4.1.8 QUEPRI Register (offset = 284h) [reset = 777h]

QUEPRI is shown in Figure 11-47 and described in Table 11-34.

The queue priority register (QUEPRI) allows you to change the priority of the individual queues and the priority of the transfer request (TR) associated with the events queued in the queue. Because the queue to EDMA3TC mapping is fixed, programming QUEPRI essentially governs the priority of the associated transfer controller(s) read/write commands with respect to the other bus masters in the device. You can modify the EDMA3TC priority to obtain the desired system performance.

## Figure 11-47. QUEPRI Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |          | PRIQ2    | PRIQ2    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-7h   | R/W-7h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED |          | PRIQ1    |          | RESERVED |          | PRIQ0    |          |
| R-0h     |          | R/W-7h   |          | R-0h     |          | R/W-7h   |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-34. QUEPRI Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                              |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-11 | RESERVED | R      | 0h      |                                                                                                                                                                                          |
| 10-8  | PRIQ2    | R/W    | 7h      | Priority level for queue 2. Dictates the priority level used by TC2 relative to other masters in the device. A value of 0 means highest priority and a value of 7 means lowest priority. |
| 7     | RESERVED | R      | 0h      |                                                                                                                                                                                          |
| 6-4   | PRIQ1    | R/W    | 7h      | Priority level for queue 1. Dictates the priority level used by TC1 relative to other masters in the device. A value of 0 means highest priority and a value of 7 means lowest priority. |
| 3     | RESERVED | R      | 0h      |                                                                                                                                                                                          |
| 2-0   | PRIQ0    | R/W    | 7h      | Priority level for queue 0. Dictates the priority level used by TC0 relative to other masters in the device. A value of 0 means highest priority and a value of 7 means lowest priority. |

## 11.4.1.9 EMR Register (offset = 300h) [reset = 0h]

EMR is shown in Figure 11-48 and described in Table 11-35.

For a particular DMA channel, if a second event is received prior to the first event getting cleared/serviced, the bit corresponding to that channel is set/asserted in the event missed registers (EMR/EMRH). All trigger types are treated individually, that is, manual triggered (ESR/ESRH), chain triggered (CER/CERH), and event triggered (ER/ERH) are all treated separately. The EMR/EMRH bits for a channel are also set if an event on that channel encounters a NULL entry (or a NULL TR is serviced). If any EMR/EMRH bit is set (and all errors, including bits in other error registers (QEMR, CCERR) were previously cleared), the EDMA3CC generates an error interrupt. For details on EDMA3CC error interrupt generation, see Error Interrupts. This register is part of a set of registers that provide information on missed DMA and/or QDMA events, and instances when event queue thresholds are exceeded. If any of the bits in these registers is set, it results in the EDMA3CC generating an error interrupt.

## Figure 11-48. EMR Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|--------------------------------------------------------------------------------|
|      | En                                                                             |
|      | R-0h                                                                           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-35. EMR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                      |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R      | 0h      | Channel 0 to 31 event missed. En is cleared by writing a 1 to the corresponding bit in the event missed clear register (EMCR). 0h = No missed event. 1h = Missed event occurred. |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.10 EMRH Register (offset = 304h) [reset = 0h]

EMRH is shown in Figure 11-49 and described in Table 11-36.

For a particular DMA channel, if a second event is received prior to the first event getting cleared/serviced, the bit corresponding to that channel is set/asserted in the event missed registers (EMR/EMRH). All trigger types are treated individually, that is, manual triggered (ESR/ESRH), chain triggered (CER/CERH), and event triggered (ER/ERH) are all treated separately. The EMR/EMRH bits for a channel are also set if an event on that channel encounters a NULL entry (or a NULL TR is serviced). If any EMR/EMRH bit is set (and all errors, including bits in other error registers (QEMR, CCERR) were previously cleared), the EDMA3CC generates an error interrupt. For details on EDMA3CC error interrupt generation, see Error Interrupts. This register is part of a set of registers that provide information on missed DMA and/or QDMA events, and instances when event queue thresholds are exceeded. If any of the bits in these registers is set, it results in the EDMA3CC generating an error interrupt.

## Figure 11-49. EMRH Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|--------------------------------------------------------------------------------|
|      | En                                                                             |
|      | R-0h                                                                           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-36. EMRH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                             |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R      | 0h      | Channel 32 to 63 event missed. En is cleared by writing a 1 to the corresponding bit in the event missed clear register high (EMCRH). 0h = No missed event. 1h = Missed event occurred. |

## 11.4.1.11 EMCR Register (offset = 308h) [reset = 0h]

EMCR is shown in Figure 11-50 and described in Table 11-37.

Once a missed event is posted in the event missed registers (EMR/EMRH), the bit remains set and you need to clear the set bit(s). This is done by way of CPU writes to the event missed clear registers (EMCR/EMCRH). Writing a 1 to any of the bits clears the corresponding missed event (bit) in EMR/EMRH; writing a 0 has no effect. This register is part of a set of registers that provide information on missed DMA and/or QDMA events, and instances when event queue thresholds are exceeded. If any of the bits in these registers is set, it results in the EDMA3CC generating an error interrupt.

## Figure 11-50. EMCR Register

| 31 30   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 En   |
|---------|-----------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-37. EMCR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | W      | 0h      | Event missed 0 to 31 clear. All error bits must be cleared before additional error interrupts will be asserted by the EDMA3CC. 0h = No effect. 1h = Corresponding missed event bit in the event missed register (EMR) is cleared (En = 0). |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 11.4.1.12 EMCRH Register (offset = 30Ch) [reset = 0h]

EMCRH is shown in Figure 11-51 and described in Table 11-38.

Once a missed event is posted in the event missed registers (EMR/EMRH), the bit remains set and you need to clear the set bit(s). This is done by way of CPU writes to the event missed clear registers (EMCR/EMCRH). Writing a 1 to any of the bits clears the corresponding missed event (bit) in EMR/EMRH; writing a 0 has no effect. This register is part of a set of registers that provide information on missed DMA and/or QDMA events, and instances when event queue thresholds are exceeded. If any of the bits in these registers is set, it results in the EDMA3CC generating an error interrupt.

## Figure 11-51. EMCRH Register

| 31 30   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 En   |
|---------|-----------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-38. EMCRH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | W      | 0h      | Event missed 32 to 63 clear. All error bits must be cleared before additional error interrupts will be asserted by the EDMA3CC. 0h = No effect. 1h = Corresponding missed event bit in the event missed register high (EMRH) is cleared (En = 0). |

## 11.4.1.13 QEMR Register (offset = 310h) [reset = 0h]

QEMR is shown in Figure 11-52 and described in Table 11-39.

For a particular QDMA channel, if two QDMA events are detected without the first event getting cleared/serviced, the bit corresponding to that channel is set/asserted in the QDMA event missed register (QEMR). The QEMR bits for a channel are also set if a QDMA event on the channel encounters a NULL entry (or a NULL TR is serviced). If any QEMR bit is set (and all errors, including bits in other error registers (EMR/EMRH, CCERR) were previously cleared), the EDMA3CC generates an error interrupt. For details on EDMA3CC error interrupt generation, see Error Interrupts. This register is part of a set of registers that provide information on missed DMA and/or QDMA events, and instances when event queue thresholds are exceeded. If any of the bits in these registers is set, it results in the EDMA3CC generating an error interrupt.

## Figure 11-52. QEMR Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 RESERVED   | 8 7 6 5 4 3 2 1 0 En   |
|------------------------------------------------------------------------------|------------------------|
| R-0h                                                                         | R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-39. QEMR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                            |
| 7-0   | En       | R      | 0h      | Channel 0 to 7 QDMA event missed. En is cleared by writing a 1 to the corresponding bit in the QDMA event missed clear register (QEMCR). 0h = No missed event. 1h = Missed event occurred. |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.14 QEMCR Register (offset = 314h) [reset = 0h]

QEMCR is shown in Figure 11-53 and described in Table 11-40.

Once a missed event is posted in the QDMA event missed registers (QEMR), the bit remains set and you need to clear the set bit(s). This is done by way of CPU writes to the QDMA event missed clear registers (QEMCR). Writing a 1 to any of the bits clears the corresponding missed event (bit) in QEMR; writing a 0 has no effect. This register is part of a set of registers that provide information on missed DMA and/or QDMA events, and instances when event queue thresholds are exceeded. If any of the bits in these registers is set, it results in the EDMA3CC generating an error interrupt.

## Figure 11-53. QEMCR Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|-----------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------|
| RESERVED                                                                                | En                                                                                      |
| R-0h                                                                                    | W-0h                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-40. QEMCR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                              |
| 7-0   | En       | W      | 0h      | QDMA event missed clear. All error bits must be cleared before additional error interrupts will be asserted by the EDMA3CC. 0h = No effect. 1h = Corresponding missed event bit in the QDMA event missed register (QEMR) is cleared (En= 0). |

## 11.4.1.15 CCERR Register (offset = 318h) [reset = 0h]

CCERR is shown in Figure 11-54 and described in Table 11-41.

The EDMA3CC error register (CCERR) indicates whether or not at any instant of time the number of events queued up in any of the event queues exceeds or equals the threshold/watermark value that is set in the queue watermark threshold register (QWMTHRA). Additionally, CCERR also indicates if when the number of outstanding TRs that have been programmed to return transfer completion code (TRs which have the TCINTEN or TCCHEN bit in OPT set) to the EDMA3CC has exceeded the maximum allowed value of 63. If any bit in CCERR is set (and all errors, including bits in other error registers (EMR/EMRH, QEMR) were previously cleared), the EDMA3CC generates an error interrupt. For details on EDMA3CC error interrupt generation, see Error Interrupts. Once the error bits are set in CCERR, they can only be cleared by writing to the corresponding bits in the EDMA3CC error clear register (CCERRCLR). This register is part of a set of registers that provide information on missed DMA and/or QDMA events, and instances when event queue thresholds are exceeded. If any of the bits in these registers is set, it results in the EDMA3CC generating an error interrupt.

## Figure 11-54. CCERR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | TCCERR   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          |          | RESERVED |          |          | QTHRXCD2 | QTHRXCD1 | QTHRXCD0 |
|          |          | R-0h     |          |          | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-41. CCERR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                   |
| 16    | TCCERR   | R      | 0h      | Transfer completion code error. TCCERR is cleared by writing a 1 to the corresponding bit in the EDMA3CC error clear register (CCERRCLR). 0h = Total number of allowed TCCs outstanding has not been reached. 1h = Total number of allowed TCCs has been reached. |
| 15-3  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                   |
| 2     | QTHRXCD2 | R      | 0h      | Queue threshold error for queue 2. QTHRXCD2 is cleared by writing a 1 to the corresponding bit in the EDMA3CC error clear register (CCERRCLR). 0h = Watermark/threshold has not been exceeded. 1h = Watermark/threshold has been exceeded.                        |
| 1     | QTHRXCD1 | R      | 0h      | Queue threshold error for queue 1 . QTHRXCD1 is cleared by writing a 1 to the corresponding bit in the EDMA3CC error clear register (CCERRCLR). 0h = Watermark/threshold has not been exceeded. 1h = Watermark/threshold has been exceeded.                       |
| 0     | QTHRXCD0 | R      | 0h      | Queue threshold error for queue 0. QTHRXCD0 is cleared by writing a 1 to the corresponding bit in the EDMA3CC error clear register (CCERRCLR). 0h = Watermark/threshold has not been exceeded. 1h = Watermark/threshold has been exceeded.                        |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.16 CCERRCLR Register (offset = 31Ch) [reset = 0h]

CCERRCLR is shown in Figure 11-55 and described in Table 11-42.

The EDMA3CC error clear register (CCERRCLR) is used to clear any error bits that are set in the EDMA3CC error register (CCERR). In addition, CCERRCLR also clears the values of some bit fields in the queue status registers (QSTATn) associated with a particular event queue. Writing a 1 to any of the bits clears the corresponding bit in CCERR; writing a 0 has no effect. This register is part of a set of registers that provide information on missed DMA and/or QDMA events, and instances when event queue thresholds are exceeded. If any of the bits in these registers is set, it results in the EDMA3CC generating an error interrupt.

Figure 11-55. CCERRCLR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | TCCERR   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | W-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          |          | RESERVED |          |          | QTHRXCD2 | QTHRXCD1 | QTHRXCD0 |
|          |          | R-0h     |          |          | W-0h     | W-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-42. CCERRCLR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                     |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED | R      | 0h      |                                                                                                                                                                                                 |
| 16    | TCCERR   | W      | 0h      | Transfer completion code error clear. 0h = No effect. 1h = Clears the TCCERR bit in the EDMA3CC error register (CCERR).                                                                         |
| 15-3  | RESERVED | R      | 0h      |                                                                                                                                                                                                 |
| 2     | QTHRXCD2 | W      | 0h      | Queue threshold error clear for queue 2. 0h = No effect. 1h = Clears the QTHRXCD2 bit in the EDMA3CC error register (CCERR) and the WM and THRXCD bits in the queue status register 2 (QSTAT2). |
| 1     | QTHRXCD1 | W      | 0h      | Queue threshold error clear for queue 1. 0h = No effect. 1h = Clears the QTHRXCD1 bit in the EDMA3CC error register (CCERR) and the WM and THRXCD bits in the queue status register 1 (QSTAT1). |
| 0     | QTHRXCD0 | W      | 0h      | Queue threshold error clear for queue 0. 0h = No effect. 1h = Clears the QTHRXCD0 bit in the EDMA3CC error register (CCERR) and the WM and THRXCD bits in the queue status register 0 (QSTAT0). |

## 11.4.1.17 EEVAL Register (offset = 320h) [reset = 0h]

EEVAL is shown in Figure 11-56 and described in Table 11-43.

The EDMA3CC error interrupt is asserted whenever an error bit is set in any of the error registers (EMR/EMRH, QEMR, and CCERR). For subsequent error bits that get set, the EDMA3CC error interrupt is reasserted only when transitioning from an all the error bits cleared to at least one error bit is set . Alternatively, a CPU write of 1 to the EVAL bit in the error evaluation register (EEVAL) results in reasserting the EDMA3CC error interrupt, if there are any outstanding error bits set due to subsequent error conditions. Writes of 0 have no effect. This register is part of a set of registers that provide information on missed DMA and/or QDMA events, and instances when event queue thresholds are exceeded. If any of the bits in these registers is set, it results in the EDMA3CC generating an error interrupt.

Figure 11-56. EEVAL Register

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
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | EVAL     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-43. EEVAL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                      |
| 1     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                      |
| 0     | EVAL     | W      | 0h      | Error interrupt evaluate. 0h = No effect. 1h = Write 1 to clear interrupts when all error registers have been cleared. EDMA3CC error interrupt will remain if any errors have not been cleared in any of the error registers (EMR/EMRH, CCERR, QEMR) |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.18 DRAE0 Register (offset = 340h) [reset = 0h]

DRAE0 is shown in Figure 11-57 and described in Table 11-44.

The DMA region access enable register for shadow region 0 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 0 view of the DMA channel registers. Additionally, the DRAE0 configuration determines completion of which DMA channels will result in assertion of the shadow region 0 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-57. DRAE0 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-44. DRAE0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 31 to 0 in region 0. 0h = Accesses via region 0 address space to bit 31 to 0 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 31 to 0. Enabled interrupt bits for bit n do not contribute to the generation of a transfer completion interrupt for shadow region 0. 1h = Accesses via region 0 address space to bit 31 to 0 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 31 to 0. Enabled interrupt bits for bit n contribute to the generation of a transfer completion interrupt for shadow region 0. |

## 11.4.1.19 DRAEH0 Register (offset = 344h) [reset = 0h]

DRAEH0 is shown in Figure 11-58 and described in Table 11-45.

The DMA region access enable register for shadow region 0 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 0 view of the DMA channel registers. Additionally, the DRAE0 configuration determines completion of which DMA channels will result in assertion of the shadow region 0 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-58. DRAEH0 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | En                                                                              |
|      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-45. DRAEH0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 63 to 32 in region 0. 0h = Accesses via region 0 address space to bit 63 to 32 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 do not contribute to the generation of a transfer completion interrupt for shadow region 0. 1h = Accesses via region 0 address space to bit 63 to 32 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 contribute to the generation of a transfer completion interrupt for shadow region 0. |

<!-- image -->

<!-- image -->

## 11.4.1.20 DRAE1 Register (offset = 348h) [reset = 0h]

DRAE1 is shown in Figure 11-59 and described in Table 11-46.

The DMA region access enable register for shadow region 1 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 1 view of the DMA channel registers. Additionally, the DRAE1 configuration determines completion of which DMA channels will result in assertion of the shadow region 1 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-59. DRAE1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-46. DRAE1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 31 to 0 in region 1. 0h = Accesses via region 1 address space to bit 31 to 0 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 31 to 0. Enabled interrupt bits for bit n do not contribute to the generation of a transfer completion interrupt for shadow region 1. 1h = Accesses via region 1 address space to bit 31 to 0 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 31 to 0. Enabled interrupt bits for bit n contribute to the generation of a transfer completion interrupt for shadow region 1. |

## 11.4.1.21 DRAEH1 Register (offset = 34Ch) [reset = 0h]

DRAEH1 is shown in Figure 11-60 and described in Table 11-47.

The DMA region access enable register for shadow region 1 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 1 view of the DMA channel registers. Additionally, the DRAE1 configuration determines completion of which DMA channels will result in assertion of the shadow region 1 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-60. DRAEH1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-47. DRAEH1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 63 to 32 in region 1. 0h = Accesses via region 1 address space to bit 63 to 32 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 do not contribute to the generation of a transfer completion interrupt for shadow region 1. 1h = Accesses via region 1 address space to bit 63 to 32 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 contribute to the generation of a transfer completion interrupt for shadow region 1. |

<!-- image -->

<!-- image -->

## 11.4.1.22 DRAE2 Register (offset = 350h) [reset = 0h]

DRAE2 is shown in Figure 11-61 and described in Table 11-48.

The DMA region access enable register for shadow region 2 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 2 view of the DMA channel registers. Additionally, the DRAE2 configuration determines completion of which DMA channels will result in assertion of the shadow region 2 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-61. DRAE2 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-48. DRAE2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 31 to 0 in region 2. 0h = Accesses via region 2 address space to bit 31 to 0 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 31 to 0. Enabled interrupt bits for bit n do not contribute to the generation of a transfer completion interrupt for shadow region 2. 1h = Accesses via region 2 address space to bit 31 to 0 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 31 to 0. Enabled interrupt bits for bit n contribute to the generation of a transfer completion interrupt for shadow region 2. |

## 11.4.1.23 DRAEH2 Register (offset = 354h) [reset = 0h]

DRAEH2 is shown in Figure 11-62 and described in Table 11-49.

The DMA region access enable register for shadow region 2 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 2 view of the DMA channel registers. Additionally, the DRAE2 configuration determines completion of which DMA channels will result in assertion of the shadow region 2 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-62. DRAEH2 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-49. DRAEH2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 63 to 32 in region 2. 0h = Accesses via region 2 address space to bit 63 to 32 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 do not contribute to the generation of a transfer completion interrupt for shadow region 2. 1h = Accesses via region 2 address space to bit 63 to 32 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 contribute to the generation of a transfer completion interrupt for shadow region 2. |

<!-- image -->

<!-- image -->

## 11.4.1.24 DRAE3 Register (offset = 358h) [reset = 0h]

DRAE3 is shown in Figure 11-63 and described in Table 11-50.

The DMA region access enable register for shadow region 3 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 3 view of the DMA channel registers. Additionally, the DRAE3 configuration determines completion of which DMA channels will result in assertion of the shadow region 3 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-63. DRAE3 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-50. DRAE3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 31 to 0 in region 3. 0h = Accesses via region 3 address space to bit 31 to 0 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 31 to 0. Enabled interrupt bits for bit n do not contribute to the generation of a transfer completion interrupt for shadow region 3. 1h = Accesses via region 3 address space to bit 31 to 0 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 31 to 0. Enabled interrupt bits for bit n contribute to the generation of a transfer completion interrupt for shadow region 3. |

## 11.4.1.25 DRAEH3 Register (offset = 35Ch) [reset = 0h]

DRAEH3 is shown in Figure 11-64 and described in Table 11-51.

The DMA region access enable register for shadow region 3 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 3 view of the DMA channel registers. Additionally, the DRAE3 configuration determines completion of which DMA channels will result in assertion of the shadow region 3 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-64. DRAEH3 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-51. DRAEH3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 63 to 32 in region 3. 0h = Accesses via region 3 address space to bit 63 to 32 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 do not contribute to the generation of a transfer completion interrupt for shadow region 3. 1h = Accesses via region 3 address space to bit 63 to 32 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 contribute to the generation of a transfer completion interrupt for shadow region 3. |

<!-- image -->

<!-- image -->

## 11.4.1.26 DRAE4 Register (offset = 360h) [reset = 0h]

DRAE4 is shown in Figure 11-65 and described in Table 11-52.

The DMA region access enable register for shadow region 4 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 4 view of the DMA channel registers. Additionally, the DRAE4 configuration determines completion of which DMA channels will result in assertion of the shadow region 4 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-65. DRAE4 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-52. DRAE4 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 31 to 0 in region 4. 0h = Accesses via region 4 address space to bit 31 to 0 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 31 to 0. Enabled interrupt bits for bit n do not contribute to the generation of a transfer completion interrupt for shadow region 4. 1h = Accesses via region 4 address space to bit 31 to 0 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 31 to 0. Enabled interrupt bits for bit n contribute to the generation of a transfer completion interrupt for shadow region 4. |

## 11.4.1.27 DRAEH4 Register (offset = 364h) [reset = 0h]

DRAEH4 is shown in Figure 11-66 and described in Table 11-53.

The DMA region access enable register for shadow region 4 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 4 view of the DMA channel registers. Additionally, the DRAE4 configuration determines completion of which DMA channels will result in assertion of the shadow region 4 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-66. DRAEH4 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-53. DRAEH4 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 63 to 32 in region 4. 0h = Accesses via region 4 address space to bit 63 to 32 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 do not contribute to the generation of a transfer completion interrupt for shadow region 4. 1h = Accesses via region 4 address space to bit 63 to 32 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 contribute to the generation of a transfer completion interrupt for shadow region 4. |

<!-- image -->

<!-- image -->

## 11.4.1.28 DRAE5 Register (offset = 368h) [reset = 0h]

DRAE5 is shown in Figure 11-67 and described in Table 11-54.

The DMA region access enable register for shadow region 5 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 5 view of the DMA channel registers. Additionally, the DRAE5 configuration determines completion of which DMA channels will result in assertion of the shadow region 5 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-67. DRAE5 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-54. DRAE5 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 31 to 0 in region 5. 0h = Accesses via region 5 address space to bit 31 to 0 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 31 to 0. Enabled interrupt bits for bit n do not contribute to the generation of a transfer completion interrupt for shadow region 5. 1h = Accesses via region 5 address space to bit 31 to 0 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 31 to 0. Enabled interrupt bits for bit n contribute to the generation of a transfer completion interrupt for shadow region 5. |

## 11.4.1.29 DRAEH5 Register (offset = 36Ch) [reset = 0h]

DRAEH5 is shown in Figure 11-68 and described in Table 11-55.

The DMA region access enable register for shadow region 5 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 5 view of the DMA channel registers. Additionally, the DRAE5 configuration determines completion of which DMA channels will result in assertion of the shadow region 5 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-68. DRAEH5 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-55. DRAEH5 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 63 to 32 in region 5. 0h = Accesses via region 5 address space to bit 63 to 32 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 do not contribute to the generation of a transfer completion interrupt for shadow region 5. 1h = Accesses via region 5 address space to bit 63 to 32 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 contribute to the generation of a transfer completion interrupt for shadow region 5. |

<!-- image -->

<!-- image -->

## 11.4.1.30 DRAE6 Register (offset = 370h) [reset = 0h]

DRAE6 is shown in Figure 11-69 and described in Table 11-56.

The DMA region access enable register for shadow region 6 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 6 view of the DMA channel registers. Additionally, the DRAE6 configuration determines completion of which DMA channels will result in assertion of the shadow region 6 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-69. DRAE6 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-56. DRAE6 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 31 to 0 in region 6. 0h = Accesses via region 6 address space to bit 31 to 0 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 31 to 0. Enabled interrupt bits for bit n do not contribute to the generation of a transfer completion interrupt for shadow region 6. 1h = Accesses via region 6 address space to bit 31 to 0 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 31 to 0. Enabled interrupt bits for bit n contribute to the generation of a transfer completion interrupt for shadow region 6. |

## 11.4.1.31 DRAEH6 Register (offset = 374h) [reset = 0h]

DRAEH6 is shown in Figure 11-70 and described in Table 11-57.

The DMA region access enable register for shadow region 6 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 6 view of the DMA channel registers. Additionally, the DRAE6 configuration determines completion of which DMA channels will result in assertion of the shadow region 6 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-70. DRAEH6 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-57. DRAEH6 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 63 to 32 in region 6. 0h = Accesses via region 6 address space to bit 63 to 32 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 do not contribute to the generation of a transfer completion interrupt for shadow region 6. 1h = Accesses via region 6 address space to bit 63 to 32 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 contribute to the generation of a transfer completion interrupt for shadow region 6. |

<!-- image -->

<!-- image -->

www.ti.com

## 11.4.1.32 DRAE7 Register (offset = 378h) [reset = 0h]

DRAE7 is shown in Figure 11-71 and described in Table 11-58.

The DMA region access enable register for shadow region 7 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 7 view of the DMA channel registers. Additionally, the DRAE7 configuration determines completion of which DMA channels will result in assertion of the shadow region 7 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-71. DRAE7 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-58. DRAE7 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 31 to 0 in region 7. 0h = Accesses via region 7 address space to bit 31 to 0 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 31 to 0. Enabled interrupt bits for bit n do not contribute to the generation of a transfer completion interrupt for shadow region 7. 1h = Accesses via region 7 address space to bit 31 to 0 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 31 to 0. Enabled interrupt bits for bit n contribute to the generation of a transfer completion interrupt for shadow region 7. |

## 11.4.1.33 DRAEH7 Register (offset = 37Ch) [reset = 0h]

DRAEH7 is shown in Figure 11-72 and described in Table 11-59.

The DMA region access enable register for shadow region 7 is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all DMA registers in the shadow region 7 view of the DMA channel registers. Additionally, the DRAE7 configuration determines completion of which DMA channels will result in assertion of the shadow region 7 DMA completion interrupt. The DRAE registers are part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-72. DRAEH7 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-59. DRAEH7 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | DMA region access enable for bit 63 to 32 in region 7. 0h = Accesses via region 7 address space to bit 63 to 32 in any DMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 do not contribute to the generation of a transfer completion interrupt for shadow region 7. 1h = Accesses via region 7 address space to bit 63 to 32 in any DMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit 63 to 32. Enabled interrupt bits for bit 31 to 0 contribute to the generation of a transfer completion interrupt for shadow region 7. |

<!-- image -->

<!-- image -->

## 11.4.1.34 QRAE\_0 to QRAE\_7 Register (offset = 380h to 39Ch) [reset = 0h]

QRAE\_0 to QRAE\_7 is shown in Figure 11-73 and described in Table 11-60.

The QDMA region access enable register for shadow region m (QRAEm) is programmed to allow or disallow read/write accesses on a bit-by-bit bases for all QDMA registers in the shadow region m view of the QDMA registers. This includes all 4-bit QDMA registers. The QRAE register is part of the group of the region access enable registers, which includes DRAEm and QRAEm. Where m is the number of shadow regions in the EDMA3CC memory map for a device. You can configure these registers to assign ownership of DMA/QDMA channels to a particular shadow region.

## Figure 11-73. QRAE\_0 to QRAE\_7 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6   | 5 4 3 2 1 0   |
|-----------------------------------------------------------------------------|---------------|
| RESERVED                                                                    | En            |
| R-0h                                                                        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-60. QRAE\_0 to QRAE\_7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                          |
| 7-0   | En       | R/W    | 0h      | QDMA region access enable for bit n/QDMA channel n in region m. 0h = Accesses via region m address space to bit n in any QDMA channel register are not allowed. Reads return 0 on bit n and writes do not modify the state of bit n. 1h = Accesses via region m address space to bit n in any QDMA channel register are allowed. Reads return the value from bit n and writes modify the state of bit n. |

## 11.4.1.35 Q0E0 Register (offset = 400h) [reset = 0h]

Q0E0 is shown in Figure 11-74 and described in Table 11-61.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E0 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-74. Q0E0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-61. Q0E0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 0 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 0 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.36 Q0E1 Register (offset = 404h) [reset = 0h]

Q0E1 is shown in Figure 11-75 and described in Table 11-62.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E1 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-75. Q0E1 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-62. Q0E1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 1 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 1 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.37 Q0E2 Register (offset = 408h) [reset = 0h]

Q0E2 is shown in Figure 11-76 and described in Table 11-63.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E2 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-76. Q0E2 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-63. Q0E2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 2 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 2 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.38 Q0E3 Register (offset = 40Ch) [reset = 0h]

Q0E3 is shown in Figure 11-77 and described in Table 11-64.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E3 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-77. Q0E3 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-64. Q0E3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 3 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 3 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.39 Q0E4 Register (offset = 410h) [reset = 0h]

Q0E4 is shown in Figure 11-78 and described in Table 11-65.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E4 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-78. Q0E4 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-65. Q0E4 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 4 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 4 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.40 Q0E5 Register (offset = 414h) [reset = 0h]

Q0E5 is shown in Figure 11-79 and described in Table 11-66.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E5 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-79. Q0E5 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-66. Q0E5 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 5 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 5 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.41 Q0E6 Register (offset = 418h) [reset = 0h]

Q0E6 is shown in Figure 11-80 and described in Table 11-67.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E6 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-80. Q0E6 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-67. Q0E6 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 6 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 6 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.42 Q0E7 Register (offset = 41Ch) [reset = 0h]

Q0E7 is shown in Figure 11-81 and described in Table 11-68.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E7 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-81. Q0E7 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-68. Q0E7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 7 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 7 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.43 Q0E8 Register (offset = 420h) [reset = 0h]

Q0E8 is shown in Figure 11-82 and described in Table 11-69.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E8 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-82. Q0E8 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-69. Q0E8 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 8 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 8 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.44 Q0E9 Register (offset = 424h) [reset = 0h]

Q0E9 is shown in Figure 11-83 and described in Table 11-70.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E9 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-83. Q0E9 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-70. Q0E9 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 9 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 9 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.45 Q0E10 Register (offset = 428h) [reset = 0h]

Q0E10 is shown in Figure 11-84 and described in Table 11-71.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E10 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-84. Q0E10 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-71. Q0E10 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 10 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 10 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.46 Q0E11 Register (offset = 42Ch) [reset = 0h]

Q0E11 is shown in Figure 11-85 and described in Table 11-72.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E11 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-85. Q0E11 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-72. Q0E11 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 11 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 11 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.47 Q0E12 Register (offset = 430h) [reset = 0h]

Q0E12 is shown in Figure 11-86 and described in Table 11-73.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E12 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-86. Q0E12 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-73. Q0E12 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 12 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 12 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.48 Q0E13 Register (offset = 434h) [reset = 0h]

Q0E13 is shown in Figure 11-87 and described in Table 11-74.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E13 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-87. Q0E13 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-74. Q0E13 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 13 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 13 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.49 Q0E14 Register (offset = 438h) [reset = 0h]

Q0E14 is shown in Figure 11-88 and described in Table 11-75.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E14 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-88. Q0E14 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-75. Q0E14 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 14 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 14 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.50 Q0E15 Register (offset = 43Ch) [reset = 0h]

Q0E15 is shown in Figure 11-89 and described in Table 11-76.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q0E15 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-89. Q0E15 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-76. Q0E15 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 15 in queue 0. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 15 in queue 0. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.51 Q1E0 Register (offset = 440h) [reset = 0h]

Q1E0 is shown in Figure 11-90 and described in Table 11-77.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E0 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-90. Q1E0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-77. Q1E0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 0 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 0 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.52 Q1E1 Register (offset = 444h) [reset = 0h]

Q1E1 is shown in Figure 11-91 and described in Table 11-78.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E1 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-91. Q1E1 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-78. Q1E1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 1 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 1 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.53 Q1E2 Register (offset = 448h) [reset = 0h]

Q1E2 is shown in Figure 11-92 and described in Table 11-79.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E2 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-92. Q1E2 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-79. Q1E2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 2 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 2 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.54 Q1E3 Register (offset = 44Ch) [reset = 0h]

Q1E3 is shown in Figure 11-93 and described in Table 11-80.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E3 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-93. Q1E3 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-80. Q1E3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 3 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 3 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.55 Q1E4 Register (offset = 450h) [reset = 0h]

Q1E4 is shown in Figure 11-94 and described in Table 11-81.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E4 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-94. Q1E4 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-81. Q1E4 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 4 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 4 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.56 Q1E5 Register (offset = 454h) [reset = 0h]

Q1E5 is shown in Figure 11-95 and described in Table 11-82.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E5 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-95. Q1E5 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-82. Q1E5 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 5 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 5 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.57 Q1E6 Register (offset = 458h) [reset = 0h]

Q1E6 is shown in Figure 11-96 and described in Table 11-83.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E6 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-96. Q1E6 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-83. Q1E6 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 6 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 6 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.58 Q1E7 Register (offset = 45Ch) [reset = 0h]

Q1E7 is shown in Figure 11-97 and described in Table 11-84.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E7 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-97. Q1E7 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-84. Q1E7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 7 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 7 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.59 Q1E8 Register (offset = 460h) [reset = 0h]

Q1E8 is shown in Figure 11-98 and described in Table 11-85.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E8 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-98. Q1E8 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-85. Q1E8 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 8 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 8 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.60 Q1E9 Register (offset = 464h) [reset = 0h]

Q1E9 is shown in Figure 11-99 and described in Table 11-86.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E9 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-99. Q1E9 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-86. Q1E9 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 9 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 9 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.61 Q1E10 Register (offset = 468h) [reset = 0h]

Q1E10 is shown in Figure 11-100 and described in Table 11-87.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E10 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-100. Q1E10 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-87. Q1E10 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 10 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 10 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.62 Q1E11 Register (offset = 46Ch) [reset = 0h]

Q1E11 is shown in Figure 11-101 and described in Table 11-88.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E11 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-101. Q1E11 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-88. Q1E11 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 11 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 11 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.63 Q1E12 Register (offset = 470h) [reset = 0h]

Q1E12 is shown in Figure 11-102 and described in Table 11-89.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E12 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-102. Q1E12 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-89. Q1E12 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 12 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 12 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.64 Q1E13 Register (offset = 474h) [reset = 0h]

Q1E13 is shown in Figure 11-103 and described in Table 11-90.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E13 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-103. Q1E13 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-90. Q1E13 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 13 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 13 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.65 Q1E14 Register (offset = 478h) [reset = 0h]

Q1E14 is shown in Figure 11-104 and described in Table 11-91.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E14 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-104. Q1E14 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-91. Q1E14 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 14 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 14 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.66 Q1E15 Register (offset = 47Ch) [reset = 0h]

Q1E15 is shown in Figure 11-105 and described in Table 11-92.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q1E15 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-105. Q1E15 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-92. Q1E15 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 15 in queue 1. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 15 in queue 1. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.67 Q2E0 Register (offset = 480h) [reset = 0h]

Q2E0 is shown in Figure 11-106 and described in Table 11-93.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E0 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-106. Q2E0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-93. Q2E0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 0 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 0 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.68 Q2E1 Register (offset = 484h) [reset = 0h]

Q2E1 is shown in Figure 11-107 and described in Table 11-94.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E1 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-107. Q2E1 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-94. Q2E1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 1 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 1 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.69 Q2E2 Register (offset = 488h) [reset = 0h]

Q2E2 is shown in Figure 11-108 and described in Table 11-95.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E2 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-108. Q2E2 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-95. Q2E2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 2 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 2 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.70 Q2E3 Register (offset = 48Ch) [reset = 0h]

Q2E3 is shown in Figure 11-109 and described in Table 11-96.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E3 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-109. Q2E3 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-96. Q2E3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 3 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 3 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.71 Q2E4 Register (offset = 490h) [reset = 0h]

Q2E4 is shown in Figure 11-110 and described in Table 11-97.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E4 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-110. Q2E4 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-97. Q2E4 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 4 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 4 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.72 Q2E5 Register (offset = 494h) [reset = 0h]

Q2E5 is shown in Figure 11-111 and described in Table 11-98.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E5 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-111. Q2E5 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-98. Q2E5 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 5 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 5 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.73 Q2E6 Register (offset = 498h) [reset = 0h]

Q2E6 is shown in Figure 11-112 and described in Table 11-99.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E6 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-112. Q2E6 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-99. Q2E6 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 6 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 6 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.74 Q2E7 Register (offset = 49Ch) [reset = 0h]

Q2E7 is shown in Figure 11-113 and described in Table 11-100.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E7 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-113. Q2E7 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-100. Q2E7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 7 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 7 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.75 Q2E8 Register (offset = 4A0h) [reset = 0h]

Q2E8 is shown in Figure 11-114 and described in Table 11-101.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E8 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-114. Q2E8 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-101. Q2E8 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 8 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 8 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.76 Q2E9 Register (offset = 4A4h) [reset = 0h]

Q2E9 is shown in Figure 11-115 and described in Table 11-102.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E9 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-115. Q2E9 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-102. Q2E9 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                         |
| 7-6   | ETYPE    | R      | 0h      | Event entry 9 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 9 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.77 Q2E10 Register (offset = 4A8h) [reset = 0h]

Q2E10 is shown in Figure 11-116 and described in Table 11-103.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E10 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-116. Q2E10 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-103. Q2E10 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 10 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 10 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.78 Q2E11 Register (offset = 4ACh) [reset = 0h]

Q2E11 is shown in Figure 11-117 and described in Table 11-104.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E11 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-117. Q2E11 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-104. Q2E11 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 11 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 11 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.79 Q2E12 Register (offset = 4B0h) [reset = 0h]

Q2E12 is shown in Figure 11-118 and described in Table 11-105.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E12 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-118. Q2E12 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-105. Q2E12 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 12 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 12 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.80 Q2E13 Register (offset = 4B4h) [reset = 0h]

Q2E13 is shown in Figure 11-119 and described in Table 11-106.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E13 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-119. Q2E13 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-106. Q2E13 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 13 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 13 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.81 Q2E14 Register (offset = 4B8h) [reset = 0h]

Q2E14 is shown in Figure 11-120 and described in Table 11-107.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E14 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-120. Q2E14 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-107. Q2E14 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 14 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 14 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.82 Q2E15 Register (offset = 4BCh) [reset = 0h]

Q2E15 is shown in Figure 11-121 and described in Table 11-108.

The event queue entry registers (QxEy) exist for all 16 queue entries (the maximum allowed queue entries) for all event queues in the EDMA3CC. The event queue entry registers range from Q0E0 to Q0E15, Q1E0 to Q1E15, and Q2E0 to Q2E15. Each register details the event number (ENUM) and the event type (ETYPE). For example, if the value in Q1E4 is read as 000 004Fh, this means the 4th entry in queue 1 is a manually-triggered event on DMA channel 15. The Q2E15 register provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

## Figure 11-121. Q2E15 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ETYPE    | ETYPE    |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-108. Q2E15 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                          |
| 7-6   | ETYPE    | R      | 0h      | Event entry 15 in queue 2. Specifies the specific event type for the given entry in the event queue. 0h = Event triggered via ER. 1h = Manual triggered via ESR. 2h = Chain triggered via CER 3h = Autotriggered via QER |
| 5-0   | ENUM     | R      | 0h      | Event entry 15 in queue 2. Event number: QDMA channel number (0 to 3). DMA channel/event number (0 to 63).                                                                                                               |

## 11.4.1.83 QSTAT\_0 to QSTAT\_2 Register (offset = 600h to 608h) [reset = Fh]

QSTAT\_0 to QSTAT\_2 is shown in Figure 11-122 and described in Table 11-109.

The queue status register (QSTAT) provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

Figure 11-122. QSTAT\_0 to QSTAT\_2 Register

| 31   | 30       | 29   | 28       | 27      | 26      | 25      | 24      |
|------|----------|------|----------|---------|---------|---------|---------|
|      |          |      | RESERVED |         |         |         | THRXCD  |
|      |          |      | R-0h     |         |         |         | R-0h    |
| 23   | 22       | 21   | 20       | 19      | 18      | 17      | 16      |
|      | RESERVED |      |          |         | WM      |         |         |
|      | R-0h     |      |          |         | R-0h    |         |         |
| 15   | 14       | 13   | 12       | 11      | 10      | 9       | 8       |
|      | RESERVED |      |          |         | NUMVAL  |         |         |
|      | R-0h     |      |          |         | R-0h    |         |         |
| 7    | 6        | 5    | 4        | 3       | 2       | 1       | 0       |
|      | RESERVED |      |          | STRTPTR | STRTPTR | STRTPTR | STRTPTR |
|      | R-0h     |      |          | R-Fh    | R-Fh    | R-Fh    | R-Fh    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-109. QSTAT\_0 to QSTAT\_2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-25 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 24    | THRXCD   | R      | 0h      | Threshold exceeded. THRXCD is cleared by writing a 1 to the corresponding QTHRXCDn bit in the EDMA3CC error clear register (CCERRCLR). 0h = Threshold specified by the Qn bit in the queue watermark threshold A register (QWMTHRA) has not been exceeded. 1h = Threshold specified by the Qn bit in the queue watermark threshold A register (QWMTHRA) has been exceeded.                                                                                                                             |
| 23-21 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 20-16 | WM       | R      | 0h      | Watermark for maximum queue usage. Watermark tracks the most entries that have been in queue n since reset or since the last time that the watermark (WM) bit was cleared. WM is cleared by writing a 1 to the corresponding QTHRXCDn bit in the EDMA3CC error clear register (CCERRCLR). 0h = Legal values are 0 (empty) to 10h (full). 1h = Reserved, from 11h to 1Fh. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 15-13 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 12-8  | NUMVAL   | R      | 0h      | Number of valid entries in queue n. The total number of entries residing in the queue manager FIFO at a given instant. Always enabled. 0h = Legal values are 0 (empty) to 10h (full). 1h = Reserved, from 11h to 1Fh. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior.                                                                                                                                                    |
| 7-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 3-0   | STRTPTR  | R      | Fh      | Start pointer. The offset to the head entry of queue n, in units of entries. Always enabled. Legal values are 0 (0th entry) to Fh (15th entry).                                                                                                                                                                                                                                                                                                                                                        |

<!-- image -->

<!-- image -->

## 11.4.1.84 QWMTHRA Register (offset = 620h) [reset = A0A0Ah]

QWMTHRA is shown in Figure 11-123 and described in Table 11-110.

The queue watermark threshold A register (QWMTHRA) provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

Figure 11-123. QWMTHRA Register

| 31       | 30       | 29       | 28   | 27       | 26       | 25       | 24       | 23   | 22       | 21       | 20   | 19     | 18     | 17     | 16     |
|----------|----------|----------|------|----------|----------|----------|----------|------|----------|----------|------|--------|--------|--------|--------|
|          |          |          |      | RESERVED | RESERVED | RESERVED | RESERVED |      |          |          |      | Q2     | Q2     | Q2     | Q2     |
|          |          |          |      | R-0h     | R-0h     | R-0h     | R-0h     |      |          |          |      | R/W-Ah | R/W-Ah | R/W-Ah | R/W-Ah |
| 15       | 14       | 13       | 12   | 11       | 10       | 9        | 8        | 7    | 6        | 5        | 4    | 3      | 2      | 1      | 0      |
| RESERVED | RESERVED | RESERVED |      | Q1       | Q1       | Q1       | Q1       |      | RESERVED | RESERVED |      | Q0     | Q0     | Q0     | Q0     |
| R-0h     | R-0h     | R-0h     |      | R/W-Ah   | R/W-Ah   | R/W-Ah   | R/W-Ah   |      | R-0h     |          |      | R/W-Ah | R/W-Ah | R/W-Ah | R/W-Ah |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-110. QWMTHRA Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 20-16 | Q2       | R/W    | Ah      | Queue threshold for queue 2 value. The QTHRXCD2 bit in the EDMA3CC error register (CCERR) and the THRXCD bit in the queue status register 2 (QSTAT2) are set when the number of events in queue 2 at an instant in time (visible via the NUMVAL bit in QSTAT2) equals or exceeds the value specified by Q2. 0h = From 0h to 10h, The default is 16 (maximum allowed). 11h = Disables the threshold errors. 12h = From 12h to 1Fh, Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 15-13 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 12-8  | Q1       | R/W    | Ah      | Queue threshold for queue 1 value. The QTHRXCD1 bit in the EDMA3CC error register (CCERR) and the THRXCD bit in the queue status register 1 (QSTAT1) are set when the number of events in queue 1 at an instant in time (visible via the NUMVAL bit in QSTAT1) equals or exceeds the value specified by Q1. 0h = From 0h to 10h, The default is 16 (maximum allowed). 11h = Disables the threshold errors. 12h = From 12h to 1Fh, Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |
| 7-5   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 4-0   | Q0       | R/W    | Ah      | Queue threshold for queue 0 value. The QTHRXCD0 bit in the EDMA3CC error register (CCERR) and the THRXCD bit in the queue status register 0 (QSTAT0) are set when the number of events in queue 0 at an instant in time (visible via the NUMVAL bit in QSTAT0) equals or exceeds the value specified by Q0. 0h = From 0h to 10h, The default is 16 (maximum allowed). 11h = Disables the threshold errors. 12h = From 12h to 1Fh, Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior. |

## 11.4.1.85 CCSTAT Register (offset = 640h) [reset = 0h]

CCSTAT is shown in Figure 11-124 and described in Table 11-111.

The EDMA3CC status register (CCSTAT) has a number of status bits that reflect which parts of the EDMA3CC logic is active at any given instant of time. CCSTAT provides visibility into the event queues and a TR life cycle. These are useful for system debug as they provide in-depth visibility for the events queued up in the event queue and also provide information on what parts of the EDMA3CC logic are active once the event has been received by the EDMA3CC.

Figure 11-124. CCSTAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|          |          | RESERVED |          |          | QUEACTV2 | QUEACTV1 | QUEACTV0 |
|          |          | R-0h     |          |          | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | COMPACTV | COMPACTV | COMPACTV | COMPACTV | COMPACTV | COMPACTV |
| R-0h     | R-0h     |          |          |          |          |          |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED |          | ACTV     | RESERVED | TRACTV   | QEVTACTV | EVTACTV  |
| R-0h     | R-0h     |          | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-111. CCSTAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 18    | QUEACTV2 | R      | 0h      | Queue 2 active. 0h = No events are queued in queue 2. 1h = At least one TR is queued in queue 2.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 17    | QUEACTV1 | R      | 0h      | Queue 1 active. 0h = No events are queued in queue 1. 1h = At least one TR is queued in queue 1.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 16    | QUEACTV0 | R      | 0h      | Queue 0 active. 0h = No events are queued in queue 0. 1h = At least one TR is queued in queue 0.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 15-14 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 13-8  | COMPACTV | R      | 0h      | Completion request active. The COMPACTV field reflects the count for the number of completion requests submitted to the transfer controllers. This count increments every time a TR is submitted and is programmed to report completion (the TCINTEN or TCCCHEN bits in OPT in the parameter entry associated with the TR are set). The counter decrements for every valid TCC received back from the transfer controllers. If at any time the count reaches a value of 63, the EDMA3CC will not service any new TRs until the count is less then 63 (or return a transfer completion code from a transfer controller, which would decrement the count). 0h = No completion requests outstanding. 1h = Total of 1 completion request to 63 completion requests are outstanding, from 1h to 3Fh. |
| 7-5   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |

<!-- image -->

<!-- image -->

Table 11-111. CCSTAT Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                      |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     4 | ACTV     | R      | 0h      | Channel controller active. Channel controller active is a logical-OR of each of the *ACTV bits. The ACTV bit remains high through the life of a TR. 0h = Channel is idle.. 1h = Channel is busy. |
|     3 | RESERVED | R      | 0h      |                                                                                                                                                                                                  |
|     2 | TRACTV   | R      | 0h      | Transfer request active. 0h = Transfer request processing/submission logic is inactive. 1h = Transfer request processing/submission logic is active.                                             |
|     1 | QEVTACTV | R      | 0h      | QDMA event active. 0h = No enabled QDMA events are active within the EDMA3CC. 1h = At least one enabled QDMA event (QER) is active within the EDMA3CC.                                           |
|     0 | EVTACTV  | R      | 0h      | DMA event active. 0h = No enabled DMA events are active within the EDMA3CC. 1h = At least one enabled DMA event (ER and EER, ESR, CER) is active within the EDMA3CC.                             |

## 11.4.1.86 MPFAR Register (offset = 800h) [reset = 0h]

MPFAR is shown in Figure 11-125 and described in Table 11-112.

A CPU write of 1 to the MPFCLR bit in the memory protection fault command register (MPFCR) causes any error conditions stored in MPFAR to be cleared.

Figure 11-125. MPFAR Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | FADDR                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-112. MPFAR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                        |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | FADDR   | R      | 0h      | Fault address. This 32 bit read-only status register contains the fault address when a memory protection violation is detected. This register can only be cleared via the memory protection fault command register (MPFCR). Value 0 to FFFF FFFFh. |

<!-- image -->

<!-- image -->

## 11.4.1.87 MPFSR Register (offset = 804h) [reset = 0h]

MPFSR is shown in Figure 11-126 and described in Table 11-113.

A CPU write of 1 to the MPFCLR bit in the memory protection fault command register (MPFCR) causes any error conditions stored in MPFSR to be cleared.

Figure 11-126. MPFSR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          | FID      | FID      | FID      |          | RESERVED | RESERVED | SRE      | SWE      | SXE      | URE      | UWE      | UXE      |
| R-0h     | R-0h     | R-0h     |          | R-0h     | R-0h     | R-0h     |          | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-113. MPFSR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                     |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-13 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                 |
| 12-9  | FID      | R      | 0h      | Faulted identification. FID contains valid information if any of the MP error bits (UXE, UWE, URE, SXE, SWE, SRE) are nonzero (that is, if an error has been detected.) The FID field contains the privilege ID for the specific request/requestor that resulted in an MP error. Value 0 to Fh. |
| 8-6   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                 |
| 5     | SRE      | R      | 0h      | Supervisor read error. 0h = No error detected. 1h = Supervisor level task attempted to read from a MP page without SR permissions.                                                                                                                                                              |
| 4     | SWE      | R      | 0h      | Supervisor write error. 0h = No error detected. 1h = Supervisor level task attempted to write to a MP page without SW permissions.                                                                                                                                                              |
| 3     | SXE      | R      | 0h      | Supervisor execute error. 0h = No error detected. 1h = Supervisor level task attempted to execute from a MP page without SX permissions.                                                                                                                                                        |
| 2     | URE      | R      | 0h      | User read error. 0h = No error detected. 1h = User level task attempted to read from a MP page without UR permissions.                                                                                                                                                                          |
| 1     | UWE      | R      | 0h      | User write error. 0h = No error detected. 1h = User level task attempted to write to a MP page without UW permissions.                                                                                                                                                                          |
| 0     | UXE      | R      | 0h      | User execute error. 0h = No error detected. 1h = User level task attempted to execute from a MP page without UX permissions.                                                                                                                                                                    |

## 11.4.1.88 MPFCR Register (offset = 808h) [reset = 0h]

MPFCR is shown in Figure 11-127 and described in Table 11-114.

## Figure 11-127. MPFCR Register

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
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | MPFCLR   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-114. MPFCR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                  |
| 0     | MPFCLR   | W      | 0h      | Fault clear register. 0h = CPU write of 0 has no effect. 1h = CPU write of 1 to the MPFCLR bit causes any error conditions stored in the memory protection fault address register (MPFAR) and the memory protection fault status register (MPFSR) to be cleared. |

<!-- image -->

<!-- image -->

## 11.4.1.89 MPPAG Register (offset = 80Ch) [reset = 676h]

MPPAG is shown in Figure 11-128 and described in Table 11-115.

## Figure 11-128. MPPAG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|          |          |          |          |          |          | EXT      | RESERVED |
| R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | SR       | SW       | SX       | UR       | UW       | UX       |
| R-1h     | R-1h     | R/W-1h   | R/W-1h   | R/W-0h   | R/W-1h   | R/W-1h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-115. MPPAG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                              |
| 15-10 | AIDm     | R/W    | 1h      | Allowed ID 'N' 0h = Requests with Privilege ID == N are not allowed to region M, regardless of permission settings (UW, UR, SW, SR). 1h = Requests with Privilege ID == N are permitted, if access type is allowed as defined by permission settings (UW, UR, SW, SR).       |
| 9     | EXT      | R/W    | 1h      | External Allowed ID. 0h = Requests with Privilege ID >= 6 are not allowed to region M, regardless of permission settings (UW, UR, SW, SR). 1h = Requests with Privilege ID >= 6 are permitted, if access type is allowed as defined by permission settings (UW, UR, SW, SR). |
| 8     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                              |
| 7-6   | RESERVED | R      | 1h      |                                                                                                                                                                                                                                                                              |
| 5     | SR       | R/W    | 1h      | Supervisor read permission. 0h = Supervisor read accesses are not allowed from region M. 1h = Supervisor write accesses are allowed from region M addresses.                                                                                                                 |
| 4     | SW       | R/W    | 1h      | Supervisor write permission. 0h = Supervisor write accesses are not allowed to region M. 1h = Supervisor write accesses are allowed to region N addresses.                                                                                                                   |
| 3     | SX       | R/W    | 0h      | Supervisor execute permission. 0h = Supervisor execute accesses are not allowed from region M. 1h = Supervisor execute accesses are allowed from region M addresses.                                                                                                         |
| 2     | UR       | R/W    | 1h      | User read permission. 0h = User read accesses are not allowed from region M. 1h = User read accesses are allowed from region N addresses.                                                                                                                                    |
| 1     | UW       | R/W    | 1h      | User write permission. 0h = User write accesses are not allowed to region M. 1h = User write accesses are allowed to region M addresses.                                                                                                                                     |
| 0     | UX       | R/W    | 0h      | User execute permission. 0h = User execute accesses are not allowed from region M. 1h = User execute accesses are allowed from region M addresses.                                                                                                                           |

## 11.4.1.90 MPPA\_0 to MPPA\_7 Register (offset = 810h to 82Ch) [reset = 676h]

MPPA\_0 to MPPA\_7 is shown in Figure 11-129 and described in Table 11-116.

Figure 11-129. MPPA\_0 to MPPA\_7 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|          |          |          |          |          |          | EXT      | RESERVED |
| R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | SR       | SW       | SX       | UR       | UW       | UX       |
| R-1h     | R-1h     | R/W-1h   | R/W-1h   | R/W-0h   | R/W-1h   | R/W-1h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-116. MPPA\_0 to MPPA\_7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                              |
| 15-10 | AIDm     | R/W    | 1h      | Allowed ID 'N' 0h = Requests with Privilege ID == N are not allowed to region M, regardless of permission settings (UW, UR, SW, SR). 1h = Requests with Privilege ID == N are permitted, if access type is allowed as defined by permission settings (UW, UR, SW, SR).       |
| 9     | EXT      | R/W    | 1h      | External Allowed ID. 0h = Requests with Privilege ID >= 6 are not allowed to region M, regardless of permission settings (UW, UR, SW, SR). 1h = Requests with Privilege ID >= 6 are permitted, if access type is allowed as defined by permission settings (UW, UR, SW, SR). |
| 8     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                              |
| 7-6   | RESERVED | R      | 1h      |                                                                                                                                                                                                                                                                              |
| 5     | SR       | R/W    | 1h      | Supervisor read permission. 0h = Supervisor read accesses are not allowed from region M. 1h = Supervisor write accesses are allowed from region M addresses.                                                                                                                 |
| 4     | SW       | R/W    | 1h      | Supervisor write permission. 0h = Supervisor write accesses are not allowed to region M. 1h = Supervisor write accesses are allowed to region N addresses.                                                                                                                   |
| 3     | SX       | R/W    | 0h      | Supervisor execute permission. 0h = Supervisor execute accesses are not allowed from region M. 1h = Supervisor execute accesses are allowed from region M addresses.                                                                                                         |
| 2     | UR       | R/W    | 1h      | User read permission. 0h = User read accesses are not allowed from region M. 1h = User read accesses are allowed from region N addresses.                                                                                                                                    |
| 1     | UW       | R/W    | 1h      | User write permission. 0h = User write accesses are not allowed to region M. 1h = User write accesses are allowed to region M addresses.                                                                                                                                     |
| 0     | UX       | R/W    | 0h      | User execute permission. 0h = User execute accesses are not allowed from region M. 1h = User execute accesses are allowed from region M addresses.                                                                                                                           |

<!-- image -->

<!-- image -->

## 11.4.1.91 ER Register (offset = 1000h) [reset = 0h]

ER is shown in Figure 11-130 and described in Table 11-117.

All external events are captured in the event register (ER/ERH). The events are latched even when the events are not enabled. If the event bit corresponding to the latched event is enabled (EER.En/EERH.En = 1), then the event is evaluated by the EDMA3CC logic for an associated transfer request submission to the transfer controllers. The event register bits are automatically cleared (ER.En/ERH.En= 0) once the corresponding events are prioritized and serviced. If ER.En/ERH.En are already set and another event is received on the same channel/event, then the corresponding event is latched in the event miss register (EMR.En/EMRH.En), provided that the event was enabled (EER.En/EERH.En = 1). Event n can be cleared by the CPU writing a 1 to corresponding event bit in the event clear register (ECR/ECRH). The setting of an event is a higher priority relative to clear operations (via hardware or software). If set and clear conditions occur concurrently, the set condition wins. If the event was previously set, then EMR/EMRH would be set because an event is lost. If the event was previously clear, then the event remains set and is prioritized for submission to the event queues. The Debug List table provides the type of synchronization events and the EDMA3CC channels associated to each of these external events. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-130. ER Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R-0h                                                                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-117. ER Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R      | 0h      | Event 0 to 31. Events 0 to 31 are captured by the EDMA3CC and are latched into ER. The events are set (En = 1) even when events are disabled (En = 0 in the event enable register, EER). 0h = EDMA3CC event is not asserted. 1h = EDMA3CC event is asserted. Corresponding DMA event is prioritized versus other pending DMA/QDMA events for submission to the EDMA3TC. |

## 11.4.1.92 ERH Register (offset = 1004h) [reset = 0h]

ERH is shown in Figure 11-131 and described in Table 11-118.

All external events are captured in the event register (ER/ERH). The events are latched even when the events are not enabled. If the event bit corresponding to the latched event is enabled (EER.En/EERH.En = 1), then the event is evaluated by the EDMA3CC logic for an associated transfer request submission to the transfer controllers. The event register bits are automatically cleared (ER.En/ERH.En= 0) once the corresponding events are prioritized and serviced. If ER.En/ERH.En are already set and another event is received on the same channel/event, then the corresponding event is latched in the event miss register (EMR.En/EMRH.En), provided that the event was enabled (EER.En/EERH.En = 1). Event n can be cleared by the CPU writing a 1 to corresponding event bit in the event clear register (ECR/ECRH). The setting of an event is a higher priority relative to clear operations (via hardware or software). If set and clear conditions occur concurrently, the set condition wins. If the event was previously set, then EMR/EMRH would be set because an event is lost. If the event was previously clear, then the event remains set and is prioritized for submission to the event queues. The Debug List table provides the type of synchronization events and the EDMA3CC channels associated to each of these external events. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-131. ERH Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|
|      | R-0h                                                                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-118. ERH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                      |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R      | 0h      | Event 32 to 63. Events 32 to 63 are captured by the EDMA3CC and are latched into ERH. The events are set (En = 1) even when events are disabled (En = 0 in the event enable register high, EERH). 0h = EDMA3CC event is not asserted. 1h = EDMA3CC event is asserted. Corresponding DMA event is prioritized versus other pending DMA/QDMA events for submission to the EDMA3TC. |

<!-- image -->

<!-- image -->

## 11.4.1.93 ECR Register (offset = 1008h) [reset = 0h]

ECR is shown in Figure 11-132 and described in Table 11-119.

Once an event has been posted in the event registers (ER/ERH), the event is cleared in two ways. If the event is enabled in the event enable register (EER/EERH) and the EDMA3CC submits a transfer request for the event to the EDMA3TC, it clears the corresponding event bit in the event register. If the event is disabled in the event enable register (EER/EERH), the CPU can clear the event by way of the event clear registers (ECR/ECRH). Writing a 1 to any of the bits clears the corresponding event; writing a 0 has no effect. Once an event bit is set in the event register, it remains set until EDMA3CC submits a transfer request for that event or the CPU clears the event by setting the corresponding bit in ECR/ECRH. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-132. ECR Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | En                                                                                 |
|      | W-0h                                                                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-119. ECR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                  |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | W      | 0h      | Event clear for event 0 to 31. Any of the event bits in ECR is set to clear the event (En) in the event register (ER). A write of 0 has no effect. 0h = No effect. 1h = EDMA3CC event is cleared in the event register (ER). |

## 11.4.1.94 ECRH Register (offset = 100Ch) [reset = 0h]

ECRH is shown in Figure 11-133 and described in Table 11-120.

Once an event has been posted in the event registers (ER/ERH), the event is cleared in two ways. If the event is enabled in the event enable register (EER/EERH) and the EDMA3CC submits a transfer request for the event to the EDMA3TC, it clears the corresponding event bit in the event register. If the event is disabled in the event enable register (EER/EERH), the CPU can clear the event by way of the event clear registers (ECR/ECRH). Writing a 1 to any of the bits clears the corresponding event; writing a 0 has no effect. Once an event bit is set in the event register, it remains set until EDMA3CC submits a transfer request for that event or the CPU clears the event by setting the corresponding bit in ECR/ECRH. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-133. ECRH Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | En                                                                                 |
|      | W-0h                                                                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-120. ECRH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                 |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | W      | 0h      | Event clear for event 32 to 63. Any of the event bits in ECRH are set to clear the event (En) in the event register high (ERH). A write of 0 has no effect. 0h = No effect. 1h = EDMA3CC event is cleared in the event register high (ERH). |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.95 ESR Register (offset = 1010h) [reset = 0h]

ESR is shown in Figure 11-134 and described in Table 11-121.

The event set registers (ESR/ESRH) allow the CPU (EDMA3 programmers) to manually set events to initiate DMA transfer requests. CPU writes of 1 to any event set register (En) bits set the corresponding bits in the registers. The set event is evaluated by the EDMA3CC logic for an associated transfer request submission to the transfer controllers. Writing a 0 has no effect. The event set registers operate independent of the event registers (ER/ERH), and a write of 1 is always considered a valid event regardless of whether the event is enabled (the corresponding event bits are set or cleared in EER.En/EERH.En). Once the event is set in the event set registers, it cannot be cleared by CPU writes, in other words, the event clear registers (ECR/ECRH) have no effect on the state of ESR/ESRH. The bits will only be cleared once the transfer request corresponding to the event has been submitted to the transfer controller. The setting of an event is a higher priority relative to clear operations (via hardware). If set and clear conditions occur concurrently, the set condition wins. If the event was previously set, then EMR/EMRH would be set because an event is lost. If the event was previously clear, then the event remains set and is prioritized for submission to the event queues. Manually-triggered transfers via writes to ESR/ESRH allow the CPU to submit DMA requests in the system, these are relevant for memory-tomemory transfer scenarios. If the ESR.En/ESRH.En bit is already set and another CPU write of 1 is attempted to the same bit, then the corresponding event is latched in the event missed registers (EMR.En/EMRH.En = 1). This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-134. ESR Register

<!-- image -->

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|---------------------------------------------------------------------------------|
|      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-121. ESR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                  |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | Event set for event 0 to 31. 0h = No effect. 1h = Corresponding DMA event is prioritized versus other pending DMA/QDMA events for submission to the EDMA3TC. |

## 11.4.1.96 ESRH Register (offset = 1014h) [reset = 0h]

ESRH is shown in Figure 11-135 and described in Table 11-122.

The event set registers (ESR/ESRH) allow the CPU (EDMA3 programmers) to manually set events to initiate DMA transfer requests. CPU writes of 1 to any event set register (En) bits set the corresponding bits in the registers. The set event is evaluated by the EDMA3CC logic for an associated transfer request submission to the transfer controllers. Writing a 0 has no effect. The event set registers operate independent of the event registers (ER/ERH), and a write of 1 is always considered a valid event regardless of whether the event is enabled (the corresponding event bits are set or cleared in EER.En/EERH.En). Once the event is set in the event set registers, it cannot be cleared by CPU writes, in other words, the event clear registers (ECR/ECRH) have no effect on the state of ESR/ESRH. The bits will only be cleared once the transfer request corresponding to the event has been submitted to the transfer controller. The setting of an event is a higher priority relative to clear operations (via hardware). If set and clear conditions occur concurrently, the set condition wins. If the event was previously set, then EMR/EMRH would be set because an event is lost. If the event was previously clear, then the event remains set and is prioritized for submission to the event queues. Manually-triggered transfers via writes to ESR/ESRH allow the CPU to submit DMA requests in the system, these are relevant for memory-tomemory transfer scenarios. If the ESR.En/ESRH.En bit is already set and another CPU write of 1 is attempted to the same bit, then the corresponding event is latched in the event missed registers (EMR.En/EMRH.En = 1). This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

Figure 11-135. ESRH Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|---------------------------------------------------------------------------------|
|      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-122. ESRH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                   |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R/W    | 0h      | Event set for event 32 to 63. 0h = No effect. 1h = Corresponding DMA event is prioritized versus other pending DMA/QDMA events for submission to the EDMA3TC. |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.97 CER Register (offset = 1018h) [reset = 0h]

CER is shown in Figure 11-136 and described in Table 11-123.

When the OPTIONS parameter for a PaRAM entry is programmed to returned a chained completion code (ITCCHEN = 1 and/or TCCHEN = 1), then the value dictated by the TCC[5:0] (also programmed in OPT) forces the corresponding event bit to be set in the chained event registers (CER/CERH). The set chained event is evaluated by the EDMA3CC logic for an associated transfer request submission to the transfer controllers. This results in a chained-triggered transfer. The chained event registers do not have any enables. The generation of a chained event is essentially enabled by the PaRAM entry that has been configured for intermediate and/or final chaining on transfer completion. The En bit is set (regardless of the state of EER.En/EERH.En) when a chained completion code is returned from one of the transfer controllers or is generated by the EDMA3CC via the early completion path. The bits in the chained event register are cleared when the corresponding events are prioritized and serviced. If the En bit is already set and another chaining completion code is return for the same event, then the corresponding event is latched in the event missed registers (EMR.En/EMRH.En= 1). The setting of an event is a higher priority relative to clear operations (via hardware). If set and clear conditions occur concurrently, the set condition wins. If the event was previously set, then EMR/EMRH would be set because an event is lost. If the event was previously clear, then the event remains set and is prioritized for submission to the event queues. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-136. CER Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   |
|-------------------------------------------------------------------------------------|
| En                                                                                  |
| R-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-123. CER Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                      |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R      | 0h      | Chained event for event 0 to 31. 0h = No effect. 1h = Corresponding DMA event is prioritized versus other pending DMA/QDMA events for submission to the EDMA3TC. |

## 11.4.1.98 CERH Register (offset = 101Ch) [reset = 0h]

CERH is shown in Figure 11-137 and described in Table 11-124.

When the OPTIONS parameter for a PaRAM entry is programmed to returned a chained completion code (ITCCHEN = 1 and/or TCCHEN = 1), then the value dictated by the TCC[5:0] (also programmed in OPT) forces the corresponding event bit to be set in the chained event registers (CER/CERH). The set chained event is evaluated by the EDMA3CC logic for an associated transfer request submission to the transfer controllers. This results in a chained-triggered transfer. The chained event registers do not have any enables. The generation of a chained event is essentially enabled by the PaRAM entry that has been configured for intermediate and/or final chaining on transfer completion. The En bit is set (regardless of the state of EER.En/EERH.En) when a chained completion code is returned from one of the transfer controllers or is generated by the EDMA3CC via the early completion path. The bits in the chained event register are cleared when the corresponding events are prioritized and serviced. If the En bit is already set and another chaining completion code is return for the same event, then the corresponding event is latched in the event missed registers (EMR.En/EMRH.En= 1). The setting of an event is a higher priority relative to clear operations (via hardware). If set and clear conditions occur concurrently, the set condition wins. If the event was previously set, then EMR/EMRH would be set because an event is lost. If the event was previously clear, then the event remains set and is prioritized for submission to the event queues. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-137. CERH Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|-----------------------------------------------------------------------------------|
|      | En                                                                                |
|      | R-0h                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-124. CERH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                           |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R      | 0h      | Chained event set for event 32 to 63. 0h = No effect. 1h = Corresponding DMA event is prioritized versus other pending DMA/QDMA events for submission to the EDMA3TC. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 11.4.1.99 EER Register (offset = 1020h) [reset = 0h]

EER is shown in Figure 11-138 and described in Table 11-125.

The EDMA3CC provides the option of selectively enabling/disabling each event in the event registers (ER/ERH) by using the event enable registers (EER/EERH). If an event bit in EER/EERH is set (using the event enable set registers, EESR/EESRH), it will enable that corresponding event. Alternatively, if an event bit in EER/EERH is cleared (using the event enable clear registers, EECR/EECRH), it will disable the corresponding event. The event registers latch all events that are captured by EDMA3CC, even if the events are disabled (although EDMA3CC does not process it). Enabling an event with a pending event already set in the event registers enables the EDMA3CC to process the already set event like any other new event. The EER/EERH settings do not have any effect on chained events (CER.En/CERH.En= 1) and manually set events (ESR.En/ESRH.En= 1). This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-138. EER Register

| 31   | 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 En   |
|------|--------------------------------------------------------------------------------|
|      | R-0h                                                                           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-125. EER Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R      | 0h      | Event enable for events 0 to 31. 0h = Event is not enabled. An external event latched in the event register (ER) is not evaluated by the EDMA3CC. 1h = Event is enabled. An external event latched in the event register (ER) is evaluated by the EDMA3CC. |

## 11.4.1.100 EERH Register (offset = 1024h) [reset = 0h]

EERH is shown in Figure 11-139 and described in Table 11-126.

The EDMA3CC provides the option of selectively enabling/disabling each event in the event registers (ER/ERH) by using the event enable registers (EER/EERH). If an event bit in EER/EERH is set (using the event enable set registers, EESR/EESRH), it will enable that corresponding event. Alternatively, if an event bit in EER/EERH is cleared (using the event enable clear registers, EECR/EECRH), it will disable the corresponding event. The event registers latch all events that are captured by EDMA3CC, even if the events are disabled (although EDMA3CC does not process it). Enabling an event with a pending event already set in the event registers enables the EDMA3CC to process the already set event like any other new event. The EER/EERH settings do not have any effect on chained events (CER.En/CERH.En= 1) and manually set events (ESR.En/ESRH.En= 1). This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

Figure 11-139. EERH Register

| 31   | 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 En   |
|------|--------------------------------------------------------------------------------|
|      | R-0h                                                                           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-126. EERH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R      | 0h      | Event enable for events 32 to 63. 0h = Event is not enabled. An external event latched in the event register high (ERH) is not evaluated by the EDMA3CC. 1h = Event is enabled. An external event latched in the event register high (ERH) is evaluated by the EDMA3CC. |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.101 EECR Register (offset = 1028h) [reset = 0h]

EECR is shown in Figure 11-140 and described in Table 11-127.

The event enable registers (EER/EERH) cannot be modified by directly writing to them. The intent is to ease the software burden for the case where multiple tasks are attempting to simultaneously modify these registers. The event enable clear registers (EECR/EECRH) are used to disable events. Writes of 1 to the bits in EECR/EECRH clear the corresponding event bits in EER/EERH; writes of 0 have no effect. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-140. EECR Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-127. EECR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                              |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | W      | 0h      | Event enable clear for events 0 to 31. 0h = No effect. 1h = Event is disabled. Corresponding bit in the event enable register (EER) is cleared (En = 0). |

## 11.4.1.102 EECRH Register (offset = 102Ch) [reset = 0h]

EECRH is shown in Figure 11-141 and described in Table 11-128.

The event enable registers (EER/EERH) cannot be modified by directly writing to them. The intent is to ease the software burden for the case where multiple tasks are attempting to simultaneously modify these registers. The event enable clear registers (EECR/EECRH) are used to disable events. Writes of 1 to the bits in EECR/EECRH clear the corresponding event bits in EER/EERH; writes of 0 have no effect. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-141. EECRH Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-128. EECRH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                     |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | W      | 0h      | Event enable clear for events 32 to 63. 0h = No effect. 1h = Event is disabled. Corresponding bit in the event enable register high (EERH) is cleared (En = 0). |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.103 EESR Register (offset = 1030h) [reset = 0h]

EESR is shown in Figure 11-142 and described in Table 11-129.

The event enable registers (EER/EERH) cannot be modified by directly writing to them. The intent is to ease the software burden for the case where multiple tasks are attempting to simultaneously modify these registers. The event enable set registers (EESR/EESRH) are used to enable events. Writes of 1 to the bits in EESR/EESRH set the corresponding event bits in EER/EERH; writes of 0 have no effect. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-142. EESR Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-129. EESR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                       |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | W      | 0h      | Event enable set for events 0 to 31. 0h = No effect. 1h = Event is enabled. Corresponding bit in the event enable register (EER) is set (En = 1). |

## 11.4.1.104 EESRH Register (offset = 1034h) [reset = 0h]

EESRH is shown in Figure 11-143 and described in Table 11-130.

The event enable registers (EER/EERH) cannot be modified by directly writing to them. The intent is to ease the software burden for the case where multiple tasks are attempting to simultaneously modify these registers. The event enable set registers (EESR/EESRH) are used to enable events. Writes of 1 to the bits in EESR/EESRH set the corresponding event bits in EER/EERH; writes of 0 have no effect. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-143. EESRH Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 En   |
|------|------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-130. EESRH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                             |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | W      | 0h      | Event enable set for events 32 to 63. 0h = No effect. 1h = Event is enabled. Corresponding bit in the event enable register high (EERH) is set (En= 1). |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.105 SER Register (offset = 1038h) [reset = 0h]

SER is shown in Figure 11-144 and described in Table 11-131.

The secondary event registers (SER/SERH) provide information on the state of a DMA channel or event (0 through 63). If the EDMA3CC receives a TR synchronization due to a manual-trigger, event-trigger, or chained-trigger source (ESR.En/ESRH.En= 1, ER.En/ERH.En= 1, or CER.En/CERH.En= 1), which results in the setting of a corresponding event bit in SER/SERH (SER.En/SERH.En = 1), it implies that the corresponding DMA event is in the queue. Once a bit corresponding to an event is set in SER/SERH, the EDMA3CC does not prioritize additional events on the same DMA channel. Depending on the condition that lead to the setting of the SER bits, either the EDMA3CC hardware or the software (using SECR/SECRH) needs to clear the SER/SERH bits for the EDMA3CC to evaluate subsequent events (subsequent transfers) on the same channel. For additional conditions that can cause the secondary event registers to be set, see EDMA Overview. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-144. SER Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|--------------------------------------------------------------------------------|
|      | En                                                                             |
|      | R-0h                                                                           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-131. SER Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R      | 0h      | Secondary event register. The secondary event register is used along with the event register (ER) to provide information on the state of an event. 0h = Event is not currently stored in the event queue. 1h = Event is currently stored in the event queue. Event arbiter will not prioritize additional events. |

## 11.4.1.106 SERH Register (offset = 103Ch) [reset = 0h]

SERH is shown in Figure 11-145 and described in Table 11-132.

The secondary event registers (SER/SERH) provide information on the state of a DMA channel or event (0 through 63). If the EDMA3CC receives a TR synchronization due to a manual-trigger, event-trigger, or chained-trigger source (ESR.En/ESRH.En= 1, ER.En/ERH.En= 1, or CER.En/CERH.En= 1), which results in the setting of a corresponding event bit in SER/SERH (SER.En/SERH.En = 1), it implies that the corresponding DMA event is in the queue. Once a bit corresponding to an event is set in SER/SERH, the EDMA3CC does not prioritize additional events on the same DMA channel. Depending on the condition that lead to the setting of the SER bits, either the EDMA3CC hardware or the software (using SECR/SECRH) needs to clear the SER/SERH bits for the EDMA3CC to evaluate subsequent events (subsequent transfers) on the same channel. For additional conditions that can cause the secondary event registers to be set, see EDMA Overview. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-145. SERH Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|--------------------------------------------------------------------------------|
|      | En                                                                             |
|      | R-0h                                                                           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-132. SERH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | R      | 0h      | Secondary event register. The secondary event register is used along with the event register high (ERH) to provide information on the state of an event. 0h = Event is not currently stored in the event queue. 1h = Event is currently stored in the event queue. Event submission/prioritization logic will not prioritize additional events. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 11.4.1.107 SECR Register (offset = 1040h) [reset = 0h]

SECR is shown in Figure 11-146 and described in Table 11-133.

The secondary event clear registers (SECR/SECRH) clear the status of the secondary event registers (SER/SERH). CPU writes of 1 clear the corresponding set bits in SER/SERH. Writes of 0 have no effect. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-146. SECR Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | En                                                                              |
|      | W-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-133. SECR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                       |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | W      | 0h      | Secondary event clear register. 0h = No effect. 1h = Corresponding bit in the secondary event register (SER) is cleared (En = 0). |

## 11.4.1.108 SECRH Register (offset = 1044h) [reset = 0h]

SECRH is shown in Figure 11-147 and described in Table 11-134.

The secondary event clear registers (SECR/SECRH) clear the status of the secondary event registers (SER/SERH). CPU writes of 1 clear the corresponding set bits in SER/SERH. Writes of 0 have no effect. This register is part of a set of registers that pertain to the 64 DMA channels. The 64 DMA channels consist of a set of registers (with exception of DMAQNUMn) that each have 64 bits and the bit position of each register matches the DMA channel number. Each register is named with the format reg\_name that corresponds to DMA channels 0 through 31 and reg\_name\_High that corresponds to DMA channels 32 through 64. For example, the event register (ER) corresponds to DMA channel 0 through 31 and the event register high register (ERH) corresponds to DMA channel 32 through 63. The register is typically called the event register. The DMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write ability to the registers in the shadow region are controlled by the DMA region access registers (DRAEm/DRAEHm).

## Figure 11-147. SECRH Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | En                                                                              |
|      | W-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-134. SECRH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                              |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | En      | W      | 0h      | Secondary event clear register. 0h = No effect. 1h = Corresponding bit in the secondary event registers high (SERH) is cleared (En = 0). |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 11.4.1.109 IER Register (offset = 1050h) [reset = 0h]

IER is shown in Figure 11-148 and described in Table 11-135.

Interrupt enable registers (IER/IERH) are used to enable/disable the transfer completion interrupt generation by the EDMA3CC for all DMA/QDMA channels. The IER/IERH cannot be written to directly. To set any interrupt bit in IER/IERH, a 1 must be written to the corresponding interrupt bit in the interrupt enable set registers (IESR/IESRH). Similarly, to clear any interrupt bit in IER/IERH, a 1 must be written to the corresponding interrupt bit in the interrupt enable clear registers (IECR/IECRH). All DMA/QDMA channels can be set to assert an EDMA3CC completion interrupt to the CPU on transfer completion, by appropriately configuring the PaRAM entry associated with the channels. This register is used for the transfer completion interrupt reporting/generating by the EDMA3CC. For more details on EDMA3CC completion interrupt generation, see EDMA3 Interrupts.

## Figure 11-148. IER Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 In_   |
|------|------------------------------------------------------------------------------------|
|      | R-0h                                                                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-135. IER Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                      |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------|
| 31-0  | In_     | R      | 0h      | Interrupt enable for channels 0 to 31. 0h = Interrupt is not enabled. 1h = Interrupt is enabled. |

## 11.4.1.110 IERH Register (offset = 1054h) [reset = 0h]

IERH is shown in Figure 11-149 and described in Table 11-136.

Interrupt enable registers (IER/IERH) are used to enable/disable the transfer completion interrupt generation by the EDMA3CC for all DMA/QDMA channels. The IER/IERH cannot be written to directly. To set any interrupt bit in IER/IERH, a 1 must be written to the corresponding interrupt bit in the interrupt enable set registers (IESR/IESRH). Similarly, to clear any interrupt bit in IER/IERH, a 1 must be written to the corresponding interrupt bit in the interrupt enable clear registers (IECR/IECRH). All DMA/QDMA channels can be set to assert an EDMA3CC completion interrupt to the CPU on transfer completion, by appropriately configuring the PaRAM entry associated with the channels. This register is used for the transfer completion interrupt reporting/generating by the EDMA3CC. For more details on EDMA3CC completion interrupt generation, see EDMA3 Interrupts.

## Figure 11-149. IERH Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 In   |
|------|-----------------------------------------------------------------------------------|
|      | R-0h                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-136. IERH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                       |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------|
| 31-0  | In      | R      | 0h      | Interrupt enable for channels 32 to 63. 0h = Interrupt is not enabled. 1h = Interrupt is enabled. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 11.4.1.111 IECR Register (offset = 1058h) [reset = 0h]

IECR is shown in Figure 11-150 and described in Table 11-137.

The interrupt enable clear registers (IECR/IECRH) are used to clear interrupts. Writes of 1 to the bits in IECR/IECRH clear the corresponding interrupt bits in the interrupt enable registers (IER/IERH); writes of 0 have no effect. All DMA/QDMA channels can be set to assert an EDMA3CC completion interrupt to the CPU on transfer completion, by appropriately configuring the PaRAM entry associated with the channels. This register is used for the transfer completion interrupt reporting/generating by the EDMA3CC. For more details on EDMA3CC completion interrupt generation, see EDMA3 Interrupts.

## Figure 11-150. IECR Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|--------------------------------------------------------------------------------------|
|      | In                                                                                   |
|      | W-0h                                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-137. IECR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | In      | W      | 0h      | Interrupt enable clear for channels 0 to 31. 0h = No effect. 1h = Corresponding bit in the interrupt enable register (IER) is cleared (In = 0). |

## 11.4.1.112 IECRH Register (offset = 105Ch) [reset = 0h]

IECRH is shown in Figure 11-151 and described in Table 11-138.

The interrupt enable clear registers (IECR/IECRH) are used to clear interrupts. Writes of 1 to the bits in IECR/IECRH clear the corresponding interrupt bits in the interrupt enable registers (IER/IERH); writes of 0 have no effect. All DMA/QDMA channels can be set to assert an EDMA3CC completion interrupt to the CPU on transfer completion, by appropriately configuring the PaRAM entry associated with the channels. This register is used for the transfer completion interrupt reporting/generating by the EDMA3CC. For more details on EDMA3CC completion interrupt generation, see EDMA3 Interrupts.

## Figure 11-151. IECRH Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|--------------------------------------------------------------------------------------|
|      | In                                                                                   |
|      | W-0h                                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-138. IECRH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                            |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | In      | W      | 0h      | Interrupt enable clear for channels 32 to 63. 0h = No effect. 1h = Corresponding bit in the interrupt enable register high (IERH) is cleared (In = 0). |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 11.4.1.113 IESR Register (offset = 1060h) [reset = 0h]

IESR is shown in Figure 11-152 and described in Table 11-139.

The interrupt enable set registers (IESR/IESRH) are used to enable interrupts. Writes of 1 to the bits in IESR/IESRH set the corresponding interrupt bits in the interrupt enable registers (IER/IERH); writes of 0 have no effect. All DMA/QDMA channels can be set to assert an EDMA3CC completion interrupt to the CPU on transfer completion, by appropriately configuring the PaRAM entry associated with the channels. This register is used for the transfer completion interrupt reporting/generating by the EDMA3CC. For more details on EDMA3CC completion interrupt generation, see EDMA3 Interrupts.

## Figure 11-152. IESR Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|--------------------------------------------------------------------------------------|
|      | In                                                                                   |
|      | W-0h                                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-139. IESR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                               |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | In      | W      | 0h      | Interrupt enable set for channels 0 to 31. 0h = No effect. 1h = Corresponding bit in the interrupt enable register (IER) is set (In = 1). |

## 11.4.1.114 IESRH Register (offset = 1064h) [reset = 0h]

IESRH is shown in Figure 11-153 and described in Table 11-140.

The interrupt enable set registers (IESR/IESRH) are used to enable interrupts. Writes of 1 to the bits in IESR/IESRH set the corresponding interrupt bits in the interrupt enable registers (IER/IERH); writes of 0 have no effect. All DMA/QDMA channels can be set to assert an EDMA3CC completion interrupt to the CPU on transfer completion, by appropriately configuring the PaRAM entry associated with the channels. This register is used for the transfer completion interrupt reporting/generating by the EDMA3CC. For more details on EDMA3CC completion interrupt generation, see EDMA3 Interrupts.

## Figure 11-153. IESRH Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|--------------------------------------------------------------------------------------|
|      | In                                                                                   |
|      | W-0h                                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-140. IESRH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                        |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | In      | W      | 0h      | Interrupt enable clear for channels 32 to 63. 0h = No effect. 1h = Corresponding bit in the interrupt enable register high (IERH) is set (In = 1). |

<!-- image -->

<!-- image -->

## 11.4.1.115 IPR Register (offset = 1068h) [reset = 0h]

IPR is shown in Figure 11-154 and described in Table 11-141.

If the TCINTEN and/or ITCINTEN bit in the channel option parameter (OPT) is set in the PaRAM entry associated with the channel (DMA or QDMA), then the EDMA3TC (for normal completion) or the EDMA3CC (for early completion) returns a completion code on transfer or intermediate transfer completion. The value of the returned completion code is equal to the TCC bit in OPT for the PaRAM entry associated with the channel. When an interrupt transfer completion code with TCC = n is detected by the EDMA3CC, then the corresponding bit is set in the interrupt pending register (IPR.In, if n = 0 to 31; IPRH.In, if n = 32 to 63). Note that once a bit is set in the interrupt pending registers, it remains set; it is your responsibility to clear these bits. The bits set in IPR/IPRH are cleared by writing a 1 to the corresponding bits in the interrupt clear registers (ICR/ICRH). All DMA/QDMA channels can be set to assert an EDMA3CC completion interrupt to the CPU on transfer completion, by appropriately configuring the PaRAM entry associated with the channels. This register is used for the transfer completion interrupt reporting/generating by the EDMA3CC. For more details on EDMA3CC completion interrupt generation, see EDMA3 Interrupts.

## Figure 11-154. IPR Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-141. IPR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                  |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | In      | R      | 0h      | Interrupt pending for TCC = 0 to 31. 0h = Interrupt transfer completion code is not detected or was cleared. 1h = Interrupt transfer completion code is detected (In = 1, n = EDMA3TC[2:0]). |

## 11.4.1.116 IPRH Register (offset = 106Ch) [reset = 0h]

IPRH is shown in Figure 11-155 and described in Table 11-142.

If the TCINTEN and/or ITCINTEN bit in the channel option parameter (OPT) is set in the PaRAM entry associated with the channel (DMA or QDMA), then the EDMA3TC (for normal completion) or the EDMA3CC (for early completion) returns a completion code on transfer or intermediate transfer completion. The value of the returned completion code is equal to the TCC bit in OPT for the PaRAM entry associated with the channel. When an interrupt transfer completion code with TCC = n is detected by the EDMA3CC, then the corresponding bit is set in the interrupt pending register (IPR.In, if n = 0 to 31; IPRH.In, if n = 32 to 63). Note that once a bit is set in the interrupt pending registers, it remains set; it is your responsibility to clear these bits. The bits set in IPR/IPRH are cleared by writing a 1 to the corresponding bits in the interrupt clear registers (ICR/ICRH). All DMA/QDMA channels can be set to assert an EDMA3CC completion interrupt to the CPU on transfer completion, by appropriately configuring the PaRAM entry associated with the channels. This register is used for the transfer completion interrupt reporting/generating by the EDMA3CC. For more details on EDMA3CC completion interrupt generation, see EDMA3 Interrupts.

Figure 11-155. IPRH Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-142. IPRH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                   |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | In      | R      | 0h      | Interrupt pending for TCC = 32 to 63. 0h = Interrupt transfer completion code is not detected or was cleared. 1h = Interrupt transfer completion code is detected (In = 1, n = EDMA3TC[2:0]). |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 11.4.1.117 ICR Register (offset = 1070h) [reset = 0h]

ICR is shown in Figure 11-156 and described in Table 11-143.

The bits in the interrupt pending registers (IPR/IPRH) are cleared by writing a 1 to the corresponding bits in the interrupt clear registers(ICR/ICRH). Writes of 0 have no effect. All set bits in IPR/IPRH must be cleared to allow EDMA3CC to assert additional transfer completion interrupts. All DMA/QDMA channels can be set to assert an EDMA3CC completion interrupt to the CPU on transfer completion, by appropriately configuring the PaRAM entry associated with the channels. This register is used for the transfer completion interrupt reporting/generating by the EDMA3CC. For more details on EDMA3CC completion interrupt generation, see EDMA3 Interrupts.

## Figure 11-156. ICR Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | In                                                                                 |
|      | W-0h                                                                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-143. ICR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | In      | W      | 0h      | Interrupt clear register for TCC = 0 to 31. 0h = No effect. 1h = Corresponding bit in the interrupt pending register (IPR) is cleared (In = 0). |

## 11.4.1.118 ICRH Register (offset = 1074h) [reset = 0h]

ICRH is shown in Figure 11-157 and described in Table 11-144.

The bits in the interrupt pending registers (IPR/IPRH) are cleared by writing a 1 to the corresponding bits in the interrupt clear registers(ICR/ICRH). Writes of 0 have no effect. All set bits in IPR/IPRH must be cleared to allow EDMA3CC to assert additional transfer completion interrupts. All DMA/QDMA channels can be set to assert an EDMA3CC completion interrupt to the CPU on transfer completion, by appropriately configuring the PaRAM entry associated with the channels. This register is used for the transfer completion interrupt reporting/generating by the EDMA3CC. For more details on EDMA3CC completion interrupt generation, see EDMA3 Interrupts.

## Figure 11-157. ICRH Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | In                                                                                 |
|      | W-0h                                                                               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-144. ICRH Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                            |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | In      | W      | 0h      | Interrupt clear register for TCC = 32 to 63. 0h = No effect. 1h = Corresponding bit in the interrupt pending register high (IPRH) is cleared (In = 0). |

<!-- image -->

<!-- image -->

## 11.4.1.119 IEVAL Register (offset = 1078h) [reset = 0h]

IEVAL is shown in Figure 11-158 and described in Table 11-145.

The interrupt evaluate register (IEVAL) is the only register that physically exists in both the global region and the shadow regions. In other words, the read/write accessibility for the shadow region IEVAL is not affected by the DMA/QDMA region access registers (DRAEm/DRAEHm, QRAEn/QRAEHn). IEVAL is needed for robust ISR operations to ensure that interrupts are not missed by the CPU. All DMA/QDMA channels can be set to assert an EDMA3CC completion interrupt to the CPU on transfer completion, by appropriately configuring the PaRAM entry associated with the channels. This register is used for the transfer completion interrupt reporting/generating by the EDMA3CC. For more details on EDMA3CC completion interrupt generation, see EDMA3 Interrupts.

Figure 11-158. IEVAL Register

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
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | EVAL     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-145. IEVAL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 1     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 0     | EVAL     | W      | 0h      | Interrupt evaluate. The EDMA3CC completion interrupt that is pulsed depends on which IEVAL is being exercised. For example, writing to the EVAL bit in IEVAL pulses the global completion interrupt, but writing to the EVAL bit in IEVAL0 pulses the region 0 completion interrupt. 0h = No effect. 1h = Causes EDMA3CC completion interrupt to be pulsed, if any enabled (IERn/IERHn = 1) interrupts are still pending (IPRn/IPRHn = 1). |

## 11.4.1.120 QER Register (offset = 1080h) [reset = 0h]

QER is shown in Figure 11-159 and described in Table 11-146.

The QDMA event register (QER) channel n bit is set (En = 1) when the CPU or any EDMA3 programmer (including EDMA3) performs a write to the trigger word (using the QDMA channel mapping register (QCHMAPn)) in the PaRAM entry associated with QDMA channel n (which is also programmed using QCHMAPn). The En bit is also set when the EDMA3CC performs a link update on a PaRAM address that matches the QCHMAPn settings. The QDMA event is latched only if the QDMA event enable register (QEER) channel n bit is also enabled (QEER.En = 1). Once a bit is set in QER, then the corresponding QDMA event (auto-trigger) is evaluated by the EDMA3CC logic for an associated transfer request submission to the transfer controllers. For additional conditions that can lead to the setting of QER bits, see EDMA Overview. The setting of an event is a higher priority relative to clear operations (via hardware). If set and clear conditions occur concurrently, the set condition wins. If the event was previously set, then the QDMA event missed register (QEMR) would be set because an event is lost. If the event was previously clear, then the event remains set and is prioritized for submission to the event queues. The set bits in QER are only cleared when the transfer request associated with the corresponding channels has been processed by the EDMA3CC and submitted to the transfer controller. If the En bit is already set and a QDMA event for the same QDMA channel occurs prior to the original being cleared, then the second missed event is latched in QEMR (En = 1). QER is part of a set of register that control the QDMA channels in EDMA3CC. QDMA channels (with the exception of the QDMA queue number register) consist of a set of registers, each of which have a bit location. Each bit position corresponds to a QDMA channel number. The QDMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write accessibility in the shadow region address region is controlled by the QDMA region access registers (QRAEn/QRAEHn).

## Figure 11-159. QER Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14   | 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED En   |
|---------------------------------------------------------|---------------------------------------------|
| R-0h                                                    | R-0h                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-146. QER Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                  |
| 7-0   | En       | R      | 0h      | QDMA event for channels 0 to 7. 0h = No effect. 1h = Corresponding QDMA event is prioritized versus other pending DMA/QDMA events for submission to the EDMA3TC. |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.1.121 QEER Register (offset = 1084h) [reset = 0h]

QEER is shown in Figure 11-160 and described in Table 11-147.

The EDMA3CC provides the option of selectively enabling/disabling each channel in the QDMA event register (QER) by using the QDMA event enable register (QEER). If any of the event bits in QEER is set (using the QDMA event enable set register, QEESR), it will enable that corresponding event. Alternatively, if any event bit in QEER is cleared (using the QDMA event enable clear register, QEECR), it will disable the corresponding QDMA channel. The QDMA event register will not latch any event for a QDMA channel, if it is not enabled via QEER. QEER is part of a set of register that control the QDMA channels in EDMA3CC. QDMA channels (with the exception of the QDMA queue number register) consist of a set of registers, each of which have a bit location. Each bit position corresponds to a QDMA channel number. The QDMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write accessibility in the shadow region address region is controlled by the QDMA region access registers (QRAEn/QRAEHn).

## Figure 11-160. QEER Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9   | 8 7 6 5 4 3 2 1 0   |
|-----------------------------------------------------------------------|---------------------|
| RESERVED                                                              | En                  |
| R-0h                                                                  | R-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-147. QEER Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                         |
| 7-0   | En       | R      | 0h      | QDMA event enable for channels 0 to 7. 0h = QDMA channel n is not enabled. QDMA event will not be recognized and will not latch in the QDMA event register (QER). 1h = QDMA channel n is enabled. QDMA events will be recognized and will get latched in the QDMA event register (QER). |

## 11.4.1.122 QEECR Register (offset = 1088h) [reset = 0h]

QEECR is shown in Figure 11-161 and described in Table 11-148.

The QDMA event enable register (QEER) cannot be modified by directly writing to the register, to ease the software burden when multiple tasks are attempting to simultaneously modify these registers. The QDMA event enable clear register (QEECR) is used to disable events. Writes of 1 to the bits in QEECR clear the corresponding QDMA channel bits in QEER; writes of 0 have no effect. QEECR is part of a set of register that control the QDMA channels in EDMA3CC. QDMA channels (with the exception of the QDMA queue number register) consist of a set of registers, each of which have a bit location. Each bit position corresponds to a QDMA channel number. The QDMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write accessibility in the shadow region address region is controlled by the QDMA region access registers (QRAEn/QRAEHn).

## Figure 11-161. QEECR Register

| 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|---------------------------------------------------------------------------------|
| En                                                                              |
| R-0h W-0h                                                                       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-148. QEECR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                               |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                           |
| 7-0   | En       | W      | 0h      | QDMA event enable clear for channels 0 to 7. 0h = No effect. 1h = QDMA event is disabled. Corresponding bit in the QDMA event enable register (QEER) is cleared (En = 0). |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 11.4.1.123 QEESR Register (offset = 108Ch) [reset = 0h]

QEESR is shown in Figure 11-162 and described in Table 11-149.

The QDMA event enable register (QEER) cannot be modified by directly writing to the register, to ease the software burden when multiple tasks are attempting to simultaneously modify these registers. The QDMA event enable set register (QEESR) is used to enable events. Writes of 1 to the bits in QEESR set the corresponding QDMA channel bits in QEER; writes of 0 have no effect.

## Figure 11-162. QEESR Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 RESERVED   | 9 8 7 6 5 4 3 2 1 0 En   |
|------------------------------------------------------------------------|--------------------------|
| R-0h                                                                   | W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-149. QEESR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                        |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                    |
| 7-0   | En       | W      | 0h      | QDMA event enable set for channels 0 to 7. 0h = No effect. 1h = QDMA event is enabled. Corresponding bit in the QDMA event enable register (QEER) is set (En = 1). |

## 11.4.1.124 QSER Register (offset = 1090h) [reset = 0h]

QSER is shown in Figure 11-163 and described in Table 11-150.

The QDMA secondary event register (QSER) provides information on the state of a QDMA event. If at any time a bit corresponding to a QDMA channel is set in QSER, that implies that the corresponding QDMA event is in the queue. Once a bit corresponding to a QDMA channel is set in QSER, the EDMA3CC does not prioritize additional events on the same QDMA channel. Depending on the condition that lead to the setting of the QSER bits, either the EDMA3CC hardware or the software (using QSECR) needs to clear the QSER bits for the EDMA3CC to evaluate subsequent QDMA events on the channel. Based on whether the associated TR request is valid, or it is a null or dummy TR, the implications on the state of QSER and the required user actions to submit another QDMA transfer might be different. For additional conditions that can cause the secondary event registers (QSER\SER) to be set, see EDMA Overview. QSER is part of a set of register that control the QDMA channels in EDMA3CC. QDMA channels (with the exception of the QDMA queue number register) consist of a set of registers, each of which have a bit location. Each bit position corresponds to a QDMA channel number. The QDMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write accessibility in the shadow region address region is controlled by the QDMA region access registers (QRAEn/QRAEHn).

## Figure 11-163. QSER Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6   | 5 4 3 2 1 0 En   |
|-----------------------------------------------------------------------------|------------------|
| RESERVED                                                                    |                  |
| R-0h                                                                        | R-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-150. QSER Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                           |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                       |
| 7-0   | En       | R      | 0h      | QDMA secondary event register for channels 0 to 7. 0h = QDMA event is not currently stored in the event queue. 1h = QDMA event is currently stored in the event queue. EDMA3CC will not prioritize additional events. |

<!-- image -->

www.ti.com