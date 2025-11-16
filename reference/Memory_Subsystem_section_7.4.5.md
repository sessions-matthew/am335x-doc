## Table 7-286. Use Case: Page Mode (continued)

| Step                                                                                          | Register/ Bit Field / Programming Model        | Value   |
|-----------------------------------------------------------------------------------------------|------------------------------------------------|---------|
| Read the process exit status for syndrome polynomial 2: All errors were successfully located. | ELM_LOCATION_STATUS_i[8] ECC_CORRECTABLE (i=2) | 0x1     |
| Read the process exit status for syndrome polynomial 3: All errors were successfully located. | ELM_LOCATION_STATUS_i[8] ECC_CORRECTABLE (i=3) | 0x1     |
| Read the number of errors for syndrome polynomial 0: 4 errors detected.                       | ELM_LOCATION_STATUS_i[4:0] ECC_NB_ERRORS (i=0) | 0x4     |
| Read the number of errors for syndrome polynomial 1: 2 errors detected.                       | ELM_LOCATION_STATUS_i[4:0] ECC_NB_ERRORS (i=1) | 0x2     |
| Read the number of errors for syndrome polynomial 2: 1 error detected.                        | ELM_LOCATION_STATUS_i[4:0] ECC_NB_ERRORS (i=2) | 0x1     |
| Read the number of errors for syndrome polynomial 3: 0 errors detected.                       | ELM_LOCATION_STATUS_i[4:0] ECC_NB_ERRORS (i=3) | 0x0     |
| Read the error-location bit addresses for syndrome polynomial 0 of the 4 first registers:     | ELM_ERROR_LOCATION_0_i (i=0)                   | 0x1FE   |
| Read the error-location bit addresses for syndrome polynomial 0 of the 4 first registers:     | ELM_ERROR_LOCATION_1_i (i=0)                   | 0x617   |
| Read the error-location bit addresses for syndrome polynomial 0 of the 4 first registers:     | ELM_ERROR_LOCATION_2_i (i=0)                   | 0x650   |
| Read the error-location bit addresses for syndrome polynomial 0 of the 4 first registers:     | ELM_ERROR_LOCATION_3_i (i=0)                   | 0xA83   |
| Read the error-location bit addresses for syndrome polynomial 1 of the 2 first registers:     | ELM_ERROR_LOCATION_0_i (i=1)                   | 0x4     |
| Read the error-location bit addresses for syndrome polynomial 1 of the 2 first registers:     | ELM_ERROR_LOCATION_1_i (i=1)                   | 0x1036  |
| Read the errors location bit addresses for syndrome polynomial 2 of the first registers:      | ELM_ERROR_LOCATION_0_i (i=1)                   | 0x3E8   |
| Clear the ELM_IRQSTATUS register.                                                             | ELM_IRQSTATUS                                  | 0x1FF   |

## 7.4.5 ELM Registers

Table 7-287 lists the memory-mapped registers for the ELM. All register offset addresses not listed in Table 7-287 should be considered as reserved locations and the register contents should not be modified.

## Table 7-287. ELM Registers

| Offset   | Acronym                   | Register Name                       | Section          |
|----------|---------------------------|-------------------------------------|------------------|
| 0h       | ELM_REVISION              | ELM Revision Register               | Section 7.4.5.1  |
| 10h      | ELM_SYSCONFIG             | ELM System Configuration Register   | Section 7.4.5.2  |
| 14h      | ELM_SYSSTATUS             | ELM System Status Register          | Section 7.4.5.3  |
| 18h      | ELM_IRQSTATUS             | ELM Interrupt Status Register       | Section 7.4.5.4  |
| 1Ch      | ELM_IRQENABLE             | ELM Interrupt Enable Register       | Section 7.4.5.5  |
| 20h      | ELM_LOCATION_CONFIG       | ELM Location Configuration Register | Section 7.4.5.6  |
| 80h      | ELM_PAGE_CTRL             | ELM Page Definition Register        | Section 7.4.5.7  |
| 400h     | ELM_SYNDROME_FRAGMENT_0_0 | ELM_SYNDROME_FRAGMENT_0_0 Register  | Section 7.4.5.8  |
| 404h     | ELM_SYNDROME_FRAGMENT_1_0 | ELM_SYNDROME_FRAGMENT_1_0 Register  | Section 7.4.5.9  |
| 408h     | ELM_SYNDROME_FRAGMENT_2_0 | ELM_SYNDROME_FRAGMENT_2_0 Register  | Section 7.4.5.10 |
| 40Ch     | ELM_SYNDROME_FRAGMENT_3_0 | ELM_SYNDROME_FRAGMENT_3_0 Register  | Section 7.4.5.11 |
| 410h     | ELM_SYNDROME_FRAGMENT_4_0 | ELM_SYNDROME_FRAGMENT_4_0 Register  | Section 7.4.5.12 |
| 414h     | ELM_SYNDROME_FRAGMENT_5_0 | ELM_SYNDROME_FRAGMENT_5_0 Register  | Section 7.4.5.13 |
| 418h     | ELM_SYNDROME_FRAGMENT_6_0 | ELM_SYNDROME_FRAGMENT_6_0 Register  | Section 7.4.5.14 |
| 440h     | ELM_SYNDROME_FRAGMENT_0_1 | ELM_SYNDROME_FRAGMENT_0_1 Register  | Section 7.4.5.15 |
| 444h     | ELM_SYNDROME_FRAGMENT_1_1 | ELM_SYNDROME_FRAGMENT_1_1 Register  | Section 7.4.5.16 |
| 448h     | ELM_SYNDROME_FRAGMENT_2_1 | ELM_SYNDROME_FRAGMENT_2_1 Register  | Section 7.4.5.17 |

<!-- image -->

<!-- image -->

Table 7-287. ELM Registers (continued)

| Offset   | Acronym                   | Register Name                                                         | Section          |
|----------|---------------------------|-----------------------------------------------------------------------|------------------|
| 44Ch     | ELM_SYNDROME_FRAGMENT_3_1 | ELM_SYNDROME_FRAGMENT_3_1 Register                                    | Section 7.4.5.18 |
| 450h     | ELM_SYNDROME_FRAGMENT_4_1 | ELM_SYNDROME_FRAGMENT_4_1 Register                                    | Section 7.4.5.19 |
| 454h     | ELM_SYNDROME_FRAGMENT_5_1 | ELM_SYNDROME_FRAGMENT_5_1 Register                                    | Section 7.4.5.20 |
| 458h     | ELM_SYNDROME_FRAGMENT_6_1 | ELM_SYNDROME_FRAGMENT_6_1 Register                                    | Section 7.4.5.21 |
| 480h     | ELM_SYNDROME_FRAGMENT_0_2 | ELM_SYNDROME_FRAGMENT_0_2 Register                                    | Section 7.4.5.22 |
| 484h     | ELM_SYNDROME_FRAGMENT_1_2 | ELM_SYNDROME_FRAGMENT_1_2 Register                                    | Section 7.4.5.23 |
| 488h     | ELM_SYNDROME_FRAGMENT_2_2 | ELM_SYNDROME_FRAGMENT_2_2 Register                                    | Section 7.4.5.24 |
| 48Ch     | ELM_SYNDROME_FRAGMENT_3_2 | ELM_SYNDROME_FRAGMENT_3_2 Register                                    | Section 7.4.5.25 |
| 490h     | ELM_SYNDROME_FRAGMENT_4_2 | ELM_SYNDROME_FRAGMENT_4_2 Register                                    | Section 7.4.5.26 |
| 494h     | ELM_SYNDROME_FRAGMENT_5_2 | ELM_SYNDROME_FRAGMENT_5_2 Register                                    | Section 7.4.5.27 |
| 498h     | ELM_SYNDROME_FRAGMENT_6_2 | ELM_SYNDROME_FRAGMENT_6_2 Register                                    | Section 7.4.5.28 |
| 4C0h     | ELM_SYNDROME_FRAGMENT_0_3 | ELM_SYNDROME_FRAGMENT_0_3 Register                                    | Section 7.4.5.29 |
| 4C4h     | ELM_SYNDROME_FRAGMENT_1_3 | ELM_SYNDROME_FRAGMENT_1_3 Register                                    | Section 7.4.5.30 |
| 4C8h     | ELM_SYNDROME_FRAGMENT_2_3 | ELM_SYNDROME_FRAGMENT_2_3 Register                                    | Section 7.4.5.31 |
| 4CCh     | ELM_SYNDROME_FRAGMENT_3_3 | ELM_SYNDROME_FRAGMENT_3_3 Register                                    | Section 7.4.5.32 |
| 4D0h     | ELM_SYNDROME_FRAGMENT_4_3 | ELM_SYNDROME_FRAGMENT_4_3 Register                                    | Section 7.4.5.33 |
| 4D4h     | ELM_SYNDROME_FRAGMENT_5_3 | ELM_SYNDROME_FRAGMENT_5_3 Register                                    | Section 7.4.5.34 |
| 4D8h     | ELM_SYNDROME_FRAGMENT_6_3 | ELM_SYNDROME_FRAGMENT_6_3 Register                                    | Section 7.4.5.35 |
| 500h     | ELM_SYNDROME_FRAGMENT_0_4 | ELM_SYNDROME_FRAGMENT_0_4 Register                                    | Section 7.4.5.36 |
| 504h     | ELM_SYNDROME_FRAGMENT_1_4 | ELM_SYNDROME_FRAGMENT_1_4 Register                                    | Section 7.4.5.37 |
| 508h     | ELM_SYNDROME_FRAGMENT_2_4 | ELM_SYNDROME_FRAGMENT_2_4 Register                                    | Section 7.4.5.38 |
| 50Ch     | ELM_SYNDROME_FRAGMENT_3_4 | ELM_SYNDROME_FRAGMENT_3_4 Register                                    | Section 7.4.5.39 |
| 510h     | ELM_SYNDROME_FRAGMENT_4_4 | ELM_SYNDROME_FRAGMENT_4_4 Register                                    | Section 7.4.5.40 |
| 514h     | ELM_SYNDROME_FRAGMENT_5_4 | ELM_SYNDROME_FRAGMENT_5_4 Register                                    | Section 7.4.5.41 |
| 518h     | ELM_SYNDROME_FRAGMENT_6_4 | ELM_SYNDROME_FRAGMENT_6_4 Register                                    | Section 7.4.5.42 |
| 540h     | ELM_SYNDROME_FRAGMENT_0_5 | ELM_SYNDROME_FRAGMENT_0_5 Register                                    | Section 7.4.5.43 |
| 544h     | ELM_SYNDROME_FRAGMENT_1_5 | ELM_SYNDROME_FRAGMENT_1_5 Register                                    | Section 7.4.5.44 |
| 548h     | ELM_SYNDROME_FRAGMENT_2_5 | ELM_SYNDROME_FRAGMENT_2_5 Register                                    | Section 7.4.5.45 |
| 54Ch     | ELM_SYNDROME_FRAGMENT_3_5 | ELM_SYNDROME_FRAGMENT_3_5 Register                                    | Section 7.4.5.46 |
| 550h     | ELM_SYNDROME_FRAGMENT_4_5 | ELM_SYNDROME_FRAGMENT_4_5 Register                                    | Section 7.4.5.47 |
| 554h     | ELM_SYNDROME_FRAGMENT_5_5 | ELM_SYNDROME_FRAGMENT_5_5 Register                                    | Section 7.4.5.48 |
| 558h     | ELM_SYNDROME_FRAGMENT_6_5 | ELM_SYNDROME_FRAGMENT_6_5 Register                                    | Section 7.4.5.49 |
| 580h     | ELM_SYNDROME_FRAGMENT_0_6 | ELM_SYNDROME_FRAGMENT_0_6 Register                                    | Section 7.4.5.50 |
| 584h     | ELM_SYNDROME_FRAGMENT_1_6 | ELM_SYNDROME_FRAGMENT_1_6 Register                                    | Section 7.4.5.51 |
| 588h     | ELM_SYNDROME_FRAGMENT_2_6 | ELM_SYNDROME_FRAGMENT_2_6 Register                                    | Section 7.4.5.52 |
| 58Ch     | ELM_SYNDROME_FRAGMENT_3_6 | ELM_SYNDROME_FRAGMENT_3_6 Register                                    | Section 7.4.5.53 |
| 590h     | ELM_SYNDROME_FRAGMENT_4_6 | ELM_SYNDROME_FRAGMENT_4_6 Register                                    | Section 7.4.5.54 |
| 594h     | ELM_SYNDROME_FRAGMENT_5_6 | ELM_SYNDROME_FRAGMENT_5_6 Register                                    | Section 7.4.5.55 |
| 598h     | ELM_SYNDROME_FRAGMENT_6_6 | ELM_SYNDROME_FRAGMENT_6_6 Register                                    | Section 7.4.5.56 |
| 5C0h     | ELM_SYNDROME_FRAGMENT_0_7 | ELM_SYNDROME_FRAGMENT_0_7 Register                                    | Section 7.4.5.57 |
| 5C4h     | ELM_SYNDROME_FRAGMENT_1_7 | ELM_SYNDROME_FRAGMENT_1_7 Register                                    | Section 7.4.5.58 |
| 5C8h     | ELM_SYNDROME_FRAGMENT_2_7 |                                                                       | Section 7.4.5.59 |
| 5CCh     | ELM_SYNDROME_FRAGMENT_3_7 | ELM_SYNDROME_FRAGMENT_2_7 Register ELM_SYNDROME_FRAGMENT_3_7 Register | Section 7.4.5.60 |
| 5D0h     | ELM_SYNDROME_FRAGMENT_4_7 | ELM_SYNDROME_FRAGMENT_4_7 Register                                    | Section 7.4.5.61 |
| 5D4h     | ELM_SYNDROME_FRAGMENT_5_7 | ELM_SYNDROME_FRAGMENT_5_7 Register                                    | Section 7.4.5.62 |
| 5D8h     | ELM_SYNDROME_FRAGMENT_6_7 | ELM_SYNDROME_FRAGMENT_6_7 Register                                    | Section 7.4.5.63 |
| 800h     | ELM_LOCATION_STATUS_0     | ELM_LOCATION_STATUS_0 Register                                        | Section 7.4.5.64 |

Table 7-287. ELM Registers (continued)

