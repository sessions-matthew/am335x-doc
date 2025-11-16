## 4.5.1.9 CTPPR1 Register (offset = 2Ch) [reset = 0h]

CTPPR1 is shown in Figure 4-64 and described in Table 4-49.

CONSTANT TABLE PROGRAMMABLE POINTER REGISTER 1. This register functions the same as the PRU Constant Table Programmable Pointer Register 0 but allows the PRU to control entries 30 and 31 in the PRU Constant Table. This register is formatted as follows:

## Figure 4-64. CTPPR1 Register

| 31 30       | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|-------------|---------------------------------------------------------------------------------|
| C31_POINTER | C30_POINTER                                                                     |
| R/W-0h      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-49. CTPPR1 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                   |
|-------|-------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | C31_POINTER | R/W    | 0h      | PRU Constant Entry 31 Pointer: This field sets the value that will appear in bits 23:8 of entry 31 in the PRU Constant Table. |
| 15-0  | C30_POINTER | R/W    | 0h      | PRU Constant Entry 30 Pointer: This field sets the value that will appear in bits 23:8 of entry 30 in the PRU Constant Table. |

## 4.5.2 PRU\_ICSS\_PRU\_DEBUG Registers

Table 4-50 lists the memory-mapped registers for the PRU\_ICSS\_PRU\_DEBUG. All register offset addresses not listed in Table 4-50 should be considered as reserved locations and the register contents should not be modified.

Table 4-50. PRU\_ICSS\_PRU\_DEBUG Registers

| Offset   | Acronym   | Register Name   | Section          |
|----------|-----------|-----------------|------------------|
| 0h       | GPREG0    |                 | Section 4.5.2.1  |
| 4h       | GPREG1    |                 | Section 4.5.2.2  |
| 8h       | GPREG2    |                 | Section 4.5.2.3  |
| Ch       | GPREG3    |                 | Section 4.5.2.4  |
| 10h      | GPREG4    |                 | Section 4.5.2.5  |
| 14h      | GPREG5    |                 | Section 4.5.2.6  |
| 18h      | GPREG6    |                 | Section 4.5.2.7  |
| 1Ch      | GPREG7    |                 | Section 4.5.2.8  |
| 20h      | GPREG8    |                 | Section 4.5.2.9  |
| 24h      | GPREG9    |                 | Section 4.5.2.10 |
| 28h      | GPREG10   |                 | Section 4.5.2.11 |
| 2Ch      | GPREG11   |                 | Section 4.5.2.12 |
| 30h      | GPREG12   |                 | Section 4.5.2.13 |
| 34h      | GPREG13   |                 | Section 4.5.2.14 |
| 38h      | GPREG14   |                 | Section 4.5.2.15 |
| 3Ch      | GPREG15   |                 | Section 4.5.2.16 |
| 40h      | GPREG16   |                 | Section 4.5.2.17 |
| 44h      | GPREG17   |                 | Section 4.5.2.18 |
| 48h      | GPREG18   |                 | Section 4.5.2.19 |
| 4Ch      | GPREG19   |                 | Section 4.5.2.20 |
| 50h      | GPREG20   |                 | Section 4.5.2.21 |
| 54h      | GPREG21   |                 | Section 4.5.2.22 |
| 58h      | GPREG22   |                 | Section 4.5.2.23 |

<!-- image -->

<!-- image -->

www.ti.com

## Table 4-50. PRU\_ICSS\_PRU\_DEBUG Registers (continued)