| Offset   | Acronym                 | Register Name                    | Section           |
|----------|-------------------------|----------------------------------|-------------------|
| 880h     | ELM_ERROR_LOCATION_0_0  | ELM_ERROR_LOCATION_0_0 Register  | Section 7.4.5.65  |
| 884h     | ELM_ERROR_LOCATION_1_0  | ELM_ERROR_LOCATION_1_0 Register  | Section 7.4.5.66  |
| 888h     | ELM_ERROR_LOCATION_2_0  | ELM_ERROR_LOCATION_2_0 Register  | Section 7.4.5.67  |
| 88Ch     | ELM_ERROR_LOCATION_3_0  | ELM_ERROR_LOCATION_3_0 Register  | Section 7.4.5.68  |
| 890h     | ELM_ERROR_LOCATION_4_0  | ELM_ERROR_LOCATION_4_0 Register  | Section 7.4.5.69  |
| 894h     | ELM_ERROR_LOCATION_5_0  | ELM_ERROR_LOCATION_5_0 Register  | Section 7.4.5.70  |
| 898h     | ELM_ERROR_LOCATION_6_0  | ELM_ERROR_LOCATION_6_0 Register  | Section 7.4.5.71  |
| 89Ch     | ELM_ERROR_LOCATION_7_0  | ELM_ERROR_LOCATION_7_0 Register  | Section 7.4.5.72  |
| 8A0h     | ELM_ERROR_LOCATION_8_0  | ELM_ERROR_LOCATION_8_0 Register  | Section 7.4.5.73  |
| 8A4h     | ELM_ERROR_LOCATION_9_0  | ELM_ERROR_LOCATION_9_0 Register  | Section 7.4.5.74  |
| 8A8h     | ELM_ERROR_LOCATION_10_0 | ELM_ERROR_LOCATION_10_0 Register | Section 7.4.5.75  |
| 8ACh     | ELM_ERROR_LOCATION_11_0 | ELM_ERROR_LOCATION_11_0 Register | Section 7.4.5.76  |
| 8B0h     | ELM_ERROR_LOCATION_12_0 | ELM_ERROR_LOCATION_12_0 Register | Section 7.4.5.77  |
| 8B4h     | ELM_ERROR_LOCATION_13_0 | ELM_ERROR_LOCATION_13_0 Register | Section 7.4.5.78  |
| 8B8h     | ELM_ERROR_LOCATION_14_0 | ELM_ERROR_LOCATION_14_0 Register | Section 7.4.5.79  |
| 8BCh     | ELM_ERROR_LOCATION_15_0 | ELM_ERROR_LOCATION_15_0 Register | Section 7.4.5.80  |
| 900h     | ELM_LOCATION_STATUS_1   | ELM_LOCATION_STATUS_1 Register   | Section 7.4.5.81  |
| 980h     | ELM_ERROR_LOCATION_0_1  | ELM_ERROR_LOCATION_0_1 Register  | Section 7.4.5.82  |
| 984h     | ELM_ERROR_LOCATION_1_1  | ELM_ERROR_LOCATION_1_1 Register  | Section 7.4.5.83  |
| 988h     | ELM_ERROR_LOCATION_2_1  | ELM_ERROR_LOCATION_2_1 Register  | Section 7.4.5.84  |
| 98Ch     | ELM_ERROR_LOCATION_3_1  | ELM_ERROR_LOCATION_3_1 Register  | Section 7.4.5.85  |
| 990h     | ELM_ERROR_LOCATION_4_1  | ELM_ERROR_LOCATION_4_1 Register  | Section 7.4.5.86  |
| 994h     | ELM_ERROR_LOCATION_5_1  | ELM_ERROR_LOCATION_5_1 Register  | Section 7.4.5.87  |
| 998h     | ELM_ERROR_LOCATION_6_1  | ELM_ERROR_LOCATION_6_1 Register  | Section 7.4.5.88  |
| 99Ch     | ELM_ERROR_LOCATION_7_1  | ELM_ERROR_LOCATION_7_1 Register  | Section 7.4.5.89  |
| 9A0h     | ELM_ERROR_LOCATION_8_1  | ELM_ERROR_LOCATION_8_1 Register  | Section 7.4.5.90  |
| 9A4h     | ELM_ERROR_LOCATION_9_1  | ELM_ERROR_LOCATION_9_1 Register  | Section 7.4.5.91  |
| 9A8h     | ELM_ERROR_LOCATION_10_1 | ELM_ERROR_LOCATION_10_1 Register | Section 7.4.5.92  |
| 9ACh     | ELM_ERROR_LOCATION_11_1 | ELM_ERROR_LOCATION_11_1 Register | Section 7.4.5.93  |
| 9B0h     | ELM_ERROR_LOCATION_12_1 | ELM_ERROR_LOCATION_12_1 Register | Section 7.4.5.94  |
| 9B4h     | ELM_ERROR_LOCATION_13_1 | ELM_ERROR_LOCATION_13_1 Register | Section 7.4.5.95  |
| 9B8h     | ELM_ERROR_LOCATION_14_1 | ELM_ERROR_LOCATION_14_1 Register | Section 7.4.5.96  |
| 9BCh     | ELM_ERROR_LOCATION_15_1 | ELM_ERROR_LOCATION_15_1 Register | Section 7.4.5.97  |
| A00h     | ELM_LOCATION_STATUS_2   | ELM_LOCATION_STATUS_2 Register   | Section 7.4.5.98  |
| A80h     | ELM_ERROR_LOCATION_0_2  | ELM_ERROR_LOCATION_0_2 Register  | Section 7.4.5.99  |
| A84h     | ELM_ERROR_LOCATION_1_2  | ELM_ERROR_LOCATION_1_2 Register  | Section 7.4.5.100 |
| A88h     | ELM_ERROR_LOCATION_2_2  | ELM_ERROR_LOCATION_2_2 Register  | Section 7.4.5.101 |
| A8Ch     | ELM_ERROR_LOCATION_3_2  | ELM_ERROR_LOCATION_3_2 Register  | Section 7.4.5.102 |
| A90h     | ELM_ERROR_LOCATION_4_2  | ELM_ERROR_LOCATION_4_2 Register  | Section 7.4.5.103 |
| A94h     | ELM_ERROR_LOCATION_5_2  | ELM_ERROR_LOCATION_5_2 Register  | Section 7.4.5.104 |
| A98h     | ELM_ERROR_LOCATION_6_2  | ELM_ERROR_LOCATION_6_2 Register  | Section 7.4.5.105 |
| A9Ch     | ELM_ERROR_LOCATION_7_2  | ELM_ERROR_LOCATION_7_2 Register  | Section 7.4.5.106 |
| AA0h     | ELM_ERROR_LOCATION_8_2  | ELM_ERROR_LOCATION_8_2 Register  | Section 7.4.5.107 |
| AA4h     | ELM_ERROR_LOCATION_9_2  | ELM_ERROR_LOCATION_9_2 Register  | Section 7.4.5.108 |
| AA8h     | ELM_ERROR_LOCATION_10_2 | ELM_ERROR_LOCATION_10_2 Register | Section 7.4.5.109 |
| AB0h     | ELM_ERROR_LOCATION_12_2 | ELM_ERROR_LOCATION_12_2 Register | Section 7.4.5.111 |

<!-- image -->

<!-- image -->

Table 7-287. ELM Registers (continued)

| Offset   | Acronym                 | Register Name                    | Section           |
|----------|-------------------------|----------------------------------|-------------------|
| AB4h     | ELM_ERROR_LOCATION_13_2 | ELM_ERROR_LOCATION_13_2 Register | Section 7.4.5.112 |
| AB8h     | ELM_ERROR_LOCATION_14_2 | ELM_ERROR_LOCATION_14_2 Register | Section 7.4.5.113 |
| ABCh     | ELM_ERROR_LOCATION_15_2 | ELM_ERROR_LOCATION_15_2 Register | Section 7.4.5.114 |
| B80h     | ELM_ERROR_LOCATION_0_3  | ELM_ERROR_LOCATION_0_3 Register  | Section 7.4.5.115 |
| B84h     | ELM_ERROR_LOCATION_1_3  | ELM_ERROR_LOCATION_1_3 Register  | Section 7.4.5.116 |
| B88h     | ELM_ERROR_LOCATION_2_3  | ELM_ERROR_LOCATION_2_3 Register  | Section 7.4.5.117 |
| B8Ch     | ELM_ERROR_LOCATION_3_3  | ELM_ERROR_LOCATION_3_3 Register  | Section 7.4.5.118 |
| B90h     | ELM_ERROR_LOCATION_4_3  | ELM_ERROR_LOCATION_4_3 Register  | Section 7.4.5.119 |
| B94h     | ELM_ERROR_LOCATION_5_3  | ELM_ERROR_LOCATION_5_3 Register  | Section 7.4.5.120 |
| B98h     | ELM_ERROR_LOCATION_6_3  | ELM_ERROR_LOCATION_6_3 Register  | Section 7.4.5.121 |
| B9Ch     | ELM_ERROR_LOCATION_7_3  | ELM_ERROR_LOCATION_7_3 Register  | Section 7.4.5.122 |
| BA0h     | ELM_ERROR_LOCATION_8_3  | ELM_ERROR_LOCATION_8_3 Register  | Section 7.4.5.123 |
| BA4h     | ELM_ERROR_LOCATION_9_3  | ELM_ERROR_LOCATION_9_3 Register  | Section 7.4.5.124 |
| BA8h     | ELM_ERROR_LOCATION_10_3 | ELM_ERROR_LOCATION_10_3 Register | Section 7.4.5.125 |
| BACh     | ELM_ERROR_LOCATION_11_3 | ELM_ERROR_LOCATION_11_3 Register | Section 7.4.5.126 |
| BB0h     | ELM_ERROR_LOCATION_12_3 | ELM_ERROR_LOCATION_12_3 Register | Section 7.4.5.127 |
| BB4h     | ELM_ERROR_LOCATION_13_3 | ELM_ERROR_LOCATION_13_3 Register | Section 7.4.5.128 |
| BB8h     | ELM_ERROR_LOCATION_14_3 | ELM_ERROR_LOCATION_14_3 Register | Section 7.4.5.129 |
| BBCh     | ELM_ERROR_LOCATION_15_3 | ELM_ERROR_LOCATION_15_3 Register | Section 7.4.5.130 |
| B00h     | ELM_LOCATION_STATUS_3   | ELM_LOCATION_STATUS_3 Register   | Section 7.4.5.131 |
| C80h     | ELM_ERROR_LOCATION_0_4  | ELM_ERROR_LOCATION_0_4 Register  | Section 7.4.5.132 |
| C84h     | ELM_ERROR_LOCATION_1_4  | ELM_ERROR_LOCATION_1_4 Register  | Section 7.4.5.133 |
| C88h     | ELM_ERROR_LOCATION_2_4  | ELM_ERROR_LOCATION_2_4 Register  | Section 7.4.5.134 |
| C8Ch     | ELM_ERROR_LOCATION_3_4  | ELM_ERROR_LOCATION_3_4 Register  | Section 7.4.5.135 |
| C90h     | ELM_ERROR_LOCATION_4_4  | ELM_ERROR_LOCATION_4_4 Register  | Section 7.4.5.136 |
| C94h     | ELM_ERROR_LOCATION_5_4  | ELM_ERROR_LOCATION_5_4 Register  | Section 7.4.5.137 |
| C98h     | ELM_ERROR_LOCATION_6_4  | ELM_ERROR_LOCATION_6_4 Register  | Section 7.4.5.138 |
| C9Ch     | ELM_ERROR_LOCATION_7_4  | ELM_ERROR_LOCATION_7_4 Register  | Section 7.4.5.139 |
| CA0h     | ELM_ERROR_LOCATION_8_4  | ELM_ERROR_LOCATION_8_4 Register  | Section 7.4.5.140 |
| CA4h     | ELM_ERROR_LOCATION_9_4  | ELM_ERROR_LOCATION_9_4 Register  | Section 7.4.5.141 |
| CA8h     | ELM_ERROR_LOCATION_10_4 | ELM_ERROR_LOCATION_10_4 Register | Section 7.4.5.142 |
| CACh     | ELM_ERROR_LOCATION_11_4 | ELM_ERROR_LOCATION_11_4 Register | Section 7.4.5.143 |
| CB0h     | ELM_ERROR_LOCATION_12_4 | ELM_ERROR_LOCATION_12_4 Register | Section 7.4.5.144 |
| CB4h     | ELM_ERROR_LOCATION_13_4 | ELM_ERROR_LOCATION_13_4 Register | Section 7.4.5.145 |
| CB8h     | ELM_ERROR_LOCATION_14_4 | ELM_ERROR_LOCATION_14_4 Register | Section 7.4.5.146 |
| CBCh     | ELM_ERROR_LOCATION_15_4 | ELM_ERROR_LOCATION_15_4 Register | Section 7.4.5.147 |
| D80h     | ELM_ERROR_LOCATION_0_5  | ELM_ERROR_LOCATION_0_5 Register  | Section 7.4.5.148 |
| D84h     | ELM_ERROR_LOCATION_1_5  | ELM_ERROR_LOCATION_1_5 Register  | Section 7.4.5.149 |
| D88h     | ELM_ERROR_LOCATION_2_5  | ELM_ERROR_LOCATION_2_5 Register  | Section 7.4.5.150 |
| D8Ch     | ELM_ERROR_LOCATION_3_5  | ELM_ERROR_LOCATION_3_5 Register  | Section 7.4.5.151 |
| D90h     | ELM_ERROR_LOCATION_4_5  | ELM_ERROR_LOCATION_4_5 Register  | Section 7.4.5.152 |
| D94h     | ELM_ERROR_LOCATION_5_5  | ELM_ERROR_LOCATION_5_5 Register  | Section 7.4.5.153 |
| D98h     | ELM_ERROR_LOCATION_6_5  | ELM_ERROR_LOCATION_6_5 Register  | Section 7.4.5.154 |
| D9Ch     | ELM_ERROR_LOCATION_7_5  | ELM_ERROR_LOCATION_7_5 Register  | Section 7.4.5.155 |
| DA0h     | ELM_ERROR_LOCATION_8_5  | ELM_ERROR_LOCATION_8_5 Register  | Section 7.4.5.156 |
| DA8h     | ELM_ERROR_LOCATION_10_5 | ELM_ERROR_LOCATION_10_5          | Section 7.4.5.158 |
|          |                         | Register                         |                   |

995

Memory Subsystem

Table 7-287. ELM Registers (continued)

| Offset   | Acronym                 | Register Name                    | Section           |
|----------|-------------------------|----------------------------------|-------------------|
| DACh     | ELM_ERROR_LOCATION_11_5 | ELM_ERROR_LOCATION_11_5 Register | Section 7.4.5.159 |
| DB0h     | ELM_ERROR_LOCATION_12_5 | ELM_ERROR_LOCATION_12_5 Register | Section 7.4.5.160 |
| DB4h     | ELM_ERROR_LOCATION_13_5 | ELM_ERROR_LOCATION_13_5 Register | Section 7.4.5.161 |
| DB8h     | ELM_ERROR_LOCATION_14_5 | ELM_ERROR_LOCATION_14_5 Register | Section 7.4.5.162 |
| DBCh     | ELM_ERROR_LOCATION_15_5 | ELM_ERROR_LOCATION_15_5 Register | Section 7.4.5.163 |
| C00h     | ELM_LOCATION_STATUS_4   | ELM_LOCATION_STATUS_4 Register   | Section 7.4.5.164 |
| E80h     | ELM_ERROR_LOCATION_0_6  | ELM_ERROR_LOCATION_0_6 Register  | Section 7.4.5.165 |
| E84h     | ELM_ERROR_LOCATION_1_6  | ELM_ERROR_LOCATION_1_6 Register  | Section 7.4.5.166 |
| E88h     | ELM_ERROR_LOCATION_2_6  | ELM_ERROR_LOCATION_2_6 Register  | Section 7.4.5.167 |
| E8Ch     | ELM_ERROR_LOCATION_3_6  | ELM_ERROR_LOCATION_3_6 Register  | Section 7.4.5.168 |
| E90h     | ELM_ERROR_LOCATION_4_6  | ELM_ERROR_LOCATION_4_6 Register  | Section 7.4.5.169 |
| E94h     | ELM_ERROR_LOCATION_5_6  | ELM_ERROR_LOCATION_5_6 Register  | Section 7.4.5.170 |
| E98h     | ELM_ERROR_LOCATION_6_6  | ELM_ERROR_LOCATION_6_6 Register  | Section 7.4.5.171 |
| E9Ch     | ELM_ERROR_LOCATION_7_6  | ELM_ERROR_LOCATION_7_6 Register  | Section 7.4.5.172 |
| EA0h     | ELM_ERROR_LOCATION_8_6  | ELM_ERROR_LOCATION_8_6 Register  | Section 7.4.5.173 |
| EA4h     | ELM_ERROR_LOCATION_9_6  | ELM_ERROR_LOCATION_9_6 Register  | Section 7.4.5.174 |
| EA8h     | ELM_ERROR_LOCATION_10_6 | ELM_ERROR_LOCATION_10_6 Register | Section 7.4.5.175 |
| EACh     | ELM_ERROR_LOCATION_11_6 | ELM_ERROR_LOCATION_11_6 Register | Section 7.4.5.176 |
| EB0h     | ELM_ERROR_LOCATION_12_6 | ELM_ERROR_LOCATION_12_6 Register | Section 7.4.5.177 |
| EB4h     | ELM_ERROR_LOCATION_13_6 | ELM_ERROR_LOCATION_13_6 Register | Section 7.4.5.178 |
| EB8h     | ELM_ERROR_LOCATION_14_6 | ELM_ERROR_LOCATION_14_6 Register | Section 7.4.5.179 |
| EBCh     | ELM_ERROR_LOCATION_15_6 | ELM_ERROR_LOCATION_15_6 Register | Section 7.4.5.180 |
| F80h     | ELM_ERROR_LOCATION_0_7  | ELM_ERROR_LOCATION_0_7 Register  | Section 7.4.5.181 |
| F84h     | ELM_ERROR_LOCATION_1_7  | ELM_ERROR_LOCATION_1_7 Register  | Section 7.4.5.182 |
| F88h     | ELM_ERROR_LOCATION_2_7  | ELM_ERROR_LOCATION_2_7 Register  | Section 7.4.5.183 |
| F8Ch     | ELM_ERROR_LOCATION_3_7  | ELM_ERROR_LOCATION_3_7 Register  | Section 7.4.5.184 |
| F90h     | ELM_ERROR_LOCATION_4_7  | ELM_ERROR_LOCATION_4_7 Register  | Section 7.4.5.185 |
| F94h     | ELM_ERROR_LOCATION_5_7  | ELM_ERROR_LOCATION_5_7 Register  | Section 7.4.5.186 |
| F98h     | ELM_ERROR_LOCATION_6_7  | ELM_ERROR_LOCATION_6_7 Register  | Section 7.4.5.187 |
| F9Ch     | ELM_ERROR_LOCATION_7_7  | ELM_ERROR_LOCATION_7_7 Register  | Section 7.4.5.188 |
| FA0h     | ELM_ERROR_LOCATION_8_7  | ELM_ERROR_LOCATION_8_7 Register  | Section 7.4.5.189 |
| FA4h     | ELM_ERROR_LOCATION_9_7  | ELM_ERROR_LOCATION_9_7 Register  | Section 7.4.5.190 |
| FA8h     | ELM_ERROR_LOCATION_10_7 | ELM_ERROR_LOCATION_10_7 Register | Section 7.4.5.191 |
| FACh     | ELM_ERROR_LOCATION_11_7 | ELM_ERROR_LOCATION_11_7 Register | Section 7.4.5.192 |
| FB0h     | ELM_ERROR_LOCATION_12_7 | ELM_ERROR_LOCATION_12_7 Register | Section 7.4.5.193 |
| FB4h     | ELM_ERROR_LOCATION_13_7 | ELM_ERROR_LOCATION_13_7 Register | Section 7.4.5.194 |
| FB8h     | ELM_ERROR_LOCATION_14_7 | ELM_ERROR_LOCATION_14_7 Register | Section 7.4.5.195 |
| FBCh     | ELM_ERROR_LOCATION_15_7 | ELM_ERROR_LOCATION_15_7 Register | Section 7.4.5.196 |
| D00h     | ELM_LOCATION_STATUS_5   | ELM_LOCATION_STATUS_5 Register   | Section 7.4.5.197 |
| E00h     | ELM_LOCATION_STATUS_6   | ELM_LOCATION_STATUS_6 Register   | Section 7.4.5.198 |
| F00h     | ELM_LOCATION_STATUS_7   | ELM_LOCATION_STATUS_7 Register   | Section 7.4.5.199 |

<!-- image -->

<!-- image -->

## 7.4.5.1 ELM\_REVISION Register (offset = 0h) [reset = 0h]

ELM\_REVISION is shown in Figure 7-256 and described in Table 7-288.

This register contains the IP revision code.

## Figure 7-256. ELM\_REVISION Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 REVISION   |
|------|------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-288. ELM\_REVISION Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                         |
|-------|----------|--------|---------|-------------------------------------|
| 31-0  | REVISION | R      | 0h      | IP Revision, value 0 to FFFF FFFFh. |

## 7.4.5.2 ELM\_SYSCONFIG Register (offset = 10h) [reset = 11h]

ELM\_SYSCONFIG is shown in Figure 7-257 and described in Table 7-289.

This register allows controlling various parameters of the OCP interface.

## Figure 7-257. ELM\_SYSCONFIG Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24                 |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|--------------------|
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED           |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h               |
| 23          | 22          | 21          | 20          | 19          | 18          | 17          | 16                 |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED           |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h               |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8                  |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | CLOCKACTIVI TYOCPz |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h        |
| 7           | 6           | 5           | 4           | 3           | 2           | 1           | 0                  |
| RESERVED    | RESERVED    | RESERVED    | SIDLEMODE   | SIDLEMODE   | RESERVED    | SOFTRESET   | AUTOGATING         |
| R-0h        | R-0h        | R-0h        | R/W-2h      | R/W-2h      | R-0h        | R/W-0h      | R/W-1h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-289. ELM\_SYSCONFIG Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                         |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED          | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                     |
| 8     | CLOCKACTIVITYOCPz | R/W    | 0h      | OCP Clock activity when module is in IDLE mode (during wake up mode period). 0h = OCP Clock can be switch-off 1h = OCP Clock is maintained during wake up period                                                                                                                                                                                    |
| 7-5   | RESERVED          | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                     |
| 4-3   | SIDLEMODE         | R/W    | 2h      | Slave interface power management (IDLE req/ack control). 0h = FORCE Idle. IDLE request is acknowledged unconditionally and immediately. (Default Dumb mode for safety) 1h = NO idle. IDLE request is never acknowledged. 2h = SMART Idle. The acknowledgment to an IDLE request is given based on the internal activity. 3h = Reserved - do not use |
| 2     | RESERVED          | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                     |
| 1     | SOFTRESET         | R/W    | 0h      | Module software reset. This bit is automatically reset by hardware (During reads, it always returns 0.). It has same effect as the OCP hardware reset. 0h = Normal mode. 1h = Start soft reset sequence.                                                                                                                                            |
| 0     | AUTOGATING        | R/W    | 1h      | Internal OCP clock gating strategy. (No module visible impact other than saving power.) 0h = OCP clock is free-running. 1h = Automatic internal OCP clock gating strategy is applied based on the OCP interface activity.                                                                                                                           |

<!-- image -->

<!-- image -->

## 7.4.5.3 ELM\_SYSSTATUS Register (offset = 14h) [reset = 0h]

ELM\_SYSSTATUS is shown in Figure 7-258 and described in Table 7-290.

## Figure 7-258. ELM\_SYSSTATUS Register

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

## Table 7-290. ELM\_SYSSTATUS Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                      |
|-------|-----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                  |
| 0     | RESETDONE | R      | 0h      | Internal reset monitoring (OCP domain). Undefined since: From hardware perspective, the reset state is 0. From software user perspective, when the accessible module is 1. 0h = Reset is on-going 1h = Reset is done (completed) |

## 7.4.5.4 ELM\_IRQSTATUS Register (offset = 18h) [reset = 0h]

ELM\_IRQSTATUS is shown in Figure 7-259 and described in Table 7-291.

This register doubles as a status register for the error-location processes.

## Figure 7-259. ELM\_IRQSTATUS Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 23          | 22          | 21          | 20          | 19          | 18          | 17          | 16          |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | PAGE_VALID  |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R/W-0h      |
| 7           | 6           | 5           | 4           | 3           | 2           | 1           | 0           |
| LOC_VALID_7 | LOC_VALID_6 | LOC_VALID_5 | LOC_VALID_4 | LOC_VALID_3 | LOC_VALID_2 | LOC_VALID_1 | LOC_VALID_0 |
| R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-291. ELM\_IRQSTATUS Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                       |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                   |
| 8     | PAGE_VALID  | R/W    | 0h      | Error-location status for a full page, based on the mask definition. 0h (W) = Write: No effect. 0h (R) = Read: Error locations invalid for all polynomials enabled in the ECC_INTERRUPT_MASK register. 1h (W) = Write: Clear interrupt. 1h (R) = Read: All error locations valid. |
| 7     | LOC_VALID_7 | R/W    | 0h      | Error-location status for syndrome polynomial 7. 0h (W) = Write: No effect. 0h (R) = Read: No syndrome processed or process in progress. 1h (W) = Write: Clear interrupt. 1h (R) = Read: Error-location process completed.                                                        |
| 6     | LOC_VALID_6 | R/W    | 0h      | Error-location status for syndrome polynomial 6. 0h (W) = Write: No effect. 0h (R) = Read: No syndrome processed or process in progress. 1h (W) = Write: Clear interrupt. 1h (R) = Read: Error-location process completed.                                                        |
| 5     | LOC_VALID_5 | R/W    | 0h      | Error-location status for syndrome polynomial 5. 0h (W) = Write: No effect. 0h (R) = Read: No syndrome processed or process in progress. 1h (W) = Write: Clear interrupt. 1h (R) = Read: Error-location process completed.                                                        |
| 4     | LOC_VALID_4 | R/W    | 0h      | Error-location status for syndrome polynomial 4. 0h (W) = Write: No effect. 0h (R) = Read: No syndrome processed or process in progress. 1h (W) = Write: Clear interrupt. 1h (R) = Read: Error-location process completed.                                                        |

<!-- image -->

<!-- image -->

## Table 7-291. ELM\_IRQSTATUS Register Field Descriptions (continued)

|   Bit | Field       | Type   | Reset   | Description                                                                                                                                                                                                                |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | LOC_VALID_3 | R/W    | 0h      | Error-location status for syndrome polynomial 3. 0h (W) = Write: No effect. 0h (R) = Read: No syndrome processed or process in progress. 1h (W) = Write: Clear interrupt. 1h (R) = Read: Error-location process completed. |
|     2 | LOC_VALID_2 | R/W    | 0h      | Error-location status for syndrome polynomial 2. 0h (W) = Write: No effect. 0h (R) = Read: No syndrome processed or process in progress. 1h (W) = Write: Clear interrupt. 1h (R) = Read: Error-location process completed. |
|     1 | LOC_VALID_1 | R/W    | 0h      | Error-location status for syndrome polynomial 1. 0h (W) = Write: No effect. 0h (R) = Read: No syndrome processed or process in progress. 1h (W) = Write: Clear interrupt. 1h (R) = Read: Error-location process completed. |
|     0 | LOC_VALID_0 | R/W    | 0h      | Error-location status for syndrome polynomial 0. 0h (W) = No effect. 0h (R) = No syndrome processed or process in progress. 1h (W) = Clear interrupt. 1h (R) = Error-location process completed.                           |

## 7.4.5.5 ELM\_IRQENABLE Register (offset = 1Ch) [reset = 0h]

ELM\_IRQENABLE is shown in Figure 7-260 and described in Table 7-292.

Figure 7-260. ELM\_IRQENABLE Register

| 31               | 30               | 29               | 28               | 27               | 26               | 25               | 24               |
|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|
| RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         |
| R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             |
| 23               | 22               | 21               | 20               | 19               | 18               | 17               | 16               |
| RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         |
| R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             |
| 15               | 14               | 13               | 12               | 11               | 10               | 9                | 8                |
| RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | RESERVED         | PAGE_MASK        |
| R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R-0h             | R/W-0h           |
| 7                | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
| LOCATION_M ASK_7 | LOCATION_M ASK_6 | LOCATION_M ASK_5 | LOCATION_M ASK_4 | LOCATION_M ASK_3 | LOCATION_M ASK_2 | LOCATION_M ASK_1 | LOCATION_M ASK_0 |
| R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-292. ELM\_IRQENABLE Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                 |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED        | R      | 0h      |                                                                                                             |
| 8     | PAGE_MASK       | R/W    | 0h      | Page interrupt mask bit 0h = Disable interrupt. 1h = Enable interrupt.                                      |
| 7     | LOCATION_MASK_7 | R/W    | 0h      | Error-location interrupt mask bit for syndrome polynomial 7. 0h = Disable interrupt. 1h = Enable interrupt. |
| 6     | LOCATION_MASK_6 | R/W    | 0h      | Error-location interrupt mask bit for syndrome polynomial 6. 0h = Disable interrupt. 1h = Enable interrupt. |
| 5     | LOCATION_MASK_5 | R/W    | 0h      | Error-location interrupt mask bit for syndrome polynomial 5. 0h = Disable interrupt. 1h = Enable interrupt. |
| 4     | LOCATION_MASK_4 | R/W    | 0h      | Error-location interrupt mask bit for syndrome polynomial 4. 0h = Disable interrupt. 1h = Enable interrupt. |
| 3     | LOCATION_MASK_3 | R/W    | 0h      | Error-location interrupt mask bit for syndrome polynomial 3. 0h = Disable interrupt. 1h = Enable interrupt. |
| 2     | LOCATION_MASK_2 | R/W    | 0h      | Error-location interrupt mask bit for syndrome polynomial 2. 0h = Disable interrupt. 1h = Enable interrupt. |
| 1     | LOCATION_MASK_1 | R/W    | 0h      | Error-location interrupt mask bit for syndrome polynomial 1. 0h = Disable interrupt. 1h = Enable interrupt. |
| 0     | LOCATION_MASK_0 | R/W    | 0h      | Error-location interrupt mask bit for syndrome polynomial 0. 0h = Disable interrupt. 1h = Enable interrupt. |

<!-- image -->

<!-- image -->

## 7.4.5.6 ELM\_LOCATION\_CONFIG Register (offset = 20h) [reset = 0h]

ELM\_LOCATION\_CONFIG is shown in Figure 7-261 and described in Table 7-293.

## Figure 7-261. ELM\_LOCATION\_CONFIG Register

| 31       | 30       | 29       | 28       | 27       | 26            | 25       | 24       |
|----------|----------|----------|----------|----------|---------------|----------|----------|
|          |          | RESERVED |          |          |               | ECC_SIZE |          |
|          |          | R-0h     |          |          |               | R/W-0h   |          |
| 23       | 22       | 21       | 20       | 19       | 18            | 17       | 16       |
| ECC_SIZE | ECC_SIZE | ECC_SIZE | ECC_SIZE | ECC_SIZE | ECC_SIZE      | ECC_SIZE | ECC_SIZE |
| 14       | 14       | 14       | 14       | 14       | 14            | 14       | 14       |
| 15 13    | 12       | 11 R-0h  | 10       | 9        | 8             | RESERVED | 6        |
| 5        | 5        | 5        | 5        | 5        | 5             | 5        | 5        |
| 4        | 4        | 4        | 4        | 4        | 4             | 4        | 4        |
| 7 3      | 2        | 1        | 0        | RESERVED | ECC_BCH_LEVEL |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-293. ELM\_LOCATION\_CONFIG Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-27 | RESERVED      | R      | 0h      |                                                                                                                                   |
| 26-16 | ECC_SIZE      | R/W    | 0h      | Maximum size of the buffers for which the error-location engine is used, in number of nibbles (4 bits entities), value 0 to 7FFh. |
| 15-2  | RESERVED      | R      | 0h      |                                                                                                                                   |
| 1-0   | ECC_BCH_LEVEL | R/W    | 0h      | Error correction level. 0h = 4 bits. 1h = 8 bits. 2h = 16 bits. 3h = Reserved.                                                    |

## 7.4.5.7 ELM\_PAGE\_CTRL Register (offset = 80h) [reset = 0h]

ELM\_PAGE\_CTRL is shown in Figure 7-262 and described in Table 7-294.

## Figure 7-262. ELM\_PAGE\_CTRL Register

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
| SECTOR_7 | SECTOR_6 | SECTOR_5 | SECTOR_4 | SECTOR_3 | SECTOR_2 | SECTOR_1 | SECTOR_0 |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-294. ELM\_PAGE\_CTRL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                   |
| 7     | SECTOR_7 | R/W    | 0h      | Set to 1 if syndrome polynomial 7 is part of the page in page mode. Must be 0 in continuous mode. |
| 6     | SECTOR_6 | R/W    | 0h      | Set to 1 if syndrome polynomial 6 is part of the page in page mode. Must be 0 in continuous mode. |
| 5     | SECTOR_5 | R/W    | 0h      | Set to 1 if syndrome polynomial 5 is part of the page in page mode. Must be 0 in continuous mode. |
| 4     | SECTOR_4 | R/W    | 0h      | Set to 1 if syndrome polynomial 4 is part of the page in page mode. Must be 0 in continuous mode. |
| 3     | SECTOR_3 | R/W    | 0h      | Set to 1 if syndrome polynomial 3 is part of the page in page mode. Must be 0 in continuous mode. |
| 2     | SECTOR_2 | R/W    | 0h      | Set to 1 if syndrome polynomial 2 is part of the page in page mode. Must be 0 in continuous mode. |
| 1     | SECTOR_1 | R/W    | 0h      | Set to 1 if syndrome polynomial 1 is part of the page in page mode. Must be 0 in continuous mode. |
| 0     | SECTOR_0 | R/W    | 0h      | Set to 1 if syndrome polynomial 0 is part of the page in page mode. Must be 0 in continuous mode. |

<!-- image -->

<!-- image -->

## 7.4.5.8 ELM\_SYNDROME\_FRAGMENT\_0\_0 Register (offset = 400h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_0\_0 is shown in Figure 7-263 and described in Table 7-295.