| Offset   | Acronym   | Section          |
|----------|-----------|------------------|
| 5Ch      | GPREG23   | Section 4.5.2.24 |
| 60h      | GPREG24   | Section 4.5.2.25 |
| 64h      | GPREG25   | Section 4.5.2.26 |
| 68h      | GPREG26   | Section 4.5.2.27 |
| 6Ch      | GPREG27   | Section 4.5.2.28 |
| 70h      | GPREG28   | Section 4.5.2.29 |
| 74h      | GPREG29   | Section 4.5.2.30 |
| 78h      | GPREG30   | Section 4.5.2.31 |
| 7Ch      | GPREG31   | Section 4.5.2.32 |
| 80h      | CT_REG0   | Section 4.5.2.33 |
| 84h      | CT_REG1   | Section 4.5.2.34 |
| 88h      | CT_REG2   | Section 4.5.2.35 |
| 8Ch      | CT_REG3   | Section 4.5.2.36 |
| 90h      | CT_REG4   | Section 4.5.2.37 |
| 94h      | CT_REG5   | Section 4.5.2.38 |
| 98h      | CT_REG6   | Section 4.5.2.39 |
| 9Ch      | CT_REG7   | Section 4.5.2.40 |
| A0h      | CT_REG8   | Section 4.5.2.41 |
| A4h      | CT_REG9   | Section 4.5.2.42 |
| A8h      | CT_REG10  | Section 4.5.2.43 |
| ACh      | CT_REG11  | Section 4.5.2.44 |
| B0h      | CT_REG12  | Section 4.5.2.45 |
| B8h      | CT_REG14  | Section 4.5.2.47 |
| BCh      | CT_REG15  | Section 4.5.2.48 |
| C4h      | CT_REG17  |                  |
|          |           | Section 4.5.2.50 |
| C8h      | CT_REG18  | Section 4.5.2.51 |
| CCh      | CT_REG19  | Section 4.5.2.52 |
| D0h      | CT_REG20  | Section 4.5.2.53 |
| D4h      | CT_REG21  | Section 4.5.2.54 |
| D8h      | CT_REG22  | Section 4.5.2.55 |
| DCh      | CT_REG23  | Section 4.5.2.56 |
| E0h      | CT_REG24  | Section 4.5.2.57 |
| E4h      | CT_REG25  | Section 4.5.2.58 |
| E8h      | CT_REG26  | Section 4.5.2.59 |
| ECh      | CT_REG27  | Section 4.5.2.60 |
| F0h      | CT_REG28  | Section 4.5.2.61 |
| F4h      | CT_REG29  | Section 4.5.2.62 |
| F8h      | CT_REG30  | Section 4.5.2.63 |

## 4.5.2.1 GPREG0 Register (offset = 0h) [reset = 0h]

GPREG0 is shown in Figure 4-65 and described in Table 4-51.

DEBUG PRU GENERAL PURPOSE REGISTER 0. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-65. GPREG0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG0   |
|------|--------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-51. GPREG0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG0 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.2 GPREG1 Register (offset = 4h) [reset = 0h]

GPREG1 is shown in Figure 4-66 and described in Table 4-52.

DEBUG PRU GENERAL PURPOSE REGISTER 1. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-66. GPREG1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG1   |
|------|--------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-52. GPREG1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG1 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.3 GPREG2 Register (offset = 8h) [reset = 0h]

GPREG2 is shown in Figure 4-67 and described in Table 4-53.

DEBUG PRU GENERAL PURPOSE REGISTER 2. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-67. GPREG2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG2   |
|------|--------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-53. GPREG2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG2 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.4 GPREG3 Register (offset = Ch) [reset = 0h]

GPREG3 is shown in Figure 4-68 and described in Table 4-54.

DEBUG PRU GENERAL PURPOSE REGISTER 3. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-68. GPREG3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG3   |
|------|--------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-54. GPREG3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG3 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.5 GPREG4 Register (offset = 10h) [reset = 0h]

GPREG4 is shown in Figure 4-69 and described in Table 4-55.

DEBUG PRU GENERAL PURPOSE REGISTER 4. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-69. GPREG4 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG4   |
|------|--------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-55. GPREG4 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG4 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.6 GPREG5 Register (offset = 14h) [reset = 0h]

GPREG5 is shown in Figure 4-70 and described in Table 4-56.

DEBUG PRU GENERAL PURPOSE REGISTER 5. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-70. GPREG5 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG5   |
|------|--------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-56. GPREG5 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG5 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.7 GPREG6 Register (offset = 18h) [reset = 0h]

GPREG6 is shown in Figure 4-71 and described in Table 4-57.

DEBUG PRU GENERAL PURPOSE REGISTER 6. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-71. GPREG6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG6   |
|------|--------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-57. GPREG6 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG6 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.8 GPREG7 Register (offset = 1Ch) [reset = 0h]

GPREG7 is shown in Figure 4-72 and described in Table 4-58.

DEBUG PRU GENERAL PURPOSE REGISTER 7. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-72. GPREG7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG7   |
|------|--------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-58. GPREG7 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG7 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.9 GPREG8 Register (offset = 20h) [reset = 0h]

GPREG8 is shown in Figure 4-73 and described in Table 4-59.

DEBUG PRU GENERAL PURPOSE REGISTER 8. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-73. GPREG8 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG8   |
|------|--------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-59. GPREG8 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG8 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.10 GPREG9 Register (offset = 24h) [reset = 0h]

GPREG9 is shown in Figure 4-74 and described in Table 4-60.

DEBUG PRU GENERAL PURPOSE REGISTER 9. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-74. GPREG9 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG9   |
|------|--------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-60. GPREG9 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG9 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.11 GPREG10 Register (offset = 28h) [reset = 0h]

GPREG10 is shown in Figure 4-75 and described in Table 4-61.

DEBUG PRU GENERAL PURPOSE REGISTER 10. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-75. GPREG10 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG10   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-61. GPREG10 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG10 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.12 GPREG11 Register (offset = 2Ch) [reset = 0h]

GPREG11 is shown in Figure 4-76 and described in Table 4-62.

DEBUG PRU GENERAL PURPOSE REGISTER 11. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-76. GPREG11 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG11   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-62. GPREG11 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG11 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.13 GPREG12 Register (offset = 30h) [reset = 0h]

GPREG12 is shown in Figure 4-77 and described in Table 4-63.

DEBUG PRU GENERAL PURPOSE REGISTER 12. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-77. GPREG12 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG12   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-63. GPREG12 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG12 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.14 GPREG13 Register (offset = 34h) [reset = 0h]

GPREG13 is shown in Figure 4-78 and described in Table 4-64.

DEBUG PRU GENERAL PURPOSE REGISTER 13. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-78. GPREG13 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG13   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-64. GPREG13 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG13 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.15 GPREG14 Register (offset = 38h) [reset = 0h]

GPREG14 is shown in Figure 4-79 and described in Table 4-65.

DEBUG PRU GENERAL PURPOSE REGISTER 14. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-79. GPREG14 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG14   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-65. GPREG14 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG14 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.16 GPREG15 Register (offset = 3Ch) [reset = 0h]

GPREG15 is shown in Figure 4-80 and described in Table 4-66.

DEBUG PRU GENERAL PURPOSE REGISTER 15. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-80. GPREG15 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG15   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-66. GPREG15 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG15 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.17 GPREG16 Register (offset = 40h) [reset = 0h]

GPREG16 is shown in Figure 4-81 and described in Table 4-67.

DEBUG PRU GENERAL PURPOSE REGISTER 16. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

Figure 4-81. GPREG16 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG16   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-67. GPREG16 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG16 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.18 GPREG17 Register (offset = 44h) [reset = 0h]

GPREG17 is shown in Figure 4-82 and described in Table 4-68.

DEBUG PRU GENERAL PURPOSE REGISTER 17. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-82. GPREG17 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG17   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-68. GPREG17 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG17 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.19 GPREG18 Register (offset = 48h) [reset = 0h]

GPREG18 is shown in Figure 4-83 and described in Table 4-69.

DEBUG PRU GENERAL PURPOSE REGISTER 18. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

Figure 4-83. GPREG18 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG18   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-69. GPREG18 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG18 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.20 GPREG19 Register (offset = 4Ch) [reset = 0h]

GPREG19 is shown in Figure 4-84 and described in Table 4-70.

DEBUG PRU GENERAL PURPOSE REGISTER 19. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-84. GPREG19 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG19   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-70. GPREG19 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG19 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.21 GPREG20 Register (offset = 50h) [reset = 0h]

GPREG20 is shown in Figure 4-85 and described in Table 4-71.

DEBUG PRU GENERAL PURPOSE REGISTER 20. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-85. GPREG20 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG20   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-71. GPREG20 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG20 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.22 GPREG21 Register (offset = 54h) [reset = 0h]

GPREG21 is shown in Figure 4-86 and described in Table 4-72.

DEBUG PRU GENERAL PURPOSE REGISTER 21. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-86. GPREG21 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG21   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-72. GPREG21 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG21 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.23 GPREG22 Register (offset = 58h) [reset = 0h]

GPREG22 is shown in Figure 4-87 and described in Table 4-73.

DEBUG PRU GENERAL PURPOSE REGISTER 22. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-87. GPREG22 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG22   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-73. GPREG22 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG22 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.24 GPREG23 Register (offset = 5Ch) [reset = 0h]

GPREG23 is shown in Figure 4-88 and described in Table 4-74.