## Figure 7-263. ELM\_SYNDROME\_FRAGMENT\_0\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_0   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-295. ELM\_SYNDROME\_FRAGMENT\_0\_0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                   |
|-------|------------|--------|---------|-----------------------------------------------|
| 31-0  | SYNDROME_0 | R/W    | 0h      | Syndrome bits 0 to 31, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.9 ELM\_SYNDROME\_FRAGMENT\_1\_0 Register (offset = 404h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_1\_0 is shown in Figure 7-264 and described in Table 7-296.

## Figure 7-264. ELM\_SYNDROME\_FRAGMENT\_1\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_1   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-296. ELM\_SYNDROME\_FRAGMENT\_1\_0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_1 | R/W    | 0h      | Syndrome bits 32 to 63, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.10 ELM\_SYNDROME\_FRAGMENT\_2\_0 Register (offset = 408h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_2\_0 is shown in Figure 7-265 and described in Table 7-297.

## Figure 7-265. ELM\_SYNDROME\_FRAGMENT\_2\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_2   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-297. ELM\_SYNDROME\_FRAGMENT\_2\_0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_2 | R/W    | 0h      | Syndrome bits 64 to 95, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.11 ELM\_SYNDROME\_FRAGMENT\_3\_0 Register (offset = 40Ch) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_3\_0 is shown in Figure 7-266 and described in Table 7-298.

## Figure 7-266. ELM\_SYNDROME\_FRAGMENT\_3\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_3   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-298. ELM\_SYNDROME\_FRAGMENT\_3\_0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                     |
|-------|------------|--------|---------|-------------------------------------------------|
| 31-0  | SYNDROME_3 | R/W    | 0h      | Syndrome bits 96 to 127, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.12 ELM\_SYNDROME\_FRAGMENT\_4\_0 Register (offset = 410h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_4\_0 is shown in Figure 7-267 and described in Table 7-299.

## Figure 7-267. ELM\_SYNDROME\_FRAGMENT\_4\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_4   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-299. ELM\_SYNDROME\_FRAGMENT\_4\_0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_4 | R/W    | 0h      | Syndrome bits 128 to 159, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.13 ELM\_SYNDROME\_FRAGMENT\_5\_0 Register (offset = 414h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_5\_0 is shown in Figure 7-268 and described in Table 7-300.

## Figure 7-268. ELM\_SYNDROME\_FRAGMENT\_5\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_5   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-300. ELM\_SYNDROME\_FRAGMENT\_5\_0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_5 | R/W    | 0h      | Syndrome bits 160 to 191, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.14 ELM\_SYNDROME\_FRAGMENT\_6\_0 Register (offset = 418h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_6\_0 is shown in Figure 7-269 and described in Table 7-301.

## Figure 7-269. ELM\_SYNDROME\_FRAGMENT\_6\_0 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24              |
|------------|------------|------------|------------|------------|------------|------------|-----------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED        |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h            |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16              |
|            |            |            | RESERVED   |            |            |            | SYNDROME_V ALID |
|            |            |            | R-0h       |            |            |            | R/W-0h          |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-301. ELM\_SYNDROME\_FRAGMENT\_6\_0 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                 |
|-------|----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED       | R      | 0h      |                                                                                                                             |
| 16    | SYNDROME_VALID | R/W    | 0h      | Syndrome valid bit. 0h = This syndrome polynomial should not be processed. 1h = This syndrome polynomial must be processed. |
| 15-0  | SYNDROME_6     | R/W    | 0h      | Syndrome bits 192 to 207, value 0 to FFFFh.                                                                                 |

<!-- image -->

## 7.4.5.15 ELM\_SYNDROME\_FRAGMENT\_0\_1 Register (offset = 440h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_0\_1 is shown in Figure 7-270 and described in Table 7-302.

## Figure 7-270. ELM\_SYNDROME\_FRAGMENT\_0\_1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_0   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-302. ELM\_SYNDROME\_FRAGMENT\_0\_1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                   |
|-------|------------|--------|---------|-----------------------------------------------|
| 31-0  | SYNDROME_0 | R/W    | 0h      | Syndrome bits 0 to 31, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.16 ELM\_SYNDROME\_FRAGMENT\_1\_1 Register (offset = 444h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_1\_1 is shown in Figure 7-271 and described in Table 7-303.

## Figure 7-271. ELM\_SYNDROME\_FRAGMENT\_1\_1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_1   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-303. ELM\_SYNDROME\_FRAGMENT\_1\_1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_1 | R/W    | 0h      | Syndrome bits 32 to 63, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.17 ELM\_SYNDROME\_FRAGMENT\_2\_1 Register (offset = 448h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_2\_1 is shown in Figure 7-272 and described in Table 7-304.

## Figure 7-272. ELM\_SYNDROME\_FRAGMENT\_2\_1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_2   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-304. ELM\_SYNDROME\_FRAGMENT\_2\_1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_2 | R/W    | 0h      | Syndrome bits 64 to 95, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.18 ELM\_SYNDROME\_FRAGMENT\_3\_1 Register (offset = 44Ch) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_3\_1 is shown in Figure 7-273 and described in Table 7-305.

## Figure 7-273. ELM\_SYNDROME\_FRAGMENT\_3\_1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_3   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-305. ELM\_SYNDROME\_FRAGMENT\_3\_1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                     |
|-------|------------|--------|---------|-------------------------------------------------|
| 31-0  | SYNDROME_3 | R/W    | 0h      | Syndrome bits 96 to 127, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.19 ELM\_SYNDROME\_FRAGMENT\_4\_1 Register (offset = 450h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_4\_1 is shown in Figure 7-274 and described in Table 7-306.

## Figure 7-274. ELM\_SYNDROME\_FRAGMENT\_4\_1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_4   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-306. ELM\_SYNDROME\_FRAGMENT\_4\_1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_4 | R/W    | 0h      | Syndrome bits 128 to 159, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.20 ELM\_SYNDROME\_FRAGMENT\_5\_1 Register (offset = 454h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_5\_1 is shown in Figure 7-275 and described in Table 7-307.

## Figure 7-275. ELM\_SYNDROME\_FRAGMENT\_5\_1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_5   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-307. ELM\_SYNDROME\_FRAGMENT\_5\_1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_5 | R/W    | 0h      | Syndrome bits 160 to 191, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.21 ELM\_SYNDROME\_FRAGMENT\_6\_1 Register (offset = 458h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_6\_1 is shown in Figure 7-276 and described in Table 7-308.

Figure 7-276. ELM\_SYNDROME\_FRAGMENT\_6\_1 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24              |
|------------|------------|------------|------------|------------|------------|------------|-----------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED        |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h            |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16              |
|            |            |            | RESERVED   |            |            |            | SYNDROME_V ALID |
|            |            |            | R-0h       |            |            |            | R/W-0h          |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-308. ELM\_SYNDROME\_FRAGMENT\_6\_1 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                 |
|-------|----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED       | R      | 0h      |                                                                                                                             |
| 16    | SYNDROME_VALID | R/W    | 0h      | Syndrome valid bit. 0h = This syndrome polynomial should not be processed. 1h = This syndrome polynomial must be processed. |
| 15-0  | SYNDROME_6     | R/W    | 0h      | Syndrome bits 192 to 207, value 0 to FFFFh.                                                                                 |

<!-- image -->

## 7.4.5.22 ELM\_SYNDROME\_FRAGMENT\_0\_2 Register (offset = 480h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_0\_2 is shown in Figure 7-277 and described in Table 7-309.

## Figure 7-277. ELM\_SYNDROME\_FRAGMENT\_0\_2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_0   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-309. ELM\_SYNDROME\_FRAGMENT\_0\_2 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                   |
|-------|------------|--------|---------|-----------------------------------------------|
| 31-0  | SYNDROME_0 | R/W    | 0h      | Syndrome bits 0 to 31, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.23 ELM\_SYNDROME\_FRAGMENT\_1\_2 Register (offset = 484h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_1\_2 is shown in Figure 7-278 and described in Table 7-310.

## Figure 7-278. ELM\_SYNDROME\_FRAGMENT\_1\_2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_1   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-310. ELM\_SYNDROME\_FRAGMENT\_1\_2 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_1 | R/W    | 0h      | Syndrome bits 32 to 63, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.24 ELM\_SYNDROME\_FRAGMENT\_2\_2 Register (offset = 488h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_2\_2 is shown in Figure 7-279 and described in Table 7-311.

## Figure 7-279. ELM\_SYNDROME\_FRAGMENT\_2\_2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_2   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-311. ELM\_SYNDROME\_FRAGMENT\_2\_2 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_2 | R/W    | 0h      | Syndrome bits 64 to 95, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.25 ELM\_SYNDROME\_FRAGMENT\_3\_2 Register (offset = 48Ch) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_3\_2 is shown in Figure 7-280 and described in Table 7-312.

## Figure 7-280. ELM\_SYNDROME\_FRAGMENT\_3\_2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_3   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-312. ELM\_SYNDROME\_FRAGMENT\_3\_2 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                     |
|-------|------------|--------|---------|-------------------------------------------------|
| 31-0  | SYNDROME_3 | R/W    | 0h      | Syndrome bits 96 to 127, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.26 ELM\_SYNDROME\_FRAGMENT\_4\_2 Register (offset = 490h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_4\_2 is shown in Figure 7-281 and described in Table 7-313.

## Figure 7-281. ELM\_SYNDROME\_FRAGMENT\_4\_2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_4   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-313. ELM\_SYNDROME\_FRAGMENT\_4\_2 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_4 | R/W    | 0h      | Syndrome bits 128 to 159, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.27 ELM\_SYNDROME\_FRAGMENT\_5\_2 Register (offset = 494h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_5\_2 is shown in Figure 7-282 and described in Table 7-314.

## Figure 7-282. ELM\_SYNDROME\_FRAGMENT\_5\_2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_5   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-314. ELM\_SYNDROME\_FRAGMENT\_5\_2 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_5 | R/W    | 0h      | Syndrome bits 160 to 191, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.28 ELM\_SYNDROME\_FRAGMENT\_6\_2 Register (offset = 498h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_6\_2 is shown in Figure 7-283 and described in Table 7-315.

## Figure 7-283. ELM\_SYNDROME\_FRAGMENT\_6\_2 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24              |
|------------|------------|------------|------------|------------|------------|------------|-----------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED        |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h            |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16              |
|            |            |            | RESERVED   |            |            |            | SYNDROME_V ALID |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R/W-0h          |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-315. ELM\_SYNDROME\_FRAGMENT\_6\_2 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                 |
|-------|----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED       | R      | 0h      |                                                                                                                             |
| 16    | SYNDROME_VALID | R/W    | 0h      | Syndrome valid bit. 0h = This syndrome polynomial should not be processed. 1h = This syndrome polynomial must be processed. |
| 15-0  | SYNDROME_6     | R/W    | 0h      | Syndrome bits 192 to 207, value 0 to FFFFh.                                                                                 |

<!-- image -->

## 7.4.5.29 ELM\_SYNDROME\_FRAGMENT\_0\_3 Register (offset = 4C0h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_0\_3 is shown in Figure 7-284 and described in Table 7-316.

## Figure 7-284. ELM\_SYNDROME\_FRAGMENT\_0\_3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_0   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-316. ELM\_SYNDROME\_FRAGMENT\_0\_3 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                   |
|-------|------------|--------|---------|-----------------------------------------------|
| 31-0  | SYNDROME_0 | R/W    | 0h      | Syndrome bits 0 to 31, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.30 ELM\_SYNDROME\_FRAGMENT\_1\_3 Register (offset = 4C4h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_1\_3 is shown in Figure 7-285 and described in Table 7-317.

## Figure 7-285. ELM\_SYNDROME\_FRAGMENT\_1\_3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_1   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-317. ELM\_SYNDROME\_FRAGMENT\_1\_3 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_1 | R/W    | 0h      | Syndrome bits 32 to 63, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.31 ELM\_SYNDROME\_FRAGMENT\_2\_3 Register (offset = 4C8h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_2\_3 is shown in Figure 7-286 and described in Table 7-318.

## Figure 7-286. ELM\_SYNDROME\_FRAGMENT\_2\_3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_2   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-318. ELM\_SYNDROME\_FRAGMENT\_2\_3 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_2 | R/W    | 0h      | Syndrome bits 64 to 95, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.32 ELM\_SYNDROME\_FRAGMENT\_3\_3 Register (offset = 4CCh) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_3\_3 is shown in Figure 7-287 and described in Table 7-319.

## Figure 7-287. ELM\_SYNDROME\_FRAGMENT\_3\_3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_3   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-319. ELM\_SYNDROME\_FRAGMENT\_3\_3 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                     |
|-------|------------|--------|---------|-------------------------------------------------|
| 31-0  | SYNDROME_3 | R/W    | 0h      | Syndrome bits 96 to 127, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.33 ELM\_SYNDROME\_FRAGMENT\_4\_3 Register (offset = 4D0h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_4\_3 is shown in Figure 7-288 and described in Table 7-320.

## Figure 7-288. ELM\_SYNDROME\_FRAGMENT\_4\_3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_4   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-320. ELM\_SYNDROME\_FRAGMENT\_4\_3 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_4 | R/W    | 0h      | Syndrome bits 128 to 159, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.34 ELM\_SYNDROME\_FRAGMENT\_5\_3 Register (offset = 4D4h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_5\_3 is shown in Figure 7-289 and described in Table 7-321.

## Figure 7-289. ELM\_SYNDROME\_FRAGMENT\_5\_3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_5   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-321. ELM\_SYNDROME\_FRAGMENT\_5\_3 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_5 | R/W    | 0h      | Syndrome bits 160 to 191, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.35 ELM\_SYNDROME\_FRAGMENT\_6\_3 Register (offset = 4D8h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_6\_3 is shown in Figure 7-290 and described in Table 7-322.

Figure 7-290. ELM\_SYNDROME\_FRAGMENT\_6\_3 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24              |
|------------|------------|------------|------------|------------|------------|------------|-----------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED        |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h            |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16              |
|            |            |            | RESERVED   |            |            |            | SYNDROME_V ALID |
|            |            |            | R-0h       |            |            |            | R/W-0h          |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 7-322. ELM\_SYNDROME\_FRAGMENT\_6\_3 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                 |
|-------|----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED       | R      | 0h      |                                                                                                                             |
| 16    | SYNDROME_VALID | R/W    | 0h      | Syndrome valid bit. 0h = This syndrome polynomial should not be processed. 1h = This syndrome polynomial must be processed. |
| 15-0  | SYNDROME_6     | R/W    | 0h      | Syndrome bits 192 to 207, value 0 to FFFFh.                                                                                 |

<!-- image -->

## 7.4.5.36 ELM\_SYNDROME\_FRAGMENT\_0\_4 Register (offset = 500h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_0\_4 is shown in Figure 7-291 and described in Table 7-323.

## Figure 7-291. ELM\_SYNDROME\_FRAGMENT\_0\_4 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_0   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-323. ELM\_SYNDROME\_FRAGMENT\_0\_4 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                   |
|-------|------------|--------|---------|-----------------------------------------------|
| 31-0  | SYNDROME_0 | R/W    | 0h      | Syndrome bits 0 to 31, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.37 ELM\_SYNDROME\_FRAGMENT\_1\_4 Register (offset = 504h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_1\_4 is shown in Figure 7-292 and described in Table 7-324.

## Figure 7-292. ELM\_SYNDROME\_FRAGMENT\_1\_4 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_1   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-324. ELM\_SYNDROME\_FRAGMENT\_1\_4 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_1 | R/W    | 0h      | Syndrome bits 32 to 63, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.38 ELM\_SYNDROME\_FRAGMENT\_2\_4 Register (offset = 508h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_2\_4 is shown in Figure 7-293 and described in Table 7-325.

## Figure 7-293. ELM\_SYNDROME\_FRAGMENT\_2\_4 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_2   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-325. ELM\_SYNDROME\_FRAGMENT\_2\_4 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_2 | R/W    | 0h      | Syndrome bits 64 to 95, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.39 ELM\_SYNDROME\_FRAGMENT\_3\_4 Register (offset = 50Ch) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_3\_4 is shown in Figure 7-294 and described in Table 7-326.

## Figure 7-294. ELM\_SYNDROME\_FRAGMENT\_3\_4 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_3   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-326. ELM\_SYNDROME\_FRAGMENT\_3\_4 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                     |
|-------|------------|--------|---------|-------------------------------------------------|
| 31-0  | SYNDROME_3 | R/W    | 0h      | Syndrome bits 96 to 127, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.40 ELM\_SYNDROME\_FRAGMENT\_4\_4 Register (offset = 510h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_4\_4 is shown in Figure 7-295 and described in Table 7-327.

## Figure 7-295. ELM\_SYNDROME\_FRAGMENT\_4\_4 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_4   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-327. ELM\_SYNDROME\_FRAGMENT\_4\_4 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_4 | R/W    | 0h      | Syndrome bits 128 to 159, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.41 ELM\_SYNDROME\_FRAGMENT\_5\_4 Register (offset = 514h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_5\_4 is shown in Figure 7-296 and described in Table 7-328.

## Figure 7-296. ELM\_SYNDROME\_FRAGMENT\_5\_4 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_5   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-328. ELM\_SYNDROME\_FRAGMENT\_5\_4 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_5 | R/W    | 0h      | Syndrome bits 160 to 191, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.42 ELM\_SYNDROME\_FRAGMENT\_6\_4 Register (offset = 518h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_6\_4 is shown in Figure 7-297 and described in Table 7-329.

## Figure 7-297. ELM\_SYNDROME\_FRAGMENT\_6\_4 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24              |
|------------|------------|------------|------------|------------|------------|------------|-----------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED        |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h            |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16              |
|            |            |            | RESERVED   |            |            |            | SYNDROME_V ALID |
|            |            |            | R-0h       |            |            |            | R/W-0h          |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-329. ELM\_SYNDROME\_FRAGMENT\_6\_4 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                 |
|-------|----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED       | R      | 0h      |                                                                                                                             |
| 16    | SYNDROME_VALID | R/W    | 0h      | Syndrome valid bit. 0h = This syndrome polynomial should not be processed. 1h = This syndrome polynomial must be processed. |
| 15-0  | SYNDROME_6     | R/W    | 0h      | Syndrome bits 192 to 207, value 0 to FFFFh.                                                                                 |

<!-- image -->

## 7.4.5.43 ELM\_SYNDROME\_FRAGMENT\_0\_5 Register (offset = 540h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_0\_5 is shown in Figure 7-298 and described in Table 7-330.

## Figure 7-298. ELM\_SYNDROME\_FRAGMENT\_0\_5 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_0   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-330. ELM\_SYNDROME\_FRAGMENT\_0\_5 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                   |
|-------|------------|--------|---------|-----------------------------------------------|
| 31-0  | SYNDROME_0 | R/W    | 0h      | Syndrome bits 0 to 31, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.44 ELM\_SYNDROME\_FRAGMENT\_1\_5 Register (offset = 544h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_1\_5 is shown in Figure 7-299 and described in Table 7-331.

## Figure 7-299. ELM\_SYNDROME\_FRAGMENT\_1\_5 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_1   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-331. ELM\_SYNDROME\_FRAGMENT\_1\_5 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_1 | R/W    | 0h      | Syndrome bits 32 to 63, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.45 ELM\_SYNDROME\_FRAGMENT\_2\_5 Register (offset = 548h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_2\_5 is shown in Figure 7-300 and described in Table 7-332.

## Figure 7-300. ELM\_SYNDROME\_FRAGMENT\_2\_5 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_2   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-332. ELM\_SYNDROME\_FRAGMENT\_2\_5 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_2 | R/W    | 0h      | Syndrome bits 64 to 95, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.46 ELM\_SYNDROME\_FRAGMENT\_3\_5 Register (offset = 54Ch) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_3\_5 is shown in Figure 7-301 and described in Table 7-333.

## Figure 7-301. ELM\_SYNDROME\_FRAGMENT\_3\_5 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_3   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-333. ELM\_SYNDROME\_FRAGMENT\_3\_5 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                     |
|-------|------------|--------|---------|-------------------------------------------------|
| 31-0  | SYNDROME_3 | R/W    | 0h      | Syndrome bits 96 to 127, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.47 ELM\_SYNDROME\_FRAGMENT\_4\_5 Register (offset = 550h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_4\_5 is shown in Figure 7-302 and described in Table 7-334.

## Figure 7-302. ELM\_SYNDROME\_FRAGMENT\_4\_5 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_4   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-334. ELM\_SYNDROME\_FRAGMENT\_4\_5 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_4 | R/W    | 0h      | Syndrome bits 128 to 159, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.48 ELM\_SYNDROME\_FRAGMENT\_5\_5 Register (offset = 554h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_5\_5 is shown in Figure 7-303 and described in Table 7-335.

## Figure 7-303. ELM\_SYNDROME\_FRAGMENT\_5\_5 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_5   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-335. ELM\_SYNDROME\_FRAGMENT\_5\_5 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_5 | R/W    | 0h      | Syndrome bits 160 to 191, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.49 ELM\_SYNDROME\_FRAGMENT\_6\_5 Register (offset = 558h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_6\_5 is shown in Figure 7-304 and described in Table 7-336.

Figure 7-304. ELM\_SYNDROME\_FRAGMENT\_6\_5 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24              |
|------------|------------|------------|------------|------------|------------|------------|-----------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED        |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h            |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16              |
|            |            |            | RESERVED   |            |            |            | SYNDROME_V ALID |
|            |            |            | R-0h       |            |            |            | R/W-0h          |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-336. ELM\_SYNDROME\_FRAGMENT\_6\_5 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                 |
|-------|----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED       | R      | 0h      |                                                                                                                             |
| 16    | SYNDROME_VALID | R/W    | 0h      | Syndrome valid bit. 0h = This syndrome polynomial should not be processed. 1h = This syndrome polynomial must be processed. |
| 15-0  | SYNDROME_6     | R/W    | 0h      | Syndrome bits 192 to 207, value 0 to FFFFh.                                                                                 |

<!-- image -->

## 7.4.5.50 ELM\_SYNDROME\_FRAGMENT\_0\_6 Register (offset = 580h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_0\_6 is shown in Figure 7-305 and described in Table 7-337.

## Figure 7-305. ELM\_SYNDROME\_FRAGMENT\_0\_6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_0   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-337. ELM\_SYNDROME\_FRAGMENT\_0\_6 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                   |
|-------|------------|--------|---------|-----------------------------------------------|
| 31-0  | SYNDROME_0 | R/W    | 0h      | Syndrome bits 0 to 31, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.51 ELM\_SYNDROME\_FRAGMENT\_1\_6 Register (offset = 584h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_1\_6 is shown in Figure 7-306 and described in Table 7-338.

## Figure 7-306. ELM\_SYNDROME\_FRAGMENT\_1\_6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_1   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-338. ELM\_SYNDROME\_FRAGMENT\_1\_6 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_1 | R/W    | 0h      | Syndrome bits 32 to 63, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.52 ELM\_SYNDROME\_FRAGMENT\_2\_6 Register (offset = 588h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_2\_6 is shown in Figure 7-307 and described in Table 7-339.

## Figure 7-307. ELM\_SYNDROME\_FRAGMENT\_2\_6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_2   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-339. ELM\_SYNDROME\_FRAGMENT\_2\_6 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_2 | R/W    | 0h      | Syndrome bits 64 to 95, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.53 ELM\_SYNDROME\_FRAGMENT\_3\_6 Register (offset = 58Ch) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_3\_6 is shown in Figure 7-308 and described in Table 7-340.

## Figure 7-308. ELM\_SYNDROME\_FRAGMENT\_3\_6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_3   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-340. ELM\_SYNDROME\_FRAGMENT\_3\_6 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                     |
|-------|------------|--------|---------|-------------------------------------------------|
| 31-0  | SYNDROME_3 | R/W    | 0h      | Syndrome bits 96 to 127, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.54 ELM\_SYNDROME\_FRAGMENT\_4\_6 Register (offset = 590h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_4\_6 is shown in Figure 7-309 and described in Table 7-341.

## Figure 7-309. ELM\_SYNDROME\_FRAGMENT\_4\_6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_4   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-341. ELM\_SYNDROME\_FRAGMENT\_4\_6 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_4 | R/W    | 0h      | Syndrome bits 128 to 159, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.55 ELM\_SYNDROME\_FRAGMENT\_5\_6 Register (offset = 594h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_5\_6 is shown in Figure 7-310 and described in Table 7-342.

## Figure 7-310. ELM\_SYNDROME\_FRAGMENT\_5\_6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_5   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-342. ELM\_SYNDROME\_FRAGMENT\_5\_6 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_5 | R/W    | 0h      | Syndrome bits 160 to 191, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.56 ELM\_SYNDROME\_FRAGMENT\_6\_6 Register (offset = 598h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_6\_6 is shown in Figure 7-311 and described in Table 7-343.

## Figure 7-311. ELM\_SYNDROME\_FRAGMENT\_6\_6 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24              |
|------------|------------|------------|------------|------------|------------|------------|-----------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED        |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h            |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16              |
|            |            |            | RESERVED   |            |            |            | SYNDROME_V ALID |
|            |            |            | R-0h       |            |            |            | R/W-0h          |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-343. ELM\_SYNDROME\_FRAGMENT\_6\_6 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                 |
|-------|----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED       | R      | 0h      |                                                                                                                             |
| 16    | SYNDROME_VALID | R/W    | 0h      | Syndrome valid bit. 0h = This syndrome polynomial should not be processed. 1h = This syndrome polynomial must be processed. |
| 15-0  | SYNDROME_6     | R/W    | 0h      | Syndrome bits 192 to 207, value 0 to FFFFh.                                                                                 |

<!-- image -->

## 7.4.5.57 ELM\_SYNDROME\_FRAGMENT\_0\_7 Register (offset = 5C0h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_0\_7 is shown in Figure 7-312 and described in Table 7-344.

## Figure 7-312. ELM\_SYNDROME\_FRAGMENT\_0\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_0   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-344. ELM\_SYNDROME\_FRAGMENT\_0\_7 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                   |
|-------|------------|--------|---------|-----------------------------------------------|
| 31-0  | SYNDROME_0 | R/W    | 0h      | Syndrome bits 0 to 31, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.58 ELM\_SYNDROME\_FRAGMENT\_1\_7 Register (offset = 5C4h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_1\_7 is shown in Figure 7-313 and described in Table 7-345.

## Figure 7-313. ELM\_SYNDROME\_FRAGMENT\_1\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_1   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-345. ELM\_SYNDROME\_FRAGMENT\_1\_7 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_1 | R/W    | 0h      | Syndrome bits 32 to 63, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.59 ELM\_SYNDROME\_FRAGMENT\_2\_7 Register (offset = 5C8h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_2\_7 is shown in Figure 7-314 and described in Table 7-346.

## Figure 7-314. ELM\_SYNDROME\_FRAGMENT\_2\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_2   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-346. ELM\_SYNDROME\_FRAGMENT\_2\_7 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                    |
|-------|------------|--------|---------|------------------------------------------------|
| 31-0  | SYNDROME_2 | R/W    | 0h      | Syndrome bits 64 to 95, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.60 ELM\_SYNDROME\_FRAGMENT\_3\_7 Register (offset = 5CCh) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_3\_7 is shown in Figure 7-315 and described in Table 7-347.

## Figure 7-315. ELM\_SYNDROME\_FRAGMENT\_3\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_3   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-347. ELM\_SYNDROME\_FRAGMENT\_3\_7 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                     |
|-------|------------|--------|---------|-------------------------------------------------|
| 31-0  | SYNDROME_3 | R/W    | 0h      | Syndrome bits 96 to 127, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.61 ELM\_SYNDROME\_FRAGMENT\_4\_7 Register (offset = 5D0h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_4\_7 is shown in Figure 7-316 and described in Table 7-348.

## Figure 7-316. ELM\_SYNDROME\_FRAGMENT\_4\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_4   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-348. ELM\_SYNDROME\_FRAGMENT\_4\_7 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_4 | R/W    | 0h      | Syndrome bits 128 to 159, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.62 ELM\_SYNDROME\_FRAGMENT\_5\_7 Register (offset = 5D4h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_5\_7 is shown in Figure 7-317 and described in Table 7-349.

## Figure 7-317. ELM\_SYNDROME\_FRAGMENT\_5\_7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNDROME_5   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-349. ELM\_SYNDROME\_FRAGMENT\_5\_7 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                      |
|-------|------------|--------|---------|--------------------------------------------------|
| 31-0  | SYNDROME_5 | R/W    | 0h      | Syndrome bits 160 to 191, value 0 to FFFF FFFFh. |

<!-- image -->

## 7.4.5.63 ELM\_SYNDROME\_FRAGMENT\_6\_7 Register (offset = 5D8h) [reset = 0h]

ELM\_SYNDROME\_FRAGMENT\_6\_7 is shown in Figure 7-318 and described in Table 7-350.

Figure 7-318. ELM\_SYNDROME\_FRAGMENT\_6\_7 Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24              |
|------------|------------|------------|------------|------------|------------|------------|-----------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED        |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h            |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16              |
|            |            |            | RESERVED   |            |            |            | SYNDROME_V ALID |
|            |            |            | R-0h       |            |            |            | R/W-0h          |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0               |
| SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6 | SYNDROME_6      |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-350. ELM\_SYNDROME\_FRAGMENT\_6\_7 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                 |
|-------|----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-17 | RESERVED       | R      | 0h      |                                                                                                                             |
| 16    | SYNDROME_VALID | R/W    | 0h      | Syndrome valid bit. 0h = This syndrome polynomial should not be processed. 1h = This syndrome polynomial must be processed. |
| 15-0  | SYNDROME_6     | R/W    | 0h      | Syndrome bits 192 to 207, value 0 to FFFFh.                                                                                 |

<!-- image -->

## 7.4.5.64 ELM\_LOCATION\_STATUS\_0 Register (offset = 800h) [reset = 0h]

ELM\_LOCATION\_STATUS\_0 is shown in Figure 7-319 and described in Table 7-351.

## Figure 7-319. ELM\_LOCATION\_STATUS\_0 Register

| 31       | 30       | 29                     | 28                     | 27       | 26       | 25       | 24       |
|----------|----------|------------------------|------------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED               | RESERVED               | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22                     | 22                     | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h                | 18                     | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13                     | 13                     | 13       | 13       | 13       | 13       |
| 12       | 12       | 12                     | 12                     | 12       | 12       | 12       | 12       |
| 11       | 10       | 9                      | 8 ECC_CORREC TABL R-0h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5                      | 5                      | 5        | 5        | 5        | 4        |
| 3        | 3        | 3                      | 3                      | 3        | 3        | 3        | 2        |
| 1        | 0        | RESERVED ECC_NB_ERRORS |                        |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-351. ELM\_LOCATION\_STATUS\_0 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 8     | ECC_CORRECTABL | R      | 0h      | Error-location process exit status. 0h = ECC error-location process failed. Number of errors and error locations are invalid. 1h = All errors were successfully located. Number of errors and error locations are valid. |
| 7-5   | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 4-0   | ECC_NB_ERRORS  | R      | 0h      | Number of errors detected and located, value 0 to 1Fh.                                                                                                                                                                   |

<!-- image -->

## 7.4.5.65 ELM\_ERROR\_LOCATION\_0\_0 Register (offset = 880h) [reset = 0h]

ELM\_ERROR\_LOCATION\_0\_0 is shown in Figure 7-320 and described in Table 7-352.

## Figure 7-320. ELM\_ERROR\_LOCATION\_0\_0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-352. ELM\_ERROR\_LOCATION\_0\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.66 ELM\_ERROR\_LOCATION\_1\_0 Register (offset = 884h) [reset = 0h]

ELM\_ERROR\_LOCATION\_1\_0 is shown in Figure 7-321 and described in Table 7-353.

## Figure 7-321. ELM\_ERROR\_LOCATION\_1\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-353. ELM\_ERROR\_LOCATION\_1\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.67 ELM\_ERROR\_LOCATION\_2\_0 Register (offset = 888h) [reset = 0h]

ELM\_ERROR\_LOCATION\_2\_0 is shown in Figure 7-322 and described in Table 7-354.

## Figure 7-322. ELM\_ERROR\_LOCATION\_2\_0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-354. ELM\_ERROR\_LOCATION\_2\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.68 ELM\_ERROR\_LOCATION\_3\_0 Register (offset = 88Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_3\_0 is shown in Figure 7-323 and described in Table 7-355.

## Figure 7-323. ELM\_ERROR\_LOCATION\_3\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-355. ELM\_ERROR\_LOCATION\_3\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.69 ELM\_ERROR\_LOCATION\_4\_0 Register (offset = 890h) [reset = 0h]

ELM\_ERROR\_LOCATION\_4\_0 is shown in Figure 7-324 and described in Table 7-356.

## Figure 7-324. ELM\_ERROR\_LOCATION\_4\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-356. ELM\_ERROR\_LOCATION\_4\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.70 ELM\_ERROR\_LOCATION\_5\_0 Register (offset = 894h) [reset = 0h]

ELM\_ERROR\_LOCATION\_5\_0 is shown in Figure 7-325 and described in Table 7-357.

## Figure 7-325. ELM\_ERROR\_LOCATION\_5\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-357. ELM\_ERROR\_LOCATION\_5\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.71 ELM\_ERROR\_LOCATION\_6\_0 Register (offset = 898h) [reset = 0h]

ELM\_ERROR\_LOCATION\_6\_0 is shown in Figure 7-326 and described in Table 7-358.

## Figure 7-326. ELM\_ERROR\_LOCATION\_6\_0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-358. ELM\_ERROR\_LOCATION\_6\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.72 ELM\_ERROR\_LOCATION\_7\_0 Register (offset = 89Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_7\_0 is shown in Figure 7-327 and described in Table 7-359.

## Figure 7-327. ELM\_ERROR\_LOCATION\_7\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-359. ELM\_ERROR\_LOCATION\_7\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.73 ELM\_ERROR\_LOCATION\_8\_0 Register (offset = 8A0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_8\_0 is shown in Figure 7-328 and described in Table 7-360.

## Figure 7-328. ELM\_ERROR\_LOCATION\_8\_0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-360. ELM\_ERROR\_LOCATION\_8\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.74 ELM\_ERROR\_LOCATION\_9\_0 Register (offset = 8A4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_9\_0 is shown in Figure 7-329 and described in Table 7-361.

## Figure 7-329. ELM\_ERROR\_LOCATION\_9\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-361. ELM\_ERROR\_LOCATION\_9\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.75 ELM\_ERROR\_LOCATION\_10\_0 Register (offset = 8A8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_10\_0 is shown in Figure 7-330 and described in Table 7-362.

## Figure 7-330. ELM\_ERROR\_LOCATION\_10\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-362. ELM\_ERROR\_LOCATION\_10\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.76 ELM\_ERROR\_LOCATION\_11\_0 Register (offset = 8ACh) [reset = 0h]

ELM\_ERROR\_LOCATION\_11\_0 is shown in Figure 7-331 and described in Table 7-363.

## Figure 7-331. ELM\_ERROR\_LOCATION\_11\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-363. ELM\_ERROR\_LOCATION\_11\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.77 ELM\_ERROR\_LOCATION\_12\_0 Register (offset = 8B0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_12\_0 is shown in Figure 7-332 and described in Table 7-364.

## Figure 7-332. ELM\_ERROR\_LOCATION\_12\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-364. ELM\_ERROR\_LOCATION\_12\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.78 ELM\_ERROR\_LOCATION\_13\_0 Register (offset = 8B4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_13\_0 is shown in Figure 7-333 and described in Table 7-365.

## Figure 7-333. ELM\_ERROR\_LOCATION\_13\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-365. ELM\_ERROR\_LOCATION\_13\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.79 ELM\_ERROR\_LOCATION\_14\_0 Register (offset = 8B8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_14\_0 is shown in Figure 7-334 and described in Table 7-366.

## Figure 7-334. ELM\_ERROR\_LOCATION\_14\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-366. ELM\_ERROR\_LOCATION\_14\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.80 ELM\_ERROR\_LOCATION\_15\_0 Register (offset = 8BCh) [reset = 0h]

ELM\_ERROR\_LOCATION\_15\_0 is shown in Figure 7-335 and described in Table 7-367.

## Figure 7-335. ELM\_ERROR\_LOCATION\_15\_0 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-367. ELM\_ERROR\_LOCATION\_15\_0 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.81 ELM\_LOCATION\_STATUS\_1 Register (offset = 900h) [reset = 0h]

ELM\_LOCATION\_STATUS\_1 is shown in Figure 7-336 and described in Table 7-368.

## Figure 7-336. ELM\_LOCATION\_STATUS\_1 Register

| 31       | 30       | 29                     | 28                     | 27       | 26       | 25       | 24       |
|----------|----------|------------------------|------------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED               | RESERVED               | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22                     | 22                     | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h                | 18                     | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13                     | 13                     | 13       | 13       | 13       | 13       |
| 12       | 12       | 12                     | 12                     | 12       | 12       | 12       | 12       |
| 11       | 10       | 9                      | 8 ECC_CORREC TABL R-0h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5                      | 5                      | 5        | 5        | 5        | 4        |
| 3        | 3        | 3                      | 3                      | 3        | 3        | 3        | 2        |
| 1        | 0        | RESERVED ECC_NB_ERRORS |                        |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-368. ELM\_LOCATION\_STATUS\_1 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 8     | ECC_CORRECTABL | R      | 0h      | Error-location process exit status. 0h = ECC error-location process failed. Number of errors and error locations are invalid. 1h = All errors were successfully located. Number of errors and error locations are valid. |
| 7-5   | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 4-0   | ECC_NB_ERRORS  | R      | 0h      | Number of errors detected and located, value 0 to 1Fh.                                                                                                                                                                   |

<!-- image -->

## 7.4.5.82 ELM\_ERROR\_LOCATION\_0\_1 Register (offset = 980h) [reset = 0h]

ELM\_ERROR\_LOCATION\_0\_1 is shown in Figure 7-337 and described in Table 7-369.

## Figure 7-337. ELM\_ERROR\_LOCATION\_0\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-369. ELM\_ERROR\_LOCATION\_0\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.83 ELM\_ERROR\_LOCATION\_1\_1 Register (offset = 984h) [reset = 0h]

ELM\_ERROR\_LOCATION\_1\_1 is shown in Figure 7-338 and described in Table 7-370.

## Figure 7-338. ELM\_ERROR\_LOCATION\_1\_1 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-370. ELM\_ERROR\_LOCATION\_1\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.84 ELM\_ERROR\_LOCATION\_2\_1 Register (offset = 988h) [reset = 0h]

ELM\_ERROR\_LOCATION\_2\_1 is shown in Figure 7-339 and described in Table 7-371.

## Figure 7-339. ELM\_ERROR\_LOCATION\_2\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-371. ELM\_ERROR\_LOCATION\_2\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.85 ELM\_ERROR\_LOCATION\_3\_1 Register (offset = 98Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_3\_1 is shown in Figure 7-340 and described in Table 7-372.

## Figure 7-340. ELM\_ERROR\_LOCATION\_3\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-372. ELM\_ERROR\_LOCATION\_3\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.86 ELM\_ERROR\_LOCATION\_4\_1 Register (offset = 990h) [reset = 0h]

ELM\_ERROR\_LOCATION\_4\_1 is shown in Figure 7-341 and described in Table 7-373.

## Figure 7-341. ELM\_ERROR\_LOCATION\_4\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-373. ELM\_ERROR\_LOCATION\_4\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.87 ELM\_ERROR\_LOCATION\_5\_1 Register (offset = 994h) [reset = 0h]

ELM\_ERROR\_LOCATION\_5\_1 is shown in Figure 7-342 and described in Table 7-374.

## Figure 7-342. ELM\_ERROR\_LOCATION\_5\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-374. ELM\_ERROR\_LOCATION\_5\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.88 ELM\_ERROR\_LOCATION\_6\_1 Register (offset = 998h) [reset = 0h]

ELM\_ERROR\_LOCATION\_6\_1 is shown in Figure 7-343 and described in Table 7-375.

## Figure 7-343. ELM\_ERROR\_LOCATION\_6\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-375. ELM\_ERROR\_LOCATION\_6\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.89 ELM\_ERROR\_LOCATION\_7\_1 Register (offset = 99Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_7\_1 is shown in Figure 7-344 and described in Table 7-376.

## Figure 7-344. ELM\_ERROR\_LOCATION\_7\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-376. ELM\_ERROR\_LOCATION\_7\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.90 ELM\_ERROR\_LOCATION\_8\_1 Register (offset = 9A0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_8\_1 is shown in Figure 7-345 and described in Table 7-377.

## Figure 7-345. ELM\_ERROR\_LOCATION\_8\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-377. ELM\_ERROR\_LOCATION\_8\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.91 ELM\_ERROR\_LOCATION\_9\_1 Register (offset = 9A4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_9\_1 is shown in Figure 7-346 and described in Table 7-378.

## Figure 7-346. ELM\_ERROR\_LOCATION\_9\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-378. ELM\_ERROR\_LOCATION\_9\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.92 ELM\_ERROR\_LOCATION\_10\_1 Register (offset = 9A8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_10\_1 is shown in Figure 7-347 and described in Table 7-379.

## Figure 7-347. ELM\_ERROR\_LOCATION\_10\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-379. ELM\_ERROR\_LOCATION\_10\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.93 ELM\_ERROR\_LOCATION\_11\_1 Register (offset = 9ACh) [reset = 0h]

ELM\_ERROR\_LOCATION\_11\_1 is shown in Figure 7-348 and described in Table 7-380.

## Figure 7-348. ELM\_ERROR\_LOCATION\_11\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-380. ELM\_ERROR\_LOCATION\_11\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.94 ELM\_ERROR\_LOCATION\_12\_1 Register (offset = 9B0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_12\_1 is shown in Figure 7-349 and described in Table 7-381.

## Figure 7-349. ELM\_ERROR\_LOCATION\_12\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-381. ELM\_ERROR\_LOCATION\_12\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.95 ELM\_ERROR\_LOCATION\_13\_1 Register (offset = 9B4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_13\_1 is shown in Figure 7-350 and described in Table 7-382.

## Figure 7-350. ELM\_ERROR\_LOCATION\_13\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-382. ELM\_ERROR\_LOCATION\_13\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.96 ELM\_ERROR\_LOCATION\_14\_1 Register (offset = 9B8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_14\_1 is shown in Figure 7-351 and described in Table 7-383.

## Figure 7-351. ELM\_ERROR\_LOCATION\_14\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-383. ELM\_ERROR\_LOCATION\_14\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.97 ELM\_ERROR\_LOCATION\_15\_1 Register (offset = 9BCh) [reset = 0h]

ELM\_ERROR\_LOCATION\_15\_1 is shown in Figure 7-352 and described in Table 7-384.

## Figure 7-352. ELM\_ERROR\_LOCATION\_15\_1 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-384. ELM\_ERROR\_LOCATION\_15\_1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.98 ELM\_LOCATION\_STATUS\_2 Register (offset = A00h) [reset = 0h]

ELM\_LOCATION\_STATUS\_2 is shown in Figure 7-353 and described in Table 7-385.

## Figure 7-353. ELM\_LOCATION\_STATUS\_2 Register

| 31       | 30       | 29                     | 28                     | 27       | 26       | 25       | 24       |
|----------|----------|------------------------|------------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED               | RESERVED               | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22                     | 22                     | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h                | 18                     | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13                     | 13                     | 13       | 13       | 13       | 13       |
| 12       | 12       | 12                     | 12                     | 12       | 12       | 12       | 12       |
| 11       | 10       | 9                      | 8 ECC_CORREC TABL R-0h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5                      | 5                      | 5        | 5        | 5        | 4        |
| 3        | 3        | 3                      | 3                      | 3        | 3        | 3        | 2        |
| 1        | 0        | RESERVED ECC_NB_ERRORS |                        |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-385. ELM\_LOCATION\_STATUS\_2 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 8     | ECC_CORRECTABL | R      | 0h      | Error-location process exit status. 0h = ECC error-location process failed. Number of errors and error locations are invalid. 1h = All errors were successfully located. Number of errors and error locations are valid. |
| 7-5   | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 4-0   | ECC_NB_ERRORS  | R      | 0h      | Number of errors detected and located, value 0 to 1Fh.                                                                                                                                                                   |

<!-- image -->

## 7.4.5.99 ELM\_ERROR\_LOCATION\_0\_2 Register (offset = A80h) [reset = 0h]

ELM\_ERROR\_LOCATION\_0\_2 is shown in Figure 7-354 and described in Table 7-386.

## Figure 7-354. ELM\_ERROR\_LOCATION\_0\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-386. ELM\_ERROR\_LOCATION\_0\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.100 ELM\_ERROR\_LOCATION\_1\_2 Register (offset = A84h) [reset = 0h]

ELM\_ERROR\_LOCATION\_1\_2 is shown in Figure 7-355 and described in Table 7-387.

## Figure 7-355. ELM\_ERROR\_LOCATION\_1\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-387. ELM\_ERROR\_LOCATION\_1\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.101 ELM\_ERROR\_LOCATION\_2\_2 Register (offset = A88h) [reset = 0h]

ELM\_ERROR\_LOCATION\_2\_2 is shown in Figure 7-356 and described in Table 7-388.

## Figure 7-356. ELM\_ERROR\_LOCATION\_2\_2 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-388. ELM\_ERROR\_LOCATION\_2\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.102 ELM\_ERROR\_LOCATION\_3\_2 Register (offset = A8Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_3\_2 is shown in Figure 7-357 and described in Table 7-389.

## Figure 7-357. ELM\_ERROR\_LOCATION\_3\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-389. ELM\_ERROR\_LOCATION\_3\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.103 ELM\_ERROR\_LOCATION\_4\_2 Register (offset = A90h) [reset = 0h]

ELM\_ERROR\_LOCATION\_4\_2 is shown in Figure 7-358 and described in Table 7-390.

## Figure 7-358. ELM\_ERROR\_LOCATION\_4\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-390. ELM\_ERROR\_LOCATION\_4\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.104 ELM\_ERROR\_LOCATION\_5\_2 Register (offset = A94h) [reset = 0h]

ELM\_ERROR\_LOCATION\_5\_2 is shown in Figure 7-359 and described in Table 7-391.

## Figure 7-359. ELM\_ERROR\_LOCATION\_5\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-391. ELM\_ERROR\_LOCATION\_5\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.105 ELM\_ERROR\_LOCATION\_6\_2 Register (offset = A98h) [reset = 0h]

ELM\_ERROR\_LOCATION\_6\_2 is shown in Figure 7-360 and described in Table 7-392.

## Figure 7-360. ELM\_ERROR\_LOCATION\_6\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-392. ELM\_ERROR\_LOCATION\_6\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.106 ELM\_ERROR\_LOCATION\_7\_2 Register (offset = A9Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_7\_2 is shown in Figure 7-361 and described in Table 7-393.

## Figure 7-361. ELM\_ERROR\_LOCATION\_7\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-393. ELM\_ERROR\_LOCATION\_7\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.107 ELM\_ERROR\_LOCATION\_8\_2 Register (offset = AA0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_8\_2 is shown in Figure 7-362 and described in Table 7-394.

## Figure 7-362. ELM\_ERROR\_LOCATION\_8\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-394. ELM\_ERROR\_LOCATION\_8\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.108 ELM\_ERROR\_LOCATION\_9\_2 Register (offset = AA4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_9\_2 is shown in Figure 7-363 and described in Table 7-395.

## Figure 7-363. ELM\_ERROR\_LOCATION\_9\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-395. ELM\_ERROR\_LOCATION\_9\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.109 ELM\_ERROR\_LOCATION\_10\_2 Register (offset = AA8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_10\_2 is shown in Figure 7-364 and described in Table 7-396.

## Figure 7-364. ELM\_ERROR\_LOCATION\_10\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-396. ELM\_ERROR\_LOCATION\_10\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.110 ELM\_ERROR\_LOCATION\_11\_2 Register (offset = AACh) [reset = 0h]

ELM\_ERROR\_LOCATION\_11\_2 is shown in Figure 7-365 and described in Table 7-397.

## Figure 7-365. ELM\_ERROR\_LOCATION\_11\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-397. ELM\_ERROR\_LOCATION\_11\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.111 ELM\_ERROR\_LOCATION\_12\_2 Register (offset = AB0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_12\_2 is shown in Figure 7-366 and described in Table 7-398.

## Figure 7-366. ELM\_ERROR\_LOCATION\_12\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-398. ELM\_ERROR\_LOCATION\_12\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.112 ELM\_ERROR\_LOCATION\_13\_2 Register (offset = AB4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_13\_2 is shown in Figure 7-367 and described in Table 7-399.

## Figure 7-367. ELM\_ERROR\_LOCATION\_13\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-399. ELM\_ERROR\_LOCATION\_13\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.113 ELM\_ERROR\_LOCATION\_14\_2 Register (offset = AB8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_14\_2 is shown in Figure 7-368 and described in Table 7-400.

## Figure 7-368. ELM\_ERROR\_LOCATION\_14\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-400. ELM\_ERROR\_LOCATION\_14\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.114 ELM\_ERROR\_LOCATION\_15\_2 Register (offset = ABCh) [reset = 0h]

ELM\_ERROR\_LOCATION\_15\_2 is shown in Figure 7-369 and described in Table 7-401.

## Figure 7-369. ELM\_ERROR\_LOCATION\_15\_2 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-401. ELM\_ERROR\_LOCATION\_15\_2 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.115 ELM\_ERROR\_LOCATION\_0\_3 Register (offset = B80h) [reset = 0h]

ELM\_ERROR\_LOCATION\_0\_3 is shown in Figure 7-370 and described in Table 7-402.

## Figure 7-370. ELM\_ERROR\_LOCATION\_0\_3 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-402. ELM\_ERROR\_LOCATION\_0\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.116 ELM\_ERROR\_LOCATION\_1\_3 Register (offset = B84h) [reset = 0h]

ELM\_ERROR\_LOCATION\_1\_3 is shown in Figure 7-371 and described in Table 7-403.

## Figure 7-371. ELM\_ERROR\_LOCATION\_1\_3 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-403. ELM\_ERROR\_LOCATION\_1\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.117 ELM\_ERROR\_LOCATION\_2\_3 Register (offset = B88h) [reset = 0h]

ELM\_ERROR\_LOCATION\_2\_3 is shown in Figure 7-372 and described in Table 7-404.

## Figure 7-372. ELM\_ERROR\_LOCATION\_2\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-404. ELM\_ERROR\_LOCATION\_2\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.118 ELM\_ERROR\_LOCATION\_3\_3 Register (offset = B8Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_3\_3 is shown in Figure 7-373 and described in Table 7-405.

## Figure 7-373. ELM\_ERROR\_LOCATION\_3\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-405. ELM\_ERROR\_LOCATION\_3\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.119 ELM\_ERROR\_LOCATION\_4\_3 Register (offset = B90h) [reset = 0h]

ELM\_ERROR\_LOCATION\_4\_3 is shown in Figure 7-374 and described in Table 7-406.

## Figure 7-374. ELM\_ERROR\_LOCATION\_4\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-406. ELM\_ERROR\_LOCATION\_4\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.120 ELM\_ERROR\_LOCATION\_5\_3 Register (offset = B94h) [reset = 0h]

ELM\_ERROR\_LOCATION\_5\_3 is shown in Figure 7-375 and described in Table 7-407.

## Figure 7-375. ELM\_ERROR\_LOCATION\_5\_3 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-407. ELM\_ERROR\_LOCATION\_5\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.121 ELM\_ERROR\_LOCATION\_6\_3 Register (offset = B98h) [reset = 0h]

ELM\_ERROR\_LOCATION\_6\_3 is shown in Figure 7-376 and described in Table 7-408.

## Figure 7-376. ELM\_ERROR\_LOCATION\_6\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-408. ELM\_ERROR\_LOCATION\_6\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.122 ELM\_ERROR\_LOCATION\_7\_3 Register (offset = B9Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_7\_3 is shown in Figure 7-377 and described in Table 7-409.

## Figure 7-377. ELM\_ERROR\_LOCATION\_7\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-409. ELM\_ERROR\_LOCATION\_7\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.123 ELM\_ERROR\_LOCATION\_8\_3 Register (offset = BA0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_8\_3 is shown in Figure 7-378 and described in Table 7-410.

## Figure 7-378. ELM\_ERROR\_LOCATION\_8\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-410. ELM\_ERROR\_LOCATION\_8\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.124 ELM\_ERROR\_LOCATION\_9\_3 Register (offset = BA4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_9\_3 is shown in Figure 7-379 and described in Table 7-411.

## Figure 7-379. ELM\_ERROR\_LOCATION\_9\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-411. ELM\_ERROR\_LOCATION\_9\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.125 ELM\_ERROR\_LOCATION\_10\_3 Register (offset = BA8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_10\_3 is shown in Figure 7-380 and described in Table 7-412.

## Figure 7-380. ELM\_ERROR\_LOCATION\_10\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-412. ELM\_ERROR\_LOCATION\_10\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.126 ELM\_ERROR\_LOCATION\_11\_3 Register (offset = BACh) [reset = 0h]

ELM\_ERROR\_LOCATION\_11\_3 is shown in Figure 7-381 and described in Table 7-413.

## Figure 7-381. ELM\_ERROR\_LOCATION\_11\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-413. ELM\_ERROR\_LOCATION\_11\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.127 ELM\_ERROR\_LOCATION\_12\_3 Register (offset = BB0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_12\_3 is shown in Figure 7-382 and described in Table 7-414.

## Figure 7-382. ELM\_ERROR\_LOCATION\_12\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-414. ELM\_ERROR\_LOCATION\_12\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.128 ELM\_ERROR\_LOCATION\_13\_3 Register (offset = BB4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_13\_3 is shown in Figure 7-383 and described in Table 7-415.

## Figure 7-383. ELM\_ERROR\_LOCATION\_13\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-415. ELM\_ERROR\_LOCATION\_13\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.129 ELM\_ERROR\_LOCATION\_14\_3 Register (offset = BB8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_14\_3 is shown in Figure 7-384 and described in Table 7-416.

## Figure 7-384. ELM\_ERROR\_LOCATION\_14\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-416. ELM\_ERROR\_LOCATION\_14\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.130 ELM\_ERROR\_LOCATION\_15\_3 Register (offset = BBCh) [reset = 0h]

ELM\_ERROR\_LOCATION\_15\_3 is shown in Figure 7-385 and described in Table 7-417.

## Figure 7-385. ELM\_ERROR\_LOCATION\_15\_3 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-417. ELM\_ERROR\_LOCATION\_15\_3 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.131 ELM\_LOCATION\_STATUS\_3 Register (offset = B00h) [reset = 0h]

ELM\_LOCATION\_STATUS\_3 is shown in Figure 7-386 and described in Table 7-418.

## Figure 7-386. ELM\_LOCATION\_STATUS\_3 Register

| 31       | 30       | 29                     | 28                     | 27       | 26       | 25       | 24       |
|----------|----------|------------------------|------------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED               | RESERVED               | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22                     | 22                     | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h                | 18                     | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13                     | 13                     | 13       | 13       | 13       | 13       |
| 12       | 12       | 12                     | 12                     | 12       | 12       | 12       | 12       |
| 11       | 10       | 9                      | 8 ECC_CORREC TABL R-0h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5                      | 5                      | 5        | 5        | 5        | 4        |
| 3        | 3        | 3                      | 3                      | 3        | 3        | 3        | 2        |
| 1        | 0        | RESERVED ECC_NB_ERRORS |                        |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-418. ELM\_LOCATION\_STATUS\_3 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 8     | ECC_CORRECTABL | R      | 0h      | Error-location process exit status. 0h = ECC error-location process failed. Number of errors and error locations are invalid. 1h = All errors were successfully located. Number of errors and error locations are valid. |
| 7-5   | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 4-0   | ECC_NB_ERRORS  | R      | 0h      | Number of errors detected and located, value 0 to 1Fh.                                                                                                                                                                   |

<!-- image -->

## 7.4.5.132 ELM\_ERROR\_LOCATION\_0\_4 Register (offset = C80h) [reset = 0h]

ELM\_ERROR\_LOCATION\_0\_4 is shown in Figure 7-387 and described in Table 7-419.

## Figure 7-387. ELM\_ERROR\_LOCATION\_0\_4 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-419. ELM\_ERROR\_LOCATION\_0\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.133 ELM\_ERROR\_LOCATION\_1\_4 Register (offset = C84h) [reset = 0h]

ELM\_ERROR\_LOCATION\_1\_4 is shown in Figure 7-388 and described in Table 7-420.

## Figure 7-388. ELM\_ERROR\_LOCATION\_1\_4 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-420. ELM\_ERROR\_LOCATION\_1\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.134 ELM\_ERROR\_LOCATION\_2\_4 Register (offset = C88h) [reset = 0h]

ELM\_ERROR\_LOCATION\_2\_4 is shown in Figure 7-389 and described in Table 7-421.

## Figure 7-389. ELM\_ERROR\_LOCATION\_2\_4 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-421. ELM\_ERROR\_LOCATION\_2\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.135 ELM\_ERROR\_LOCATION\_3\_4 Register (offset = C8Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_3\_4 is shown in Figure 7-390 and described in Table 7-422.

## Figure 7-390. ELM\_ERROR\_LOCATION\_3\_4 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-422. ELM\_ERROR\_LOCATION\_3\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.136 ELM\_ERROR\_LOCATION\_4\_4 Register (offset = C90h) [reset = 0h]

ELM\_ERROR\_LOCATION\_4\_4 is shown in Figure 7-391 and described in Table 7-423.

## Figure 7-391. ELM\_ERROR\_LOCATION\_4\_4 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-423. ELM\_ERROR\_LOCATION\_4\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.137 ELM\_ERROR\_LOCATION\_5\_4 Register (offset = C94h) [reset = 0h]

ELM\_ERROR\_LOCATION\_5\_4 is shown in Figure 7-392 and described in Table 7-424.

## Figure 7-392. ELM\_ERROR\_LOCATION\_5\_4 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-424. ELM\_ERROR\_LOCATION\_5\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.138 ELM\_ERROR\_LOCATION\_6\_4 Register (offset = C98h) [reset = 0h]

ELM\_ERROR\_LOCATION\_6\_4 is shown in Figure 7-393 and described in Table 7-425.

## Figure 7-393. ELM\_ERROR\_LOCATION\_6\_4 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-425. ELM\_ERROR\_LOCATION\_6\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.139 ELM\_ERROR\_LOCATION\_7\_4 Register (offset = C9Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_7\_4 is shown in Figure 7-394 and described in Table 7-426.

## Figure 7-394. ELM\_ERROR\_LOCATION\_7\_4 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-426. ELM\_ERROR\_LOCATION\_7\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.140 ELM\_ERROR\_LOCATION\_8\_4 Register (offset = CA0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_8\_4 is shown in Figure 7-395 and described in Table 7-427.

## Figure 7-395. ELM\_ERROR\_LOCATION\_8\_4 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-427. ELM\_ERROR\_LOCATION\_8\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.141 ELM\_ERROR\_LOCATION\_9\_4 Register (offset = CA4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_9\_4 is shown in Figure 7-396 and described in Table 7-428.

## Figure 7-396. ELM\_ERROR\_LOCATION\_9\_4 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-428. ELM\_ERROR\_LOCATION\_9\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.142 ELM\_ERROR\_LOCATION\_10\_4 Register (offset = CA8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_10\_4 is shown in Figure 7-397 and described in Table 7-429.

## Figure 7-397. ELM\_ERROR\_LOCATION\_10\_4 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-429. ELM\_ERROR\_LOCATION\_10\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.143 ELM\_ERROR\_LOCATION\_11\_4 Register (offset = CACh) [reset = 0h]

ELM\_ERROR\_LOCATION\_11\_4 is shown in Figure 7-398 and described in Table 7-430.

## Figure 7-398. ELM\_ERROR\_LOCATION\_11\_4 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-430. ELM\_ERROR\_LOCATION\_11\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.144 ELM\_ERROR\_LOCATION\_12\_4 Register (offset = CB0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_12\_4 is shown in Figure 7-399 and described in Table 7-431.

## Figure 7-399. ELM\_ERROR\_LOCATION\_12\_4 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-431. ELM\_ERROR\_LOCATION\_12\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.145 ELM\_ERROR\_LOCATION\_13\_4 Register (offset = CB4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_13\_4 is shown in Figure 7-400 and described in Table 7-432.

## Figure 7-400. ELM\_ERROR\_LOCATION\_13\_4 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-432. ELM\_ERROR\_LOCATION\_13\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.146 ELM\_ERROR\_LOCATION\_14\_4 Register (offset = CB8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_14\_4 is shown in Figure 7-401 and described in Table 7-433.

## Figure 7-401. ELM\_ERROR\_LOCATION\_14\_4 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-433. ELM\_ERROR\_LOCATION\_14\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.147 ELM\_ERROR\_LOCATION\_15\_4 Register (offset = CBCh) [reset = 0h]

ELM\_ERROR\_LOCATION\_15\_4 is shown in Figure 7-402 and described in Table 7-434.

## Figure 7-402. ELM\_ERROR\_LOCATION\_15\_4 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-434. ELM\_ERROR\_LOCATION\_15\_4 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.148 ELM\_ERROR\_LOCATION\_0\_5 Register (offset = D80h) [reset = 0h]

ELM\_ERROR\_LOCATION\_0\_5 is shown in Figure 7-403 and described in Table 7-435.

## Figure 7-403. ELM\_ERROR\_LOCATION\_0\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-435. ELM\_ERROR\_LOCATION\_0\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.149 ELM\_ERROR\_LOCATION\_1\_5 Register (offset = D84h) [reset = 0h]

ELM\_ERROR\_LOCATION\_1\_5 is shown in Figure 7-404 and described in Table 7-436.

## Figure 7-404. ELM\_ERROR\_LOCATION\_1\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-436. ELM\_ERROR\_LOCATION\_1\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.150 ELM\_ERROR\_LOCATION\_2\_5 Register (offset = D88h) [reset = 0h]

ELM\_ERROR\_LOCATION\_2\_5 is shown in Figure 7-405 and described in Table 7-437.

## Figure 7-405. ELM\_ERROR\_LOCATION\_2\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-437. ELM\_ERROR\_LOCATION\_2\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.151 ELM\_ERROR\_LOCATION\_3\_5 Register (offset = D8Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_3\_5 is shown in Figure 7-406 and described in Table 7-438.

## Figure 7-406. ELM\_ERROR\_LOCATION\_3\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-438. ELM\_ERROR\_LOCATION\_3\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.152 ELM\_ERROR\_LOCATION\_4\_5 Register (offset = D90h) [reset = 0h]

ELM\_ERROR\_LOCATION\_4\_5 is shown in Figure 7-407 and described in Table 7-439.

## Figure 7-407. ELM\_ERROR\_LOCATION\_4\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-439. ELM\_ERROR\_LOCATION\_4\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.153 ELM\_ERROR\_LOCATION\_5\_5 Register (offset = D94h) [reset = 0h]

ELM\_ERROR\_LOCATION\_5\_5 is shown in Figure 7-408 and described in Table 7-440.

## Figure 7-408. ELM\_ERROR\_LOCATION\_5\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-440. ELM\_ERROR\_LOCATION\_5\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.154 ELM\_ERROR\_LOCATION\_6\_5 Register (offset = D98h) [reset = 0h]

ELM\_ERROR\_LOCATION\_6\_5 is shown in Figure 7-409 and described in Table 7-441.

## Figure 7-409. ELM\_ERROR\_LOCATION\_6\_5 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-441. ELM\_ERROR\_LOCATION\_6\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.155 ELM\_ERROR\_LOCATION\_7\_5 Register (offset = D9Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_7\_5 is shown in Figure 7-410 and described in Table 7-442.

## Figure 7-410. ELM\_ERROR\_LOCATION\_7\_5 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-442. ELM\_ERROR\_LOCATION\_7\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.156 ELM\_ERROR\_LOCATION\_8\_5 Register (offset = DA0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_8\_5 is shown in Figure 7-411 and described in Table 7-443.

## Figure 7-411. ELM\_ERROR\_LOCATION\_8\_5 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-443. ELM\_ERROR\_LOCATION\_8\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.157 ELM\_ERROR\_LOCATION\_9\_5 Register (offset = DA4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_9\_5 is shown in Figure 7-412 and described in Table 7-444.

## Figure 7-412. ELM\_ERROR\_LOCATION\_9\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-444. ELM\_ERROR\_LOCATION\_9\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.158 ELM\_ERROR\_LOCATION\_10\_5 Register (offset = DA8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_10\_5 is shown in Figure 7-413 and described in Table 7-445.

## Figure 7-413. ELM\_ERROR\_LOCATION\_10\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-445. ELM\_ERROR\_LOCATION\_10\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.159 ELM\_ERROR\_LOCATION\_11\_5 Register (offset = DACh) [reset = 0h]

ELM\_ERROR\_LOCATION\_11\_5 is shown in Figure 7-414 and described in Table 7-446.

## Figure 7-414. ELM\_ERROR\_LOCATION\_11\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-446. ELM\_ERROR\_LOCATION\_11\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.160 ELM\_ERROR\_LOCATION\_12\_5 Register (offset = DB0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_12\_5 is shown in Figure 7-415 and described in Table 7-447.

## Figure 7-415. ELM\_ERROR\_LOCATION\_12\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-447. ELM\_ERROR\_LOCATION\_12\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.161 ELM\_ERROR\_LOCATION\_13\_5 Register (offset = DB4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_13\_5 is shown in Figure 7-416 and described in Table 7-448.

## Figure 7-416. ELM\_ERROR\_LOCATION\_13\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-448. ELM\_ERROR\_LOCATION\_13\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.162 ELM\_ERROR\_LOCATION\_14\_5 Register (offset = DB8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_14\_5 is shown in Figure 7-417 and described in Table 7-449.

## Figure 7-417. ELM\_ERROR\_LOCATION\_14\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-449. ELM\_ERROR\_LOCATION\_14\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.163 ELM\_ERROR\_LOCATION\_15\_5 Register (offset = DBCh) [reset = 0h]

ELM\_ERROR\_LOCATION\_15\_5 is shown in Figure 7-418 and described in Table 7-450.

## Figure 7-418. ELM\_ERROR\_LOCATION\_15\_5 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-450. ELM\_ERROR\_LOCATION\_15\_5 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.164 ELM\_LOCATION\_STATUS\_4 Register (offset = C00h) [reset = 0h]

ELM\_LOCATION\_STATUS\_4 is shown in Figure 7-419 and described in Table 7-451.

## Figure 7-419. ELM\_LOCATION\_STATUS\_4 Register

| 31       | 30       | 29                     | 28                     | 27       | 26       | 25       | 24       |
|----------|----------|------------------------|------------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED               | RESERVED               | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22                     | 22                     | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h                | 18                     | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13                     | 13                     | 13       | 13       | 13       | 13       |
| 12       | 12       | 12                     | 12                     | 12       | 12       | 12       | 12       |
| 11       | 10       | 9                      | 8 ECC_CORREC TABL R-0h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5                      | 5                      | 5        | 5        | 5        | 4        |
| 3        | 3        | 3                      | 3                      | 3        | 3        | 3        | 2        |
| 1        | 0        | RESERVED ECC_NB_ERRORS |                        |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-451. ELM\_LOCATION\_STATUS\_4 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 8     | ECC_CORRECTABL | R      | 0h      | Error-location process exit status. 0h = ECC error-location process failed. Number of errors and error locations are invalid. 1h = All errors were successfully located. Number of errors and error locations are valid. |
| 7-5   | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 4-0   | ECC_NB_ERRORS  | R      | 0h      | Number of errors detected and located, value 0 to 1Fh.                                                                                                                                                                   |

<!-- image -->

## 7.4.5.165 ELM\_ERROR\_LOCATION\_0\_6 Register (offset = E80h) [reset = 0h]

ELM\_ERROR\_LOCATION\_0\_6 is shown in Figure 7-420 and described in Table 7-452.

## Figure 7-420. ELM\_ERROR\_LOCATION\_0\_6 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-452. ELM\_ERROR\_LOCATION\_0\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.166 ELM\_ERROR\_LOCATION\_1\_6 Register (offset = E84h) [reset = 0h]

ELM\_ERROR\_LOCATION\_1\_6 is shown in Figure 7-421 and described in Table 7-453.

## Figure 7-421. ELM\_ERROR\_LOCATION\_1\_6 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-453. ELM\_ERROR\_LOCATION\_1\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.167 ELM\_ERROR\_LOCATION\_2\_6 Register (offset = E88h) [reset = 0h]

ELM\_ERROR\_LOCATION\_2\_6 is shown in Figure 7-422 and described in Table 7-454.

## Figure 7-422. ELM\_ERROR\_LOCATION\_2\_6 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-454. ELM\_ERROR\_LOCATION\_2\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.168 ELM\_ERROR\_LOCATION\_3\_6 Register (offset = E8Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_3\_6 is shown in Figure 7-423 and described in Table 7-455.

## Figure 7-423. ELM\_ERROR\_LOCATION\_3\_6 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-455. ELM\_ERROR\_LOCATION\_3\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.169 ELM\_ERROR\_LOCATION\_4\_6 Register (offset = E90h) [reset = 0h]

ELM\_ERROR\_LOCATION\_4\_6 is shown in Figure 7-424 and described in Table 7-456.

## Figure 7-424. ELM\_ERROR\_LOCATION\_4\_6 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-456. ELM\_ERROR\_LOCATION\_4\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.170 ELM\_ERROR\_LOCATION\_5\_6 Register (offset = E94h) [reset = 0h]

ELM\_ERROR\_LOCATION\_5\_6 is shown in Figure 7-425 and described in Table 7-457.

## Figure 7-425. ELM\_ERROR\_LOCATION\_5\_6 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-457. ELM\_ERROR\_LOCATION\_5\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.171 ELM\_ERROR\_LOCATION\_6\_6 Register (offset = E98h) [reset = 0h]

ELM\_ERROR\_LOCATION\_6\_6 is shown in Figure 7-426 and described in Table 7-458.

## Figure 7-426. ELM\_ERROR\_LOCATION\_6\_6 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-458. ELM\_ERROR\_LOCATION\_6\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.172 ELM\_ERROR\_LOCATION\_7\_6 Register (offset = E9Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_7\_6 is shown in Figure 7-427 and described in Table 7-459.

## Figure 7-427. ELM\_ERROR\_LOCATION\_7\_6 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-459. ELM\_ERROR\_LOCATION\_7\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.173 ELM\_ERROR\_LOCATION\_8\_6 Register (offset = EA0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_8\_6 is shown in Figure 7-428 and described in Table 7-460.

## Figure 7-428. ELM\_ERROR\_LOCATION\_8\_6 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-460. ELM\_ERROR\_LOCATION\_8\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.174 ELM\_ERROR\_LOCATION\_9\_6 Register (offset = EA4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_9\_6 is shown in Figure 7-429 and described in Table 7-461.

## Figure 7-429. ELM\_ERROR\_LOCATION\_9\_6 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-461. ELM\_ERROR\_LOCATION\_9\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.175 ELM\_ERROR\_LOCATION\_10\_6 Register (offset = EA8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_10\_6 is shown in Figure 7-430 and described in Table 7-462.

## Figure 7-430. ELM\_ERROR\_LOCATION\_10\_6 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-462. ELM\_ERROR\_LOCATION\_10\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.176 ELM\_ERROR\_LOCATION\_11\_6 Register (offset = EACh) [reset = 0h]

ELM\_ERROR\_LOCATION\_11\_6 is shown in Figure 7-431 and described in Table 7-463.

## Figure 7-431. ELM\_ERROR\_LOCATION\_11\_6 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-463. ELM\_ERROR\_LOCATION\_11\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.177 ELM\_ERROR\_LOCATION\_12\_6 Register (offset = EB0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_12\_6 is shown in Figure 7-432 and described in Table 7-464.

## Figure 7-432. ELM\_ERROR\_LOCATION\_12\_6 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-464. ELM\_ERROR\_LOCATION\_12\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.178 ELM\_ERROR\_LOCATION\_13\_6 Register (offset = EB4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_13\_6 is shown in Figure 7-433 and described in Table 7-465.

## Figure 7-433. ELM\_ERROR\_LOCATION\_13\_6 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-465. ELM\_ERROR\_LOCATION\_13\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.179 ELM\_ERROR\_LOCATION\_14\_6 Register (offset = EB8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_14\_6 is shown in Figure 7-434 and described in Table 7-466.

## Figure 7-434. ELM\_ERROR\_LOCATION\_14\_6 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-466. ELM\_ERROR\_LOCATION\_14\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.180 ELM\_ERROR\_LOCATION\_15\_6 Register (offset = EBCh) [reset = 0h]

ELM\_ERROR\_LOCATION\_15\_6 is shown in Figure 7-435 and described in Table 7-467.

## Figure 7-435. ELM\_ERROR\_LOCATION\_15\_6 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-467. ELM\_ERROR\_LOCATION\_15\_6 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.181 ELM\_ERROR\_LOCATION\_0\_7 Register (offset = F80h) [reset = 0h]

ELM\_ERROR\_LOCATION\_0\_7 is shown in Figure 7-436 and described in Table 7-468.

## Figure 7-436. ELM\_ERROR\_LOCATION\_0\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-468. ELM\_ERROR\_LOCATION\_0\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.182 ELM\_ERROR\_LOCATION\_1\_7 Register (offset = F84h) [reset = 0h]

ELM\_ERROR\_LOCATION\_1\_7 is shown in Figure 7-437 and described in Table 7-469.

## Figure 7-437. ELM\_ERROR\_LOCATION\_1\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-469. ELM\_ERROR\_LOCATION\_1\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.183 ELM\_ERROR\_LOCATION\_2\_7 Register (offset = F88h) [reset = 0h]

ELM\_ERROR\_LOCATION\_2\_7 is shown in Figure 7-438 and described in Table 7-470.

## Figure 7-438. ELM\_ERROR\_LOCATION\_2\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-470. ELM\_ERROR\_LOCATION\_2\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.184 ELM\_ERROR\_LOCATION\_3\_7 Register (offset = F8Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_3\_7 is shown in Figure 7-439 and described in Table 7-471.

## Figure 7-439. ELM\_ERROR\_LOCATION\_3\_7 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-471. ELM\_ERROR\_LOCATION\_3\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.185 ELM\_ERROR\_LOCATION\_4\_7 Register (offset = F90h) [reset = 0h]

ELM\_ERROR\_LOCATION\_4\_7 is shown in Figure 7-440 and described in Table 7-472.

## Figure 7-440. ELM\_ERROR\_LOCATION\_4\_7 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-472. ELM\_ERROR\_LOCATION\_4\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.186 ELM\_ERROR\_LOCATION\_5\_7 Register (offset = F94h) [reset = 0h]

ELM\_ERROR\_LOCATION\_5\_7 is shown in Figure 7-441 and described in Table 7-473.

## Figure 7-441. ELM\_ERROR\_LOCATION\_5\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-473. ELM\_ERROR\_LOCATION\_5\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.187 ELM\_ERROR\_LOCATION\_6\_7 Register (offset = F98h) [reset = 0h]

ELM\_ERROR\_LOCATION\_6\_7 is shown in Figure 7-442 and described in Table 7-474.

## Figure 7-442. ELM\_ERROR\_LOCATION\_6\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-474. ELM\_ERROR\_LOCATION\_6\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.188 ELM\_ERROR\_LOCATION\_7\_7 Register (offset = F9Ch) [reset = 0h]

ELM\_ERROR\_LOCATION\_7\_7 is shown in Figure 7-443 and described in Table 7-475.

## Figure 7-443. ELM\_ERROR\_LOCATION\_7\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-475. ELM\_ERROR\_LOCATION\_7\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.189 ELM\_ERROR\_LOCATION\_8\_7 Register (offset = FA0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_8\_7 is shown in Figure 7-444 and described in Table 7-476.

## Figure 7-444. ELM\_ERROR\_LOCATION\_8\_7 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-476. ELM\_ERROR\_LOCATION\_8\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.190 ELM\_ERROR\_LOCATION\_9\_7 Register (offset = FA4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_9\_7 is shown in Figure 7-445 and described in Table 7-477.

## Figure 7-445. ELM\_ERROR\_LOCATION\_9\_7 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |          |          |          |
| R-0h     | R-0h     | R-0h     |          |          |          |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-477. ELM\_ERROR\_LOCATION\_9\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.191 ELM\_ERROR\_LOCATION\_10\_7 Register (offset = FA8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_10\_7 is shown in Figure 7-446 and described in Table 7-478.

## Figure 7-446. ELM\_ERROR\_LOCATION\_10\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-478. ELM\_ERROR\_LOCATION\_10\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.192 ELM\_ERROR\_LOCATION\_11\_7 Register (offset = FACh) [reset = 0h]

ELM\_ERROR\_LOCATION\_11\_7 is shown in Figure 7-447 and described in Table 7-479.

## Figure 7-447. ELM\_ERROR\_LOCATION\_11\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-479. ELM\_ERROR\_LOCATION\_11\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.193 ELM\_ERROR\_LOCATION\_12\_7 Register (offset = FB0h) [reset = 0h]

ELM\_ERROR\_LOCATION\_12\_7 is shown in Figure 7-448 and described in Table 7-480.

## Figure 7-448. ELM\_ERROR\_LOCATION\_12\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-480. ELM\_ERROR\_LOCATION\_12\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.194 ELM\_ERROR\_LOCATION\_13\_7 Register (offset = FB4h) [reset = 0h]

ELM\_ERROR\_LOCATION\_13\_7 is shown in Figure 7-449 and described in Table 7-481.

## Figure 7-449. ELM\_ERROR\_LOCATION\_13\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-481. ELM\_ERROR\_LOCATION\_13\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.195 ELM\_ERROR\_LOCATION\_14\_7 Register (offset = FB8h) [reset = 0h]

ELM\_ERROR\_LOCATION\_14\_7 is shown in Figure 7-450 and described in Table 7-482.

## Figure 7-450. ELM\_ERROR\_LOCATION\_14\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-482. ELM\_ERROR\_LOCATION\_14\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.196 ELM\_ERROR\_LOCATION\_15\_7 Register (offset = FBCh) [reset = 0h]

ELM\_ERROR\_LOCATION\_15\_7 is shown in Figure 7-451 and described in Table 7-483.

## Figure 7-451. ELM\_ERROR\_LOCATION\_15\_7 Register

| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          | 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        | R-0h                        |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           | 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION | RESERVED ECC_ERROR_LOCATION |
| R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   | R-0h R-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-483. ELM\_ERROR\_LOCATION\_15\_7 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                             |
|-------|---------------------|--------|---------|-----------------------------------------|
| 31-13 | RESERVED            | R      | 0h      |                                         |
| 12-0  | ECC_ERROR_LOCATIO N | R      | 0h      | Error-location bit address, 0 to 1FFFh. |

<!-- image -->

## 7.4.5.197 ELM\_LOCATION\_STATUS\_5 Register (offset = D00h) [reset = 0h]

ELM\_LOCATION\_STATUS\_5 is shown in Figure 7-452 and described in Table 7-484.

## Figure 7-452. ELM\_LOCATION\_STATUS\_5 Register

| 31       | 30       | 29                     | 28                     | 27       | 26       | 25       | 24       |
|----------|----------|------------------------|------------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED               | RESERVED               | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22                     | 22                     | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h                | 18                     | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13                     | 13                     | 13       | 13       | 13       | 13       |
| 12       | 12       | 12                     | 12                     | 12       | 12       | 12       | 12       |
| 11       | 10       | 9                      | 8 ECC_CORREC TABL R-0h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5                      | 5                      | 5        | 5        | 5        | 4        |
| 3        | 3        | 3                      | 3                      | 3        | 3        | 3        | 2        |
| 1        | 0        | RESERVED ECC_NB_ERRORS |                        |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-484. ELM\_LOCATION\_STATUS\_5 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 8     | ECC_CORRECTABL | R      | 0h      | Error-location process exit status. 0h = ECC error-location process failed. Number of errors and error locations are invalid. 1h = All errors were successfully located. Number of errors and error locations are valid. |
| 7-5   | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 4-0   | ECC_NB_ERRORS  | R      | 0h      | Number of errors detected and located, value 0 to 1Fh.                                                                                                                                                                   |

<!-- image -->

## 7.4.5.198 ELM\_LOCATION\_STATUS\_6 Register (offset = E00h) [reset = 0h]

ELM\_LOCATION\_STATUS\_6 is shown in Figure 7-453 and described in Table 7-485.

## Figure 7-453. ELM\_LOCATION\_STATUS\_6 Register

| 31       | 30       | 29                     | 28                     | 27       | 26       | 25       | 24       |
|----------|----------|------------------------|------------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED               | RESERVED               | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22                     | 22                     | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h                | 18                     | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13                     | 13                     | 13       | 13       | 13       | 13       |
| 12       | 12       | 12                     | 12                     | 12       | 12       | 12       | 12       |
| 11       | 10       | 9                      | 8 ECC_CORREC TABL R-0h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5                      | 5                      | 5        | 5        | 5        | 4        |
| 3        | 3        | 3                      | 3                      | 3        | 3        | 3        | 2        |
| 1        | 0        | RESERVED ECC_NB_ERRORS |                        |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-485. ELM\_LOCATION\_STATUS\_6 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 8     | ECC_CORRECTABL | R      | 0h      | Error-location process exit status. 0h = ECC error-location process failed. Number of errors and error locations are invalid. 1h = All errors were successfully located. Number of errors and error locations are valid. |
| 7-5   | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 4-0   | ECC_NB_ERRORS  | R      | 0h      | Number of errors detected and located, value 0 to 1Fh.                                                                                                                                                                   |

<!-- image -->

## 7.4.5.199 ELM\_LOCATION\_STATUS\_7 Register (offset = F00h) [reset = 0h]

ELM\_LOCATION\_STATUS\_7 is shown in Figure 7-454 and described in Table 7-486.

## Figure 7-454. ELM\_LOCATION\_STATUS\_7 Register

| 31       | 30       | 29                     | 28                     | 27       | 26       | 25       | 24       |
|----------|----------|------------------------|------------------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED               | RESERVED               | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22                     | 22                     | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h                | 18                     | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13                     | 13                     | 13       | 13       | 13       | 13       |
| 12       | 12       | 12                     | 12                     | 12       | 12       | 12       | 12       |
| 11       | 10       | 9                      | 8 ECC_CORREC TABL R-0h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5                      | 5                      | 5        | 5        | 5        | 4        |
| 3        | 3        | 3                      | 3                      | 3        | 3        | 3        | 2        |
| 1        | 0        | RESERVED ECC_NB_ERRORS |                        |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 7-486. ELM\_LOCATION\_STATUS\_7 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 8     | ECC_CORRECTABL | R      | 0h      | Error-location process exit status. 0h = ECC error-location process failed. Number of errors and error locations are invalid. 1h = All errors were successfully located. Number of errors and error locations are valid. |
| 7-5   | RESERVED       | R      | 0h      |                                                                                                                                                                                                                          |
| 4-0   | ECC_NB_ERRORS  | R      | 0h      | Number of errors detected and located, value 0 to 1Fh.                                                                                                                                                                   |