DEBUG PRU GENERAL PURPOSE REGISTER 23. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-88. GPREG23 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG23   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-74. GPREG23 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG23 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.25 GPREG24 Register (offset = 60h) [reset = 0h]

GPREG24 is shown in Figure 4-89 and described in Table 4-75.

DEBUG PRU GENERAL PURPOSE REGISTER 24. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

Figure 4-89. GPREG24 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG24   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-75. GPREG24 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG24 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.26 GPREG25 Register (offset = 64h) [reset = 0h]

GPREG25 is shown in Figure 4-90 and described in Table 4-76.

DEBUG PRU GENERAL PURPOSE REGISTER 25. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-90. GPREG25 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG25   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-76. GPREG25 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG25 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.27 GPREG26 Register (offset = 68h) [reset = 0h]

GPREG26 is shown in Figure 4-91 and described in Table 4-77.

DEBUG PRU GENERAL PURPOSE REGISTER 26. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-91. GPREG26 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG26   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-77. GPREG26 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG26 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.28 GPREG27 Register (offset = 6Ch) [reset = 0h]

GPREG27 is shown in Figure 4-92 and described in Table 4-78.

DEBUG PRU GENERAL PURPOSE REGISTER 27. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-92. GPREG27 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG27   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-78. GPREG27 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG27 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.29 GPREG28 Register (offset = 70h) [reset = 0h]

GPREG28 is shown in Figure 4-93 and described in Table 4-79.

DEBUG PRU GENERAL PURPOSE REGISTER 28. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

Figure 4-93. GPREG28 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG28   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-79. GPREG28 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG28 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.30 GPREG29 Register (offset = 74h) [reset = 0h]

GPREG29 is shown in Figure 4-94 and described in Table 4-80.

DEBUG PRU GENERAL PURPOSE REGISTER 29. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-94. GPREG29 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG29   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-80. GPREG29 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG29 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

## 4.5.2.31 GPREG30 Register (offset = 78h) [reset = 0h]

GPREG30 is shown in Figure 4-95 and described in Table 4-81.

DEBUG PRU GENERAL PURPOSE REGISTER 30. This register allows an external agent to debug the PRU while it is disabled. Reading or writing to these registers will have the same effect as a read or write to these registers from an internal instruction in the PRU. For R30, this includes generation of the pulse outputs whenever the register is written.

## Figure 4-95. GPREG30 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 GP_REG30   |
|------|---------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-81. GPREG30 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | GP_REG30 | R/W    | 0h      | PRU Internal GP Register n: Reading / writing this field directly inspects/modifies the corresponding internal register in the PRU internal regfile. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.32 GPREG31 Register (offset = 7Ch) [reset = 0h]

GPREG31 is shown in Figure 4-96 and described in Table 4-82.

## Figure 4-96. GPREG31 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | GP_REG31                                                                           |
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-82. GPREG31 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-0  | GP_REG31 | R/W    | 0h      |               |

## 4.5.2.33 CT\_REG0 Register (offset = 80h) [reset = 20000h]

CT\_REG0 is shown in Figure 4-97 and described in Table 4-83.

DEBUG PRU CONSTANTS TABLE ENTRY 0. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-97. CT\_REG0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG0   |
|------|--------------------------------------------------------------------------------------------|
|      | R-20000h                                                                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-83. CT\_REG0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                             |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG0 | R      | 20000h  | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

## 4.5.2.34 CT\_REG1 Register (offset = 84h) [reset = 48040000h]

CT\_REG1 is shown in Figure 4-98 and described in Table 4-84.

DEBUG PRU CONSTANTS TABLE ENTRY 1. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-98. CT\_REG1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG1   |
|------|-----------------------------------------------------------------------------------------|
|      | R-48040000h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-84. CT\_REG1 Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description                                                                                                                             |
|-------|---------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG1 | R      | 48040000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.35 CT\_REG2 Register (offset = 88h) [reset = 4802A000h]

CT\_REG2 is shown in Figure 4-99 and described in Table 4-85.

DEBUG PRU CONSTANTS TABLE ENTRY 2. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-99. CT\_REG2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG2   |
|------|--------------------------------------------------------------------------------------------|
|      | R-4802A000h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-85. CT\_REG2 Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description                                                                                                                             |
|-------|---------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG2 | R      | 4802A000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

## 4.5.2.36 CT\_REG3 Register (offset = 8Ch) [reset = 30000h]

CT\_REG3 is shown in Figure 4-100 and described in Table 4-86.

DEBUG PRU CONSTANTS TABLE ENTRY 3. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-100. CT\_REG3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG3   |
|------|--------------------------------------------------------------------------------------------|
|      | R-30000h                                                                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-86. CT\_REG3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                             |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG3 | R      | 30000h  | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.37 CT\_REG4 Register (offset = 90h) [reset = 26000h]

CT\_REG4 is shown in Figure 4-101 and described in Table 4-87.

DEBUG PRU CONSTANTS TABLE ENTRY 4. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

Figure 4-101. CT\_REG4 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG4   |
|------|--------------------------------------------------------------------------------------------|
|      | R-26000h                                                                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-87. CT\_REG4 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                             |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG4 | R      | 26000h  | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.38 CT\_REG5 Register (offset = 94h) [reset = 48060000h]

CT\_REG5 is shown in Figure 4-102 and described in Table 4-88.

DEBUG PRU CONSTANTS TABLE ENTRY 5. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-102. CT\_REG5 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | CT_REG5                                                                            |
|      | R-48060000h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-88. CT\_REG5 Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description                                                                                                                             |
|-------|---------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG5 | R      | 48060000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.39 CT\_REG6 Register (offset = 98h) [reset = 48030000h]

CT\_REG6 is shown in Figure 4-103 and described in Table 4-89.

DEBUG PRU CONSTANTS TABLE ENTRY 6. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-103. CT\_REG6 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | CT_REG6                                                                            |
|      | R-48030000h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-89. CT\_REG6 Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description                                                                                                                             |
|-------|---------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG6 | R      | 48030000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.40 CT\_REG7 Register (offset = 9Ch) [reset = 28000h]

CT\_REG7 is shown in Figure 4-104 and described in Table 4-90.

DEBUG PRU CONSTANTS TABLE ENTRY 7. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-104. CT\_REG7 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG7   |
|------|--------------------------------------------------------------------------------------------|
|      | R-28000h                                                                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-90. CT\_REG7 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                             |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG7 | R      | 28000h  | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.41 CT\_REG8 Register (offset = A0h) [reset = 46000000h]

CT\_REG8 is shown in Figure 4-105 and described in Table 4-91.

DEBUG PRU CONSTANTS TABLE ENTRY 8. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-105. CT\_REG8 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG8   |
|------|--------------------------------------------------------------------------------------------|
|      | R-46000000h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-91. CT\_REG8 Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description                                                                                                                             |
|-------|---------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG8 | R      | 46000000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.42 CT\_REG9 Register (offset = A4h) [reset = 4A100000h]

CT\_REG9 is shown in Figure 4-106 and described in Table 4-92.

DEBUG PRU CONSTANTS TABLE ENTRY 9. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-106. CT\_REG9 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG9   |
|------|--------------------------------------------------------------------------------------------|
|      | R-4A100000h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-92. CT\_REG9 Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description                                                                                                                             |
|-------|---------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG9 | R      | 4A100000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.43 CT\_REG10 Register (offset = A8h) [reset = 48318000h]

CT\_REG10 is shown in Figure 4-107 and described in Table 4-93.

DEBUG PRU CONSTANTS TABLE ENTRY 10. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-107. CT\_REG10 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | CT_REG10                                                                           |
|      | R-48318000h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-93. CT\_REG10 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG10 | R      | 48318000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.44 CT\_REG11 Register (offset = ACh) [reset = 48022000h]

CT\_REG11 is shown in Figure 4-108 and described in Table 4-94.

DEBUG PRU CONSTANTS TABLE ENTRY 11. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-108. CT\_REG11 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | CT_REG11                                                                           |
|      | R-48022000h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-94. CT\_REG11 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG11 | R      | 48022000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.45 CT\_REG12 Register (offset = B0h) [reset = 48024000h]

CT\_REG12 is shown in Figure 4-109 and described in Table 4-95.

DEBUG PRU CONSTANTS TABLE ENTRY 12. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-109. CT\_REG12 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | CT_REG12                                                                           |
|      | R-48024000h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-95. CT\_REG12 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG12 | R      | 48024000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.46 CT\_REG13 Register (offset = B4h) [reset = 48310000h]

CT\_REG13 is shown in Figure 4-110 and described in Table 4-96.

DEBUG PRU CONSTANTS TABLE ENTRY 13. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-110. CT\_REG13 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | CT_REG13                                                                           |
|      | R-48310000h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-96. CT\_REG13 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG13 | R      | 48310000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.47 CT\_REG14 Register (offset = B8h) [reset = 481CC000h]

CT\_REG14 is shown in Figure 4-111 and described in Table 4-97.

DEBUG PRU CONSTANTS TABLE ENTRY 14. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-111. CT\_REG14 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG14   |
|------|---------------------------------------------------------------------------------------------|
|      | R-481CC000h                                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-97. CT\_REG14 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG14 | R      | 481CC000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

## 4.5.2.48 CT\_REG15 Register (offset = BCh) [reset = 481D0000h]

CT\_REG15 is shown in Figure 4-112 and described in Table 4-98.

DEBUG PRU CONSTANTS TABLE ENTRY 15. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-112. CT\_REG15 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG15   |
|------|------------------------------------------------------------------------------------------|
|      | R-481D0000h                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-98. CT\_REG15 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG15 | R      | 481D0000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.49 CT\_REG16 Register (offset = C0h) [reset = 481A0000h]

CT\_REG16 is shown in Figure 4-113 and described in Table 4-99.

DEBUG PRU CONSTANTS TABLE ENTRY 16. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-113. CT\_REG16 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | CT_REG16                                                                           |
|      | R-481A0000h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-99. CT\_REG16 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG16 | R      | 481A0000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.50 CT\_REG17 Register (offset = C4h) [reset = 4819C000h]

CT\_REG17 is shown in Figure 4-114 and described in Table 4-100.

DEBUG PRU CONSTANTS TABLE ENTRY 17. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-114. CT\_REG17 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG17   |
|------|------------------------------------------------------------------------------------------|
|      | R-4819C000h                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-100. CT\_REG17 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG17 | R      | 4819C000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.51 CT\_REG18 Register (offset = C8h) [reset = 48300000h]

CT\_REG18 is shown in Figure 4-115 and described in Table 4-101.

DEBUG PRU CONSTANTS TABLE ENTRY 18. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-115. CT\_REG18 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | CT_REG18                                                                           |
|      | R-48300000h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-101. CT\_REG18 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG18 | R      | 48300000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.52 CT\_REG19 Register (offset = CCh) [reset = 48302000h]

CT\_REG19 is shown in Figure 4-116 and described in Table 4-102.

DEBUG PRU CONSTANTS TABLE ENTRY 19. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-116. CT\_REG19 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG19   |
|------|------------------------------------------------------------------------------------------|
|      | R-48302000h                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-102. CT\_REG19 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG19 | R      | 48302000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.53 CT\_REG20 Register (offset = D0h) [reset = 48304000h]

CT\_REG20 is shown in Figure 4-117 and described in Table 4-103.

DEBUG PRU CONSTANTS TABLE ENTRY 20. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-117. CT\_REG20 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG20   |
|------|---------------------------------------------------------------------------------------------|
|      | R-48304000h                                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-103. CT\_REG20 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG20 | R      | 48304000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

## 4.5.2.54 CT\_REG21 Register (offset = D4h) [reset = 32400h]

CT\_REG21 is shown in Figure 4-118 and described in Table 4-104.

DEBUG PRU CONSTANTS TABLE ENTRY 21. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-118. CT\_REG21 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG21   |
|------|---------------------------------------------------------------------------------------------|
|      | R-32400h                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-104. CT\_REG21 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                             |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG21 | R      | 32400h  | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.55 CT\_REG22 Register (offset = D8h) [reset = 480C8000h]

CT\_REG22 is shown in Figure 4-119 and described in Table 4-105.

DEBUG PRU CONSTANTS TABLE ENTRY 22. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-119. CT\_REG22 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | CT_REG22                                                                           |
|      | R-480C8000h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-105. CT\_REG22 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG22 | R      | 480C8000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.56 CT\_REG23 Register (offset = DCh) [reset = 480CA000h]

CT\_REG23 is shown in Figure 4-120 and described in Table 4-106.

DEBUG PRU CONSTANTS TABLE ENTRY 23. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-120. CT\_REG23 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG23   |
|------|---------------------------------------------------------------------------------------------|
|      | R-480CA000h                                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-106. CT\_REG23 Register Field Descriptions

| Bit   | Field    | Type   | Reset     | Description                                                                                                                             |
|-------|----------|--------|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG23 | R      | 480CA000h | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. |

## 4.5.2.57 CT\_REG24 Register (offset = E0h) [reset = 0h]

CT\_REG24 is shown in Figure 4-121 and described in Table 4-107.

DEBUG PRU CONSTANTS TABLE ENTRY 24. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-121. CT\_REG24 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG24   |
|------|---------------------------------------------------------------------------------------------|
|      | R-0h                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-107. CT\_REG24 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG24 | R      | 0h      | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. This entry is partially programmable through the C24_BLK_INDEX in the PRU Control register. The reset value for this Constant Table Entry is 0x00000n00, n=C24_BLK_INDEX[3:0]. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.58 CT\_REG25 Register (offset = E4h) [reset = 0h]

CT\_REG25 is shown in Figure 4-122 and described in Table 4-108.

DEBUG PRU CONSTANTS TABLE ENTRY 25. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-122. CT\_REG25 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG25   |
|------|---------------------------------------------------------------------------------------------|
|      | R-0h                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-108. CT\_REG25 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG25 | R      | 0h      | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. This entry is partially programmable through the C25_BLK_INDEX in the PRU Control register. The reset value for this Constant Table Entry is 0x00002n00, n=C25_BLK_INDEX[3:0]. |

## 4.5.2.59 CT\_REG26 Register (offset = E8h) [reset = 0h]

CT\_REG26 is shown in Figure 4-123 and described in Table 4-109.

DEBUG PRU CONSTANTS TABLE ENTRY 26. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-123. CT\_REG26 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG26   |
|------|---------------------------------------------------------------------------------------------|
|      | R-0h                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-109. CT\_REG26 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG26 | R      | 0h      | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. This entry is partially programmable through the C26_BLK_INDEX in the PRU Control register. The reset value for this Constant Table Entry is 0x0002En00, n=C26_BLK_INDEX[3:0]. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.60 CT\_REG27 Register (offset = ECh) [reset = 0h]

CT\_REG27 is shown in Figure 4-124 and described in Table 4-110.

DEBUG PRU CONSTANTS TABLE ENTRY 27. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-124. CT\_REG27 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG27   |
|------|---------------------------------------------------------------------------------------------|
|      | R-0h                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-110. CT\_REG27 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG27 | R      | 0h      | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. This entry is partially programmable through the C27_BLK_INDEX in the PRU Control register. The reset value for this Constant Table Entry is 0x00032n00, n=C27_BLK_INDEX[3:0]. |

## 4.5.2.61 CT\_REG28 Register (offset = F0h) [reset = 0h]

CT\_REG28 is shown in Figure 4-125 and described in Table 4-111.

DEBUG PRU CONSTANTS TABLE ENTRY 28. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-125. CT\_REG28 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG28   |
|------|---------------------------------------------------------------------------------------------|
|      | R-0h                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-111. CT\_REG28 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG28 | R      | 0h      | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. This entry is partially programmable through the C28_POINTER in the PRU Control register. The reset value for this Constant Table Entry is 0x00nnnn00, nnnn=C28_POINTER[15:0]. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.2.62 CT\_REG29 Register (offset = F4h) [reset = 0h]

CT\_REG29 is shown in Figure 4-126 and described in Table 4-112.

DEBUG PRU CONSTANTS TABLE ENTRY 29. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-126. CT\_REG29 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG29   |
|------|---------------------------------------------------------------------------------------------|
|      | R-0h                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-112. CT\_REG29 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG29 | R      | 0h      | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. This entry is partially programmable through the C29_POINTER in the PRU Control register. The reset value for this Constant Table Entry is 0x49nnnn00, nnnn=C29_POINTER[15:0]. |

## 4.5.2.63 CT\_REG30 Register (offset = F8h) [reset = 0h]

CT\_REG30 is shown in Figure 4-127 and described in Table 4-113.

DEBUG PRU CONSTANTS TABLE ENTRY 30. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-127. CT\_REG30 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG30   |
|------|---------------------------------------------------------------------------------------------|
|      | R-0h                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-113. CT\_REG30 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG30 | R      | 0h      | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. This entry is partially programmable through the C30_POINTER in the PRU Control register. The reset value for this Constant Table Entry is 0x40nnnn00, nnnn=C30_POINTER[15:0]. |

<!-- image -->